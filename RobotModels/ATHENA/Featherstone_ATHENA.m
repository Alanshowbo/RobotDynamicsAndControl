clear
clc
format compact
% addpath(genpath(fileparts(pwd)))

%% System Model
%need NB, Parent(i), jtype(i), X_T, Ii
[PARAMS, PARENT, KINE, INER, CNCTPTS,VISUALS] = ATHENA_Model();
[RobotLinks, RobotParam] = PendRobot(PARAMS, PARENT, KINE, INER, CNCTPTS);
%need NB, Parent(i), jtype(i), X_T, Ii

switch 3
    case 1
        q = zeros(18,1)+[0 0 1.258 0 0.1 0   0 0 0.7 -0.4 0.1 0 0 0 0.1 -0.4 0.4 0]';
        dq = zeros(18,1)+[0.3 0.1 0.1 0 -0.1 -0.1   0 0 0.3 0.2 -0.1 0 0 0 -0.3 0.2 0.1 0]';
        ddq = zeros(18,1);
        h_desired = [1 -1 2 3 0.5 0.2]';
        a_swing_desired = [0.2 0.04 -0.3 0.5 0.1 0.3];
    case 2
        q = zeros(18,1)+[0 0 1.3 0 0 0   0 0 0.5 -0.4 0.2 0 0 0 0.2 -0.4 0.2 0]';
        dq = zeros(18,1)+[0.3 0.1 0.1 0 -0.1 -0.1   0 0 0.3 0.2 -0.1 0 0 0 -0.3 0.2 0.1 0]';
        ddq = zeros(18,1);
        h_desired = [1 0.1 2 3 -0.5 0.2]';
        a_swing_desired = [-0.2 0 -0.1];
    case 3
        q = zeros(18,1)+[0 0 1.3 0 0 0   0.3 0 1.7 -0.8 0.2 0     0.3 0 0.2 -0.4 0.2 0]';
        dq = zeros(18,1)+[0.3 0.1 0.1 0 -0.1 -0.1   0 0 0.3 0.2 -0.1 0 0 0 -0.3 0.2 0.1 0]';
        ddq = zeros(18,1);
        h_desired = [1 0.1 2 3 -0.5 0.2]';
        a_swing_desired = [-0.2 0 -0.1];
end
% q = [0 -0.3 0.6]' + (rand-.5)*4*[(rand-.5)*4,(rand-.5)*4,(rand-.5)*4]';
% dq = [1 1 1]' + (rand-.5)*4*[(rand-.5)*4,(rand-.5)*4,(rand-.5)*4]';
% ddq = [1 1 1]' + (rand-.5)*4*[(rand-.5)*4,(rand-.5)*4,(rand-.5)*4]';
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
% tic
% tau2 = gen3_B(q)\(gen3_D(q)*ddq + gen3_Cdq(q,dq) + gen3_G(q));
% fprintf('Elapsed Time for Symbol ID is: %f \n',toc)
tic
tau1 = ID(RobotLinks,RobotParam,q,dq,ddq);
fprintf('Elapsed Time for Iter.. ID is: %f \n',toc)
tic
tau = DynFun_InverseDynamics(RobotLinks,RobotParam,RobotFrame,q,dq,ddq);
fprintf('Elapsed Time for Matrix ID is: %f \n',toc)
% comparetau = [tau1-tau tau1 tau]
fprintf('\n')

%EOM - M, H(q,dq), B
% tic
% M2 = gen3_D(q);
% fprintf('Elapsed Time for Symbol MassMatrix is: %f \n',toc)
tic
M1 = MassMatrix_CompositeRigidBody(RobotLinks, RobotParam,q);
fprintf('Elapsed Time for Iter.. MassMatrix is: %f \n',toc)
tic
M = DynFun_MassMatrix_CRB(RobotParam,RobotFrame);
fprintf('Elapsed Time for Matrix MassMatrix is: %f \n',toc)
% Mcompare = [M1-M M M1]
fprintf('\n')

% tic
% H2 = gen3_Cdq(q,dq) + gen3_G(q);
% fprintf('Elapsed Time for Symbol H is: %f \n',toc)
tic
H1 = ID(RobotLinks, RobotParam,q,dq,ddq) - M1*ddq;
fprintf('Elapsed Time for Iter.. H is: %f \n',toc)
tic
H = DynFun_InverseDynamics(RobotLinks, RobotParam, RobotFrame, q,dq,ddq) - M*ddq;
fprintf('Elapsed Time for Matrix H is: %f \n',toc)
Hcompare = [H1-H H H1]
fprintf('\n')

B = ones(RobotParam.n);

