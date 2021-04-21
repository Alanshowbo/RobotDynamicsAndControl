clear
clc
format compact


%% System Model
%need NB, Parent(i), jtype(i), X_T, Ii
[P, PARENT, KINE, INER, CNCTPTS] = PendModel();
[RobotLinks,RobotParam] = PendRobot(P, PARENT, KINE, INER, CNCTPTS);
NB = P.NB;



%% Dynamics
q = zeros(3,1);
dq = zeros(3,1);
ddq = zeros(3,1);

q = [0 -0.3 0.6]';
dq = [1 1 1]';
ddq = [1 1 1]';

[D1,Cdq1,G1] = EOM_num(RobotLinks,q,dq)
tau1 = ID(RobotLinks,q,dq,ddq)
[p0,Pc,Jc] = FD_Pos(RobotLinks,q,dq)

% tau = ID(Robot,q,dq,ddq)
% tau = D*ddq + CdqG
tic
D2 = gen3_D(q);
Cdq2 = gen3_Cdq(q,dq);
G2 = gen3_G(q);
tau2 = D2*ddq + Cdq2 + G2;
toc
p02 = gen3_pO(q)
Jc = gen3_Jc(q)
Pc2 = gen3_Pc(q)
vc2 = [Jc(:,1:3)*dq Jc(:,4:6)*dq Jc(:,7:9)*dq Jc(:,10:12)*dq]

Acmm = gen3_Acmm(q)
Acmm_dot = gen3_Acmm_dot(q,dq)

hG = Acmm*dq

pCOM = gen3_pCOM_Tot(q)


%% Plot
JntPts = [p0 Pc(:,end)];
FootPts = [Pc(:,1:2) Pc(:,4) Pc(:,3) Pc(:,1)]; 
close all
figure(1)
hold on
plot3(JntPts(1,:),JntPts(2,:),JntPts(3,:),'k.') %Joint Points
plot3(JntPts(1,:),JntPts(2,:),JntPts(3,:),'b') %Leg Lines
plot3(FootPts(1,:),FootPts(2,:),FootPts(3,:),'r') %Foot Lines
grid on
axis equal

%% Functions
%Helper Functions
function S_Mat = S(v)
    S_Mat = [0 -v(3) v(2);
             v(3) 0 -v(1);
            -v(2) v(1) 0];
end

