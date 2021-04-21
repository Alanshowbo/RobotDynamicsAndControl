clear
clc
format compact
close all
warning('off', 'optim:quadprog:HessianNotSym')

%Two header files for functions
% SimFun_DCMTrajectory_e

tic
%% System
[P, PARENT, KINE, INER] = PendParams();
g = P.g; %m/s^2

mTot = P.mTot;
fc = 0.7;

n = P.n; %# of states
m = P.m; %# of inputs
c = P.c; %number of contact points

%% Simulation
%parameters
dt = 0.0001;
t_fin = 3;

t_vec = 0:dt:t_fin;
q = zeros(n,length(t_vec));
dq = zeros(n,length(t_vec));
ddq = zeros(n,length(t_vec));
u =  zeros(m,length(t_vec));

%Initial Conditions
q(:,1) = [-0.4 0.2 0]';
% q(:,1) = [0 0 0]';
dq(:,1) = zeros(n,1);

%DCM reference
DCM_des = [0.05 0.025 -0.25]';
dDCM_des = [0 0 0]';

controllerHz = 100;
errInteg = [0;0;0];
ddzCOM = 0;

%Desired trajectory
% Tstep = 2;
% disc_t = 0.005;
% ZMP_f = 0.9;
% [DCM_des,dDCM_des,ref_t_vec] = DCMRefTrajGen(q(:,1),dq(:,1),ddq(:,1),params,ZMP_f,Tstep,disc_t);

% set constraints
qlow = q(:,1)*0 - 90;
qhigh = dq(:,1)*0 + 180;
ulim = 500;

%set up GRF
% GRF = zeros(3,length(t_vec),c); %3D x length(t_vec) x #of contact points
% d = zeros(2,length(t_vec),c);   %#of translational dimensions x length(t_vec) x #of contact points 
for i = 1:c
    FC(i).GRF = zeros(3,length(t_vec));
    FC(i).d = zeros(2,length(t_vec));
end

%Simulate - Euler
k = 0;
kft = zeros(1,length(t_vec));

Ctrl_Trig = 1/(controllerHz*dt);
Ctrl_Count = Ctrl_Trig;
for i = 1:length(t_vec)-1
    
    %State Machine
    State = 'DS';
    
    %Controller
    Ctrl_Count = Ctrl_Count + 1;
    if Ctrl_Count>=Ctrl_Trig
        k = k+1;
%         [minval,argval] = min(abs(ref_t_vec - t_vec(i)));
%         [u(:,i),errInteg,xopt(:,k),rVRP(:,k),hd_des(:,k)] = ...
%             ControlLaw(q(:,i),dq(:,i),DCM_des(:,argval),dDCM_des(:,argval),params,errInteg);

        [u(:,i),errInteg,xopt(:,k),rVRP(:,k),hd_des(:,k)] = ...
            SimFun_Control_e(q(:,i),dq(:,i),DCM_des,dDCM_des,P,mTot,fc,errInteg,qlow,qhigh,ulim);
        tfk(k) = i;
        Ctrl_Count = 0;
    else
        u(:,i) = u(:,i-1);
    end
%     rft(i) = argval; %r is iterator for reference trajectory
    kft(i) = k; %k is iterator for controller
    
    %Calculate GRF
%     if i == 1;   ddq_curr = zeros(n,1)';
%     else         ddq_curr = ddq(:,i-1);
%     end
%     FC = SimFun_GRF_comp_e(q(:,i),dq(:,i),ddq_curr,i,FC,dt);
%     JC = gen2__e_Jc(q(:,i));
%     FF = zeros(3*c,1);
%     JJC = zeros(n,3*c);
%     for ic = 1:c
%         FF(((ic-1)*3+1):3*ic,1) = FC(ic).GRF(:,i);
%         JJC(:,((ic-1)*3+1):3*ic) = JC(:,((ic-1)*n+1):n*ic)';
%     end
    
    
    %Simulate Dynamics
    B = gen2__e_B(q(:,i));
    Cdq = gen2__e_Cdq(q(:,i),dq(:,i));
    D = gen2__e_D(q(:,i));
    G = gen2__e_G(q(:,i));
    ddq(:,i) = D\((-Cdq - G) + B*u(:,i));% + JJC*FF);
    
    q(:,i+1) = q(:,i) + dt*dq(:,i);
    dq(:,i+1) = dq(:,i) + dt*ddq(:,i);

    %GRF
