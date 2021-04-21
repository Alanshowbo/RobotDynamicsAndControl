% /**
% * Computes the inverse dynamics of the system, calculating the resulting
% * torques on the system given the current motion.
% *
% * @return tau - resulting torques on the joints from the current motion
% * @param RobotLinks - Structure containing the details of the robot construction
% * @param RobotParam - Structure containing the robot parameters
% * @param q - Vector basis of joint motion space
% * @param dq - vector of joint velocities
% * @param ddq - vector of joint accelerations
% */

function tau = DynFun_InverseDynamics(RobotLinks,RobotParam,RobotFrame,q,dq,ddq)
    NB = RobotParam.NB;
    n = RobotParam.n;
    
    i_V_i = RobotFrame.Ji*dq;
    
    i_Vx_i = eye(6*NB);
    i_Vxdual_i = eye(6*NB);
    spots = @(i) [6*i-5:6*i];
    for i = 1:NB
        i_Vx_i(spots(i),spots(i)) = STfun_SpatialCross(i_V_i(spots(i),:));
%         i_Vxdual_i(spots(i),spots(i)) = STfun_SpatialCross_dual(i_V_i(spots(i),:));
    end 
    i_Vxdual_i = -i_Vx_i';
    O_a_O = [0 0 0 0 0 9.8]';
    %Note: The gravity term is positive here because it is a ficticious base
    %acceleration that represents the external force of gravity on the system.
    %In the EOM, H*ddq + Cdq + G = B*tau + fext, so when you move the fext of
    %gravity to the LHS then the sign should change
    i_A_i = RobotFrame.i_X_O*O_a_O + RobotFrame.P*(RobotFrame.S*ddq + i_Vx_i*RobotFrame.S*dq);
    i_F_i = RobotParam.i_DI_i*i_A_i + i_Vxdual_i*RobotParam.i_DI_i*i_V_i;
    tau = RobotFrame.S'*RobotFrame.P_dual*i_F_i;
    
    
    j_X_i = RobotFrame.i_X_pi(spots(3),:);
    i_X_j = inv(j_X_i);
    
end

