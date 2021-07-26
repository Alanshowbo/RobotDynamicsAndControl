
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

P.RobotName = 'guardianXO';
P.VersionName = 'v1';

%Type of each joint. 1 - revolute about z axis
%                    2 - revolute about y axis
%                    3 - revolute about z axis
%                    4 - prismatic along z axis
%                    5 - prismatic along y axis
%                    6 - prismatic along x axis
%                    0 - floating base
P.jtype = [1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1]';

%% Joint Information
%Name of each joint (numbered 1 to NB-1}
jointNames = {
%JointID#    JointName     ParentJointID#
	1 		'to1_tor_tilt'		0;
	2 		'to2_tor_rota'		1;
	3 		'ra1_sho_abad'		2;
	4 		'ra2_sho_flex'		3;
	5 		'ra3_hum_rota'		4;
	6 		'ra4_elb_flex'		5;
	7 		'ra5_wri_rota'		6;
	8 		'la1_sho_abad'		2;
	9 		'la2_sho_flex'		3;
	10 		'la3_hum_rota'		4;
	11 		'la4_elb_flex'		5;
	12 		'la5_wri_rota'		6;
	13 		'rl1_hip_rota'		0;
	14 		'rl2_hip_abad'		13;
	15 		'rl3_hip_flex'		14;
	16 		'rl4_kne_flex'		15;
	17 		'rl5_cal_rota'		16;
	18 		'rl6_ank_flex'		17;
	19 		'll1_hip_rota'		0;
	20 		'll2_hip_abad'		19;
	21		'll3_hip_flex'		20;
	22 		'll4_kne_flex'		21;
	23 		'll5_cal_rota'		22;
	24 		'll6_ank_flex'		23};
%Each Joint is defined at a coordinate system. These coordinates are defined wrt. the coordinates
%of the parent joint. below is the xyz position of each joint wrt the previous joint coordinates, and the RPY
%of the rotation from the joint coordinates to the parent joint coordinates. parent_R_child = Rz(Y)*Ry(P)*Rz(R)
KINE = [ %Parameterized Positions and Angles in degrees
    %Jnt X   	Jnt Y   	Jnt Z   	Jnt Yaw     Jnt Pitch	Jnt Roll 	JointName
    0       	0       	0       	0       	-1.5708     0       	; %Pelvis
    0.09525 	0       	0       	0       	0       	0       	; %TorsoTilt
    0.2286  	0       	0.060401	-1.5708 	0       	1.5708  	; %TorsoRot
    -0.31433	-0.0097288	-0.036922	-0.87266	0       	3.1416  	; %RShAbAd
    -0.00635	-0.0508 	-0.33884	-1.5708 	-0.7854 	-1.5708  	; %RShFlex
    0.1524  	0.029642	0.030912	0       	1.5708  	0       	; %RHumRot
    -0.00635	0       	0.1892  	-1.5708 	-1.4835 	1.5708  	; %RElbFlex
    0.3429  	-0.006096	-0.042977	0       	1.5708  	0       	; %RWriRot
    0.314325	-0.00972876	-0.0369216	-2.26892803	0       	0       	; %LShAbAd
    -0.00635	-0.0508 	0.338836	1.570796327	0.785398163	-1.57079633	; %LShFlex
    0.1524  	0.0296418	-0.0309118	0       	-1.57079633	0       	; %LHumRot
    -0.00635	0       	-0.1892046	1.570796327	1.483529864	1.570796327	; %LElbFlex
    0.3429  	-0.006096	0.0429768	0       	-1.57079633	0       	; %LWriRot
    0       	-0.09525	0       	-1.5708 	0       	1.5708  	; %RHipRot
    -0.1016 	0       	0       	-1.57079633	0       	3.141592654	; %RHipAbAd
    0.0793242	0       	-0.22225	-1.57079626	0       	-1.57079633	; %RHipFlex
    0.4318  	0       	0       	0       	0       	0       	; %RKneeFlex
    0.1524  	0       	0       	0       	1.570796327	0       	; %RCalfRot
    0       	0       	0.2794   	0       	-1.57079633	0       	; %RAnkFlex
    0       	0.09525 	0       	-1.57079633	0       	-1.57079633	; %LHipRot
    -0.1016 	0       	0       	1.570796327	0       	3.141592654	; %LHipAbAd
    0.0793242	0       	0.22225 	1.570796327	0       	-1.57079633	; %LHipFlex
    0.4318  	0       	0       	0       	0       	0       	; %LKneeFlex
    0.1524  	0       	0       	0       	-1.57079633	0       	; %LCalfRot
    0       	0       	-0.2794 	0       	1.570796327	0       	];%LAnkFlex
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
    0   0   1;
    0   0   1];
