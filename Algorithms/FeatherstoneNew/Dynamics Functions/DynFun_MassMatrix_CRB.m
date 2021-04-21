%Composite Rigid Body Algorithm for calculating the Joint-space inertia
%matrix 

function M = DynFun_MassMatrix_CRB(RobotParam,RobotFrame)
    M = RobotFrame.S'*RobotFrame.P_dual*RobotParam.i_DI_i*RobotFrame.P*RobotFrame.S;
end