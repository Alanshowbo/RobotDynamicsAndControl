
%% Robot Parameter Matrices
%Each link in the robot has an ID#. Link One is the BASE link, and then
%each additional link has an ascending ID# in the order added. Only
%constraint is a link can only be added after its parent link has been.
%Each link has a corresponding joint and coordinate system that is located
%at that joint.

% P - struct of the parameters that define the robot

% jointNames - Cell matrix giving the name of each joint and its parent
% KINE - Matrix giving pose of each joint coordinate system wrt. its parent
% JointAxis - XYZ vector for each joint giving the direction of the joint
%             axis
% JointLimits - Matrix giving the range of motion, velocity, and torque
%               limits of each joint
% JointParams - dynamic parameters of each joint

% linkNames - Cell matrix giving the name of each link, joint and joint type
% INER - Matrix giving pose of inertial coordinate system for the link,
%        wrt. the joint coordinate system, as well as the mass and the
%        Moment of Inertia Matrix.
% CNCTPTS - Location of contact points in the rigid body system
% Visuals - All parameters that indicate how the robot is visualized in the
%           SDF or URDF. Has no effect on kinematics and dynamics
%   

%% P - in mm
P.isFloatingBase = true;

P.RobotName = 'upperBodyXO';
P.VersionName = 'v1';

%Type of each joint. 1 - revolute about z axis
%                    2 - revolute about y axis
%                    3 - revolute about z axis
%                    4 - prismatic along z axis
%                    5 - prismatic along y axis
%                    6 - prismatic along x axis
%                    0 - floating base
P.jtype = [1 1 1 1 1 1 1 1 1 1 1 1]';

% Pose of the base coordinate system in the world frame
P.robotPose = [0, 0, 0, 0, -90, 0];

%% Joint Information
%Name of each joint (numbered 1 to NB-1}
jointNames = {
%JointID#    JointName     ParentJointID#
	1 		'ra1_sho_abad'		0;
	2 		'ra2_sho_flex'		1;
	3 		'ra3_hum_rota'		2;
	4 		'ra4_elb_flex'		3;
	5 		'ra5_wri_rota'		4;
	6 		'la1_sho_abad'		0;
	7 		'la2_sho_flex'		6;
	8 		'la3_hum_rota'		7;
	9 		'la4_elb_flex'		8;
	10 		'la5_wri_rota'      9;
    11 		'ft3_l_hand'		10;
    12 		'ft4_r_hand'		5};
%Each Joint is defined at a coordinate system. These coordinates are defined wrt. the coordinates
%of the parent joint. below is the xyz position of each joint wrt the previous joint coordinates, and the RPY
%of the rotation from the joint coordinates to the parent joint coordinates. parent_R_child = Rz(Y)*Ry(P)*Rz(R)
%To get the rotations, rotate the parent coordinate system by z then y then
%x to arrive at the child coordinates. Those numbers are the RPY
KINE = [ %Parameterized Positions and Angles in degrees
    %Jnt X   	Jnt Y   	Jnt Z   	Jnt Roll   Jnt Pitch	Jnt Yaw 	JointName
    -0.31433	-0.0097288	-0.036922	-50     	0       	180         ; %RShAbAd
    -0.00635	-0.0508 	-0.33884	-90     	-45         -90      	; %RShFlex
    0.1524  	0.029642	0.030912	0       	90      	0       	; %RHumRot
    -0.00635	0       	0.1892  	-90     	-85         90      	; %RElbFlex
    0.3429  	-0.006096	-0.042977	0       	90      	0       	; %RWriRot
    0.314325	-0.00972876	-0.0369216	-130        0       	0       	; %LShAbAd
    -0.00635	-0.0508 	0.338836	90         	45          -90        	; %LShFlex
    0.1524  	0.0296418	-0.0309118	0       	-90         0       	; %LHumRot
    -0.00635	0       	-0.1892046	90         	85          90         	; %LElbFlex
    0.3429  	-0.006096	0.0429768	0       	-90         0       	; %LWriRot
    0       	0       	-0.0834   	90        	90        	0       	; %LHandFT
    0       	0       	-0.0834 	-90        	90        	0       	]; %RHandFT
%Define a vector in each joints coordinate system that is the joint axis for that joint
JointAxis = [
    %X  Y   Z
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1;
    0   0   1];