%Define the limits of each joint
JointLimits = [
    %lower          upper       effort	velocity
    0               0           0       0;		
    -0.34906585     0.34906585	100     12;
    -0.34906585     0.34906585	100     10;
    -0.174532925	2.094395102	100     12;
    -0.476474886	2.094395102	100     12;
    -1.396263402	0.872664626	100     12;
    0               2.670353756	100     12;
    -1.570796327	1.570796327	100     10;
    -0.174532925	2.094395102	100     12;
    -0.476474886	2.094395102	100     12;
    -1.396263402	0.872664626	100     12;
    0               2.670353756	100     12;
    -1.570796327	1.570796327	100     10;
    -0.261799388	0.523598776	100     12;
    -0.523598776	0.523598776	100     12;
    -0.436332313	2.530727415	100     12;
    -2.181661565	0           100     12;
    -0.785398163	0.785398163	100     12;
    -0.785398163	1.047197551	100     12;
    -0.261799388	0.523598776	100     12;
    -0.523598776	0.523598776	100     12;
    -0.436332313	2.530727415	100     12;
    -2.181661565	0           100     12;
    -0.785398163	0.785398163	100     12;
    -0.785398163	1.047197551	100     12];
%Define dynamic parameters of joint
JointParams = [
%damping   friction   JointName
    0.1		0; 		% to1_tor_tilt
    0.1		0; 		% to2_tor_rota
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
    0.1		0; 		% rl1_hip_rota
    0.1		0; 		% rl2_hip_abad
    0.1 	0; 		% rl3_hip_flex
    0.1		0; 		% rl4_kne_flex
    0.1		0; 		% rl5_cal_rota
    0.1		0; 		% rl6_ank_flex
    0.1		0; 		% ll1_hip_rota
    0.1		0; 		% ll2_hip_abad
    0.1		0; 		% ll3_hip_flex
    0.1 	0; 		% ll4_kne_flex
    0.1		0; 		% ll5_cal_rota
    0.1		0];		% ll6_ank_flex


%% Link Information
%Name of each link (numbered 1 to N)
linkNames = {
%LinkID#	LinkName	AttachedJointID#
	1		'pelvis'	 		0;
	2		'ltorso'			1;
	3		'utorso'    		2;
	4		'r_ushou'    		3;
	5		'r_lshou'    		4;
	6		'r_uarm'    		5;
	7		'r_larm'    		6;
	8		'r_hand'			7;
	9		'l_ushou'    		8;
	10		'l_lshou'    		9;
	11		'l_uarm'    		10;
	12		'l_larm'    		11;
	13		'l_hand'    		12;
    14		'r_glut'	 		13;
	15		'r_hip' 			14;
	16		'r_thigh'    		15;
	17		'r_ucalf'    		16;
	18		'r_lcalf'    		17;
	19		'r_foot'    		18;
	20		'l_glut'    		19;
	21		'l_hip' 			20;
	22		'l_thigh'    		21;
	23		'l_ucalf'    		22;
	24		'l_lcalf'    		23;
	25		'l_foot'            24};
