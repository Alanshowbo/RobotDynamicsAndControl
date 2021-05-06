clc
clear
%TODO: Add sensors, look in guardianxo and atlas files
%TODO: 

%% Load Robot
ATHENARobotParameters

%% Robot Parameters


[RobotLinks, RobotParam] = PendRobot(P, PARENT, KINE, INER, CNCTPTS);
q = zeros(18,1);
RobotFrame = DynFun_Frame_calc(RobotLinks,RobotParam,q);
robotPose = '0 0 0.93 0 0 0';

for i = 1:P.NB
    spots = [6*i-5:6*i];
    O_X_i = RobotFrame.O_DX_i(spots,spots);
    O_R_i = O_X_i(1:3,1:3);
    joint_RPY(i,:) = extractRPY_deg(O_R_i);
end

%% Open File
ind0 = '';
ind1 = '    ';
ind2 = [ind1 ind1];
ind3 = [ind2 ind1];
ind4 = [ind3 ind1];
ind5 = [ind4 ind1];

fid = fopen([P.RobotName '_' P.VersionName '_robot.sdf'],'wt');

printSDFLine = @(ind_,line) fprintf(fid, [ind_ line '\n']);

printSDFLine(ind0,'<?xml version="1.0" encoding="UTF-8" standalone="yes"?>');
printSDFLine(ind0,'<sdf version="1.5">');
printSDFLine(ind1,['<model name="' P.RobotName '_' P.VersionName '">']);

%% Print Joints
for i = 1:P.NB
    jointName = NAMES{i,2};
    if isempty(jointName)
        continue;
    end
    printSDFLine(ind2,['<joint name="' jointName '" type="' NAMES{i,3} '">']);
    printSDFLine(ind3,'<axis>');
        printSDFLine(ind4,'<dynamics>');
            printSDFLine(ind5,['<damping>' num2str(JointParams(i,1)) '</damping>']);
            printSDFLine(ind5,['<friction>' num2str(JointParams(i,2)) '</friction>']);
        printSDFLine(ind4,'</dynamics>');
        printSDFLine(ind4,'<limit>');
            printSDFLine(ind5,['<effort>' num2str(JointLimits(i,3)) '</effort>']);
            printSDFLine(ind5,['<lower>' num2str(JointLimits(i,1)) '</lower>']);
            printSDFLine(ind5,['<upper>' num2str(JointLimits(i,2)) '</upper>']);
            printSDFLine(ind5,['<velocity>' num2str(JointLimits(i,4)) '</velocity>']);
        printSDFLine(ind4,'</limit>');
        printSDFLine(ind4,['<xyz>' num2str(JointAxis(i,1)) ' ' num2str(JointAxis(i,2)) ' ' num2str(JointAxis(i,3)) '</xyz>']);
    printSDFLine(ind3,'</axis>');
    printSDFLine(ind3,['<child>' NAMES{i,1} '</child>']);
    printSDFLine(ind3,['<parent>' NAMES{PARENT(i),1} '</parent>']);
    printSDFLine(ind2,'</joint>');
end

%% Print Links
for i = 1:P.NB
    LinkName = NAMES{i,1};
    printSDFLine(ind2,['<link name="' LinkName '">']);
    printSDFLine(ind3,'<inertial>');
        printSDFLine(ind4,'<inertia>');
            printSDFLine(ind5,['<ixx>' num2str(INER(i,8)) '</ixx>']);
            printSDFLine(ind5,['<ixy>' num2str(INER(i,9)) '</ixy>']);
            printSDFLine(ind5,['<ixz>' num2str(INER(i,10)) '</ixz>']);
            printSDFLine(ind5,['<iyy>' num2str(INER(i,11)) '</iyy>']);
            printSDFLine(ind5,['<iyz>' num2str(INER(i,12)) '</iyz>']);
            printSDFLine(ind5,['<izz>' num2str(INER(i,13)) '</izz>']);
        printSDFLine(ind4,'</inertia>');
        printSDFLine(ind4,['<mass>' num2str(INER(i,7)) '</xyz>']);
        printSDFLine(ind4,['<pose>' num2str(JointAxis(i,1)) ' ' num2str(JointAxis(i,2)) ' ' num2str(JointAxis(i,3)) '</pose>']);
    printSDFLine(ind3,'</inertial>');
    printSDFLine(ind2,'</joint>');
end

%% Close file
printSDFLine(ind2,['<pose>' robotPose '</pose>']);
printSDFLine(ind1,'</model>');
printSDFLine(ind0,'</sdf>');


fclose(fid);

%% Print file to command line
fid = fopen([P.RobotName '_' P.VersionName '_robot.sdf'],'r');
notComplete = 0;
while notComplete == 0
   line = fgetl(fid);
   if line == -1
       notComplete = 1;
   else
       disp(line)
   end
end

%% Rotation Matrix function
function RPY = extractRPY(Rin)
thz = atan2(Rin(2,1),Rin(1,1));
thx = atan2(Rin(3,2),Rin(3,3));
thy = atan2(-Rin(3,1),sqrt(Rin(3,2)^2+Rin(3,3)^2));
RPY = [thx thy thz];
end

function RPY = extractRPY_deg(Rin)
thz = atan2(Rin(2,1),Rin(1,1));
thx = atan2(Rin(3,2),Rin(3,3));
thy = atan2(-Rin(3,1),sqrt(Rin(3,2)^2+Rin(3,3)^2));
conv = 180/pi;
RPY = [thx*conv thy*conv thz*conv];
end