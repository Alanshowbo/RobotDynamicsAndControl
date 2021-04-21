%Function that calculates the state of the robot in the current frams.
%Outputs a structure RobotFrame with the following values
%   - S:       Motion space of joint, stacked for each joint
%   - i_X_pi:   Spatial transformation from parent frame to body frame, stacked for each joint
%   - pi_X_i:   Spatial transformation from body frame to parent frame, stacked for each joint
%   - O_X_i:    Spatial transformation from body frame to World/Base frame, stacked for each joint
%   - O_p_COM:  Position of Center of mass
%   - O_p_COMi: Position of Center of mass of each body, stacked for each joint
%   - O_p_i:    Position of origin of Body Frame in Base coordinates, stacked for each joint
%   - O_p_c:    Position of each Contact Point of the robot, all points stacked
%   - O_p_Pc:   Position of Contact Points in BASE frame, stacked for each Joint
%   - Jc:       Jacobian of Contact Points
%   - Ji:       System Jacobian of velicities of body frame 

function RobotFrame = Frame_calc(RobotLinks,RobotParam,q)
    %Helper Functions
    Rz = @ (theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
    Pos_3D = @(X,r) [1 0 0 0; 0 1 0 0; 0 0 1 0]*STfun_T_from_X(X)*[r; 1];
    
    %Parameters
    NB = RobotParam.NB;
    N = RobotParam.N;
    
    %Initialize Values
    RobotFrame.S = zeros(6*NB,N);
    RobotFrame.i_X_pi = zeros(6*NB,6);
    RobotFrame.pi_X_i = zeros(6*NB,6);
    RobotFrame.O_DX_i = zeros(6*NB,6*NB); %larger matrix for use in calculations
    RobotFrame.i_X_O = zeros(6*NB,6); %stacked matrix for use in calculations
    RobotFrame.O_p_COM = zeros(3,1);
    RobotFrame.O_p_COMi = zeros(3*NB,1);
    RobotFrame.O_p_i = zeros(3*NB,1);
    RobotFrame.O_p_Pc = zeros(3*RobotParam.c,1);
    RobotFrame.Jc = zeros(3*RobotParam.c,RobotParam.n);
    RobotFrame.P = eye(6*NB);
    RobotFrame.P_dual = eye(6*NB);
    
    Si_offset = 0;
    
    for i = 1:RobotParam.NB
        j = RobotLinks(i).PARENTi;
        spots = [6*i-5:6*i];
        Parent_spots = [6*j-5:6*j];
        
        
        %Joint space Matrix
        jtype = 1;
        if jtype == 1 %revolute
            RobotFrame.S(spots,i+Si_offset) = [0 0 1 0 0 0]';
        elseif jtype == 6 %floating Base Jointx
            RobotFrame.S(spots,i+Si_offset:(i+Si_offset+5)) = eye(6);
            Si_offset = Si_offset + 5;
        end
        
        %Spatial Transformations
        RobotFrame.i_X_pi(spots,:) = STconstructor_SpatialTransform((RobotLinks(i).pi_R0_i*Rz(q(i)))',RobotLinks(i).pi_r_i);
        RobotFrame.pi_X_i(spots,:) = inv(RobotFrame.i_X_pi(spots,:));
        if j == 0
            RobotFrame.O_DX_i(spots,spots) = RobotFrame.pi_X_i(spots,:);
            RobotFrame.i_X_O(spots,:) = RobotFrame.i_X_pi(spots,:);
        else
            RobotFrame.O_DX_i(spots,spots) = RobotFrame.O_DX_i(Parent_spots,Parent_spots)*RobotFrame.pi_X_i(spots,:);
            RobotFrame.i_X_O(spots,:) = RobotFrame.i_X_pi(spots,:)*RobotFrame.i_X_O(Parent_spots,:);
        end
        
        %Build P
        if j ~= 0 %Grab the row of parent joint and multiply by i_X_pi
            Rowi = RobotFrame.P(spots,:);
            Rowj = RobotFrame.P(Parent_spots,:);
            RobotFrame.P(spots,:) = Rowi+ RobotFrame.i_X_pi(spots,:)*Rowj;
        end
        
        %finding Position of origin of body frames in BASE frame
        RobotFrame.O_p_i(3*i-2:3*i,:) = Pos_3D(RobotFrame.O_DX_i(spots,spots),[0; 0; 0]);
        
        %finding COM
        RobotFrame.O_p_COMi(3*i-2:3*i,:) = Pos_3D(RobotFrame.O_DX_i(spots,spots),RobotLinks(i).i_rCOM_i);
        RobotFrame.O_p_COM = RobotFrame.O_p_COM + RobotFrame.O_p_COMi(3*i-2:3*i,:)*RobotLinks(i).mass;
    end
    RobotFrame.O_p_COM = RobotFrame.O_p_COM/RobotParam.TotalMass;
    %Transpose Pnt
    RobotFrame.P_dual = RobotFrame.P';
    
    
    %finding Positions of Contact Points in BASE frame
    O_DX_ci = zeros(6*RobotParam.c,6*RobotParam.c);
    ci_DX_i = zeros(6*RobotParam.c,6*NB);
    i_DX_ci = zeros(6*NB,6*RobotParam.c);
    for c = 1:RobotParam.c
        ic = RobotParam.ic(c);
        spots_ic = [6*ic-5:6*ic];
        spots_c = [6*c-5:6*c];
        i_p_ci = RobotParam.Pci(:,c);
        RobotFrame.O_p_Pc(3*c-2:3*c,:) = Pos_3D(RobotFrame.O_DX_i(spots_ic,spots_ic),i_p_ci);
        ci_X_i = STconstructor_SpatialTransform(eye(3),i_p_ci);
        ci_DX_i(spots_c,spots_ic) = ci_X_i;
        i_DX_ci(spots_ic,spots_c) = inv(ci_X_i);
        
        O_DX_ci(spots_c,spots_c) = RobotFrame.O_DX_i(spots_ic,spots_ic);
        
    end
    
    RobotFrame.Ji = RobotFrame.P * RobotFrame.S;
    
    %Offset Identity matrix that extracts linear velocity from spatial velocity
    ZI = zeros(3*NB,6*NB); 
    for i = 1:NB
        spots = [6*i-5:6*i];
        ZI(3*i-2:3*i,spots(4:6)) = eye(3);
    end
    
    %Offset Identity matrix that extracts linear velocity from spatial velocity
    ZIc = zeros(3*c,6*c); 
    for i = 1:c
        spots = [6*i-5:6*i];
        ZIc(3*i-2:3*i,spots(4:6)) = eye(3);
    end
    
    O_DR_i = ZI*RobotFrame.O_DX_i*ZI';
    O_DR_Ci = ZIc*O_DX_ci*ZIc';
    
    RobotFrame.O_DX_ci = O_DX_ci;
    Jctry = ZIc*O_DX_ci*ci_DX_i*RobotFrame.Ji;
    RobotFrame.Jc = O_DR_Ci*ZIc*ci_DX_i*RobotFrame.Ji;
    
    RobotFrame.ZIc = ZIc;
    RobotFrame.i_DX_ci = i_DX_ci;
    RobotFrame.ci_DX_i = ci_DX_i;
    
    
    
    
end
    