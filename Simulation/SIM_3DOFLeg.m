clear
clc
format compact
close all
warning('off', 'optim:quadprog:HessianNotSym')


%% Robot Model
[PARAMS, PARENTi, KINE, INER, CNCTPTS] = PendModel();
[RobotLinks, RobotParam] = PendRobot(PARAMS, PARENTi, KINE, INER, CNCTPTS);
n = RobotParam.n;
m = RobotParam.m;

%% Wrong RobotModel - What Controller Thinks
[PARAMS2, PARENTi2, KINE2, INER2, CNCTPTS2] = PendModel();
[RobotLinks2, RobotParam2] = PendRobot(PARAMS2, PARENTi2, KINE2, INER2, CNCTPTS2);

%% Initial Conditions
% q_ini = [0 -.350 .950]'; %Nice centered pose
% q_ini = [0 -.30 .320]';
dq_ini = [0 0 0]';
ddq_ini = [0 0 0]';

 q_ini = [0 -0.515 1.015]';
% dq_ini = [0.1 0 0]';
% q_ini = [0 -0.3 0.6]';
% dq_ini = [1 1 1]';
% ddq_ini = [1 1 1]';

%% Parameters
%simulation Patameters
Simulation_Hz = 10000;
time_Final = 10;
friction_coefficient = 0.7;
controllerHz = 100;

%Gain matrices


%constraints
MinJointPos = ( - 180) *(pi/180);
MaxJointPos = ( + 180) *(pi/180);
MaxTorque = 500;
TimeConstant = 0.15;

%% DCM reference Trajectory Planning
StepTime = 6;
Discretization_dt = 1/100;
ZMP_Final = 0.9;

%% Only Change things Above this Line
%% Simulation vectors
Simulation_dt = 1/Simulation_Hz;
t_vec = 0:Simulation_dt:time_Final;
q = zeros(n,length(t_vec));
dq = zeros(n,length(t_vec));
ddq = zeros(n,length(t_vec));
u =  zeros(m,length(t_vec));

q(:,1) = q_ini;
dq(:,1) = dq_ini;
ddq(:,1) = ddq_ini;

errInteg_DCM = zeros(3,10);
errInteg_Hip = zeros(3,10);
ddzCOM = 0;

%% DCM_des
DCM_des = [-0.03 0.0 0.25]';
dDCM_des = [0 0 0]';
[DCM_des,dDCM_des,ref_t_vec] = SimFun_DCMRefTrajGen(q(:,1),dq(:,1),ddq(:,1),PARAMS,ZMP_Final,StepTime/3,Discretization_dt,RobotLinks2,RobotParam2);
DCM_des = [DCM_des repmat(DCM_des(:,end),1,1/Discretization_dt) flip(DCM_des,2) repmat(DCM_des(:,1),1,1/Discretization_dt) DCM_des];
dDCM_des = [dDCM_des zeros(3,1/Discretization_dt) flip(dDCM_des,2) zeros(3,1/Discretization_dt) dDCM_des];
ref_t_vec = 0:Discretization_dt:(length(DCM_des)-1)*Discretization_dt;

[zHip,dzHip,ddzHip,Hip_t_vec] = SimFun_zCOMRefTrajGen(StepTime,Discretization_dt);
Hip_des = [0*Hip_t_vec-0.05; 0*Hip_t_vec; (zHip.*2)-0.1];
dHip_des = [0*Hip_t_vec; 0*Hip_t_vec; dzHip];



%% Simulation
%Set up controller Hz
%i = time step
%k = controller step
k = 0;
i_per_k = 1/(controllerHz*Simulation_dt);
Last_Controller_i = -i_per_k;
k_at_i = zeros(1,length(t_vec));
i_at_k = zeros(1,floor(length(t_vec)/i_per_k));
%Simulate - Euler
for i = 1:length(t_vec)-1
    %State Machine
    State = 'DS';
    
    %Dynamics Functions
    
%     M = DynFun_MassMatrix_CRB(RobotParam,RobotFrame);
%     H = DynFun_InverseDynamics(RobotLinks, RobotParam, RobotFrame,q(:,i),dq(:,i),[0 0 0]');
    
    %Enforce Controller Hz
    if (i-Last_Controller_i) >= i_per_k
        Last_Controller_i = i;
        k = k + 1;
    
    %Controller    
        HipCheck = 0;
        [minval,argval] = min(abs(ref_t_vec - t_vec(i)));
        [u(:,i),errInteg_DCM,xopt(:,k),rVRP(:,k),hd_des(:,k)] = ...
            SimFun_Control(q(:,i),dq(:,i),DCM_des(:,1),dDCM_des(:,argval)*0,PARAMS,...
            RobotParam2.TotalMass,friction_coefficient,errInteg_DCM,MinJointPos,MaxJointPos,MaxTorque,RobotLinks2,RobotParam2,i);
        
%         HipCheck = 1;
%         [minval,argval] = min(abs(Hip_t_vec - t_vec(i)));
%         [u(:,i),errInteg_DCM,errInteg_Hip,xopt(:,k),rVRP(:,k),hd_des(:,k)] = ...
%             SimFun_Control_Hip(q(:,i),dq(:,i),DCM_des(:,1),dDCM_des(:,1),Hip_des(:,argval),dHip_des(:,argval),PARAMS,...
%             RobotParam2.TotalMass,friction_coefficient,errInteg_DCM,errInteg_Hip,MinJointPos,MaxJointPos,MaxTorque,RobotLinks2,RobotParam2,i);
        
        
        i_at_k(k) = i;
    else
        u(:,i) = u(:,i-1);
    end
%     rft(i) = argval; %r is iterator for reference trajectory
    k_at_i(i) = k; %k is iterator for controller
    
    %Simulate Dynamics
    B = eye(3);
    H = gen3_Cdq(q(:,i),dq(:,1)) + gen3_G(q(:,i));
    M = gen3_D(q(:,i));
    ddq(:,i) = M\(-H + B*u(:,i));
    q(:,i+1) = q(:,i) + Simulation_dt*dq(:,i);
    dq(:,i+1) = dq(:,i) + Simulation_dt*ddq(:,i);
end
u(:,i+1) = u(:,i);

%% Recreate Points
fps = 50;

Recreate3DPoints

%% Confirm values are equal
% CheckValues

%% Animate
Animate3DPend_2

%% Plot
MakePlots

