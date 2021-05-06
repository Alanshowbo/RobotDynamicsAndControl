clear
clc
%%

Rxd = @ (theta) [1 0 0 ; 0 cosd(theta) -sind(theta); 0 sind(theta) cosd(theta)];
Ryd = @ (theta) [cosd(theta) 0 sind(theta); 0 1 0 ; -sind(theta) 0 cosd(theta)];
Rzd = @ (theta) [cosd(theta) -sind(theta) 0; sind(theta) cosd(theta) 0; 0 0 1];
Rxyz = @ (xyz) Rzd(xyz(3))*Ryd(xyz(2))*Rxd(xyz(1));

xyz =[ 90 -90 90]; 
R_ = Rxyz(xyz);
RPY = extractRPY_(R_)

function RPY = extractRPY_(Rin)
Rxd = @ (theta) [1 0 0 ; 0 cosd(theta) -sind(theta); 0 sind(theta) cosd(theta)];
Ryd = @ (theta) [cosd(theta) 0 sind(theta); 0 1 0 ; -sind(theta) 0 cosd(theta)];
Rzd = @ (theta) [cosd(theta) -sind(theta) 0; sind(theta) cosd(theta) 0; 0 0 1];
Rxyz = @ (xyz) Rzd(xyz(3))*Ryd(xyz(2))*Rxd(xyz(1));
LB = [-180 -180 -180]';
UB = [180 180 180]';
RPY = fmincon(@(X) norm(Rin - Rxyz(X))^2,[90;90;90],[],[],[],[],LB,UB)
x=1;
end