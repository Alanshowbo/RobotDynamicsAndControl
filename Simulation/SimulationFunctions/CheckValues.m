
%Check Momentum
for kk = 1:k
    Pts = gen_Points(q(:,tfk(kk)),params);
    Wc = [1 0 1 0; 0 1 0 1; Pts(2,3) -(Pts(1,3)-params(6)/2) Pts(2,3) -(Pts(1,3)+params(6)/2)];
    mTot = m1+m2;
    Wg = [0 -mTot*params(2) 0]';
    Acmm = gen_Acmm(q(:,tfk(kk)),params);
    Acmm_dot = gen_Acmm_dot(q(:,tfk(kk)),dq(:,tfk(kk)),params);
    Beta_c = gen_e_Basis_c([q(:,tfk(kk));0;0],params);
    check(:,kk) = -Acmm_dot*dq(:,tfk(kk)) - Acmm*ddq(:,tfk(kk)) + Wc*Beta_c*xopt(3:6,kk) + Wg; %centroidal dynamics
    check2(:,kk) = GRF(:,tfk(kk))-[1 0 1 0; 0 1 0 1]*Beta_c*xopt(3:6,kk); %GRF equality
    check3(:,kk) = [hd_des(:,kk); 0; Acmm_dot*dq(:,tfk(kk))+Acmm*ddq(:,tfk(kk)); 0; Wc*Beta_c*xopt(3:6,kk)+Wg]; %hd_des, and hd_real
    check4(:,kk) = xopt(1:2,kk) - ddq(:,tfk(kk));
end