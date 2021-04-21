function vx = STfun_SpatialCross(v)
    vx = [VECfun_S(v(1:3,1)) zeros(3,3);
          VECfun_S(v(4:6,1)) VECfun_S(v(1:3,1))];
end