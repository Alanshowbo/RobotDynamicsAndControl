function PlotPart(fname,TrMat,PartColor,PartOpacity,scalar)
%File that reads in an stl file plots it
% fname - location and name of the stl file to load
% TrMat - transformation matrix from world to pose to set origin of stl file in
% PartColor - string with name of color or [R G B] numbers
% PartOpacity - number 0-1 that determines opacity of part
% scalar - scales the stl part during loading
    RotMat = TrMat(1:3,1:3);
    Disp = TrMat(1:3,4);
    TR = stlread(fname);
    NewPoints1 = TR.Points.*scalar;
    NewPoints = (RotMat*NewPoints1')+Disp;
    TR2 = triangulation(TR.ConnectivityList,NewPoints');
%     PlotJustThis(NewPoints)
    trisurf(TR2,'FaceColor',PartColor,'FaceAlpha',PartOpacity,'EdgeColor','none')
end

function PlotJustThis(Points)
    h = figure(11);
    plot3(Points(1,:)',Points(2,:)',Points(3,:)')
    grid on
    hold on
    axis equal
    plot_sphere(0.005,[0,0,0]','red')
    xlabel('x')
    ylabel('y')
    zlabel('z')
    close(h)
end