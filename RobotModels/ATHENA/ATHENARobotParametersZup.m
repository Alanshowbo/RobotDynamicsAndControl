
%% Robot Parameter Matrices
%Each link in the robot has an ID#. Link One is the BASE link, and then
%each additional link has an ascending ID# in the order added. Only
%constraint is a link can only be added after its parent link has been.
%Each link has a corresponding joint and coordinate system that is located
%at that joint.
% INER - Matrix giving pose of inertial coordinate system for the link, wrt. the joint coordinate system
% KINE - Matrix giving pose of each joint coordinate system wrt. its parent
% PARENT - 
% JointLimits - 





INER = [
%X  Y 	Z   R	P   Y	Mass    Ixx   Ixy    Ixz    Iyy   Iyz	 Izz Link        Joint
0   0   0   0   0   0   5       0.5   0.05   0.05   0.5   0.05   0.5;  %Pelvis     BASE
0   0   0   0   0   0   0.5     0.1   0.01   0.01   0.1   0.01   0.1;  %LHipGimbal LHipYaw
0   0   0   0   0   0   1       0.1   0.01   0.01   0.1   0.01   0.1;  %LGlute     LHipRoll
0   0   0   0   0   0   3       0.3   0.03   0.03   0.3   0.03   0.3;  %LThigh     LHipPitch
0   0   0   0   0   0   3       0.3   0.03   0.03   0.3   0.03   0.3;  %LShin      LKnePitch
0   0   0   0   0   0   0.5     0.1   0.01   0.01   0.1   0.01   0.1;  %LAnkGimbal LAnkPitch
0   0   0   0   0   0   2       0.2   0.02   0.02   0.2   0.02   0.2;  %LFoot      LAnkRoll
0   0   0   0   0   0   0.5     0.1   0.01   0.01   0.1   0.01   0.1;  %RHipGimbal RHipYaw
0   0   0   0   0   0   1       0.1   0.01   0.01   0.1   0.01   0.1;  %RGlute     RHipRoll
0   0   0   0   0   0   3       0.3   0.03   0.03   0.3   0.03   0.3;  %RThigh     RHipPitch
0   0   0   0   0   0   3       0.3   0.03   0.03   0.3   0.03   0.3;  %RShin      RKnePitch
0   0   0   0   0   0   0.5     0.1   0.01   0.01   0.1   0.01   0.1;  %RAnkGimbal RAnkPitch
0   0   0   0   0   0   2       0.2   0.02   0.02   0.2   0.02   0.2]; %RFoot      RAnkRoll

%% mm
d1 = 0.275;     d2 = 0;     d3 = 0.055;     d4 = 0.448;       d5 = 0.435;
d6 = 0.050;     d7 = 0.119;

KINE = [
%Jnt X   	Jnt Y   	Jnt Z   	Jnt Roll	Jnt Pitch	Jnt Yaw 	Link Name
0           0           0           0           0           0       ; %Pelvis
0       	d7       	-d1       	0       	0       	0       ; %LHipYaw
0        	0       	-d2       	0       	0       	0       ; %LHipRoll
0         	0       	-d3       	0        	0       	0       ; %LHipPitch
0       	0       	-d4     	0       	0       	0       ; %LKnePitch
0       	0        	-d5     	0        	0        	0       ; %LAnkPitch
0         	0       	0       	0       	0           0       ; %LAnkRoll
0       	-d7       	-d1       	0       	0       	0       ; %LHipYaw
0        	0       	-d2       	0       	0       	0       ; %LHipRoll
0         	0       	-d3       	0        	0       	0       ; %LHipPitch
0       	0       	-d4     	0       	0       	0       ; %LKnePitch
0       	0        	-d5     	0        	0        	0       ; %LAnkPitch
0         	0       	0       	0       	0           0       ]; %LAnkRoll

PARENT = [
%P  J  Link Name	Parent
0; %1  BASE
1; %2  LHipYaw      BASE
2; %3  LHipRoll     LHipYaw
3; %4  LHipPitch    LHipRoll
4; %5  LKnePitch    LHipPitch
5; %6  LAnkPitch    LKnePitch
6; %7  LAnkRoll     LAnkPitch
0; %8  RHipYaw      BASE
8; %9  RHipRoll     RHipYaw
9; %10 RHipPitch    RHipPitch
10;%11 RKnePitch    RKnePitch
11;%12 RAnkPitch    RAnkPitch
12];%13 RAnkRoll    RAnkRoll

JointLimits = [
%lower	upper	effort	velocity
0       0   0   0;
-0.6	0.6	100	12; % ll1_hip_yaw
-0.6	0.6	100	10; % ll2_hip_rol
-0.6	1.2	100	12; % ll3_hip_pit
-0  	1.0	100	12; % ll4_kne_pit
-0.6	0.9	100	12; % ll5_ank_pit
-0.6	0.6	100	12; % ll6_ank_rol
-0.6	0.6	100	12; % rl1_hip_yaw
-0.6	0.6	100	10; % rl2_hip_rol
-0.6	1.2	100	12; % rl3_hip_pit
-0  	1.0	100	12; % rl4_kne_pit
-0.6	0.9	100	12; % rl5_ank_pit
-0.6	0.6	100	12]; % rl6_ank_rol


