% Function that takes in the current state of the Robot,the desired ending
% ZMP location (located on the ground underneath the final desired location
% for the COM) and some parameters. It calls functions to generate the zCOM
% and rZMP trajectories, then uses reverse integration and a MPC problem to
% generate a smooth reference DCM trajectory for the controller.

function [DCM_des,dDCM_des,t_vec] = DCMRefTrajGen(q,dq,ddq,P,ZMP_f,Tstep,disc_t,RobotLinks,RobotParam)
    %zCOM Trajectory
    [zCOM,dzCOM,ddzCOM,t_vec] = SimFun_zCOMRefTrajGen(Tstep,disc_t);
    %ZMP Trajectory
    [rZMP_x,drZMP_x,ddrZMP_x,rZMP_y,drZMP_y,ddrZMP_y,t_vec] = SimFun_ZMPRefTrajGen(q,dq,ddq,P,ZMP_f,Tstep,disc_t);
    %eCMP trajectory
    reCMP = [rZMP_x;rZMP_y;rZMP_x*0];
    %alpha trajectory
    a2 = (P.g+ddzCOM)./(zCOM-reCMP(3,:)); %possibly worng *******************************
    %w trajectory
    w_f = sqrt(a2(end));
    [w2,dw] = reverseInt_w2(a2,w_f,disc_t);
%     w2_1 = (zCOM.^(-1))*P.g;
    %rVRP trajectory - definition of rVRP
    rVRP = reCMP + [0; 0; P.g]./(w2-dw);
    
    %current DCM - This should be gone overz
    %current DCM - This should be gone overz
    RobotFrame = DynFun_Frame_calc(RobotLinks,RobotParam,q);
    [Acmm,h,IG,vG,Acmm_dot,Sys_h,i_V_i] = DynFun_Centroidal_Momentum_Matrix(RobotLinks,RobotParam,RobotFrame,q,dq);
    vCOM_o = h(4:6,1)/RobotParam.TotalMass;
    pCOM_o = RobotFrame.O_p_COM;
    
    zCOM_o = pCOM_o(3);
    w0 = sqrt(P.g/zCOM_o);
    DCM_o = pCOM_o + vCOM_o/w0;
    rVRP_o = rVRP(:,1);
    dDCM_o = (w0-dw(1)/w0)*(DCM_o - rVRP_o);
    %DCM trajectory - reverse
    DCM_f = [rZMP_x(end);rZMP_y(end);zCOM(end)];
    [DCM_des,dDCM_des] = reverseInt_DCM(rVRP,DCM_f,disc_t,w2,dw);
    %DCM trajectory - MPC
    MPC_N = 0.5/disc_t; %Just MPC for the first second
    DCM_des(:,1) = DCM_o;  
    dDCM_des(:,1) = dDCM_o;
    [DCM_des(:,2:MPC_N+1),dDCM_des(:,2:MPC_N+1)] = DCM_MPC(DCM_des(:,2:MPC_N+1),dDCM_des(:,2:MPC_N+1),sqrt(w2(:,1:MPC_N))...
                                ,dw(:,2:MPC_N+1),rVRP(:,2:MPC_N+1),DCM_o,dDCM_o,disc_t,MPC_N);
    %Plot ideal trajectory and DCM_des
    figure(1); clf; 
    hold on
    grid on
    plot3(DCM_des(1,:),DCM_des(2,:),DCM_des(3,:))
    plot3(rZMP_x,rZMP_y,zCOM)
    legend('DCM_des','ZMP and zCOM')
    xlabel('x'); ylabel('y'); zlabel('z'); 
    
    %Plot w2, a2
    figure(2); hold on
    plot(t_vec,w2)
    plot(t_vec,a2)
    legend('w2','a2')
end

% Utility Functions to reverse integrate signals
function [w2,dw] = reverseInt_w2(a2,w_f,disc_t)
    a2_r = flip(a2);
    wr(1) = w_f;
    for i = 1:length(a2_r)-1
        dwr(i) = (a2_r(i)-wr(i)^2);
        wr(i+1) = wr(i) + dwr(i)*disc_t; 
    end
    dwr(i+1) = (a2_r(i+1)-wr(i+1)^2);
    w2 = flip(wr).^2;
    dw = -flip(dwr);
end

function [DCM_des,dDCM_des] = reverseInt_DCM(rVRP,DCM_f,disc_t,w2,dw)
    w2_r = flip(w2);
    dw_r = flip(dw);
    rVRP_r = flip(rVRP,2);
    DCM_r(:,1) = DCM_f;
    for i = 1:size(rVRP_r,2)-1
        dDCM_r(:,i) = -((w2_r(i)-dw_r(i))/sqrt(w2_r(i)))*(DCM_r(:,i)-rVRP_r(:,i));
        DCM_r(:,i+1) = DCM_r(:,i) + dDCM_r(:,i)*disc_t; 
    end
    i=i+1;
    dDCM_r(:,i) = -((w2_r(i)-dw_r(i))/sqrt(w2_r(i)))*(DCM_r(:,i)-rVRP_r(:,i));
    DCM_des = flip(DCM_r,2);
    dDCM_des = -flip(dDCM_r,2);
end

%Perform the MPC calculations to make sure the current reference DCM
%trajectory begins at the current DCM
function [DCM_des,dDCM_des] = DCM_MPC(DCM_des,dDCM_des,w,dw,rVRP_des,DCM_o,dDCM_o,disc_t,N)
    n_dim = length(DCM_o); %number of dimensions in DCM
    A = [1 disc_t; 0 1];
    B = [0.5*disc_t^2; disc_t];
    C = @(i) [1 -w(i)/(w(i)^2 - dw(i))];
    
    n = 2; %num of states in difference eqn
    
    for i = 1:N
        PHI_DCM_o(i*n-1:i*n,:) = A^i;
        PHI_y_o(i,:) = C(i)*A^i;
    end
    PHI_DCM_u_col1 = [eye(n); PHI_DCM_o(1:end-n,:)]*B;
    for i = 1:N
        PHI_DCM_u(:,i) = [zeros((i-1)*n,1); PHI_DCM_u_col1(1:(end-n*(i-1)),:)];
        for j = 1:N
            PHI_y_u(j,i) = C(j)*PHI_DCM_u(j*n-1:j*n,i);
        end
    end
    
    Q = diag(ones(1,N)*100);  SQ = chol(Q);
    R = diag(ones(1,N)*0.1);  SR = chol(R);
    last_step_F = [1 0; 0 1]*1000000;
    F = diag(ones(1,n*N)*0);  
    F((n*(N-1)+1):n*N,(n*(N-1)+1):n*N) = last_step_F;  
    SF = sqrt(F);
    
    for ni = 1:n_dim
        DCM_naught = [DCM_o(ni); dDCM_o(ni)];
        for i = 1:N
            Vs_DCM(i*n-1:i*n,1) = [DCM_des(ni,i); dDCM_des(ni,i)];
            Vs_y(i,1) = rVRP_des(ni,i);
        end
        Asoln = [SQ*PHI_y_u; SR; SF*PHI_DCM_u];
        bsoln = [-SQ*(PHI_y_o*DCM_naught-Vs_y); zeros(N,1); -SF*(PHI_DCM_o*DCM_naught-Vs_DCM)];
        Vu(:,ni) = Asoln\bsoln;
        V_DCM(:,ni) = PHI_DCM_o*DCM_naught + PHI_DCM_u*Vu(:,ni);
    end
    DCM_des = V_DCM(1:n:end,:)';
    dDCM_des = V_DCM(2:n:end,:)';
end
