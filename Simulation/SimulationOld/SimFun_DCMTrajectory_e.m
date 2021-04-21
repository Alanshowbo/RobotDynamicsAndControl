
%% Define ZMP trajectory from current ZMP to end ZMP
function [rZMP,drZMP,ddrZMP,t_vec] = ZMPRefTrajGen(q,dq,ddq,params,ZMP_f,Tstep,disc_t)
    t_vec = 0-disc_t*2:disc_t:Tstep;
    p = polyfit([0*Tstep 0.25*Tstep 0.5*Tstep 0.75*Tstep 1*Tstep],[-0.09 0 0.09 0 -0.09],4);
    tv = [t_vec.^4; t_vec.^3; t_vec.^2; t_vec; 1+0*t_vec];
    rZMP = p*tv;
    drZMP = diff(rZMP)/disc_t;
    ddrZMP = diff(drZMP)/disc_t;
    drZMP = drZMP(2:end);
    rZMP = rZMP(3:end);
    t_vec = t_vec(3:end);
end

function [zCOM,dzCOM,ddzCOM,t_vec] = zCOMRefTrajGen(q,dq,params,Tstep,disc_t)
    %p(t) = zCOM
    t_vec = 0-disc_t*2:disc_t:Tstep;
    p = polyfit([0*Tstep 0.25*Tstep 0.5*Tstep 0.75*Tstep 1*Tstep],[0.4 0.35 0.4 0.45 0.4],4);
    tv = [t_vec.^4; t_vec.^3; t_vec.^2; t_vec; 1+0*t_vec];
    zCOM = p*tv;
    dzCOM = diff(zCOM)/disc_t;
    ddzCOM = diff(dzCOM)/disc_t;
    dzCOM = dzCOM(2:end);
    zCOM = zCOM(3:end);
    t_vec = t_vec(3:end);end


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
    for i = 1:length(rVRP_r(1,:))-1
        dDCM_r(:,i) = -((w2_r(i)-dw_r(i))/sqrt(w2_r(i)))*(DCM_r(:,i)-rVRP_r(:,i));
        DCM_r(:,i+1) = DCM_r(:,i) + dDCM_r(:,i)*disc_t; 
    end
    i=i+1;
    dDCM_r(:,i) = -((w2_r(i)-dw_r(i))/sqrt(w2_r(i)))*(DCM_r(:,i)-rVRP_r(:,i));
    DCM_des = flip(DCM_r,2);
    dDCM_des = -flip(dDCM_r,2);
end

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

function [DCM_des,dDCM_des,t_vec] = DCMRefTrajGen(q,dq,ddq,params,ZMP_f,Tstep,disc_t)
    %zCOM Trajectory
    [zCOM,dzCOM,ddzCOM,t_vec] = zCOMRefTrajGen(q,dq,params,Tstep,disc_t);
    %ZMP Trajectory
    [rZMP,drZMP,ddrZMP,t_vec] = ZMPRefTrajGen(q,dq,ddq,params,ZMP_f,Tstep,disc_t);
    %eCMP trajectory
    reCMP = [rZMP;rZMP*0];
    %alpha trajectory
    a2 = (params(2)+ddzCOM)./(zCOM-reCMP(2,:)); %possibly worng *******************************
    %w trajectory
    w_f = sqrt(a2(end));
    [w2,dw] = reverseInt_w2(a2,w_f,disc_t);
    w2_1 = (zCOM.^(-1))*params(2);
    %rVRP trajectory
    rVRP = reCMP + [0; params(2)]./(w2-dw);
    %real DCM
    Pts = gen_Points(q,params);
    dPts = gen_dPoints(q,dq,params);
    ddPts = gen_ddPoints(q,dq,ddq,params);
    w0 = sqrt(params(2)/Pts(2,3));
    DCM_o = Pts(:,3) - dPts(:,3)/w0;
    dDCM_o = dPts(:,3)*(1-dw(1)/w0^2) + ddPts(:,3)/w0;
    %DCM trajectory - reverse
    DCM_f = [rZMP(end);zCOM(end)];
    [DCM_des,dDCM_des] = reverseInt_DCM(rVRP,DCM_f,disc_t,w2,dw);
    %DCM trajectory - MPC
    MPC_N = 1/disc_t;
    
        figure(1); clf; hold on
    plot(DCM_des(1,:),DCM_des(2,:))
    plot(rZMP,zCOM)
    legend('DCM','zCOM-rZMP')
    
    DCM_des(:,1) = DCM_o;  dDCM_des(:,1) = dDCM_o;
    [DCM_des(:,2:MPC_N+1),dDCM_des(:,2:MPC_N+1)] = DCM_MPC(DCM_des(:,2:MPC_N+1),dDCM_des(:,2:MPC_N+1),sqrt(w2(:,1:MPC_N))...
                                ,dw(:,2:MPC_N+1),rVRP(:,2:MPC_N+1),DCM_o,dDCM_o,disc_t,MPC_N);
    
    
    figure(1); hold on
    plot(t_vec,w2)
    plot(t_vec,a2)
    legend('w2','a2')
    
    
    figure(1); clf; hold on
    plot(DCM_des(1,:),DCM_des(2,:))
    plot(rZMP,zCOM)
    legend('DCM','zCOM-rZMP')
end