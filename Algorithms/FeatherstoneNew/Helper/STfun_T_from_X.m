
function a_T_b = STfun_T_from_X(a_X_b)
    a_R_b = a_X_b(1:3,1:3);
    W = a_X_b(4:6,1:3);
    b_r_a = MATfun_v_from_S(-a_R_b'*W); 
    a_r_b = a_R_b*(-b_r_a);
    a_T_b = [a_R_b a_r_b; 0 0 0 1];
end