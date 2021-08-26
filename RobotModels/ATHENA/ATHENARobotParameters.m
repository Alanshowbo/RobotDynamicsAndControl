
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
P.d1 = 0.275;     P.d2 = 0;     P.d3 = 0.055;     P.d4 = 0.448;       P.d5 = 0.435;
P.d6 = 0.050;     P.d7 = 0.119;
P.La = 0.05;  P.Lb = 0.05;

P.isFloatingBase = true;

P.RobotName = 'athena';
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
P.robotPose = [0, 0, 0, 0, 0, 0];

%% Joint Information
%Name of each joint (numbered 1 to NB-1}
jointNames = {
%JointID#    JointName     ParentJointID#
	1 		'll1_hip_yaw'		0;
	2 		'll2_hip_rol'		1;
	3 		'll3_hip_pit'		2;
	4 		'll4_kne_pit'		3;
	5 		'll5_ank_pit'		4;
	6 		'll6_ank_rol'		5;
	7 		'rl1_hip_yaw'		0;
	8 		'rl2_hip_rol'		7;
	9 		'rl3_hip_pit'		8;
	10 		'rl4_kne_pit'		9;
	11 		'rl5_ank_pit'		10;
	12 		'rl6_ank_rol'		11};
%Each Joint is defined at a coordinate system. These coordinates are defined wrt. the coordinates
%of the parent joint. below is the xyz position of each joint wrt the previous joint coordinates, and the RPY
%of the rotation from the joint coordinates to the parent joint coordinates. parent_R_child = Rz(Y)*Ry(P)*Rz(R)
KINE = [ %Parameterized Positions and Angles in degrees
    %Jnt X   	Jnt Y   	Jnt Z   	Jnt Roll Jnt Pitch	Jnt Yaw		JointName
    0       	P.d7       	-P.d1      		0    	0       0          ; %'ll1_hip_yaw'
    0        	0       	-P.d2      	 	0    	90      0          ; %'ll2_hip_rol'
    P.d3        0       	0       	  	0      	-90     90         ; %'ll3_hip_pit'
    0       	-P.d4      	0       		0    	0       0          ; %'ll4_kne_pit'
    0       	-P.d5      	0       	 	0     	0       0          ; %'ll5_ank_pit'
    0         	0       	0       	    -90    	0       -90        ; %'ll6_ank_rol'
    0       	-P.d7     	-P.d1      		180  	0       0          ; %'rl1_hip_yaw'
    0        	0       	P.d2       	  	0    	-90     0          ; %'rl2_hip_rol'
    P.d3        0       	0       	 	0      	90      90         ; %'rl3_hip_pit'
    0       	-P.d4      	0       		0    	0       0          ; %'rl4_kne_pit'
    0       	-P.d5      	0       	 	0     	0       0          ; %'rl5_ank_pit'
    0         	0       	0       	    90     	0       -90        ];%'rl6_ank_rol'
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
    %lower	upper	effort	velocity
    -0.6	0.6     100     12; % ll1_hip_yaw
    -0.6	0.6     100     10; % ll2_hip_rol
    -1.0	1.2     100     12; % ll3_hip_pit
    -2.0  	0.0     100     12; % ll4_kne_pit
    -0.6	0.6     100     12; % ll5_ank_pit
    -0.6	0.6     100     12; % ll6_ank_rol
    -0.6	0.6     100     12; % rl1_hip_yaw
    -0.6	0.6     100     10; % rl2_hip_rol
    -1.0	1.2     100     12; % rl3_hip_pit
    -2.0	0.0     100     12; % rl4_kne_pit
    -0.6	0.9     100     12; % rl5_ank_pit
    -0.6	0.6     100     12];% rl6_ank_rol
