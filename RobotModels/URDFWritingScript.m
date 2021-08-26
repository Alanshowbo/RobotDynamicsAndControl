
%TODO: Add sensors, look in guardianxo and atlas files
%use i for iteration of links, j for iteration of joints

Rxd = @ (theta) [1 0 0 ; 0 cosd(theta) -sind(theta); 0 sind(theta) cosd(theta)];
Ryd = @ (theta) [cosd(theta) 0 sind(theta); 0 1 0 ; -sind(theta) 0 cosd(theta)];
Rzd = @ (theta) [cosd(theta) -sind(theta) 0; sind(theta) cosd(theta) 0; 0 0 1];

%% Robot Parameters
[RobotLinks, RobotParam] = ProcessRobot(jointNames, linkNames, P, KINE, INER, CNCTPTS);
RobotFrame = DynFun_Frame_calc(RobotLinks,RobotParam,q);
robotPose = [num2str(P.robotPose(1)) ' ' num2str(P.robotPose(2)) ' ' num2str(P.robotPose(3)) ...
            ' ' num2str(P.robotPose(4)*pi/180) ' ' num2str(P.robotPose(5)*pi/180) ' ' num2str(P.robotPose(6)*pi/180)];

%Extract RPY and position from world to each joint
for i = 1:P.NB
    spots = [6*i-5:6*i];
    O_X_i = RobotFrame.O_DX_i(spots,spots);
    O_R_i = O_X_i(1:3,1:3);
    j = linkNames{i,3};
    if j~=0
        globalJointAxes(:,j) = O_R_i*JointAxis(j,:)';
        linksJoint_RPY(i,:) = extractRPY(O_R_i);
        linksJoint_O_p_i(i,:) = RobotFrame.O_p_i(3*i-2:3*i,1)';
    else
        linksJoint_RPY(i,:) = [0 0 0];
        linksJoint_O_p_i(i,:) = [0 0 0];
    end
end
jointParentLinkID = RobotParam.jointParentLinkID;
jointChildLinkID = RobotParam.jointChildLinkID;


%% Open File
ind0 = '';
ind1 = '  ';
ind2 = [ind1 ind1];
ind3 = [ind2 ind1];
ind4 = [ind3 ind1];
ind5 = [ind4 ind1];
ind6 = [ind5 ind1];

fid = fopen([fileLocation P.RobotName '_' P.VersionName '_robot.urdf'],'wt');

printURDFLine = @(ind_,line) fprintf(fid, [ind_ line '\n']);

printURDFLine(ind0,'<?xml version="1.0"?>');
printURDFLine(ind0,['<robot name="' P.RobotName '_' P.VersionName '">']);

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
    printURDFLine(ind1,['<joint name="' jointName '" type="' jtypeName '">']);
    printURDFLine(ind2,['<origin rpy="' num2str(linksJoint_RPY(j,1)) ' ' num2str(linksJoint_RPY(j,2)) ' ' num2str(linksJoint_RPY(j,3)) ...
                              '" xyz="' num2str(linksJoint_O_p_i(j,1)) ' ' num2str(linksJoint_O_p_i(j,2)) ' ' num2str(linksJoint_O_p_i(j,3)) '"/>']);
    printURDFLine(ind2,['<parent link="' linkNames{jointParentLinkID(j),2} '"/>']);
    printURDFLine(ind2,['<child link="' linkNames{jointChildLinkID(j),2} '"/>']);
    printURDFLine(ind2,['<limit effort="' num2str(JointLimits(j,3)) ...
                             '" lower="' num2str(JointLimits(j,1)) ...
                             '" upper="' num2str(JointLimits(j,2)) ...
                             '" velocity="' num2str(JointLimits(j,4)) '"/>']);
    printURDFLine(ind2,['<limit damping="' num2str(JointParams(j,1)) ...
                             '" friction="' num2str(JointParams(j,2))  '"/>']);
    printURDFLine(ind1,['</joint>']);
end

