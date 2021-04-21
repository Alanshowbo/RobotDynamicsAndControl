% /**
% * Computes the joint transformation matrices based on current joint
% *  variable value. Gives Vector basis of joint motion space and dynamic
% *  values derived from this spaace.
% *
% * @return i_X_pi - Spatial Transformation from parent frame to this
% * @return pi_X_i - Spatial Transformation from this frame to parent
% * @return Si - Vector basis of joint motion space
% * @return vj - Si*qd_i
% * @return cj - dSi*qd_i
% * @param Link - Current Link from the Robot Data Structure
% * @param q_i - joint angle for this joint at the current time
% * @param qd_i - joint velocity for this joint at the current time
% */

function [i_X_pi,pi_X_i,Si,vj,cj] = jcalc(Link,q_i,qd_i)
    jtype = 1;
    if jtype == 1 %revolute
        Si = [0 0 1 0 0 0]';
    end
    vj = Si*qd_i;
    cj = [0 0 0 0 0 0]';
    
    Rz = @ (theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
    %Rotation: X0 = ST(pi_R0_i',pi_r_i), Xdiff = ST(Rz(q_i)',[000]')
    %          Xcurr = Xdiff*X0
    i_X_pi = SpatialTransform(Rz(q_i)',[0 0 0]')*Link.i_X0_pi;
    i_X_pi2 = SpatialTransform((Link.pi_R0_i*Rz(q_i))',Link.pi_r_i);
    pi_X_i = inv(i_X_pi);
    
    
%     pi_E_i = Link.pi_R0_i*Rz(q_i);
%     i_E_pi = pi_E_i';
%     pi_r_i = Link.pi_r_i;
%     i_X_pi = SpatialTransform(i_E_pi,pi_r_i);
%     i_r_pi = -pi_E_i'*pi_r_i;
%     pi_X_i = SpatialTransform(pi_E_i,i_r_pi);
end