%Define dynamic parameters of joint
JointParams = [
%damping   friction   JointName
    0.1		0; 		% ll1_hip_yaw
    0.1		0; 		% ll2_hip_rol
    0.1 	0; 		% ll3_hip_pit
    0.1		0; 		% ll4_kne_pit
    0.1		0; 		% ll5_ank_pit
    0.1		0; 		% ll6_ank_rol
    0.1		0; 		% rl1_hip_yaw
    0.1		0; 		% rl2_hip_rol
    0.1		0; 		% rl3_hip_pit
    0.1 	0; 		% rl4_kne_pit
    0.1		0; 		% rl5_ank_pit
    0.1		0];		% rl6_ank_rol


%% Link Information
%Name of each link (numbered 1 to N)
linkNames = {
%LinkID#	LinkName	AttachedJointID#
	1		'pelvis'	 		0;
	2		'l_hipgimbal'		1;
	3		'l_glute'    		2;
	4		'l_thigh'    		3;
	5		'l_shin'     		4;
	6		'l_ankle'    		5;
	7		'l_foot'     		6;
	8		'r_hipgimbal'		7;
	9		'r_glute'    		8;
	10		'r_thigh'    		9;
	11		'r_shin'     		10;
	12		'r_ankle'    		11;
	13		'r_foot'     		12};
%For Each link a Centroidal Coordinate system is defined. The origin of the coordinate 
%Should be the Center of Mass. The Moment of Inertia matrix is defined in these coordinates. 
INER = [%                   kg      kg*m^2......
    %X  	Y 		Z   	R	P   Y	Mass    Ixx   Ixy     Ixz     Iyy   Iyz	    Izz 	LinkName
    0   	0   	-P.d1/2 0   0   0   50      0.4   0.005   0.005   0.2   0.005   0.5;  %pelvis     
    0   	0   	-P.d2/2	0   0   0   0.5     0.1   0.001   0.001   0.1   0.001   0.1;  %l_hipgimbal
    P.d3/2	0   	0   	0   0   0   1       0.1   0.001   0.001   0.1   0.001   0.1;  %l_glute    
    0   	-P.d4/2	0   	0   0   0   3       0.3   0.003   0.003   0.3   0.003   0.3;  %l_thigh    
    0   	-P.d4/2 0   	0   0   0   3       0.3   0.003   0.003   0.3   0.003   0.3;  %l_shin     
    0   	0   	0   	0   0   0   0.5     0.1   0.001   0.001   0.1   0.001   0.1;  %l_ankle    
    P.d6/2	0   	0   	0   0   0   2       0.2   0.002   0.002   0.2   0.002   0.2;  %l_foot     
    0   	0   	P.d2/2	0   0   0   0.5     0.1   0.001   0.001   0.1   0.001   0.1;  %r_hipgimbal
    P.d3/2	0   	0   	0   0   0   1       0.1   0.001   0.001   0.1   0.001   0.1;  %r_glute    
    0   	-P.d4/2	0   	0   0   0   3       0.3   0.003   0.003   0.3   0.003   0.3;  %r_thigh    
    0   	-P.d5/2 0   	0   0   0   3       0.3   0.003   0.003   0.3   0.003   0.3;  %r_shin     
    0   	0   	0   	0   0   0   0.5     0.1   0.001   0.001   0.1   0.001   0.1;  %r_ankle    
    P.d6/2	0   	0   	0   0   0   2       0.2   0.002   0.002   0.2   0.002   0.2]; %r_foot   


%% Contact point Information
CNCTPTS = [
    %Body ID    px     py       pz
    7          P.d6   P.La    P.Lb;
    7          P.d6  -P.La    P.Lb;
    7          P.d6   P.La   -P.Lb;
    7          P.d6  -P.La   -P.Lb;
    13          P.d6   P.La    P.Lb;
    13          P.d6  -P.La    P.Lb;
    13          P.d6   P.La   -P.Lb;
    13          P.d6  -P.La   -P.Lb;
    7          P.d6   0       0 ;
    13          P.d6   0       0];

