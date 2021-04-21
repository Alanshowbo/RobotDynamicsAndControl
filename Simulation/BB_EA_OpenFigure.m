

%Make figure Size
screensize = get(0,'Screensize');    
figwidth = screensize(3)/2;
figxpos = figwidth/2;
figheight = screensize(4)/1.5;
figypos = figheight/4;

%Make figure
BB_EA_h = figure('Name','Sim Exo','Position',[figxpos figypos figwidth figheight]);
az = 20; el = 25;
%format
hold on 
grid on 
axis equal
light('Position',[1 1 3],'Style','infinite')
lighting GOURAUD
view([az,el])
xlabel('x'); ylabel('y'); zlabel('z') 
