function Ih = SpatialInertia(I,m,c)
    %Ih = [I zeros(3,3); zeros(3,3) eye(3)*m];
    Ih = [I-m*S(c)*S(c) m*S(c); -m*S(c) eye(3)*m];
end