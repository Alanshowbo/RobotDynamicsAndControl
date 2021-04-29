%Function that calculates the Mass-Inertia matrix in the simplest way,
%using the differentiable ID function strategy

function [D,Cdq,G] = EOM_num(RobotLinks,RobotParam,q,dq,N)
    NB = RobotParam.NB;
    CdqG = ID(RobotLinks,RobotParam,q,dq,zeros(N,1));
    G = ID(RobotLinks,RobotParam,q,zeros(N,1),zeros(N,1));
    Cdq = CdqG - G;
    D = zeros(NB,NB);
    for i =1:NB
        del_a = zeros(N,1);
        del_a(i) = 1;
        D(:,i) = diff_ID(RobotLinks,RobotParam,q,dq,del_a,N);
    end
end

function tau_diff = diff_ID(RobotLinks,RobotParam,q,dq,ddq,N)
    tau_diff = ID(RobotLinks,RobotParam,q,dq,ddq) - ID(RobotLinks,RobotParam,q,dq,zeros(N,1));
end