
%% Variables
q = q;
for i = 1:RobotParam.NB
    %Transform world to part pose 
    Part(i).O_T_i = STfun_T_from_X(RobotFrame.O_DX_i(6*(i-1)+1:6*i,6*(i-1)+1:6*i)); 
    Part(i).fileName = Visuals.STLFileNames{i};
end

%% Fix Part Orientations
Rxd = @ (theta) [1 0 0 ; 0 cosd(theta) -sind(theta); 0 sind(theta) cosd(theta)];
Ryd = @ (theta) [cosd(theta) 0 sind(theta); 0 1 0 ; -sind(theta) 0 cosd(theta)];
Rzd = @ (theta) [cosd(theta) -sind(theta) 0; sind(theta) cosd(theta) 0; 0 0 1];
T = @(R_,d_) [R_ d_; [0 0 0 1]];
% Build transformation from default part coords to joint coords
%First, STL_origin_input is the displacement to apply to all the points to
%move the origin to the proper place on the part
% Rotation Matrix to put part into its joint coordinate system
%Pelvis
i = 1;
Part(i).i_R_pt = Rzd(90);
STL_origin_input = [0 0 -231.7]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%LHipGim
i = 2;
Part(i).i_R_pt = Rxd(90);
STL_origin_input = [0 -6 -8]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%LGlute
i = 3;
Part(i).i_R_pt = Rzd(90)*Rxd(-90);
STL_origin_input = [-120 3 43.5]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%LThigh
i = 4;
Part(i).i_R_pt = Rzd(90)*Ryd(90);
STL_origin_input = [-120 0 100]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%Lshin
i = 5;
Part(i).i_R_pt = Rzd(-4.5)*Rxd(-90);
STL_origin_input = [-1 -25 0]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%LankGim
i = 6;
Part(i).i_R_pt = Rxd(90);
STL_origin_input = [0 0 -6]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%Lfoot
i = 7;
Part(i).i_R_pt = Rzd(90)*Rxd(-90);
STL_origin_input = [-120 6 980]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%RHipGim
i = 8;
Part(i).i_R_pt = Rxd(-90);
STL_origin_input = [0 -6 -8]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%RGlute
i = 9;
Part(i).i_R_pt = Rzd(-90)*Rxd(90);
STL_origin_input = [120 -2 44]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%RThigh
i = 10;
Part(i).i_R_pt = Rzd(90)*Ryd(90);
STL_origin_input = [120 0 100]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%Rshin
i = 11;
Part(i).i_R_pt = Rzd(-4.5)*Rxd(-90);
STL_origin_input = [-1 -25 0]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%RankGim
i = 12;
Part(i).i_R_pt = Rxd(90);
STL_origin_input = [0 0 -6]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;
%Rfoot
i = 13;
Part(i).i_R_pt = Rzd(-90)*Rxd(90);
STL_origin_input = [120 6 980]';
Part(i).i_p_pt = Part(i).i_R_pt*STL_origin_input;



%% Set Up Figure
%Set Ground and view limits 
xlims = [-0.3,0.5];    ylims = [-0.3,0.3];    zlims = [0,1.5];

%Start Film
screensize = get(0,'Screensize');    figwidth = 600;
% figxpos = screensize(3)-100-figwidth; %one screen
figxpos = screensize(3)+100; % two screens

avifile_name = 'ATHENA_POSE';
h = figure('Name',avifile_name);
set(h,'Renderer','zbuffer')
hold on 
plot_xyground(xlims(1),xlims(2),ylims(1),ylims(2))

%% Plot Parts

ATHENAColor = [0.5 0.5 0.5];   ATHENAOpacity = 0.9;

for i = 1:RobotParam.NB
    if isempty(Part(i).fileName)
        continue;
    end
    i_T_p = Part(i).O_T_i*T(Part(i).i_R_pt,Part(i).i_p_pt*0.001);
%     i_T_p = T(Part(i).i_R_pt,Part(i).i_p_pt*0.001);
    PlotPart(Part(i).fileName,i_T_p,ATHENAColor,ATHENAOpacity,0.001);
end
light('Position',[1 1 3],'Style','infinite')
lighting GOURAUD
axis equal
grid on