%% Visuals for Each Link
Visuals.Type = [
 %UseSTL	UseBox  UseCylinder	UseAutoBox  ChildID	AddJointCylinder
	1		0		0			0			0		1; %pelvis     
	1		0		0			0			0		1; %l_hipgimbal
	1		0		0			0			0		1; %l_glute    
	1		0		0			0			0		1; %l_thigh    
	1		0		0			0			0		1; %l_shin     
	1		0		0			0			0		1; %l_ankle    
	1		0		0			0			0		1; %l_foot     
	1		0		0			0			0		1; %r_hipgimbal
	1		0		0			0			0		1; %r_glute    
	1		0		0			0			0		1; %r_thigh    
	1		0		0			0			0		1; %r_shin     
	1		0		0			0			0		1; %r_ankle    
	1		0		0			0			0		1]; %r_foot       
Visuals.JointCylinderLength = 0.04;
Visuals.JointCylinderRadius = 0.015;

%STL fileNames
Visuals.STLFileNames = {
    'Hip_Assembly.stl'
    'Cross_Gimble.stl'
    'Thigh_Top_Left_Ass.stl'
    'Thigh_Left_Assembly.stl'
    'Left_Shin_Assembly.stl'
    'Legs_Ankle_CrossGimbal2.stl'
    'Left_Foot_Assembly.stl'
    'Cross_Gimble.stl'
    'Thigh_Right_Top_Bracket.stl'
    'Thigh_Right_Assembly.stl'
    'Right_Shin_Assembly.stl'
    'Legs_Ankle_CrossGimbal2.stl'
    'Right_Foot_Assembly.stl'
    };

%Displacement to be applied to all the points in the STL file such that
%the origin of the stl file matches the origin of the joint Coordinates
%Then the RPY rotation to be in the joint coordinates
%   note, the sdf reader in java also does translation and then rotation
Visuals.STL_KINE = [
    %pRx	pRy		pRz		VisRoll VisPitch	VisYaw			LinkName
	0       0   	-231.7	0       0			90			; %pelvis     
    0       -6  	-8		90      0       	0       	; %l_hipgimbal
    -120     3  	43.5	-90     0       	90       	; %l_glute    
    -120     0  	100		0       90       	90        	; %l_thigh    
    -1      -25 	0		-90     0       	-4.5       	; %l_shin     
    0       0   	-6		90      0        	0        	; %l_ankle    
    -120    6   	980		-90     0           90       	; %l_foot     
    0       -6  	-8		-90     0       	0       	; %r_hipgimbal
    120     -2  	44		90      0       	-90       	; %r_glute    
    120     0   	100		0       90       	90        	; %r_thigh    
    -1      -25 	0		-90     0       	-4.5       	; %r_shin     
    0       0   	-6		90      0        	0        	; %r_ankle    
    120     6   	980		90      0           -90       	];%r_foot
%Scaling to apply to meshes to have output in m
Visuals.STL_scale = 0.001;

Visuals.BOX = [
    %sizex	sizey	sizez	vpx     vpy         vpz         vproll	vppitch	vpyaw	name
    0		0		0		0		0			0			0		0		0	;%pelvis     
    0		0		0		0		0			0			0		0		0	;%l_hipgimbal
    0		0		0		0		0			0			0		0		0	;%l_glute    
    0		0		0		0		0			0			0		0		0	;%l_thigh    
    0		0		0		0		0			0			0		0		0	;%l_shin     
    0		0		0		0		0			0			0		0		0	;%l_ankle    
    0		0		0		0		0			0			0		0		0	;%l_foot     
    0		0		0		0		0			0			0		0		0	;%r_hipgimbal
    0		0		0		0		0			0			0		0		0	;%r_glute    
    0		0		0		0		0			0			0		0		0	;%r_thigh    
    0		0		0		0		0			0			0		0		0	;%r_shin     
    0		0		0		0		0			0			0		0		0	;%r_ankle    
    0		0		0		0		0			0			0		0		0	];%r_foot

Visuals.CYLINDER = [
    %length	radius	vpx     vpy     vpz      vproll	vppitch	vpyaw	name
    ];

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