%For Each link a Centroidal Coordinate system is defined. The origin of the coordinate 
%Should be the Center of Mass. The Moment of Inertia matrix is defined in these coordinates. 
INER = [%                   kg      kg*m^2......
    %X       Y          Z           R	P       Y	Mass        Ixx         Ixy         Ixz         Iyy         Iyz         Izz 	LinkName
    0.00115	 0.02425	0.00012 	0	-1.5708	0	12.8142188	0.0868309	 -9.80E-05	-1.40E-06	0.1276831	-0.0193677	0.1270887	; %Pelvis
  0.1193	-0.00024	 0.05482	0	0   	0	6.4709707	0.0105008	-4.47E-05	0.0026378	0.083485	2.70E-06	0.0831262	; %TorsoTilt
-0.00112	-0.01501	-0.10391	0	0   	0	 31.3577	0.531105	0.000923	-0.0007483	 1.18733	-0.0778626	 0.91496	; %TorsoRot
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
-0.051696	-0.020482	-0.004015	0	0   	0	1.6525001	0.009611886	0.000663639	-4.03E-05	0.004775183	1.88E-05	0.008195724	; %RHipRot
 0.06256	-0.00065	-0.05684	0	0   	0	11.9737723	0.115572246	6.62E-05	-0.01929073	0.128580764	0.000614994	0.052472127	; %RHipAbAd
  0.2582	 0.03897	 0.00593	0	0   	0	11.5655453	0.055358405	-0.02765005	-0.00794923	0.197921767	0.002390824	0.230959289	; %RHipFlex
 0.14182	 0.01863	 0.00066	0	0   	0	5.0013195	0.01919108	-0.01258171	-0.00022245	0.035278123	-1.16E-05	0.042713838	; %RKneeFlex
-0.01761	 0.00083	 0.18404	0	0   	0	4.7446023	0.024212145	7.56E-05	0.003257739	0.022566831	2.40E-05	0.011530241	; %RCalfRot
 0.11143	  0.0358	-0.09939	0	0   	0	3.6693865	0.035371068	0.000899751	-0.00669938	0.025373037	-0.00485193	0.032481219	; %RAnkFlex
 -0.0556	-0.01481	  0.0038	0	0   	0	1.6525002	0.009611194	0.00066352	4.04E-05	0.004775196	-1.84E-05	0.008195018	; %LHipRot
 0.06256	-0.00092	 0.05683	0	0   	0	11.9731549	0.115536149	-4.84E-05	0.01929704	0.128555068	-0.00070911	0.052463052	; %LHipAbAd
 0.25783	 0.03881	-0.00593	0	0   	0	11.5655795	0.05564402	-0.02776393	0.00786209	0.198074751	-0.00247136	0.231400218	; %LHipFlex
 0.14183	 0.01872	-0.00041	0	0   	0	5.0017142	0.01917677	-0.01253874	5.57E-05	0.035279423	0.000114001	0.042700758	; %LKneeFlex
-0.01771	  0.0012	-0.18346	0	0   	0	4.7149224	0.023824232	0.00015254	-0.00321614	0.022267761	-0.00019447	0.011414154	; %LCalfRot
 0.10949	 0.03324	 0.09945	0	0   	0	3.6694073	0.034394052	0.001865593	0.006553054	0.027416611	0.004732812	0.033535145]; %LAnkFlex


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
 %UseSTL	UseBox  UseAutoBox  ChildID	AddJointCylinder
	0       1		0           0       1; 	%'pelvis'     
	0       1		0           0       1; 	%'ltorso'     
	0       1		0           0       1; 	%'utorso'      
	0       1		0           0       1; 	%'r_ushou'     
	0       1		0           0       1; 	%'r_lshou'     
	0       1		0           0       1; 	%'r_uarm'      
	0       1		0           0       1; 	%'r_larm'      
	0       1		0           0       1; 	%'r_hand'     
	0       1		0           0       1; 	%'l_ushou'     
	0       1		0           0       1; 	%'l_lshou'     
	0       1		0           0       1; 	%'l_uarm'      
	0       1		0           0       1; 	%'l_larm'      
	0       1		0           0       1; 	%'l_hand'      
	0       1		0           0       1; 	%'r_glut'     
	0       1		0           0       1; 	%'r_hip'      
	0       1		0           0       1; 	%'r_thigh'     
	0       1		0           0       1; 	%'r_ucalf'     
	0       1		0           0       1; 	%'r_lcalf'     
	0       1		0           0       1; 	%'r_foot'      
	0       1		0           0       1; 	%'l_glut'      
	0       1		0           0       1; 	%'l_hip'      
	0       1		0           0       1; 	%'l_thigh'     
	0       1		0           0       1; 	%'l_ucalf'     
	0       1		0           0       1; 	%'l_lcalf'     
	0       1		0           0       1]; %'l_foot'     
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
