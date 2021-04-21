%Define ZMP trajectory based on the current ZMP and the desired final ZMP.
%Here the curve is generated with a 4th order polynomial from polyfit

function [rZMP_x,drZMP_x,ddrZMP_x,rZMP_y,drZMP_y,ddrZMP_y,t_vec] = ZMPRefTrajGen(q,dq,ddq,params,ZMP_f,Tstep,disc_t)
    t_vec = 0-disc_t*2:disc_t:Tstep;
    p = polyfit([0*Tstep 0.25*Tstep 0.5*Tstep 0.75*Tstep 1*Tstep],[0.025 -0.03 0.025 0.08 0.025],4);
    tv = [t_vec.^4; t_vec.^3; t_vec.^2; t_vec; 1+0*t_vec];
    rZMP_x = p*tv;
    drZMP_x = diff(rZMP_x)/disc_t;
    ddrZMP_x = diff(drZMP_x)/disc_t;
    drZMP_x = drZMP_x(2:end);
    rZMP_x = rZMP_x(3:end);
    t_vec = t_vec(3:end);
    
    rZMP_y = rZMP_x*0;
    drZMP_y = drZMP_x*0;
    ddrZMP_y = ddrZMP_x*0;
end