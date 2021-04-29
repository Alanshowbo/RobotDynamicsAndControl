function [P, PARENT, KINE, INER, CNCTPTS] = ATHENA_Model()
    %% m
    d1 = 0.275;     d2 = 0;     d3 = 0.055;     d4 = 0.448;       d5 = 0.435;
    d6 = 0.050;     d7 = 0.119;
    % Transformations from one joint to its proximal joint (proximal)^T_(distal)
    KINE = [
    %[m   m    m   deg  deg  deg]
    %[px  py   pz  Rz   Ry   Rx]
    0           0           0           0           0           0       ; %Pelvis1
    0           0           0           0           0           0       ; %Pelvis2
    0           0           0           0           0           0       ; %Pelvis3
    0           0           0           0           0           0       ; %Pelvis4
    0           0           0           0           0           0       ; %Pelvis5
    0           0           0           0           0           0       ; %Pelvis6
    0       	d7       	-d1       	0       	0       	0       ; %LHipYaw
    0        	0       	-d2       	0       	90       	0       ; %LHipRoll
    d3         	0       	0       	90        	-90       	0       ; %LHipPitch
    0       	-d4       	0       	0       	0       	0       ; %LKnePitch
    0       	-d5        	0       	0        	0        	0       ; %LAnkPitch
    0         	0       	0       	-90       	0           -90     ; %LAnkRoll
    0       	-d7       	-d1       	0       	0       	180     ; %RHipYaw
    0        	0       	d2       	0       	-90       	0       ; %RHipRoll
    d3         	0       	0       	90        	90       	0       ; %RHipPitch
    0       	0       	-d4     	0       	0       	0       ; %RKnePitch
    0       	0        	-d5     	0        	0        	0       ; %RAnkPitch
    0         	0       	0       	-90       	0           90      ];%RLAnkRoll
            
    P.jtype = [6 5 4 3 2 1 1 1 1 1 1 1 1 1 1 1 1 1]';
    %number of coordinate system that is proximal of this coord
    PARENT = [
    %P  J  Link Name	Parent
    0; %1  BASE
    1; %2  BASE
    2; %3  BASE
    3; %4  BASE
    4; %5  BASE
    5; %6  BASE
    6; %7  LHipYaw      BASE
    7; %8  LHipRoll     LHipYaw
    8; %9  LHipPitch    LHipRoll
    9; %10 LKnePitch    LHipPitch
    10;%11 LAnkPitch    LKnePitch
    11;%12 LAnkRoll     LAnkPitch
    6; %13 RHipYaw      BASE
    13;%14 RHipRoll     RHipYaw
    14;%15 RHipPitch    RHipPitch
    15;%16 RKnePitch    RKnePitch
    16;%17 RAnkPitch    RAnkPitch
    17];%18 RAnkRoll    RAnkRoll

    % Mass and Inertial Properties for each link
    INER = [
    %m  m   m   deg deg deg kg      kg*m^2.....
    %X  Y 	Z   R	P   Y	Mass    Ixx   Ixy    Ixz    Iyy   Iyz	 Izz Link        Joint
    0   0   0   0   0   0   0       0     0.00   0.00   0.0   0.00   0.0;  %Pelvis     
    0   0   0   0   0   0   0       0     0.00   0.00   0.0   0.00   0.0;  %Pelvis     
    0   0   0   0   0   0   0       0     0.00   0.00   0.0   0.00   0.0;  %Pelvis     
    0   0   0   0   0   0   0       0     0.00   0.00   0.0   0.00   0.0;  %Pelvis     
    0   0   0   0   0   0   0       0     0.00   0.00   0.0   0.00   0.0;  %Pelvis     
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

    La = 0.05;  Lb = 0.05;
    % Location of contact points in the rigid body system
    CNCTPTS = [...%Body ID    px   py    pz
                  12          d6   La    Lb;
                  12          d6  -La    Lb;
                  12          d6   La   -Lb;
                  12          d6  -La   -Lb;
                  18         -d6   La    Lb;
                  18         -d6  -La    Lb;
                  18         -d6   La   -Lb;
                  18         -d6  -La   -Lb];
                    
    P.mTot = sum(INER(:,1));
    P.NB = 18; %number of Coordinate Systems 
    P.n = 12; %number of joint angles
    P.N = 18; %number of states
    P.m = 12; %number of inputs
    P.c = size(CNCTPTS,1); %number of contact points
end