function [P, PARENT, KINE, INER] = LegModel()

% Parameters (all in mm)
    P.LT = .100;     P.Lh = .200;     P.Lt = .250;     P.Ls = .250;
    P.Lf = .150;     P.Lw = .100;     P.La = .050;     P.Lb = .050;      P.Lc = .010;   
    P.g = 9.8;
    % Transformations from one joint to its proximal joint (proximal)^T_(distal)
    KINE =[...%[m    m          m   deg  deg  deg]
              %[px   py         pz  Rz   Ry   Rx]
                0   0           0   0    0    0;    %BASE
                0   0       -P.Lt   0    0    90;    %KP
                0   -P.Ls       0   0    0    0;    %AP
                0   0           0   -90   0    -90];   %AR
    %number of coordinate system that is proximal of this coord
    PARENT = [0; 1; 2; 3];
    % Mass and Inertial Properties for each link
    INER =[...%[kg     m       m          m               Nms^2 ..........                      ]
              %[m      pCoMx   pCoMy      pCoMz           Ixx   Ixy    Ixz    Iyy    Iyz    Izz ] 
                4      0       0          -P.Lt/4         .3     0.01    0.01    .3     0.01     .3;  %thigh
                2      0       -P.Ls/2    0               .3     0.01    0.01    .3     0.01     .3;  %shin
                0      0       0          0               0      0       0       0      0         0;  %virtual ankle link
                1      P.Lc/2  0          -P.Lb+P.Lf/2     .3     0.01    0.01    .3     0.01     .3];  %Foot
    for j = 1:size(INER,1)
        P.I_MAT(:,:,j) = [INER(j,5:7); INER(j,6) INER(j,8:9); INER(j,7) INER(j,9) INER(j,10)];
        P.mass(j) = INER(j,1);
        P.pCOM(:,j) = INER(j,2:4)';
    end 
    P.mTot = sum([P.mass]);
    P.n_links = 4; 
    P.n = 3; %number of states
    P.m = 3; %number of inputs
    P.c = 4; %number of contact points
    
end