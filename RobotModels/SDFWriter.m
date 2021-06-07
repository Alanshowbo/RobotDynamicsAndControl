clc
clear
%TODO: Add sensors, look in guardianxo and atlas files
%use i for iteration of links, j for iteration of joints

%% Load Robot

ATHENARobotParameters


%% Robot Parameters
[RobotLinks, RobotParam] = ProcessRobot(jointNames, linkNames, P, KINE, INER, CNCTPTS);
q = zeros(18,1); %zero positon of Robot
RobotFrame = DynFun_Frame_calc(RobotLinks,RobotParam,q);
robotPose = '0 0 0.93 0 0 0';

%Extract RPY and position from world to each joint
for i = 1:P.NB
    spots = [6*i-5:6*i];
    O_X_i = RobotFrame.O_DX_i(spots,spots);
    O_R_i = O_X_i(1:3,1:3);
    linksJoint_RPY(i,:) = extractRPY_deg(O_R_i);
    linksJoint_O_p_i(i,:) = RobotFrame.O_p_i(3*i-2:3*i,1)';
end
jointParentLinkID = RobotParam.jointParentLinkID;
jointChildLinkID = RobotParam.jointChildLinkID;


%% Open File
ind0 = '';
ind1 = '    ';
ind2 = [ind1 ind1];
ind3 = [ind2 ind1];
ind4 = [ind3 ind1];
ind5 = [ind4 ind1];
ind6 = [ind5 ind1];

fileLocation = ['C:\repos\repository-group\trec-robotics-software\trec-robot-models\src\main\resources\models\' ...
            P.RobotName '_model\'];
fid = fopen([fileLocation P.RobotName '_' P.VersionName '_robot.sdf'],'wt');

printSDFLine = @(ind_,line) fprintf(fid, [ind_ line '\n']);

printSDFLine(ind0,'<?xml version="1.0" encoding="UTF-8" standalone="yes"?>');
printSDFLine(ind0,'<sdf version="1.5">');
printSDFLine(ind1,['<model name="' P.RobotName '_' P.VersionName '">']);

%% Print Joints
for j = 1:P.n
    jointName = jointNames{j,2};
    switch P.jtype(j)
        case 1
            jtypeName = 'revolute';
        case 2
            jtypeName = 'revolute';
        case 3
            jtypeName = 'revolute';
        case 4
            jtypeName = 'prismatic';
        case 5
            jtypeName = 'prismatic';
        case 6
            jtypeName = 'prismatic';
    end
    if isempty(jointName)
        continue;
    end
    printSDFLine(ind2,['<joint name="' jointName '" type="' jtypeName '">']);
    printSDFLine(ind3,'<axis>');
        printSDFLine(ind4,'<dynamics>');
            printSDFLine(ind5,['<damping>' num2str(JointParams(j,1)) '</damping>']);
            printSDFLine(ind5,['<friction>' num2str(JointParams(j,2)) '</friction>']);
        printSDFLine(ind4,'</dynamics>');
        printSDFLine(ind4,'<limit>');
            printSDFLine(ind5,['<effort>' num2str(JointLimits(j,3)) '</effort>']);
            printSDFLine(ind5,['<lower>' num2str(JointLimits(j,1)) '</lower>']);
            printSDFLine(ind5,['<upper>' num2str(JointLimits(j,2)) '</upper>']);
            printSDFLine(ind5,['<velocity>' num2str(JointLimits(j,4)) '</velocity>']);
        printSDFLine(ind4,'</limit>');
        printSDFLine(ind4,['<xyz>' num2str(JointAxis(j,1)) ' ' num2str(JointAxis(j,2)) ' ' num2str(JointAxis(j,3)) '</xyz>']);
    printSDFLine(ind3,'</axis>');
    printSDFLine(ind3,['<child>' linkNames{jointChildLinkID(j),2} '</child>']);
    printSDFLine(ind3,['<parent>' linkNames{jointParentLinkID(j),2} '</parent>']);
    printSDFLine(ind2,'</joint>');
end

%% Print Links
%inertial and visual poses are defined in relation to the link frame
%Link pose is defined in relation to the world frame
for i = 1:P.NB
    LinkName = linkNames{i,2};
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
        printSDFLine(ind4,['<pose>' num2str(INER(i,1)) ' ' num2str(INER(i,2)) ' ' num2str(INER(i,3)) ...
            ' ' num2str(INER(i,4)) ' ' num2str(INER(i,5)) ' ' num2str(INER(i,6)) '</pose>']);
    printSDFLine(ind3,'</inertial>');
    printSDFLine(ind3,['<pose>' num2str(linksJoint_O_p_i(i,1)) ' ' num2str(linksJoint_O_p_i(i,2)) ' ' num2str(linksJoint_O_p_i(i,3)) ...
            ' ' num2str(linksJoint_RPY(i,1)) ' ' num2str(linksJoint_RPY(i,2)) ' ' num2str(linksJoint_RPY(i,3)) '</pose>']);
    
    if (Visuals.Type(i,1)==1)
        stlPos = Visuals.STL_KINE(i,1:3)*Visuals.STL_scale;
        stlPRY = flip(Visuals.STL_KINE(i,4:6));
        printSDFLine(ind3,['<visual name="' LinkName '_visual_mesh">']);
            printSDFLine(ind4,'<geometry>');
                printSDFLine(ind5,'<mesh>');
                printSDFLine(ind6,['<scale>' num2str(Visuals.STL_scale) ' ' num2str(Visuals.STL_scale) ' ' num2str(Visuals.STL_scale) '</scale>']);
                printSDFLine(ind6,['<uri>model://meshFiles/' Visuals.STLFileNames{i,1} '</uri>']);
                printSDFLine(ind5,'</mesh>');
            printSDFLine(ind4,'</geometry>');
            printSDFLine(ind4,['<pose>' num2str(stlPos(1)) ' ' num2str(stlPos(2)) ' ' num2str(stlPos(3)) ...
            ' ' num2str(stlPRY(1)) ' ' num2str(stlPRY(2)) ' ' num2str(stlPRY(3)) '</pose>']);
        printSDFLine(ind3,'</visual>');
    end
        
    printSDFLine(ind2,'</link>');
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
if (Rin(3,1)==1)||(Rin(3,1)==-1)
    %Then problem is redundant and can be represented as thx = 0, thz != 0
    thy = -Rin(3,1)*pi/2;
    thx = 0;
    thz = atan2(Rin(2,3),Rin(2,2));
else
    thz = atan2(Rin(2,1),Rin(1,1));
    thx = atan2(Rin(3,2),Rin(3,3));
    thy = atan2(-Rin(3,1),sqrt(Rin(3,2)^2+Rin(3,3)^2));
end
RPY = [thx thy thz];
end

function RPY = extractRPY_deg(Rin)
if (Rin(3,1)==1)||(Rin(3,1)==-1)
    %Then problem is redundant and can be represented as thx = 0, thz != 0
    thy = -Rin(3,1)*pi/2;
    thx = 0;
    thz = atan2(Rin(2,3),Rin(2,2));
else
    thz = atan2(Rin(2,1),Rin(1,1));
    thx = atan2(Rin(3,2),Rin(3,3));
    thy = atan2(-Rin(3,1),sqrt(Rin(3,2)^2+Rin(3,3)^2));
end
conv = 180/pi;
RPY = [thx*conv thy*conv thz*conv];
end