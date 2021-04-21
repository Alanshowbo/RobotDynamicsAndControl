function [Acmm,hG,IG,vG,O_p_G] = Centroidal_Momentum_Matrix(RobotLinks,RobotParam,q,dq)
    %helping function
    COMi = @(X,ci) [1 0 0 0; 0 1 0 0; 0 0 1 0]*T_from_X(X)*[ci; 1];

    NB = RobotParam.NB;
    n = RobotParam.n;
    %initiate matrices
    i_X_pi = zeros(6,6,NB);     pi_X_i = zeros(6,6,NB);    pi_Xdual_i = i_X_pi;    Si = zeros(6,NB);    
    O_X_i = zeros(6,6,NB);    O_p_G = [0 0 0]';    I_MAT_c0 = zeros(6,6);   i_X_G = zeros(6,6,NB);
    %Total Spatial inertia of kinematic sub-tree extending from this joint,
    %initiated as the inertia of just that body (true for the bodies at the
    %end of branches)
    for i = 1:NB
        RobotLinks(i).I_MAT_c = SpatialInertia(RobotLinks(i).I_MAT,RobotLinks(i).mass,RobotLinks(i).i_rCOM_i);
        [i_X_pi(:,:,i),pi_X_i(:,:,i),Si(:,i),~,~] = jcalc(RobotLinks(i),q(i),0);
        pi_Xdual_i(:,:,i) = SpatialTransform_dual(pi_X_i(:,:,i));
        % tansformations from BASE
        if RobotLinks(i).PARENTi == 0
            O_X_i(:,:,i) = pi_X_i(:,:,i);
        else
            O_X_i(:,:,i) = O_X_i(:,:,RobotLinks(i).PARENTi)*pi_X_i(:,:,i);
        end
        %finding COM
        O_p_G = O_p_G + COMi(O_X_i(:,:,i),RobotLinks(i).i_rCOM_i)*RobotLinks(i).mass;
    end
    O_p_G = O_p_G/sum([RobotLinks.mass]);
    %Add Inertia of Subtree to the parent body for it's subtree
    for i = flip(1:NB)
        if RobotLinks(i).PARENTi ~= 0  
            RobotLinks(RobotLinks(i).PARENTi).I_MAT_c = RobotLinks(RobotLinks(i).PARENTi).I_MAT_c + ...
                pi_Xdual_i(:,:,i)*RobotLinks(i).I_MAT_c*i_X_pi(:,:,i);
        else
            I_MAT_c0 = I_MAT_c0 + pi_Xdual_i(:,:,i)*RobotLinks(i).I_MAT_c*i_X_pi(:,:,i);
        end    
    end
    %Transformation to Center of Mass frame
    O_X_G = SpatialTransform(eye(3),-O_p_G);
    %Recursion to calculate Acmm
    hG = 0;     Acmm = zeros(6,n);
    for i = 1:NB
        if RobotLinks(i).PARENTi == 0
            i_X_G(:,:,i) = i_X_pi(:,:,i)*O_X_G;
        else
            i_X_G(:,:,i) = i_X_pi(:,:,i)*i_X_G(:,:,RobotLinks(i).PARENTi);
        end
        Acmm(:,i) = i_X_G(:,:,i)'*RobotLinks(i).I_MAT_c*Si(:,i);
    end
    hG = Acmm*dq;
    IG = O_X_G'*I_MAT_c0*O_X_G;
    vG = inv(IG)*hG;
end