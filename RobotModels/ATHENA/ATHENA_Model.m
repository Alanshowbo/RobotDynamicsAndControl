function [P, PARENT, KINE, INER, CNCTPTS] = ATHENA_Model()
    %% m
    d1 = 0.275;     d2 = 0;     d3 = 0.055;     d4 = 0.448;       d5 = 0.435;
    d6 = 0.050;     d7 = 0.119;
    % Transformations from one joint to its proximal joint (proximal)^T_(distal)
    KINE = [
    %[m   m    m   deg  deg  deg]
    %[px  py   pz  Rz   Ry   Rx]
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
            
            
    %number of coordinate system that is proximal of this coord
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

    % Mass and Inertial Properties for each link
    INER = [
    %m  m   m   deg deg deg kg      kg*m^2.....
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

    % Location of contact points in the rigid body system
    CNCTPTS = [...%Body ID    px   py    pz
                  7           -d6  P.La  -d6;
                  7           P.Lc -P.La .Lb);
                  7           P.Lc P.La  -P.Lb;
                  7           P.Lc -P.La -P.Lb
                  3           0     P.Lt 0];
                    
    P.mTot = sum(INER(:,1));
    P.NB = 3; %number of Coordinate Systems 
    P.n = 3; %number of joint angles
    P.N = 3; %number of states
    P.m = 3; %number of inputs
    P.c = size(CNCTPTS,1); %number of contact points
end