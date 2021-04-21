clear
clc
format compact

%% System Model
%need NB, Parent(i), jtype(i), X_T, Ii
[P, PARENT, KINE, INER, CNCTPTS] = PendModel();
[RobotLinks, RobotParam] = PendRobot(P, PARENT, KINE, INER, CNCTPTS);
%need NB, Parent(i), jtype(i), X_T, Ii

q = zeros(3,1);
dq = zeros(3,1);
ddq = zeros(3,1);

q = [0 -0.3 0.6]';
dq = [1 1 1]';
ddq = [1 1 1]';

%% Dynamics For Controller
%Transformations, Center of Mass, Contact Points 
RobotFrame = Frame_calc(RobotLinks,RobotParam,q);

%EOM - M, H(q,dq), B
M = MassMatrix_CompositeRigidBody(RobotLinks, RobotParam,q);
H = ID(RobotLinks, RobotParam,q,dq,ddq) - M*ddq;
B = ones(RobotParam.n);

%Centroidal momentum matrix - Acmm, dAcmm, h
[Acmm,hG,IG,vG,pCOM] = Centroidal_Momentum_Matrix(RobotLinks, RobotParam,q,dq);



tau = ID(RobotLinks,RobotParam,q,dq,ddq);
[D1,Cdq1,G1] = EOM_num(RobotLinks, RobotParam,q,dq);
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

















