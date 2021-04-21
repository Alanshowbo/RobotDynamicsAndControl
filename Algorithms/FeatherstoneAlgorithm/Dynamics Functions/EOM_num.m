%Function that calculates the Mass-Inertia matrix in the simplest way,
%using the differentiable ID function strategy

function [D,Cdq,G] = EOM_num(RobotLinks,RobotParam,q,dq)
    NB = RobotParam.NB;
    CdqG = ID(RobotLinks,RobotParam,q,dq,zeros(3,1));
    G = ID(RobotLinks,RobotParam,q,zeros(3,1),zeros(3,1));
    Cdq = CdqG - G;
    D = zeros(NB,NB);
    for i =1:NB
        del_a = zeros(3,1);
        del_a(i) = 1;
        D(:,i) = diff_ID(RobotLinks,RobotParam,q,dq,del_a);
    end
end

function tau_diff = diff_ID(RobotLinks,RobotParam,q,dq,ddq)
    tau_diff = ID(RobotLinks,RobotParam,q,dq,ddq) - ID(RobotLinks,RobotParam,q,dq,zeros(3,1));
end