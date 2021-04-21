clear
clc
format compact
addpath(genpath(fileparts(pwd)))

%% System Model
%need NB, Parent(i), jtype(i), X_T, Ii
[PARAMS, PARENT, KINE, INER, CNCTPTS] = PendModel();
[RobotLinks, RobotParam] = PendRobot(PARAMS, PARENT, KINE, INER, CNCTPTS);
%need NB, Parent(i), jtype(i), X_T, Ii

q = zeros(3,1);
dq = zeros(3,1);
ddq = zeros(3,1);

q = [0 -0.3 0.6]';
dq = [1 1 1]';
ddq = [1 1 1]';

%% Dynamics For Controller
%Transformations, Center of Mass, Contact Points 
tic
RobotFrame = Frame_calc(RobotLinks,RobotParam,q);
fprintf('Elapsed Time for Frame_calc is: %f \n',toc)

%EOM - M, H(q,dq), B
tic
M = MassMatrix_CompositeRigidBody(RobotLinks, RobotParam,q);
fprintf('Elapsed Time for MassMatrix is: %f \n',toc)
tic
H = ID(RobotLinks, RobotParam,q,dq,ddq) - M*ddq;
fprintf('Elapsed Time for ID-MM is: %f \n',toc)
B = ones(RobotParam.n);

%Centroidal momentum matrix - Acmm, dAcmm, h
tic
[Acmm,hG,IG,vG,pCOM] = Centroidal_Momentum_Matrix(RobotLinks, RobotParam,q,dq);
fprintf('Elapsed Time for Acmm is: %f \n',toc)

tic
tau = ID(RobotLinks,RobotParam,q,dq,ddq);
fprintf('Elapsed Time for ID is: %f \n',toc)
tic
[D1,Cdq1,G1] = EOM_num(RobotLinks, RobotParam,q,dq);
fprintf('Elapsed Time for EOM_num is: %f \n',toc)
tau


%% Plot
close all
p0 = reshape(RobotFrame.O_p_i,[3 RobotParam.NB])
Pc = reshape(RobotFrame.O_p_Pc,3,RobotParam.c)
JntPts = [p0 Pc(:,end)];
FootPts = [Pc(:,1:2) Pc(:,4) Pc(:,3) Pc(:,1)]; 
close all
figure(1)
hold on
plot3(JntPts(1,:),JntPts(2,:),JntPts(3,:),'k.') %Joint Points
plot3(JntPts(1,:),JntPts(2,:),JntPts(3,:),'b') %Leg Lines
plot3(FootPts(1,:),FootPts(2,:),FootPts(3,:),'r') %Foot Lines
grid on
axis equal

















