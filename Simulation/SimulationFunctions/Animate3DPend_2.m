
NB = RobotParam.NB;

tic

%Make figure Size
screensize = get(0,'Screensize');    
figwidth = screensize(3)/2;
figxpos = figwidth/2;
figheight = screensize(4)/1.5;
figypos = figheight/4;

%Make figure
h = figure('Name','Sim Exo','Position',[figxpos figypos figwidth figheight]);
az = 20; el = 25;
%format
hold on 
grid on 
axis equal
light('Position',[1 1 3],'Style','infinite')
lighting GOURAUD
view([az,el])
xlabel('x'); ylabel('y'); zlabel('z') 

xlims = [-.2,.3];    ylims = [-0.2,0.2];    zlims = [-.1,.6];
xlim(xlims);   ylim(ylims);   zlim(zlims);   

%initiate legend
legendlist = {};
legend(legendlist,'location','eastoutside')

ii = 1;                 
%Make h.Children.Children
    %Make Points to update
    %  plot3(pt_x,pt_y,pt_z,color);
    %Update the point 
    %  h.Children(2).Children(i).XData = pt_x;
    %  h.Children(2).Children(i).YData = pt_y;
    %  h.Children(2).Children(i).ZData = pt_z;
    plot3(pCOM(1,ii),pCOM(2,ii),pCOM(3,ii),'r.')
    plot3(DCM(1,ii),DCM(2,ii),DCM(3,ii),'b.')
    plot3(DCM_des(1,1),DCM_des(2,1),DCM_des(3,1),'ko')
    plot3(rVRP(1,k_at_i(ii)),rVRP(2,k_at_i(ii)),rVRP(3,k_at_i(ii)),'g.')
    %Make a shape to fill 
    %  xpts_f - column of x-coordinates of the vertices of the shape in order
    %  ypts_f - column of y-coordinates of the vertices of the shape in order
    %  zpts_f - column of z-coordinates of the vertices of the shape in order
    %  fill3(xpts_f,ypts_f,zpts_f,RGB_Color) - makes one Child that is a patch
    %How to update the fill
    %  CurrVertices = [xpts_f ypts_f zpts_f];
    %  h.Children(2).Children(i).Vertices = CurrVertices;
        Pc = reshape([O_p_PcVEC(1:end-3,ii); O_p_PcVEC(1:3,ii)] ,[3,5]);
        Pfoot = [Pc(:,1) Pc(:,2) Pc(:,4) Pc(:,3) Pc(:,1)];
    fill3(Pfoot(1,1:5)',Pfoot(2,1:5)',Pfoot(3,1:5)',[0 0 1]) % makes one Child that is a patch
    h.Children(2).Children(1).Vertices = Pfoot';
    
    %Make links from lines
    
    for i = 3:NB+1
        pi = i-1;
        plot3([O_p_iVEC(pi*3-2,ii) O_p_iVEC(i*3-2,ii)], ...
              [O_p_iVEC(pi*3-1,ii) O_p_iVEC(i*3-1,ii)], ...
              [O_p_iVEC(pi*3  ,ii) O_p_iVEC(i*3  ,ii)], 'LineWidth',3,'Color',[0 0 0]);
    end
    %Update Links
    link1_CI = 2;
    link2_CI = 1;
    LinkCIs = [0 0 link1_CI link2_CI];
    for i = 3:NB+1
        pi = i-1;
        h.Children(2).Children(LinkCIs(i)).XData = [O_p_iVEC(pi*3-2,ii) O_p_iVEC(i*3-2,ii)];
        h.Children(2).Children(LinkCIs(i)).YData = [O_p_iVEC(pi*3-1,ii) O_p_iVEC(i*3-1,ii)];
        h.Children(2).Children(LinkCIs(i)).ZData = [O_p_iVEC(pi*3  ,ii) O_p_iVEC(i*3  ,ii)];
    end
    
%Plot Trajectory to track
if HipCheck
    plot3(Hip_des(1,:),Hip_des(2,:),Hip_des(3,:),'k--')
else
    enddd = floor(length(DCM_des)/3);
    plot3(DCM_des(1,1:enddd),DCM_des(2,1:enddd),DCM_des(3,1:enddd),'k--')
end

%Assign CI - Child numbers
Light_CI = 9;
COM_CI = 8;
DCM_CI = 7;
DCMdes_CI = 6;
rVRP_CI = 5;
footFill_CI = 4;
link1_CI = 3;
link2_CI = 2;
LinkCIs = [0 0 link1_CI link2_CI];
DesTraj_CI = 1;

%Make legend
legendlist = {legendlist{:} 'COM'};
legendlist = {legendlist{:} 'DCM'};
legendlist = {legendlist{:} 'DCM des'};
legendlist = {legendlist{:} 'rVRP'};
legendlist = {legendlist{:} 'Foot'};
legendlist = {legendlist{:} 'Link 1'};
legendlist = {legendlist{:} 'Link 2'};
legendlist = {legendlist{:} 'Desired Trajectory'};
legend(legendlist,'location','eastoutside')

%% Start Animation
% BB_OpenAnimationCapture

for ii = 1:round(1/(fps*Simulation_dt)):length(t_vec)-1
    
    %Plot points of interest
    h.Children(2).Children(COM_CI).XData = pCOM(1,ii);
    h.Children(2).Children(COM_CI).YData = pCOM(2,ii);
    h.Children(2).Children(COM_CI).ZData = pCOM(3,ii);
    
    h.Children(2).Children(DCM_CI).XData = DCM(1,ii);
    h.Children(2).Children(DCM_CI).YData = DCM(2,ii);
    h.Children(2).Children(DCM_CI).ZData = DCM(3,ii);
    
    h.Children(2).Children(rVRP_CI).XData = rVRP(1,k_at_i(ii));
    h.Children(2).Children(rVRP_CI).YData = rVRP(2,k_at_i(ii));
    h.Children(2).Children(rVRP_CI).ZData = rVRP(3,k_at_i(ii));
    
    %Foot Polygons
    Pc = reshape([O_p_PcVEC(1:end-3,ii); O_p_PcVEC(1:3,ii)] ,[3,5]);
    Pfoot = [Pc(:,1) Pc(:,2) Pc(:,4) Pc(:,3) Pc(:,1)];
    h.Children(2).Children(footFill_CI).Vertices = Pfoot';
    
    %Plot lines for robot body
    for i = 3:NB+1
        pi = i - 1;
        h.Children(2).Children(LinkCIs(i)).XData = [O_p_iVEC(pi*3-2,ii) O_p_iVEC(i*3-2,ii)];
        h.Children(2).Children(LinkCIs(i)).YData = [O_p_iVEC(pi*3-1,ii) O_p_iVEC(i*3-1,ii)];
        h.Children(2).Children(LinkCIs(i)).ZData = [O_p_iVEC(pi*3  ,ii) O_p_iVEC(i*3  ,ii)];
    end
    
    title(sprintf('Incorrect Mass, DCM Tracking, time = %.2f',t_vec(ii)))
    drawnow
%     BB_CaptureAnimationFrame
end
% BB_CloseAnimationCapture

     
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