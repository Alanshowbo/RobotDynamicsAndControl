clc ;
clear;
format compact;

%% instead of how you're doing it, I usually do symbolic math like this:

%we have some system with three joint variables - define them as symbolic
%variables themselves (I think its simpler)
syms th1 th2 th3 real
%and their derivatives
syms dth1 dth2 dth3 real
syms ddth1 ddth2 ddth3 real
%which we compile into two vectors
%q - is a column vector of the joint variables
q = [th1 th2 th3]';
%dq - is a column vector of the joint velocities
dq = [dth1 dth2 dth3]';
ddq = [ddth1 ddth2 ddth3]';

%now if we have some value that is a function of the joint variables, like
%the position (x,y,z) and orientation (gamma_x, gamma_y, gamma_z) of some
%point
px = (15*cos(th2) + 10*sin(th2)*sin(th3))*cos(th1);
py = (15*cos(th2) + 10*sin(th2)*sin(th3))*sin(th1);
pz = 40 + 15*sin(th2) + 10*cos(th2)*cos(th3);
gx = th3*cos(th2)*cos(th1);
gy = th3*cos(th2)*sin(th1);
gz = th1 + th3*sin(th2);
%and we'll compile this into one vector
Pi = [px py pz gx gy gz]';

Vi = jacobian(Pi,q)*dq;
Ji = jacobian(Vi,[q;dq]);

ddt = @(SomeVector) jacobian(SomeVector,[q;dq])*[dq;ddq];


