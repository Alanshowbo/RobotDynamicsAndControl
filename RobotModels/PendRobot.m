%Function that inputs matrices that define a robot model, and creates two
%Robot structures, RobotLinks (size NB), and RobotParam (containing parameters). 

%Each link in RobotLinks has the following fields:
%   - mass:    mass of the link (kg)
%   - I_MAT:   3D mass inertia matrix (kg*m^2), defined about link COM in link Coordinates
%   - I_MAT_spatial:   6D spatial mass inertia matrix (kg*m^2), defined about link COM in link Coordinates
%   - pi_r_i:  position of origin  of link frame in the parent link frame (m)
%   - pi_R0_i: Default/Initial Rotation Matrix from link frame to parent frame
%   - i_rCOM_i:   Position of link COM in link frame (m)
%   - jtype:   Type of joint: 1=Revolute
%   - PARENTi:  number label of parent joint
%   - i_X0_pi: Default/Initial Spatial transformation matrix from parent frame to link frame 
%   - NC:      Number of contact points on the link
%   - Pc_i:    3D contact points on link, in link coordinates [3xNC]
%   - ic:      vector of link number labels for the contact points

%RobotParam has the following fields:
%   - NB:        number of links in the robot
%   - n:         number of degrees of freedom/generalized variables
%   - m:         number of system inputs
%   - TotalMass: TotalMass of the Robot
%   - i_DI_i:    Diagonal matrix of Inertia matrices for robot
%   - c:         number of contact points on robot
%   - ic:        vector of link number labels for all contact points
%   - Pci:       positions of contact points in their body frames

function [RobotLinks, RobotParam] = PendRobot(PARAMS, PARENTi, KINE, INER, CNCTPTS)
    % Helper Functions
    Rxd = @ (theta) [1 0 0 ; 0 cosd(theta) -sind(theta); 0 sind(theta) cosd(theta)];
    Ryd = @ (theta) [cosd(theta) 0 sind(theta); 0 1 0 ; -sind(theta) 0 cosd(theta)];
    Rzd = @ (theta) [cosd(theta) -sind(theta) 0; sind(theta) cosd(theta) 0; 0 0 1];
    % Set up robot
    NB = size(INER,1); %number of joint variables
    for i = 1:NB
        %get jointNumber for the link
        j = i;
        %Load Link Values from Matrices
        RobotLinks(j).mass = INER(j,end-6); 
        inertia = INER(j,end-5:end);
        RobotLinks(j).I_MAT = [inertia(1:3); inertia(2) inertia(4:5); inertia(3) inertia(5) inertia(6)]; 
        RobotLinks(j).pi_r_i = KINE(j,1:3)'; 
        RobotLinks(j).pi_R0_i = Rzd(KINE(j,4))*Ryd(KINE(j,5))*Rxd(KINE(j,6)); 
        RobotLinks(j).i_rCOM_i = INER(j,2:4)'; 
        RobotLinks(j).jtype = PARAMS.jtype(j); 
        RobotLinks(j).PARENTi = PARENTi(j); 
        %Spatial Transforms
        RobotLinks(j).i_X0_pi = STconstructor_SpatialTransform(RobotLinks(j).pi_R0_i',RobotLinks(j).pi_r_i);
        RobotLinks(j).I_MAT_spatial = STconstructor_SpatialInertia(RobotLinks(j).I_MAT,RobotLinks(j).mass,RobotLinks(j).i_rCOM_i);
        %Set Contact Points on this link
        RobotLinks(j).Pc_i = [];
        for c = 1:size(CNCTPTS,1)
            if CNCTPTS(c,1) == j
                RobotLinks(j).Pc_i = [RobotLinks(j).Pc_i CNCTPTS(c,2:4)'];
            end
        end
        RobotLinks(j).NC = size(RobotLinks(j).Pc_i,2); 
        RobotLinks(j).ic = ones((RobotLinks(j).NC>0),RobotLinks(j).NC)*j;
    end 
    
    %Robot Details
    RobotParam.i_DI_i = zeros(6*NB);
    spots = @(i) [6*i-5:6*i];
    for i = 1:NB
        RobotParam.i_DI_i(spots(i),spots(i)) = RobotLinks(i).I_MAT_spatial;
    end
    RobotParam.TotalMass = sum([RobotLinks.mass]);
    RobotParam.NB = NB;
    RobotParam.m = PARAMS.m;
    RobotParam.n = PARAMS.n;
    RobotParam.N = PARAMS.N;
    RobotParam.c = PARAMS.c;
    RobotParam.ic = CNCTPTS(:,1)';
    RobotParam.Pci = CNCTPTS(:,2:4)';
end