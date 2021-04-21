function [Acmm,hG,IG,vG,Acmm_dot,Sys_h,i_V_i,Jc_dot] = DynFun_Centroidal_Momentum_Matrix(RobotLinks,RobotParam,RobotFrame,q,dq)
NB = RobotParam.NB;
    O_X_G = STconstructor_SpatialTransform(eye(3),-RobotFrame.O_p_COM);
    i_X_G = RobotFrame.i_X_O*O_X_G;
%     %Selection Matrix
%     Selection = [ones(6) zeros(6) zeros(6);
%                  zeros(6) ones(6) zeros(6);
%                  zeros(6) zeros(6) ones(6)];
%     i_Ic_i = (RobotFrame.P_dual*RobotParam.i_DI_i*RobotFrame.P).*Selection;
%     IG = O_X_G'*i_Ic_i(1:6,1:6)*O_X_G;
%     Acmm = (i_X_G)' * i_Ic_i*RobotFrame.S;
    Acmm = (i_X_G)' * RobotParam.i_DI_i*RobotFrame.Ji;
    hG1 = Acmm*dq;
    
    IG = i_X_G'*RobotParam.i_DI_i*i_X_G;
    vG = (IG)\hG1;
    
    %Calculate velocities for Acmm_dot
    i_V_G = i_X_G*vG;
    i_V_i = RobotFrame.Ji*dq;
    
    i_Vx_i = eye(6*NB);
    i_Vxdual_i = eye(6*NB);
    i_Vx_G = eye(6*NB);
    spots = @(i) [6*i-5:6*i];
    for i = 1:NB
        i_Vx_i(spots(i),spots(i)) = STfun_SpatialCross(i_V_i(spots(i),:));
        i_Vxdual_i(spots(i),spots(i)) = STfun_SpatialCross_dual(i_V_i(spots(i),:));
        i_Vx_G(spots(i),spots(i)) = STfun_SpatialCross(i_V_G(spots(i),:));
    end 
    
%     Acmm_dot = (i_Vx_G*i_X_G)'*RobotParam.i_DI_i*RobotFrame.Ji + ...
%                 (i_X_G)'*RobotParam.i_DI_i*RobotFrame.P*i_Vx_i*RobotFrame.S;
    Acmm_dot = (i_X_G)'*i_Vxdual_i*RobotParam.i_DI_i*RobotFrame.Ji + ...
                (i_X_G)'*RobotParam.i_DI_i*RobotFrame.P*i_Vx_i*RobotFrame.S;
    
    Sys_h = RobotParam.i_DI_i*i_V_i;
    hG = i_X_G'*Sys_h;
    
%     Jc_dot = 0;
%     Jc_dot = RobotFrame.ZIc*RobotFrame.O_DX_i*i_Vx_i*RobotFrame.i_DX_ci*RobotFrame.ZIc';

    i_Vcx_i = zeros(6*RobotParam.c,6*RobotParam.c);
    for c = 1:RobotParam.c
        ic = RobotParam.ic(c);
        spots_ic = [6*ic-5:6*ic];
        spots_c = [6*c-5:6*c];
        
        i_Vcx_i(spots_c,spots_c) = i_Vx_i(spots_ic,spots_ic);
    end
    Jc_dot = RobotFrame.ZIc*RobotFrame.O_DX_ci*( i_Vcx_i*RobotFrame.ci_DX_i*RobotFrame.P + RobotFrame.ci_DX_i*RobotFrame.P*i_Vx_i)*RobotFrame.S;
end