NAMES = {
%name       J_name          type        parent
'pelvis'	''	''	'';
'l_hipgimbal'	'll1_hip_yaw'   'revolute'	'pelvis';
'l_glute'       'll2_hip_rol'	'revolute'	'l_hipgimbal';
'l_thigh'   	'll3_hip_pit'   'revolute'	'l_glute';
'l_shin'    	'll4_kne_pit'   'revolute'	'l_thigh';
'l_ankle'       'll5_ank_pit'   'revolute'  'l_shin';
'l_foot'        'll6_ank_rol'   'revolute'	'l_ankle';
'r_hipgimbal'	'rl1_hip_yaw'   'revolute'	'pelvis';
'r_glute'       'rl2_hip_rol'	'revolute'	'r_hipgimbal';
'r_thigh'   	'rl3_hip_pit'   'revolute'	'r_glute';
'r_shin'    	'rl4_kne_pit'   'revolute'	'r_thigh';
'r_ankle'       'rl5_ank_pit'   'revolute'  'r_shin';
'r_foot'        'rl6_ank_rol'   'revolute'	'r_ankle'};

LINKPOSEROT = [
%pRx	pRy	pRz	name
0       	0       	0;%	pelvis
0       	-1.57079632	0;%	l_hipgimbal
0       	3.141592654	-1.570796327;%	utorso
2.268928028	0       	-1.570796327;%	r_ushou
0       	1.570796327	-1.570796327;%	r_lshou
0.087266463	3.141592654	-1.570796327;%	r_uarm
0       	1.570796327	-1.570796327;%	r_larm
0       	3.141592654	-1.570796327;%	r_hand
0.872664626	0       	1.570796327;%	l_ushou
0       	1.570796327	-1.570796327;%	l_lshou
-0.087266463	0   	-1.570796327;%	l_uarm
0       	1.570796327	-1.570796327;%	l_larm
0       	0       	-1.570796327;%	l_hand
0       	3.141592654	-1.570796327;%	r_glut
1.570796327	0       	-1.570796327;%	r_hip
0       	1.570796327	-1.570796327;%	r_thigh
0       	1.570796327	-1.570796327;%	r_ucalf
0       	3.141592654	-1.570796327;%	r_lcalf
0       	1.570796327	-1.570796327;%	r_foot
0       	0       	-1.570796327;%	l_glut
1.570796327	0       	1.570796327;%	l_hip
0       	1.570796327	-1.570796327;%	l_thigh
0       	1.570796327	-1.570796327;%	l_ucalf
0       	0       	-1.570796327;%	l_lcalf
0       	1.570796327	-1.570796327];%	l_foot

BOX = [
%sizex	sizey	sizez	vpx     vpy         vpz         vproll	vppitch	vpyaw	name
0.1     0.1905	0.15	0       0           0.05        0	0	0	;%pelvis
0.2286	0.2     0.1     0.1143	0           0.05        0	0	0	;%ltorso
0.7     0.1     0.07	0       -0.02       0           0.785398163	0	0	;%utorso
0.06	0.1     0.3302	0   	0           -0.163068	0	0	0	;%r_ushou
0.15494	0.1     0.06	0.07720	0.0245364	0.024638	0	0	-0.087266463	;%r_lshou
0.06	0.1     0.18796	0   	-0.0081788	0.09398     0	0	-0.087266463	;%r_uarm
0.3429	0.05	0.05	0.17145	0.003048	-0.03683	0	0	0	;%r_larm
0.1524	0.1     0.06	0.0762	0           0.0833882	0	0	0	;%r_hand
0.06	0.1     0.3302	0       0           0.163068	0	0	0	;%l_ushou
0.15494	0.1     0.06	0.07720	0.0245364	-0.024638	0	0	-0.087266463	;%l_lshou
0.06	0.1     0.18796	0       -0.0081788	-0.09398	0	0	-0.087266463	;%l_uarm
0.3429	0.05	0.05	0.17145	0.003048	0.03683     0	0	0	;%l_larm
0.1524	0.1     0.06	0.0762	0           -0.0833882	0	0	0	;%l_hand
0.1     0.1     0.1     -0.05	0           0           0   0	0	;%r_glut
0.1     0.1     0.27	0.07932	0           -0.105      0   0	0	;%r_hip
0.4318	0.1     0.07	0.2159	0           0           0	0	0	;%r_thigh
0.1524	0.1     0.07	0.0762	0           0           0	0	0	;%r_ucalf
0.07	0.07	0.2794	0   	0           0.1397      0	0	0	;%r_lcalf
0.03012	0.22078	0.1397	0.14702	0.0286766	-0.1345438	0	0	0	;%r_foot
0.1     0.1     0.1     -0.05	0           0           0	0	0	;%l_glut
0.1     0.1     0.27	0.07932	0           0.105       0	0	0	;%l_hip
0.4318	0.1     0.07	0.2159	0           0           0	0	0	;%l_thigh
0.1524	0.1     0.07	0.0762	0           0           0	0	0	;%l_ucalf
0.07	0.07	0.2794	0   	0           -0.1397     0	0	0	;%l_lcalf
0.03012	0.22078	0.1397	0.14701	0.0286766	0.1345438	0	0	0	];%l_foot


