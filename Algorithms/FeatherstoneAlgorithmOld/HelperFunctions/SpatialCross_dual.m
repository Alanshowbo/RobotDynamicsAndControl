function vx_d = SpatialCross_dual(v)
    vx_d = [S(v(1:3,1)) S(v(4:6,1));
            zeros(3,3)  S(v(1:3,1))];
end