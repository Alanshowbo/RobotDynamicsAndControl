function FC = SimFun_CompliantGroundGRF(q,dq,ddq,icurr,FC,dt)
%Calculated ground reaction forces for each contact point from Compliant
%ground
    

    %Parameters
    lam_a = 9*10^6;
    lam_b = 0.3;
    va = 260;
    vb = 0.6;
    vc = 0.18;
    vd = 0.3;
    ve = 0.285;
    k = 25*10^5;
    n = 1.5;
    
    %Get contact points
    Pc = gen3_Pc(q);
    Pc_dot = gen3_Pc_dot(q,dq);
    Pc_ddot = gen3_Pc_ddot(q,dq,ddq);
    
    c = size(Pc,2);
    
    %Calc Forces
    c=size(Pc,2);
    for i = 1:c
        z = Pc(3,i);
        z_dot = Pc_dot(3,i);
        vx = Pc_dot(1,i);
        vx_dot = Pc_ddot(1,i);
        vy = Pc_dot(2,i);
        vy_dot = Pc_ddot(2,i);
        dx = FC(i).d(1,icurr);
        dy = FC(i).d(2,icurr);
        
        %change in displacement state
        dx_dot = vx - abs(vx)*(va/ve)*dx;
        dy_dot = vy - abs(vy)*(va/ve)*dy;
        
        FC(i).d(1,icurr+1) = dx + dx_dot*dt;
        FC(i).d(2,icurr+1) = dy + dy_dot*dt;
        
        if z <= 0
            Fn = -lam_a*(abs(z)^n)*z_dot - lam_b*(abs(z)^n)*sign(z_dot)*sqrt(abs(z_dot)) + k*(abs(z)^n);
        else
            Fn = 0;
            FC(i).d(1,icurr+1) = 0; %********Idk if this is right
            FC(i).d(2,icurr+1) = 0;
        end
        Ftx = (va*dx + vb*dx_dot + vc*vx + vd*sign(vx_dot)*sqrt(abs(vx)))*abs(Fn);
        Fty = (va*dy + vb*dy_dot + vc*vy + vd*sign(vy_dot)*sqrt(abs(vy)))*abs(Fn);
        FC(i).GRF(:,icurr) = [Fn; Ftx; Fty];
        ThisGRF(:,i) = [Fn; Ftx; Fty];
    end
    ThisGRF;
    
end