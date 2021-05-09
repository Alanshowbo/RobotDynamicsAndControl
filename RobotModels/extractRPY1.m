clear
clc
%%
Rx = @(theta) [1 0 0 ; 0 cos(theta) -sin(theta); 0 sin(theta) cos(theta)];
Ry = @(theta) [cos(theta) 0 sin(theta); 0 1 0 ; -sin(theta) 0 cos(theta)];
Rz = @(theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
Rxyz = @(xyz) Rz(xyz(3))*Ry(xyz(2))*Rx(xyz(1));

%% first checking
xyz =rand(1,3)*pi - 1

%% Check all combinations of pi and -pi
possibilities = [-pi -pi/2 0 pi/2 pi];
xyz = [0 -pi/2 pi]
syms thx thy thz
xyz = [thx pi/2 thz]
xyz = [.025 pi/2 1.3]
R_ = Rxyz(xyz)
RPY = extractRPY_(R_)

% Gives a problem for thz and thx if sin(thy) = 1 because then cos(thy)
% will always be 0

function RPY = extractRPY_(Rin)
if (Rin(3,1)==1)||(Rin(3,1)==-1)
    %Then problem is redundant and can be represented as thx = 0, thz != 0
    thy = -Rin(3,1)*pi/2;
    thx = 0;
    thz = atan2(Rin(2,3),Rin(2,2));
else
    thz = atan2(Rin(2,1),Rin(1,1));
    thx = atan2(Rin(3,2),Rin(3,3));
    thy = atan2(-Rin(3,1),sqrt(Rin(3,2)^2+Rin(3,3)^2));
end
RPY = [thx thy thz];
end