%% Centroidal momentum matrix - Acmm, dAcmm, h
% tic
% Acmm2 = gen3_Acmm(q);
% Acmm_dot2 = gen3_Acmm_dot(q,dq);
% hG2 = gen3_h(q,dq);
% Sys_h2 = gen3_Sys_h(q,dq);
% Sys_V2 = gen3_Sys_V(q,dq);
% vG2 = gen3_vCOM_Tot(q,dq);
% Jc2 = gen3_Jc(q);
% Jc_dot2 = gen3_Jc_dot(q,dq);
% fprintf('Elapsed Time for Symbol Acmm is: %f \n',toc)
tic
[Acmm1,hG1,IG1,vG1,pCOM1] = Centroidal_Momentum_Matrix(RobotLinks, RobotParam,q,dq);
fprintf('Elapsed Time for Iter.. Acmm is: %f \n',toc)
tic
[Acmm,hG,IG,vG,Acmm_dot,Sys_h,i_V_i,Jc_dot] = DynFun_Centroidal_Momentum_Matrix(RobotLinks, RobotParam, RobotFrame,q,dq);
fprintf('Elapsed Time for Matrix Acmm is: %f \n',toc)

AcmmCompare = [Acmm-Acmm1 Acmm Acmm1]
AcmmDotshow = [Acmm_dot]
% AcmmDotCompare = [Acmm_dot-Acmm_dot2]
% hcompare = [hG1-hG hG1-hG2]
% hshow = [hG1 hG2 hG]

% Sys_hCompare = [Sys_h Sys_h2];
% Sys_V_Compare = [i_V_i Sys_V2];
Sys_h
i_V_i
fprintf('\n')

tic
[D1,Cdq1,G1] = EOM_num(RobotLinks, RobotParam,q,dq,18);
fprintf('Elapsed Time for Iter.. EOM_num is: %f \n',toc)
tic
[D,Cdq,G] = EOM_num(RobotLinks, RobotParam,q,dq,18);
fprintf('Elapsed Time for Matrix EOM_num is: %f \n',toc)
fprintf('\n')

tau;

% vCOM = gen3_vCOM_Tot(q,dq)

%% Plot
close all
p0 = reshape(RobotFrame.O_p_i,[3 RobotParam.NB]);
Pc = reshape(RobotFrame.O_p_Pc,3,RobotParam.c);
Leg1Pts = [p0(:,6:12) mean(Pc(:,1:4)')'];
Leg2Pts = [p0(:,6) p0(:,13:18) mean(Pc(:,5:8)')'];
Foot1Pts = [Pc(:,1:2) Pc(:,4) Pc(:,3) Pc(:,1)]; 
Foot2Pts = [Pc(:,5:6) Pc(:,8) Pc(:,7) Pc(:,5)]; 
close all
figure(1)
hold on
plot3(p0(1,:),p0(2,:),p0(3,:),'k.') %Joint Points
plot3(Leg1Pts(1,:),Leg1Pts(2,:),Leg1Pts(3,:),'b') %Leg Lines
plot3(Leg2Pts(1,:),Leg2Pts(2,:),Leg2Pts(3,:),'b') %Leg Lines
plot3(Foot1Pts(1,:),Foot1Pts(2,:),Foot1Pts(3,:),'r') %Foot Lines
plot3(Foot2Pts(1,:),Foot2Pts(2,:),Foot2Pts(3,:),'r') %Foot Lines
grid on
axis equal

PlotAthena

%% Create variables to save for project
wg = [0 0 0 0 0 -PARAMS.mTot*9.8];
Jf1_left = RobotFrame.Jc(end-5:end-3,:);
Jf2_right = RobotFrame.Jc(end-2:end,:);
Jf1_left_dot = Jc_dot(end-5:end-3,:);
Jf2_right_dot = Jc_dot(end-2:end,:);

fc = 0.7;
Beta_c = [fc -fc fc  -fc;
          fc fc  -fc -fc;
          1  1   1  1]/sqrt(fc*fc*2 + 1);
for i = 1:4
    A_2(1:6,(i*4-3):i*4) = [S(RobotFrame.O_p_COM-Pc(:,i+4))*Beta_c; Beta_c];
end
Q = eye(12,12);
Cb = chol(Q);

ddq_lb = ones(18,1)-5;
ddq_ub = ones(18,1)+5;
save('OptProjectVar.mat','q','dq','h_desired','a_swing_desired','Acmm','Acmm_dot','wg','Jf1_left','Jf2_right','A_2','ddq_ub','ddq_lb','Jf1_left_dot','Jf2_right_dot','Q','Cb')