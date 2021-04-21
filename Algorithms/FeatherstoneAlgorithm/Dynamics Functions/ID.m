function tau = ID(RobotLinks,RobotParam,q,dq,ddq)
    NB = RobotParam.NB;
    n = RobotParam.n;
    %initiate matrices
    i_v_i = zeros(6,NB);
    i_a_i = zeros(6,NB);
    i_f_i = zeros(6,NB);
    i_X_pi = zeros(6,6,NB);
    pi_X_i = zeros(6,6,NB);
    for i = 1:NB
        [i_X_pi(:,:,i),pi_X_i(:,:,i),Si,vj,cj] = jcalc(RobotLinks(i),q(i),dq(i));
        Ih = SpatialInertia(RobotLinks(i).I_MAT,RobotLinks(i).mass,RobotLinks(i).i_c_i);
        % No need for a transformation from world to body coordinate (would
        % be used for external forces)
        %Set Parent Values
        if i == 1
            pi_v_pi= zeros(6,1);
            pi_a_pi = [0 0 0 0 0 9.8]';
 %Note: The gravity term is positive here because it is a ficticious base
 %acceleration that represents the external force of gravity on the system.
 %In the EOM, H*ddq + Cdq + G = B*tau + fext, so when you move the fext of
 %gravity to the LHS then the sign should change
        else
            j = RobotLinks(i).Parent;
            pi_v_pi = i_v_i(:,j);
            pi_a_pi = i_a_i(:,j);
        end
        i_v_i(:,i) = i_X_pi(:,:,i)*pi_v_pi + vj;
        i_a_i(:,i) = i_X_pi(:,:,i)*pi_a_pi + Si*ddq(i) + cj + SpatialCross(i_v_i(:,i))*vj;
        i_f_i(:,i) = Ih*i_a_i(:,i) + SpatialCross_dual(i_v_i(:,i))*Ih*i_v_i(:,i);
    end
    %pass 2
    tau = zeros(n,1);
    for i = flip(1:NB)
        j = RobotLinks(i).Parent;
        tau(i) = Si'*i_f_i(:,i);
        if j ~= 0
            i_f_i(:,j) = i_f_i(:,j) + SpatialTransform_dual(pi_X_i(:,:,i))*i_f_i(:,i);
        end
    end
end