function tau = ID(RobotLinks,q,dq,ddq)
Rz = @ (theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
    %initiate matrices
    NB = length(RobotLinks);
    g = 9.8;
    i_w_i = zeros(3,NB);
    i_v_i = zeros(3,NB);
    i_dw_i = zeros(3,NB);
    i_dv_i = zeros(3,NB);
    i_F_i = zeros(3,NB);
    i_N_i = zeros(3,NB);
    i_f_i = zeros(3,NB);
    i_n_i = zeros(3,NB);
    
    %pass 1
    for i = 1:NB
        % Load Joint Variables
        q_i = q(i);
        dq_i = dq(i);
        ddq_i = ddq(i);
        % Load Joint Model
        z = [0 0 1]';
        im1_E_i = RobotLinks(i).pi_R0_i*Rz(q_i);
        i_E_im1 = im1_E_i';
        pi_r_i = RobotLinks(i).pi_r_i;
        i_c_i = RobotLinks(i).i_c_i;
        I_MAT = RobotLinks(i).I_MAT;
        m_i = RobotLinks(i).mass;
        
        %Set Parent Values
        if i == 1
            im1_w_im1 = [0 0 0]';
            im1_v_im1 = [0 0 0]';
            im1_dw_im1 = [0 0 0]';
            im1_dv_im1 = [0 0 g]'; 
 %Note: The gravity term is positive here because it is a ficticious base
 %acceleration that represents the external force of gravity on the system.
 %In the EOM, H*ddq + Cdq + G = B*tau + fext, so when you move the fext of
 %gravity to the LHS then the sign should change
        else
            j = RobotLinks(i).Parent;
            im1_w_im1 = i_w_i(:,j);
            im1_v_im1 = i_v_i(:,j);
            im1_dw_im1 = i_dw_i(:,j);
            im1_dv_im1 = i_dv_i(:,j);
        end

        %Calculations
        i_w_i(:,i) = i_E_im1*im1_w_im1 + z*dq_i;
        i_v_i(:,i) = i_E_im1*(im1_v_im1 + S(im1_w_im1)*pi_r_i);
        i_dw_i(:,i) = i_E_im1*im1_dw_im1 + z*ddq_i + S(i_E_im1*im1_w_im1)*z*dq_i;
        i_dv_i(:,i) = i_E_im1*(im1_dv_im1 + S(im1_dw_im1)*pi_r_i + S(im1_w_im1)*S(im1_w_im1)*pi_r_i);
        i_F_i(:,i) = m_i*(i_dv_i(:,i) + S(i_dw_i(:,i))*i_c_i + S(i_w_i(:,i))*S(i_w_i(:,i))*i_c_i);
        i_N_i(:,i) = I_MAT*i_dw_i(:,i) + S(i_w_i(:,i))*I_MAT*i_w_i(:,i);
    end

    %pass 2
    tau = [0 0 0]';
    for i = flip(1:NB)
        %Joint model
        q_i = q(i);
        i_c_i = RobotLinks(i).i_c_i;
        im1_E_i = RobotLinks(i).pi_R0_i*Rz(q_i);
        pi_r_i = RobotLinks(i).pi_r_i;
        
        %Calculations
        i_f_i(:,i) = i_f_i(:,i) + i_F_i(:,i);
        i_n_i(:,i) = i_n_i(:,i) + i_N_i(:,i) + S(i_c_i)*i_F_i(:,i);
        
        if i ~= 1
            j = RobotLinks(i).Parent;
            i_f_i(:,j) = i_f_i(:,j) + im1_E_i*i_f_i(:,i);
            i_n_i(:,j) = i_n_i(:,j) + im1_E_i*i_n_i(:,i) + S(pi_r_i)*im1_E_i*i_f_i(:,i);
        end
        tau(i) = z'*i_n_i(:,i);
    end
end

function tau_diff = diff_ID(RobotLinks,q,dq,ddq)
    tau_diff = ID(RobotLinks,q,dq,ddq) - ID(RobotLinks,q,dq,zeros(3,1));
end

function [D,Cdq,G] = EOM_num(RobotLinks,q,dq)
    NB = length(RobotLinks);
    CdqG = ID(RobotLinks,q,dq,zeros(3,1));
    G = ID(RobotLinks,q,zeros(3,1),zeros(3,1));
    Cdq = CdqG - G;
    D = zeros(NB,NB);
    for i =1:NB
        del_a = zeros(3,1);
        del_a(i) = 1;
        D(:,i) = diff_ID(RobotLinks,q,dq,del_a);
    end
end
    
function [p0,Pc,Jc] = FD_Pos(RobotLinks,q,dq)
Rz = @ (theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
    %initiate matrices
    NB = length(RobotLinks);
    n = length(q);
    g = 9.8;
    i_w_i = zeros(3,NB);
    i_v_i = zeros(3,NB);
    
    p0 = zeros(3,NB);
    NC = size([RobotLinks.Pc_i],2);
    Pc = zeros(3*(NC>0),NC);
    Jc = zeros(3*(NC>0),n*(NC>0),NC);
    World_T_i = zeros(4,4,NB);
    
    %pass 1
    for i = 1:NB
        % Load Joint Variables
        q_i = q(i);
        % Load Joint Model
        z = [0 0 1]';
        im1_E_i = RobotLinks(i).pi_R0_i*Rz(q_i);
        i_E_im1 = im1_E_i';
        pi_r_i = RobotLinks(i).pi_r_i;
        i_c_i = RobotLinks(i).i_c_i;
        
        % Transformation Matrices
        j = RobotLinks(i).Parent;
        im1_T_i = [im1_E_i pi_r_i; 0 0 0 1];
        if j == 0
            World_T_i(:,:,i) = im1_T_i;
        else
            World_T_i(:,:,i) = World_T_i(:,:,j)*im1_T_i;
        end
        p0(:,i) = World_T_i(1:3,4,i);
        
        %Jacobian creation
        for y = 1:n
            if i == 1
                im1_w_im1 = [0 0 0]';
                im1_v_im1 = [0 0 0]';
            else
                j = RobotLinks(i).Parent;
                im1_w_im1 = i_w_i(:,j,y);
                im1_v_im1 = i_v_i(:,j,y);
            end
            %dq value to find point Jacobian
            switch y
                case 1
                    dq = [1 0 0]';
                case 2
                    dq = [0 1 0]';
                case 3
                    dq = [0 0 1]';
            end
            dq_i = dq(i);
            %Calculations
            i_w_i(:,i,y) = i_E_im1*im1_w_im1 + z*dq_i; %make more efficient without the y iterator
            i_v_i(:,i,y) = i_E_im1*(im1_v_im1 + S(im1_w_im1)*pi_r_i);
            
            
        end
    end
    ic = [RobotLinks.ic];
    Pc0 = [RobotLinks.Pc_i];
    for c = 1:NC
        i = ic(c);
        Pc(:,c) = [1 0 0 0; 0 1 0 0; 0 0 1 0]*World_T_i(:,:,i)*[Pc0(:,c); 1];
        for y = 1:n
            i_vc_i = i_v_i(:,i,y) + S(i_w_i(:,i,y))*Pc0(:,c);
            Jc(:,y,c) = World_T_i(1:3,1:3,i)*i_vc_i;
        end
    end
            
    
end
    