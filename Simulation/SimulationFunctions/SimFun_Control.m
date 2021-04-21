
%% Control Functions
function [u,errInteg,xopt,rVRP,hd_des] = ...
                SimFun_Control(q,dq,DCM_des,dDCM_des,P,mTot,fc,errInteg,qlow_lim,qhigh_lim,ulim,RobotLinks,RobotParam,iiii)
    
    RobotFrame = DynFun_Frame_calc(RobotLinks,RobotParam,q);
    D = DynFun_MassMatrix_CRB(RobotParam,RobotFrame);
    H = DynFun_InverseDynamics(RobotLinks, RobotParam, RobotFrame,q,dq,[0 0 0]');
    [Acmm,h,IG,vG,Acmm_dot,Sys_h,i_V_i] = DynFun_Centroidal_Momentum_Matrix(RobotLinks,RobotParam,RobotFrame,q,dq);
    
    vCOM = h(4:6,1)/RobotParam.TotalMass;
    pCOM = RobotFrame.O_p_COM;
    zCOM = pCOM(3);
    nat_freq = sqrt(P.g/zCOM);
    DCM = pCOM + vCOM/nat_freq;
    
%     h = gen3_h(q,dq);
%     H = gen3_Cdq(q,dq) + gen3_G(q);
%     D = gen3_D(q);
    
    % DCM tracking
    kp = 60;
    kI = 0.1;
    err = DCM_des-DCM;
    errInteg = [err errInteg(:,1:end-1)];
    dnat_freq = -(sqrt(P.g)/2)* vCOM(3)*zCOM^(-1.5); %**** Correct?
    w2mdw = nat_freq^2 - dnat_freq;
%     w2mdw = (ddzCOM+params(2))/zCOM;
    rVRP = DCM - (1/w2mdw)*(dDCM_des + kp*err + kI*errInteg*ones(10,1));
    
    % momentum change
    bk = 1;
    hd_des = [-bk*h(1:3); mTot*(w2mdw)*(pCOM - rVRP)];%Should this be pCOM or DCM?
    
    %Contact Points
%     Pc = gen3_Pc(q);
%     Jc = gen3_Jc(q);
    c = P.c;
    Pc_ = RobotFrame.O_p_Pc;
    Jc_ = RobotFrame.Jc;
    Pc = zeros(P.n,c);
    Jc = zeros(P.n,P.n*c);
    for j = 1:c
        Pc(:,j) = Pc_(3*j-2:3*j,1);
%         Jc(:,3*j-2:3*j) = Jc_(3*j-2:3*j,:);
    end
%     Beta_c = gen2__e_Basis_c(fc,[0 0 1]');
    Beta_c = [fc -fc fc  -fc;
              fc fc  -fc -fc;
              1  1   1  1]/sqrt(fc*fc*2 + 1);
    c = c-1;
    
    
    n = length(q);
    n_jvar = 3;
    n_unact_var = n-n_jvar;
    m = 3;
    p = c*4; %number of GRF decision variables
    %Constraints: Ax<=b   
        %Range of motion
        T = 0.15;
        qlow = (qlow_lim -q - T*dq)*2/T^2;
        qhigh = (qhigh_lim -q - T*dq)*2/T^2;
        b_ineq_P1 = [qhigh; -qlow];
        A_ineq_P1 = [eye(n) zeros(n,p); -eye(n) zeros(n,p)];
        %Actuation
        S_1 = [zeros(m,n_unact_var) eye(m)];
        ulow = -ulim*ones(m,1);   uhigh = ulim*ones(m,1);
        b_ineq_P2 = [uhigh-S_1*H; -(ulow-S_1*H)];
        
        for i = 1:c
            A_1(:,(i*4-3):i*4) = Jc(:,((i-1)*n+1):i*n)'*Beta_c;
        end
        A_ineq_P2 = [S_1*D S_1*A_1; -S_1*D -S_1*A_1];
        %GRF - rho1 positive side of foot, rho2 negative
        A_ineq_P3 = [zeros(p,n) -eye(p)];
        b_ineq_P3 = zeros(p,1);
        A_ineq = [A_ineq_P1; A_ineq_P2; A_ineq_P3];
        b_ineq = [b_ineq_P1; b_ineq_P2; b_ineq_P3];
    %Equality: Aeq*x = beq 0
        %Centroid Feasibility
%         Acmm = gen3_Acmm(q);
%         Acmm_dot = gen3_Acmm_dot(q,dq);
        Wg = [0 0 0 0 0 -mTot*P.g]';
        Sfromw = @(w) [0 -w(3) w(2); w(3) 0 -w(1); -w(2) w(1) 0];
        for i = 1:c
            A_2(:,(i*4-3):i*4) = [Sfromw(pCOM-Pc(:,i))*Beta_c; Beta_c];
        end
        A_eq = [-Acmm A_2];
        b_eq = Acmm_dot*dq - Wg;
    
    %motion tasks
        b = hd_des;
        J = Acmm;
        J_dot = Acmm_dot;
        Jee = [J zeros(size(J,1),p)];
    %Optimization: x = [ddq,rho]' in R^[n+2]
    % min(x) V =  0.5*x'*H*x + f'*x   subject to:  A_ineq*x <= b_ineq, A_eq*x = b_eq 
    % x_opt = quadprog(H,f,A,b,Aeq,beq,lb,ub,x0)
        momentum_task_weights = [.1 .1 .1 1 1 1]*100;
        Q = diag([momentum_task_weights]); %weights on tracking tasks
        Hee = 2*Jee'*Q*Jee;
        lambda_qdd = .1;
        lambda_rho = .1;
        eff = [lambda_qdd*ones(n,1);lambda_rho*ones(p,1)]' -2*(b-J_dot*dq)'*Q*Jee;
    options = optimset('Display', 'off');
%     {'q', 'dq','pCOM','pO1','pO2','pO3','pO4'}
%     [q dq gen3_pCOM_Tot(q) gen3_pO(q)]
    [xopt,fval] = quadprog(Hee,eff',A_ineq,b_ineq,A_eq,b_eq,[],[],[],options);
    
%        minimize    0.5*x'Px + c'x
%        subject to  Ax = b
%                    Gx <= h
%     [xopt,basic_info,adv_info]  = qpSWIFT(sparse(Hee),eff',sparse(A_eq),b_eq,sparse(A_ineq),b_ineq);

% b_ineq-A_ineq*xopt
    if isempty(xopt)
       ddd=0; 
    end
    
    u = S_1*[D A_1]*xopt + S_1*H;
end
