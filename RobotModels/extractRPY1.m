clear
clc
%%
Rx = @(theta) [1 0 0 ; 0 cos(theta) -sin(theta); 0 sin(theta) cos(theta)];
Ry = @(theta) [cos(theta) 0 sin(theta); 0 1 0 ; -sin(theta) 0 cos(theta)];
Rz = @(theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
Rxyz = @(xyz) Rz(xyz(3))*Ry(xyz(2))*Rx(xyz(1));

xyz =rand(1,3)*2 - 1
R_ = Rxyz(xyz);
RPY = extractRPY_(R_)

function RPY = extractRPY_(Rin)
thz = atan2(Rin(2,1),Rin(1,1));
thx = atan2(Rin(3,2),Rin(3,3));
thy = atan2(-Rin(3,1),sqrt(Rin(3,2)^2+Rin(3,3)^2));
RPY = [thx thy thz];
end