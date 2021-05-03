clear
clc
close all

%% Animate Robot and subject
% fnameR = 'transformed_parsed_LGait_02_Mar22E.mat';
% fnameS = 'LGait_07_joints_Mar22E.mat';

fnameR = 'tp_P01_Walking2.mat';
fnameS = 'Exo_Normal_Walking_02_joints_P01.mat';

% fnameR = 'tp_P02_LiftingShelf02.mat';
% fnameS = 'Exo_Lifting_Shelf_02_03_joints_P02.mat';

% fnameR = 'tp_P01_LiftingCarryBag01.mat';
% fnameS = 'Exo_Lifting_Carrying_Bag_01_joints_P01.mat';
% fnameS = 'Lifting_Carrying_Bag_01_joints_P01.mat';
tag = 'CAD3side';

MAKE_FILM   = 0;
robot_view  = 'IsoLeft';
% robot_view  = 'Front';

%% Load Data
load(fnameS); timeS = time;
load(fnameR); timeR = Timestamps-4; %Sarcos Data has a 4 ms delay

%Add in the encoder data that was missing in Dec Data
Encoders = [Encoders(1:22,:);  zeros(1,length(timeR));  Encoders(23,:)]; 

%% Prepare figure
%Set Ground and view limits 
xlims = [-25,245];    ylims = [-25,45];    zlims = [0,80];

%Start Film
screensize = get(0,'Screensize');    figwidth = 1200;
% figxpos = screensize(3)-100-figwidth; %one screen
figxpos = screensize(3)+100; % two screens

avifile_name = [fnameR(4:end-4) '_' tag];
h = figure('Name',avifile_name,'Position',[figxpos 30 figwidth 680]);
set(h,'Renderer','zbuffer')

SetRobotView

if(MAKE_FILM)
    mov = VideoWriter(['Videos\',avifile_name]); %,'MPEG-4');
    open(mov);
end 

%% Animate
n = length(timeS);
fps = 5;
tpass = -1/fps;
for j = 1:n
    if (timeS(j)/1000)>=(tpass+1/fps)
        tpass = tpass+1/fps;
        light('Position',[1 1 3],'Style','infinite')
        %lightangle(180,45)
        lighting GOURAUD
%         lighting flat
%         [az,el] = PlotFrameLines(j,timeS,Positions,Orientations,timeR,Encoders,xlims,ylims,zlims,az,el,8);
        [az,el] = PlotFrameCAD(j,timeS,Positions,Orientations,timeR,Encoders,xlims,ylims,zlims,az,el,8,'Lankle_Carry');
        
        if(MAKE_FILM)
            F = getframe(gcf);
            writeVideo(mov,F);
        end 
        clf;
    end
end


% Close AVI file.
if(MAKE_FILM)
    close(mov);
end