%Define the limits of each joint
JointLimits = [
    %lower          upper       effort	velocity
    -0.174532925	2.094395102	100     12; % ra1_sho_abad
    -0.476474886	2.094395102	100     12; % ra2_sho_flex
    -1.396263402	0.872664626	100     12; % ra3_hum_rota
    0               2.670353756	100     12; % ra4_elb_flex
    -1.570796327	1.570796327	100     10; % ra5_wri_rota
    -0.174532925	2.094395102	100     12; % la1_sho_abad
    -0.476474886	2.094395102	100     12; % la2_sho_flex
    -1.396263402	0.872664626	100     12; % la3_hum_rota
    0               2.670353756	100     12; % la4_elb_flex
    -1.570796327	1.570796327	100     10; % la5_wri_rota
    -0.005          0.005       200     3;  % ft3
    -0.005          0.005       200     4];  % ft4
%Define dynamic parameters of joint
JointParams = [
%damping   friction   JointName
    0.1 	0; 		% ra1_sho_abad
    0.1		0; 		% ra2_sho_flex
    0.1		0; 		% ra3_hum_rota
    0.1		0; 		% ra4_elb_flex
    0.1		0; 		% ra5_wri_rota
    0.1		0; 		% la1_sho_abad
    0.1		0; 		% la2_sho_flex
    0.1 	0; 		% la3_hum_rota
    0.1		0; 		% la4_elb_flex
    0.1		0;		% la5_wri_rota
    0.1		0;		% ft3
    0.1		0];		% ft4


%% Link Information
%Name of each link (numbered 1 to N)
linkNames = {
%LinkID#	LinkName	AttachedJointID#
	1		'pelvis'	 		0;
	2		'r_ushou'    		1;
	3		'r_lshou'    		2;
	4		'r_uarm'    		3;
	5		'r_larm'    		4;
	6		'r_hand'			5;
	7		'l_ushou'    		6;
	8		'l_lshou'    		7;
	9		'l_uarm'    		8;
	10		'l_larm'    		9;
	11		'l_hand'    		10;
    12		'l_hand_FT'     	11;
    13		'r_hand_FT'     	12};
%For Each link a Centroidal Coordinate system is defined. The origin of the coordinate 
%Should be the Center of Mass. The Moment of Inertia matrix is defined in these coordinates. 
INER = [%                   kg      kg*m^2......
    %X       Y          Z           R	P       Y	Mass        Ixx         Ixy         Ixz         Iyy         Iyz         Izz 	LinkName
    0.00115	 0.02425	0.00012 	0	-90    	0	12.8142188	0.0868309	 -9.80E-05	-1.40E-06	0.1276831	-0.0193677	0.1270887	; %Pelvis
  0.0164	  0.0039	-0.19416	0	0   	0	4.8909121	0.0017929	0.0017929	0.0046508	0.0348741	0.0073972	0.0125237	; %RShAbAd
 0.11093	 0.01825	 0.02571	0	0   	0	3.2261617	0.0042548	0.0002492	-0.0002769	0.0076126	-5.20E-05	0.007705	; %RShFlex
-0.00114	-0.00151	 0.11122	0	0   	0	4.8829228	0.0191086	0.0001927	-0.0025684	0.0188117	-0.0002236	0.0110745	; %RHumRot
 0.11918	-0.02395	-0.03337	0	0   	0	0.6911285	0.0004628	0.0009098	-0.0004177	0.0103858	-1.28E-05	0.010507	; %RElbFlex
 0.07931	 0.00146	  0.0648	0	0   	0	3.2280873	0.0162237	0.000437	0.0051128	0.0394647	-0.0003224	0.0347581	; %RWriRot
 0.01647	 0.00381	 0.19425	0	0   	0	4.8908952	0.0361594	0.0018219	-0.0046394	0.0348875	-0.0074231	0.0125386	; %LShAbAd
 0.11087	  0.0182	-0.02557	0	0   	0	3.2309514	0.0042649	0.0002646	0.0002986	0.0076452	5.18E-05	0.0077414	; %LShFlex
-0.00112	-0.00157	-0.11125	0	0   	0	4.8803153	0.0191318	0.0001585	0.0025749	0.0188147	0.0002531	0.0110786	; %LHumRot
 0.11918	-0.02395	  0.0337	0	0   	0	0.691127	0.0004628	0.0009098	0.0004177	0.0103858	1.28E-05	0.010507	; %LElbFlex
 0.07931	 0.00146	 -0.0648	0	0   	0	3.2310016	0.0159674	0.0002098	-0.0057656	0.0399446	0.0002799	0.0349934	; %LWriRot
 0.000  	 0.000   	 0.000  	0	0   0.001	0.001       0.001       0.00        0.00        0.001   	0.00    	0.001; %ft
 0.000  	 0.000   	 0.000  	0	0   0.001	0.001       0.001       0.00        0.00        0.001   	0.00    	0.001]; %ft


