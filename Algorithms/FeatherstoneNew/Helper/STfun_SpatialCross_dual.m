function vx_d = STfun_SpatialCross_dual(v)
    vx_d = [VECfun_S(v(1:3,1)) VECfun_S(v(4:6,1));
            zeros(3,3)  VECfun_S(v(1:3,1))];
end