%     qe = [0;0;q(:,i)];  dqe = [0;0;dq(:,i)];
%     Ja = gen2_Ja(qe);  De = gen_D(qe);  Be = gen_B(qe);
%     He = gen_Cdq(qe,dqe) + gen_G(qe);
%     Soln = [De -Ja'; Ja zeros(2,2)]\[Be*u(:,i)-He; zeros(2,1)];
%     GRF_ank(:,i) = Soln(end-1:end,1);

    
    
    
end
u(:,i+1) = u(:,i);
% GRF_ank(:,i+1) = GRF_ank(:,i);
toc
%% Recreate Points
for ii = 1:i+1
%     Points = gen2__e_pO(q(:,ii));
%     dPoints = gen2__e_vO(q(:,ii),dq(:,ii));
%     ddPoints = gen2__e_ddPoints(q(:,ii),dq(:,ii),ddq(:,ii));
    
%     summer = [0 0 0]';
%     for j = 1:c
%         summer = summer + GRF(:,ii,j);
%     end
%     sumGRF(:,ii) = summer;
    
    pCOM(:,ii) = gen2__e_pCOM_Tot(q(:,ii));
    zCOM = pCOM(3,ii);
    vCOM(:,ii) = gen2__e_vCOM_Tot(q(:,ii),dq(:,ii));
    nat_freq = sqrt(P.g/zCOM);
    DCM(:,ii) = pCOM(:,ii) + vCOM(:,ii)/nat_freq;
    dnat_freq = -(sqrt(P.g)/2)* vCOM(3,ii)*zCOM^(-1.5); %**** Correct?
    w2mdw = nat_freq^2 - dnat_freq;
%     reCMP(:,ii) = pCOM(:,ii) - sumGRF(:,ii)/(mTot*w2mdw);
%     gamma = zCOM/sumGRF(2,ii);
%     rCMP(:,ii) = pCOM(:,ii) - gamma*GRF(:,ii);
    
    Acmm = gen2__e_Acmm(q(:,ii));
    Acmm_dot = gen2__e_Acmm_dot(q(:,ii),dq(:,ii));
    dh = Acmm_dot*dq(:,ii) + Acmm*ddq(:,ii);
%     rZMP(:,ii) = rCMP(:,ii) - [dh(3)/(mTot*(params(2)+ddPoints(2,3))) 0]';
end
save('SimTempWorkspace.mat')

%Check Momentum
% for kk = 1:k
%     Pts = gen_Points(q(:,tfk(kk)),params);
%     Wc = [1 0 1 0; 0 1 0 1; Pts(2,3) -(Pts(1,3)-params(6)/2) Pts(2,3) -(Pts(1,3)+params(6)/2)];
%     mTot = m1+m2;
%     Wg = [0 -mTot*params(2) 0]';
%     Acmm = gen_Acmm(q(:,tfk(kk)),params);
%     Acmm_dot = gen_Acmm_dot(q(:,tfk(kk)),dq(:,tfk(kk)),params);
%     Beta_c = gen_e_Basis_c([q(:,tfk(kk));0;0],params);
%     check(:,kk) = -Acmm_dot*dq(:,tfk(kk)) - Acmm*ddq(:,tfk(kk)) + Wc*Beta_c*xopt(3:6,kk) + Wg; %centroidal dynamics
%     check2(:,kk) = GRF(:,tfk(kk))-[1 0 1 0; 0 1 0 1]*Beta_c*xopt(3:6,kk); %GRF equality
%     check3(:,kk) = [hd_des(:,kk); 0; Acmm_dot*dq(:,tfk(kk))+Acmm*ddq(:,tfk(kk)); 0; Wc*Beta_c*xopt(3:6,kk)+Wg]; %hd_des, and hd_real
%     check4(:,kk) = xopt(1:2,kk) - ddq(:,tfk(kk));
% end

%% Animate



tic
screensize = get(0,'Screensize');    figwidth = 800;
% figxpos = screensize(3)-100-figwidth; %one screen
figxpos = 100;%screensize(3)+100; % two screens

% legend plot
h2 = figure('Name','Legend','Position',[figxpos+180 300 figwidth 800]);
hold on
legendlist = {}; ii = 1;
plotPoint(pCOM(:,ii),'r.');     legendlist = {legendlist{:} 'COM'};
plotPoint(DCM(:,ii),'b.');     legendlist = {legendlist{:} 'DCM'};
plotPoint(DCM_des,'ko');     legendlist = {legendlist{:} 'DCM_des'};
plotPoint(rVRP(:,kft(ii)),'g.');     legendlist = {legendlist{:} 'rVRP'};

legend(legendlist,'location','eastoutside')

%Simulate Plot
h = figure('Name','Sim Exo','Position',[figxpos 300 figwidth 800]);
az = 20; el = 25;
xlims = [-.2,.3];    ylims = [-0.15,0.15];    zlims = [-.6,.6];

fps = 51;



for ii = 1:round(1/(fps*dt)):length(t_vec)
    
    clf
    hold on 
    grid on 
    axis equal
    light('Position',[1 1 3],'Style','infinite')
    lighting GOURAUD
    view([az,el])
    xlim(xlims);   ylim(ylims);   zlim(zlims);   
    xlabel('x'); ylabel('y'); zlabel('z') 
    % lighting flat
    
    %Plot points of interest
    plotPoint(pCOM(:,ii),'r.');     
    plotPoint(DCM(:,ii),'b.');
    plotPoint(DCM_des,'ko');
    plotPoint(rVRP(:,kft(ii)),'g.');
    
    %Plot lines for robot body
    %number of coordinate system i at the beginning and end of every link
    PlotLinkPoints = [1 2; %beginning
                      2 3]; %end
    pO = gen2__e_pO(q(:,ii));
    for i = 1:size(PlotLinkPoints,2)
        xpts(1:2,i) = [pO(1,PlotLinkPoints(1,i)); pO(1,PlotLinkPoints(2,i))];
        ypts(1:2,i) = [pO(2,PlotLinkPoints(1,i)); pO(2,PlotLinkPoints(2,i))];
        zpts(1:2,i) = [pO(3,PlotLinkPoints(1,i)); pO(3,PlotLinkPoints(2,i))];
    end
    line(xpts,ypts,zpts,'LineWidth',3,'Color',[0 0 0]); %Matlab RGB Triplets
    
    %Foot Polygons
    Pc = gen2__e_Pc(q(:,ii));
    Pc_top = gen2__e_Pc_top(q(:,ii));
    Pc_top = Pc + [0 0 0.01]';
    %Left Foot
    xpts_f(1:8,1) = [Pc(1,1:4)'; Pc_top(1,1:4)'];
    ypts_f(1:8,1) = [Pc(2,1:4)'; Pc_top(2,1:4)'];
    zpts_f(1:8,1) = [Pc(3,1:4)'; Pc_top(3,1:4)'];
    fill3(xpts_f,ypts_f,zpts_f,[0 0 1]) 
    
%     legend(legendlist)
    title(sprintf('time = %.2f',t_vec(ii)))
    drawnow
end

     
%     %Plot GRF direction
%     grf = GRF(:,ii);
%     sc_grf = 0.1*grf/norm(grf);
%     sc_grf_p_zmp = sc_grf+rZMP(:,ii);
%     plot(sc_grf_p_zmp(1),sc_grf_p_zmp(2),'r^')
%     plot([rZMP(1,ii) sc_grf_p_zmp(1)],[rZMP(2,ii) sc_grf_p_zmp(2)],'r-')
    
toc
%% Plot
figure(21)
subplot(311)
    plot(t_vec,q); 
    grid on
    xlabel('Time (sec)'); ylabel('Joint Angles (rad)'); 
    title('Joint Angles')
    legend('q_1','q_2','q_3')
subplot(312)
    plot(t_vec,dq); 
    grid on
    xlabel('Time (sec)'); ylabel('dq (rad/s)'); 
    title('dq')
    legend('dq_1','dq_2','dq_3')
subplot(313)
    plot(t_vec,u); 
    grid on
    xlabel('Time (sec)'); ylabel('Input (Nm)'); 
    title('Input Torques')
    legend('\tau_1','\tau_2','\tau_3')
%     ylim([-400 400])
% subplot(313)
%     plot(t_vec,GRF); 
%     grid on
%     xlabel('Time (sec)'); ylabel('GRF (N)'); 
%     title('GRF')
%     legend('F_G_R_F_x','F_G_R_F_y')
%     ylim([-1000 1000])

figure(21)
subplot(311)
    plot(t_vec,pCOM(1,:),t_vec,vCOM(1,:)); 
    grid on
    xlabel('Time (sec)'); ylabel('x'); 
    title('x')
    legend('pCOM','vCOM')
subplot(312)
    plot(t_vec,pCOM(2,:),t_vec,vCOM(2,:)); 
    grid on
    xlabel('Time (sec)'); ylabel('y'); 
    title('y')
    legend('pCOM','vCOM')
subplot(313)
    plot(t_vec,pCOM(3,:),t_vec,vCOM(3,:)); 
    grid on
    xlabel('Time (sec)'); ylabel('z'); 
    title('z')
    legend('pCOM','vCOM')

function plotPoint(vec,color)
    plot3(vec(1),vec(2),vec(3),color);
end
    