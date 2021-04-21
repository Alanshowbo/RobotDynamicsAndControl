
pCOM = zeros(3,size(q,2));
vCOM = zeros(3,size(q,2));
DCM = zeros(3,size(q,2));
O_p_iVEC = zeros(3*(RobotParam.NB+1),size(q,2));
O_p_PcVEC = zeros(3*RobotParam.c,size(q,2));

for ii = 1:round(1/(fps*Simulation_dt)):length(t_vec)-1
    RobotFrame = DynFun_Frame_calc(RobotLinks,RobotParam,q(:,ii));
    O_p_iVEC(:,ii) = [RobotFrame.O_p_i; RobotFrame.O_p_Pc(end-2:end,1)];
    O_p_PcVEC(:,ii) = RobotFrame.O_p_Pc;
    
    [Acmm,h,IG,vG,Acmm_dot,Sys_h,i_V_i] = DynFun_Centroidal_Momentum_Matrix(RobotLinks,RobotParam,RobotFrame,q(:,ii),dq(:,ii));
    vCOM(:,ii) = h(4:6,1)/RobotParam.TotalMass;
    pCOM(:,ii) = RobotFrame.O_p_COM;
    
    zCOM = pCOM(3,ii);
    nat_freq = sqrt(PARAMS.g/zCOM);
    DCM(:,ii) = pCOM(:,ii) + vCOM(:,ii)/nat_freq;
    dnat_freq = -(sqrt(PARAMS.g)/2)* vCOM(3,ii)*zCOM^(-1.5); %**** Correct?
    w2mdw = nat_freq^2 - dnat_freq;
%     reCMP(:,ii) = pCOM(:,ii) - sumGRF(:,ii)/(mTot*w2mdw);
%     gamma = zCOM/sumGRF(2,ii);
%     rCMP(:,ii) = pCOM(:,ii) - gamma*GRF(:,ii);
    
    Acmm = gen3_Acmm(q(:,ii));
    Acmm_dot = gen3_Acmm_dot(q(:,ii),dq(:,ii));
    dh = Acmm_dot*dq(:,ii) + Acmm*ddq(:,ii);
%     rZMP(:,ii) = rCMP(:,ii) - [dh(3)/(mTot*(params(2)+ddPoints(2,3))) 0]';
end
%save('SimTempWorkspace.mat')