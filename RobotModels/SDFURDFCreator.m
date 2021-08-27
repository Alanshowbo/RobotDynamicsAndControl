clear
clc

%% Choose Robot

switch 3
    case 1
        ATHENARobotParameters
        q = [0 0 0 0 0 0 zeros(1,12)]'; %zero positon of Robot
    case 2
        GuardianXORobotParameters
        q = [0 0 0 0 0 0 zeros(1,24) zeros(1,6)]'; %zero positon of Robot
    case 3
        UpperBodyXORobotParameters
        q = [zeros(1,6) zeros(1,12)]'; %zero positon of Robot
end

%% Create SDF
fileLocation = [pwd '\createdSDFURDF\'];
SDFWritingScript

fileLocation = ['C:\repos\repository-group\trec-robotics-software\trec-robot-models\src\main\resources\models\' ...
                P.RobotName '_model\'];
fileLocation = ['D:\repos\repository-group\trec-robotics-software\trec-robot-models\src\main\resources\models\' ...
                P.RobotName '_model\'];
SDFWritingScript

%% Create URDF

fileLocation = [pwd '\createdSDFURDF\'];
URDFWritingScript

