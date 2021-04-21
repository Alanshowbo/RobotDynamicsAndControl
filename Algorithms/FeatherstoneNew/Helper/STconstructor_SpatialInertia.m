function Ih = STconstructor_SpatialInertia(I,m,c)
    %Ih = [I zeros(3,3); zeros(3,3) eye(3)*m];
    Ih = [I-m*VECfun_S(c)*VECfun_S(c) m*VECfun_S(c); -m*VECfun_S(c) eye(3)*m];
end