
tic
screensize = get(0,'Screensize');    figwidth = 800;
% figxpos = screensize(3)-100-figwidth; %one screen
figxpos = 100;%screensize(3)+100; % two screens

% legend plot
h2 = figure('Name','Legend','Position',[figxpos+180 0 figwidth 800]);
hold on
legendlist = {}; ii = 1;
plotPoint(pCOM(:,ii),'r.');     legendlist = {legendlist{:} 'COM'};
plotPoint(DCM(:,ii),'b.');     legendlist = {legendlist{:} 'DCM'};
plotPoint(DCM_des,'ko');     legendlist = {legendlist{:} 'DCM_des'};
plotPoint(rVRP(:,k_at_i(ii)),'g.');     legendlist = {legendlist{:} 'rVRP'};

legend(legendlist,'location','eastoutside')

%Simulate Plot
h = figure('Name','Sim Exo','Position',[figxpos 0 figwidth 800]);
az = 20; el = 25;
xlims = [-.2,.3];    ylims = [-0.2,0.2];    zlims = [-.1,.6];


BB_OpenAnimationCapture

for ii = 1:round(1/(fps*Simulation_dt)):length(t_vec)-1
    
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
    plotPoint(rVRP(:,k_at_i(ii)),'g.');
    
    %Foot Polygons
    Pc = gen3_Pc(q(:,ii));
%     Pc_top = gen3_Pc_top(q(:,ii));
    
    Pfoot = [Pc(:,1) Pc(:,2) Pc(:,4) Pc(:,3) Pc(:,1)]; 
    Pc_top = Pc + [0 0 0.01]';
    %Left Foot
    xpts_f(1:5,1) = [Pfoot(1,1:5)'];%; Pc_top(1,1:4)'];
    ypts_f(1:5,1) = [Pfoot(2,1:5)'];%; Pc_top(2,1:4)'];
    zpts_f(1:5,1) = [Pfoot(3,1:5)'];%; Pc_top(3,1:4)'];
    fill3(xpts_f,ypts_f,zpts_f,[0 0 1]) 
    
    %Plot lines for robot body
    %number of coordinate system i at the beginning and end of every link
    PlotLinkPoints = [2 3; %beginning
                      3 4]; %end
    pO = [gen3_pO(q(:,ii)) Pc(:,5)];
    
    for i = 1:size(PlotLinkPoints,2)
        xpts(1:2,i) = [pO(1,PlotLinkPoints(1,i)); pO(1,PlotLinkPoints(2,i))];
        ypts(1:2,i) = [pO(2,PlotLinkPoints(1,i)); pO(2,PlotLinkPoints(2,i))];
        zpts(1:2,i) = [pO(3,PlotLinkPoints(1,i)); pO(3,PlotLinkPoints(2,i))];
    end
    line(xpts,ypts,zpts,'LineWidth',3,'Color',[0 0 0]); %Matlab RGB Triplets
    
    %     h.Children.Children
    if HipCheck
        plot3(Hip_des(1,:),Hip_des(2,:),Hip_des(3,:),'k--')
    else
        enddd = floor(length(DCM_des)/3);
        plot3(DCM_des(1,1:enddd),DCM_des(2,1:enddd),DCM_des(3,1:enddd),'k--')
    end
%     legend(legendlist)
    title(sprintf('Incorrect Mass, DCM Tracking, time = %.2f',t_vec(ii)))
    drawnow
    BB_CaptureAnimationFrame
end
BB_CloseAnimationCapture

     
%     %Plot GRF direction
%     grf = GRF(:,ii);
%     sc_grf = 0.1*grf/norm(grf);
%     sc_grf_p_zmp = sc_grf+rZMP(:,ii);
%     plot(sc_grf_p_zmp(1),sc_grf_p_zmp(2),'r^')
%     plot([rZMP(1,ii) sc_grf_p_zmp(1)],[rZMP(2,ii) sc_grf_p_zmp(2)],'r-')
    
toc

function plotPoint(vec,color)
    plot3(vec(1),vec(2),vec(3),color);
end