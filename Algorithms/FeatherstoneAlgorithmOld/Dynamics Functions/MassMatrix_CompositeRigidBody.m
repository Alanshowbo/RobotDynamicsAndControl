%Composite Rigid Body Algorithm for calculating the Joint-space inertia
%matrix 

function M = MassMatrix_CompositeRigidBody(RobotLinks,RobotParam,q)
    NB = RobotParam.NB;
    n = RobotParam.n;
    M = zeros(n,n);
    %initiate matrices
    i_X_pi = zeros(6,6,NB);     pi_X_i = i_X_pi;    pi_Xdual_i = i_X_pi;    Si = zeros(6,NB);
    %Total Spatial inertia of kinematic sub-tree extending from this joint,
    %initiated as the inertia of just that body (true for the bodies at the
    %end of branches)
    for i = 1:NB
        RobotLinks(i).I_MAT_c = SpatialInertia(RobotLinks(i).I_MAT,RobotLinks(i).mass,RobotLinks(i).i_rCOM_i);
        [i_X_pi(:,:,i),pi_X_i(:,:,i),Si(:,i),~,~] = jcalc(RobotLinks(i),q(i),0);
        pi_Xdual_i(:,:,i) = SpatialTransform_dual(pi_X_i(:,:,i));
    end
    %Add Inertia of Subtree to the parent body for it's subtree
    for i = flip(1:NB)
        if RobotLinks(i).PARENTi ~= 0  
            RobotLinks(RobotLinks(i).PARENTi).I_MAT_c = RobotLinks(RobotLinks(i).PARENTi).I_MAT_c + ...
                pi_Xdual_i(:,:,i)*RobotLinks(i).I_MAT_c*i_X_pi(:,:,i);
        end
        F = RobotLinks(i).I_MAT_c * Si(:,i);
        M(i,i) = Si(:,i)'*F;
        % For each body, iterate from current body back along tree to base
        % to find effect of parent body joint accelerations on current joint acceleration 
        j = i;
        while RobotLinks(j).PARENTi ~= 0
            F = pi_Xdual_i(:,:,j)*F;
            j = RobotLinks(j).PARENTi;
            M(i,j) = F'*Si(:,j);
            M(j,i) = M(i,j)';
        end
    end
end