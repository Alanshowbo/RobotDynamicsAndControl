%Function that calculates the state of the robot in the current frams.
%Outputs a structure RobotFrame with the following values
%   - Si:      Motion space of joint, stacked for each joint
%   - i_X_pi:  Spatial transformation from parent frame to body frame, stacked for each joint
%   - pi_X_i:  Spatial transformation from body frame to parent frame, stacked for each joint
%   - O_X_i:   Spatial transformation from body frame to World/Base frame, stacked for each joint
%   - O_p_G:   Position of Center of mass
%   - O_p_Gi:  Position of Center of mass of each body, stacked for each joint
%   - O_p_i:   Position of origin of Body Frame in Base coordinates, stacked for each joint
%   - O_p_c:   Position of each Contact Point of the robot, all points stacked
%   - O_p_Pc:  Position of Contact Points in BASE frame, stacked for each Joint
%   - Jc:      Jacobian of Contact Points

function RobotFrame = Frame_calc(RobotLinks,RobotParam,q)
    %Helper Functions
    Rx = @ (theta) [1 0 0 ; 0 cos(theta) -sin(theta); 0 sin(theta) cos(theta)];
    Ry = @ (theta) [cos(theta) 0 sin(theta); 0 1 0 ; -sin(theta) 0 cos(theta)];
    Rz = @ (theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
    Pos_3D = @(X,r) [1 0 0 0; 0 1 0 0; 0 0 1 0]*T_from_X(X)*[r; 1];
    %Initialize Values
    NB = RobotParam.NB;
    RobotFrame.Si = zeros(6*NB,1);
    RobotFrame.i_X_pi = zeros(6*NB,6);
    RobotFrame.i_X_pi = zeros(6*NB,6);
    RobotFrame.O_X_i = zeros(6*NB,6);
    RobotFrame.O_p_G = zeros(3,1);
    RobotFrame.O_p_Gi = zeros(3*NB,1);
    RobotFrame.O_p_i = zeros(3*NB,1);
    RobotFrame.O_p_Pc = zeros(3*RobotParam.c,1);
    RobotFrame.Jc = zeros(3*NB,RobotParam.n);
    
    for i = 1:RobotParam.NB
        j = RobotLinks(i).PARENTi;
        %Joint space
        jointRot = eye(3);
        jointDisp = [0;0;0];
        if RobotLinks(i).jtype == 1 %revolute
            RobotFrame.Si(6*i-5:6*i,1) = [0 0 1 0 0 0]';
            jointRot = Rz(q(i));
        elseif RobotLinks(i).jtype == 2 %rev2
            RobotFrame.Si(6*i-5:6*i,1) = [0 1 0 0 0 0]';
            jointRot = Ry(q(i));
        elseif RobotLinks(i).jtype == 3 %rev3
            RobotFrame.Si(6*i-5:6*i,1) = [1 0 0 0 0 0]';
            jointRot = Rx(q(i));
        elseif RobotLinks(i).jtype == 4 %linear
            RobotFrame.Si(6*i-5:6*i,1) = [0 0 0 0 0 1]';
            jointDisp = [0 0 q(i)]';
        elseif RobotLinks(i).jtype == 5 %linear2
            RobotFrame.Si(6*i-5:6*i,1) = [0 0 0 0 1 0]';
            jointDisp = [0 q(i) 0]';
        elseif RobotLinks(i).jtype == 6 %linear3
            RobotFrame.Si(6*i-5:6*i,1) = [0 0 0 1 0 0]';
            jointDisp = [q(i) 0 0]';
        end
        %Spatial Transformations
        RobotFrame.i_X_pi(6*i-5:6*i,:) = SpatialTransform((RobotLinks(i).pi_R0_i*jointRot)',RobotLinks(i).pi_r_i+jointDisp);
        RobotFrame.pi_X_i(6*i-5:6*i,:) = inv(RobotFrame.i_X_pi(6*i-5:6*i,:));
        if RobotLinks(i).PARENTi == 0
            RobotFrame.O_X_i(6*i-5:6*i,:) = RobotFrame.pi_X_i(6*i-5:6*i,:);
        else
            RobotFrame.O_X_i(6*i-5:6*i,:) = RobotFrame.O_X_i(6*j-5:6*j,:)*RobotFrame.pi_X_i(6*i-5:6*i,:);
        end
        %finding Position of origin of body frames in BASE frame
        RobotFrame.O_p_i(3*i-2:3*i,:) = Pos_3D(RobotFrame.O_X_i(6*i-5:6*i,:),[0; 0; 0]);
        %finding COM
        RobotFrame.O_p_Gi(3*i-2:3*i,:) = Pos_3D(RobotFrame.O_X_i(6*i-5:6*i,:),RobotLinks(i).i_rCOM_i);
        RobotFrame.O_p_G = RobotFrame.O_p_G + RobotFrame.O_p_Gi(3*i-2:3*i,:)*RobotLinks(i).mass;
    end
    RobotFrame.O_p_G = RobotFrame.O_p_G/RobotParam.TotalMass;
    %finding Positions of Contact Points in BASE frame
    for i = 1:RobotParam.c
        FrameNum = RobotParam.ic(i);
        RobotFrame.O_p_Pc(3*i-2:3*i,:) = Pos_3D(RobotFrame.O_X_i(6*FrameNum-5:6*FrameNum,:),RobotParam.Pci(:,i));
    end
    %finding Jacobians of Contact Points in BASE frame - Differential Jacobian approach
    for j = 1:NB %iterate along columns of Jacobians
        dq = zeros(NB,1);
        dq(j) = 1;
        i_v_i = zeros(6,NB);
        for i = 1:NB %iterate to calculate velocities recursively
            if i == 1
                pi_v_pi= zeros(6,1);
            else
                pi_v_pi = i_v_i(:,RobotLinks(i).PARENTi);
            end
            i_v_i(:,i) = RobotFrame.i_X_pi(6*i-5:6*i,:)*pi_v_pi + RobotFrame.Si(6*i-5:6*i,1)*dq(i);
        end
        for c = 1:RobotParam.c %Iterate to fill out the jth column of each Jacobian
            i = RobotParam.ic(c);
            i_p_ci = RobotParam.Pci(:,c);
            ci_X_i = SpatialTransform(eye(3),i_p_ci);
            i_v_ci =  ci_X_i*i_v_i(:,i);
            O_v_ci = RobotFrame.O_X_i(6*i-2:6*i,4:6)*i_v_ci(4:6,1);
            RobotFrame.Jc(3*c-2:3*c,j) = O_v_ci;
        end
    end
        
    
    
end
    