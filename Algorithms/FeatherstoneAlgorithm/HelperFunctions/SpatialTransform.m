%Creates a Spatial transformation matrix
%  pi_X_i = [ pi_E_i            0
%            -pi_E_i*S(i_r_pi)  pi_E_i];
function X = SpatialTransform(E,r)
%     rotE = [E zeros(3,3); zeros(3,3) E];
%     xltr = [eye(3) zeros(3,3); -S(r) eye(3)];
%     X = rotE*xltr;
    X = [E zeros(3,3); -E*S(r) E];
end