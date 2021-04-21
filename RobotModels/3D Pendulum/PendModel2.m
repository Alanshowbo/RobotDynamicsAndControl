function [P, PARENT, KINE, INER, CNCTPTS] = PendModel2()
% Parameters (all in mm)
    P.LT = .100;     P.Lh = .200;     P.Lt = .250;     P.Ls = .250;
    P.Lf = .150;     P.Lw = .100;     P.La = .050;     P.Lb = .050;      P.Lc = .010;   
    P.g = 9.8;
    % Transformations from one joint to its proximal joint (proximal)^T_(distal)
    KINE =[...%[m   m    m   deg  deg  deg]
              %[px  py   pz  Rz   Ry   Rx]
                0   0    0   0    90  0;    %AR
                0   0    0   90  -90  0;    %AP
                0   P.Ls 0   0    0   0];   %KP
    %number of coordinate system that is proximal of this coord
    PARENT = [0 1 2];
    % Mass and Inertial Properties for each link
    INER =[...%[kg     m       m          m               kg*m^2 ..........                      ]
              %[m      pCoMx   pCoMy      pCoMz           Ixx    Ixy     Ixz     Iyy     Iyz     Izz ] 
                0      0       0          0               0      0       0        0      0         0;  %dummy (would be foot)
                7      0       P.Ls/2     0               .19     0.00    0.00    .71     0.00     1.9;  %shin
                57     0       3*P.Lt/4   0               .19     0.00    0.00    .71     0.00     1.9];  %thigh
    % Location of contact points in the rigid body system
    CNCTPTS = [...%Body ID    px   py    pz
                  1           P.Lc P.La  (P.Lf-P.Lb);
                  1           P.Lc -P.La (P.Lf-P.Lb);
                  1           P.Lc P.La  -P.Lb;
                  1           P.Lc -P.La -P.Lb
                  3           0     P.Lt 0];
                    
    P.mTot = sum(INER(:,1));
    P.NB = 3; %number of Coordinate Systems 
    P.n = 3; %number of joint angles
    P.N = 3; %number of states
    P.m = 3; %number of inputs
    P.c = size(CNCTPTS,1); %number of contact points
end