clear
clc
format compact
% addpath(genpath(fileparts(pwd)))

%% System Model
%need NB, Parent(i), jtype(i), X_T, Ii
[PARAMS, PARENT, KINE, INER, CNCTPTS] = PendModel();
[RobotLinks, RobotParam] = PendRobot(PARAMS, PARENT, KINE, INER, CNCTPTS);
%need NB, Parent(i), jtype(i), X_T, Ii

q = zeros(3,1);
dq = zeros(3,1);
ddq = zeros(3,1);

q = [0 -0.3 0.6]' + (rand-.5)*4*[(rand-.5)*4,(rand-.5)*4,(rand-.5)*4]';
dq = [1 1 1]' + (rand-.5)*4*[(rand-.5)*4,(rand-.5)*4,(rand-.5)*4]';
ddq = [1 1 1]' + (rand-.5)*4*[(rand-.5)*4,(rand-.5)*4,(rand-.5)*4]';
% dq = [0 0 1]';
% q = [1 1 1]';
% q = [0 -0.1 0.2]';
% dq = [0 0 0]';

%% Dynamics For Controller
%Transformations, Center of Mass, Contact Points 
tic
RobotFrame1 = Frame_calc(RobotLinks,RobotParam,q);
fprintf('Elapsed Time for Iter.. Frame_calc is: %f \n',toc)
tic
RobotFrame = DynFun_Frame_calc(RobotLinks,RobotParam,q);
fprintf('Elapsed Time for Matrix Frame_calc is: %f \n',toc)
fprintf('\n')

%Test ID
tic
tau2 = gen3_B(q)\(gen3_D(q)*ddq + gen3_Cdq(q,dq) + gen3_G(q));
fprintf('Elapsed Time for Symbol ID is: %f \n',toc)
tic
tau1 = ID(RobotLinks,RobotParam,q,dq,ddq);
fprintf('Elapsed Time for Iter.. ID is: %f \n',toc)
tic
tau = DynFun_InverseDynamics(RobotLinks,RobotParam,RobotFrame,q,dq,ddq);
fprintf('Elapsed Time for Matrix ID is: %f \n',toc)
comparetau = [tau1-tau tau1-tau2]
fprintf('\n')

%EOM - M, H(q,dq), B
tic
M2 = gen3_D(q);
fprintf('Elapsed Time for Symbol MassMatrix is: %f \n',toc)
tic
M1 = MassMatrix_CompositeRigidBody(RobotLinks, RobotParam,q);
fprintf('Elapsed Time for Iter.. MassMatrix is: %f \n',toc)
tic
M = DynFun_MassMatrix_CRB(RobotParam,RobotFrame);
fprintf('Elapsed Time for Matrix MassMatrix is: %f \n',toc)
Mcompare = [M1-M M1-M2]
fprintf('\n')

tic
H2 = gen3_Cdq(q,dq) + gen3_G(q);
fprintf('Elapsed Time for Symbol H is: %f \n',toc)
tic
H1 = ID(RobotLinks, RobotParam,q,dq,ddq) - M1*ddq;
fprintf('Elapsed Time for Iter.. H is: %f \n',toc)
tic
H = DynFun_InverseDynamics(RobotLinks, RobotParam, RobotFrame, q,dq,ddq) - M*ddq;
fprintf('Elapsed Time for Matrix H is: %f \n',toc)
Hcompare = [H1-H H1-H2]
fprintf('\n')

B = ones(RobotParam.n);

%% Centroidal momentum matrix - Acmm, dAcmm, h
tic
Acmm2 = gen3_Acmm(q);
Acmm_dot2 = gen3_Acmm_dot(q,dq);
hG2 = gen3_h(q,dq);
Sys_h2 = gen3_Sys_h(q,dq);
Sys_V2 = gen3_Sys_V(q,dq);
vG2 = gen3_vCOM_Tot(q,dq);
Jc2 = gen3_Jc(q);
Jc_dot2 = gen3_Jc_dot(q,dq);
fprintf('Elapsed Time for Symbol Acmm is: %f \n',toc)
tic
[Acmm1,hG1,IG1,vG1,pCOM1] = Centroidal_Momentum_Matrix(RobotLinks, RobotParam,q,dq);
fprintf('Elapsed Time for Iter.. Acmm is: %f \n',toc)
tic
[Acmm,hG,IG,vG,Acmm_dot,Sys_h,i_V_i,Jc_dot] = DynFun_Centroidal_Momentum_Matrix(RobotLinks, RobotParam, RobotFrame,q,dq);
fprintf('Elapsed Time for Matrix Acmm is: %f \n',toc)

AcmmCompare = [Acmm-Acmm1 Acmm-Acmm2]
AcmmDotshow = [Acmm_dot [0 0 0 0 0 0]' Acmm_dot2]
AcmmDotCompare = [Acmm_dot-Acmm_dot2]
% hcompare = [hG1-hG hG1-hG2]
% hshow = [hG1 hG2 hG]

Sys_hCompare = [Sys_h Sys_h2];
Sys_V_Compare = [i_V_i Sys_V2];
fprintf('\n')

tic
[D1,Cdq1,G1] = EOM_num(RobotLinks, RobotParam,q,dq);
fprintf('Elapsed Time for Iter.. EOM_num is: %f \n',toc)
tic
[D,Cdq,G] = EOM_num(RobotLinks, RobotParam,q,dq);
fprintf('Elapsed Time for Matrix EOM_num is: %f \n',toc)
fprintf('\n')

tau;

% vCOM = gen3_vCOM_Tot(q,dq)

%% Plot
close all
p0 = reshape(RobotFrame.O_p_i,[3 RobotParam.NB]);
Pc = reshape(RobotFrame.O_p_Pc,3,RobotParam.c);
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



%% Test Reversing of Transformation

RealReverse = [SpatialTransform_reverse(RobotFrame.i_X_O(1:6,:)) ...
               SpatialTransform_reverse(RobotFrame.i_X_O(7:12,:)) ...
               SpatialTransform_reverse(RobotFrame.i_X_O(13:18,:))];
 flipeye6 = [zeros(3) eye(3); eye(3) zeros(3)];
NB=3;
Dflipeye6 = zeros(6*NB);
for i = 1:NB
    Dflipeye6(6*i-5:6*i,6*i-5:6*i) = flipeye6;
end
TestReverse = flipeye6*RobotFrame.i_X_O'*Dflipeye6;

RealReverse-TestReverse;

RealReverse2 = [STfun_reverse(RobotFrame.i_X_O(1:6,:)) ...
               STfun_reverse(RobotFrame.i_X_O(7:12,:)) ...
               STfun_reverse(RobotFrame.i_X_O(13:18,:))];
TestReverse2 = STfun_reverse(RobotFrame.i_X_O);
RealReverse2-TestReverse2;
TestReverse-TestReverse2;

%%
spots = @(iii) 6*iii-5:6*iii;
i = 3;
%Does 
pi = RobotLinks(i).PARENTi;
i_vx_pi = STfun_SpatialCross(RobotFrame.i_X_pi(spots(i),:)*i_V_i(spots(pi),:));
i_vx_pi2 = RobotFrame.i_X_pi(spots(i),:) * STfun_SpatialCross(i_V_i(spots(pi),:)) * inv(RobotFrame.i_X_pi(spots(i),:)')';

%%
hdot = Acmm*ddq + Acmm_dot*dq;
hdot1 = gen3_h_dot(q,dq,ddq);
hdot2 = Acmm2*ddq + Acmm_dot2*dq;
hdotCompare = [hdot hdot1 hdot2]

WHAT = [Acmm_dot*dq Acmm_dot2*dq]
