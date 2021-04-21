%Function to numerically generate a curve that defines the desired zCOM
%trajectory over a step. Here the cureve is given by a 4th order polynomial
%generated with polyfit.

function [zCOM,dzCOM,ddzCOM,t_vec] = SimFun_zCOMRefTrajGen(Tstep,disc_t)
    %p(t) = zCOM
    t_vec = 0-disc_t*2:disc_t:Tstep;
    high = 0.25;
    med = 0.21;
    low = 0.17;
    p = polyfit([0*Tstep 0.25*Tstep 0.5*Tstep 0.75*Tstep 1*Tstep],[high med low med high],4);
    tv = [t_vec.^4; t_vec.^3; t_vec.^2; t_vec; 1+0*t_vec];
    zCOM = p*tv;
    dzCOM = diff(zCOM)/disc_t;
    ddzCOM = diff(dzCOM)/disc_t;
    dzCOM = dzCOM(2:end);
    zCOM = zCOM(3:end);
    t_vec = t_vec(3:end);
end