%% Print Links
%inertial and visual poses are defined in relation to the link frame
%Link pose is defined in relation to the world frame
for i = 1:P.NB
    LinkName = linkNames{i,2};
    printURDFLine(ind1,['<link name="' LinkName '">']);
    printURDFLine(ind2,'<inertial>');
        printURDFLine(ind3,['<origin rpy="' num2str(INER(i,4)*pi/180) ' ' num2str(INER(i,5)*pi/180) ' ' num2str(INER(i,6)*pi/180) ...
                                  '" xyz="' num2str(INER(i,1)) ' ' num2str(INER(i,2)) ' ' num2str(INER(i,3)) '"/>']);
        printURDFLine(ind3,['<mass value="' num2str(INER(i,7)) '"/>']);
        printURDFLine(ind3,['<inertia ixx="' num2str(INER(i,8)) ...
                                   '" ixy="' num2str(INER(i,9)) ...
                                   '" ixz="' num2str(INER(i,10)) ...
                                   '" iyy="' num2str(INER(i,11)) ...
                                   '" iyz="' num2str(INER(i,12)) ...
                                   '" izz="' num2str(INER(i,13)) '"/>']);
    printURDFLine(ind2,'</inertial>');

    %add stl file for visuals
    if (Visuals.Type(i,1)==1)
        stlPos = Visuals.STL_KINE(i,1:3)*Visuals.STL_scale;
        stlRPY = Visuals.STL_KINE(i,4:6)*pi/180;
        RotMatSTL = Rzd(Visuals.STL_KINE(i,6))*Ryd(Visuals.STL_KINE(i,5))*Rxd(Visuals.STL_KINE(i,4));
        stlPos = RotMatSTL*stlPos'; %Rotate the displacement to be after rotation applied to stl
        
        printURDFLine(ind2,['<visual><!--' LinkName '_visual_mesh-->']);
            printURDFLine(ind3,['<origin rpy="' num2str(stlRPY(1)) ' ' num2str(stlRPY(2)) ' ' num2str(stlRPY(3)) ...
                                      '" xyz="' num2str(stlPos(1)) ' ' num2str(stlPos(2)) ' ' num2str(stlPos(3)) '"/>']);
            printURDFLine(ind3,'<geometry>');
                printURDFLine(ind4,['<mesh filename="package://meshFiles/' Visuals.STLFileNames{i,1} '" scale="' num2str(Visuals.STL_scale) '"/>']);           
            printURDFLine(ind3,'</geometry>');
        printURDFLine(ind2,'</visual>');
    end
    
    %add joint Cylinder for visual
    if (Visuals.Type(i,5)==1)
        printURDFLine(ind2,['<visual><!--' LinkName '_visual_jointCylinder-->']);
            printURDFLine(ind3,['<origin rpy="0 0 0" xyz="0 0 0"/>']);
            printURDFLine(ind3,'<geometry>');
                printURDFLine(ind4,['<cylinder length="' num2str(Visuals.JointCylinderLength) '" radius="' num2str(Visuals.JointCylinderRadius) '"/>']);
            printURDFLine(ind3,'</geometry>');
            addMaterial_darkgrey(printURDFLine,ind3,ind1);
        printURDFLine(ind2,'</visual>');
    end
    
    %add Box visuals
    if (Visuals.Type(i,2)==1)
        printURDFLine(ind2,['<visual><!--' LinkName '_visual_box-->']);
            printURDFLine(ind3,['<origin rpy="' num2str(Visuals.BOX(i,7)*pi/180) ' ' num2str(Visuals.BOX(i,8)*pi/180) ' ' num2str(Visuals.BOX(i,9)*pi/180) ...
                                      '" xyz="' num2str(Visuals.BOX(i,4)) ' ' num2str(Visuals.BOX(i,5)) ' ' num2str(Visuals.BOX(i,6)) '"/>']);
            printURDFLine(ind3,'<geometry>');
                printURDFLine(ind4,['<box size="' num2str(Visuals.BOX(i,1)) ' ' num2str(Visuals.BOX(i,2)) ' ' num2str(Visuals.BOX(i,3)) '"/>']);
            printURDFLine(ind3,'</geometry>');
            addMaterial_XOred(printURDFLine,ind3,ind1);
        printURDFLine(ind2,'</visual>');
    end
    
    %add Cylinder visuals
    if (Visuals.Type(i,3)==1)
        printURDFLine(ind2,['<visual><!--' LinkName '_visual_cylinder-->']);
            printURDFLine(ind3,['<origin rpy="' num2str(Visuals.CYLINDER(i,6)*pi/180) ' ' num2str(Visuals.CYLINDER(i,7)*pi/180) ' ' num2str(Visuals.CYLINDER(i,8)*pi/180) ...
                                      '" xyz="' num2str(Visuals.CYLINDER(i,3)) ' ' num2str(Visuals.CYLINDER(i,4)) ' ' num2str(Visuals.CYLINDER(i,5)) '"/>']);
            printURDFLine(ind3,'<geometry>');
                printURDFLine(ind4,['<cylinder length="' num2str(Visuals.CYLINDER(i,1)) '" radius="' num2str(Visuals.CYLINDER(i,2)) '"/>']);
            printURDFLine(ind3,'</geometry>');
            addMaterial_darkgrey(printURDFLine,ind3,ind1);
        printURDFLine(ind2,'</visual>');
    end
    
    printURDFLine(ind2,'</link>');
end

%% Close file
printURDFLine(ind1,'</robot>');

fclose(fid);

%% Print file to command line
fid = fopen([fileLocation P.RobotName '_' P.VersionName '_robot.urdf'],'r');
notComplete = 0;
while notComplete == 0
   line = fgetl(fid);
   if line == -1
       notComplete = 1;
   else
       disp(line)
   end
end
fclose(fid);


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

%% material values

function addMaterial_darkgrey(printURDFLine,ind,ind1)
    printURDFLine(ind,'<material name="black">');
        printURDFLine([ind ind1],'<color rgba="0 0 0 1"/>');
    printURDFLine(ind,'</material>');
end

function addMaterial_XOred(printURDFLine,ind,ind1)
    printURDFLine(ind,'<material name="XOred">');
        printURDFLine([ind ind1],'<color rgba="0.8 0.3 0.3 0.3"/>');
    printURDFLine(ind,'</material>');
end