%% Contact point Information
P.d6 = 0.050;     P.d7 = 0.119;
P.La = 0.05;  P.Lb = 0.05;
CNCTPTS = [
    %Body ID    px     py       pz
    1           1      1        -1;
    1           -1     1        -1;
    1           1     -1        -1;
    1           -1     1        -1];

%% Visuals for Each Link
Visuals.Type = [
 %UseSTL	UseBox  UseCylinder UseAutoBox  ChildID	AddJointCylinder
	0       1		1			0           0       0; 	%'pelvis'    
	0       1		0			0           0       1; 	%'r_ushou'     
	0       1		0			0           0       1; 	%'r_lshou'     
	0       1		0			0           0       1; 	%'r_uarm'      
	0       1		0			0           0       1; 	%'r_larm'      
	0       1		0			0           0       1; 	%'r_hand'     
	0       1		0			0           0       1; 	%'l_ushou'     
	0       1		0			0           0       1; 	%'l_lshou'     
	0       1		0			0           0       1; 	%'l_uarm'      
	0       1		0			0           0       1; 	%'l_larm'      
	0       1		0			0           0       1; 	%'l_hand'       
	0       0		0			0           0       0;  %'ft'           
	0       0		0			0           0       0]; %'ft'  
Visuals.JointCylinderLength = 0.04;
Visuals.JointCylinderRadius = 0.015;

%STL fileNames
Visuals.STLFileNames = {
    ''
    };

%Displacement to be applied to all the points in the STL file such that
%the origin of the stl file matches the origin of the joint Coordinates
%Then the RPY rotation to be in the joint coordinates
%   note, the sdf reader in java also does translation and then rotation
Visuals.STL_KINE = [
    %pRx	pRy		pRz		VisYaw		VisPitch	VisRoll 	LinkName
	];
%Scaling to apply to meshes to have output in m
Visuals.STL_scale = 0.001;

Visuals.BOX = [
    %sizex	sizey	sizez	vpx     vpy         vpz         vproll	vppitch	vpyaw	name
    0.7     0.1     0.07	0       -0.02       0           45	0	0	;%utorso
    0.06	0.1     0.3302	0   	0           -0.163068	0	0	0	;%r_ushou
    0.15494	0.1     0.06	0.07720	0.0245364	0.024638	0	0	-5	;%r_lshou
    0.06	0.1     0.18796	0   	-0.0081788	0.09398     0	0	-5	;%r_uarm
    0.3429	0.05	0.05	0.17145	0.003048	-0.03683	0	0	0	;%r_larm
    0.1524	0.1     0.06	0.0762	0           0.0833882	0	0	0	;%r_hand
    0.06	0.1     0.3302	0       0           0.163068	0	0	0	;%l_ushou
    0.15494	0.1     0.06	0.07720	0.0245364	-0.024638	0	0	-5	;%l_lshou
    0.06	0.1     0.18796	0       -0.0081788	-0.09398	0	0	-5	;%l_uarm
    0.3429	0.05	0.05	0.17145	0.003048	0.03683     0	0	0	;%l_larm
    0.1524	0.1     0.06	0.0762	0           -0.0833882	0	0	0	;%l_hand
    0       0       0       0       0           0           0   0   0   ;%ft
    0       0       0       0       0           0           0   0   0   ];%ft

Visuals.CYLINDER = [
    %length	radius	vpx     vpy     vpz      vproll	vppitch	vpyaw	name
    1.2     0.1905	0       0       0.6     0      0       0       ];%pelvis

%% Finish Parameters
P.mTot = sum(INER(:,7));
P.NB = size(INER,1); %number of Coordinate Systems 
P.n = size(KINE,1); %number of joint angles
if (P.isFloatingBase==true)
	P.N = P.n+6; %number of states
else
	P.N = P.n; %number of states
end
P.m = P.n; %number of inputs
P.c = size(CNCTPTS,1); %number of contact points
