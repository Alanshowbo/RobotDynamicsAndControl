clear
clc
format compact
%% Some Helpful Functions
Rxd = @ (theta) [1 0 0 ; 0 cosd(theta) -sind(theta); 0 sind(theta) cosd(theta)];
Ryd = @ (theta) [cosd(theta) 0 sind(theta); 0 1 0 ; -sind(theta) 0 cosd(theta)];
Rzd = @ (theta) [cosd(theta) -sind(theta) 0; sind(theta) cosd(theta) 0; 0 0 1];
Rx = @ (theta) [1 0 0 ; 0 cos(theta) -sin(theta); 0 sin(theta) cos(theta)];
Ry = @ (theta) [cos(theta) 0 sin(theta); 0 1 0 ; -sin(theta) 0 cos(theta)];
Rz = @ (theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];
Trans = @(R,p) [R p; 0 0 0 1];
%Apply transformation matrix to a single position, with position output
PFT = @(T,P) [1 0 0 0; 0 1 0 0; 0 0 1 0]*T*[P; 1];

wfromS = @(S) [S(3,2); S(1,3); S(2,1)];
Sfromw = @(w) [0 -w(3) w(2); w(3) 0 -w(1); -w(2) w(1) 0];
%Function to do inverse Transformation
invT = @(T) [T(1:3,1:3)' -T(1:3,1:3)'*(T(1:3,4)*eye(3))'; 0 0 0 1];

%% System
[P, PARENT, KINE, INER] = PendModel();
    
NB = P.NB; 
n = P.n; %number of states
m = P.m; %number of inputs
c = P.c; %number of contact points
for i = 1:NB
    L(i).m = INER(i,1);
    L(i).I_MAT = [INER(i,5:7); INER(i,6) INER(i,8:9); INER(i,7) INER(i,9) INER(i,10)];
    L(i).pCOM = INER(i,2:4)';
    L(i).Pi = PARENT(i);
    mTot = P.mTot;
end
% Base Variables
x = SymVariable('x');   y = SymVariable('y');   z = SymVariable('z');
qR = SymVariable('qR'); qP = SymVariable('qP'); qY = SymVariable('qY');
dx = SymVariable('dx');   dy = SymVariable('dy');   dz = SymVariable('dz');
dqR = SymVariable('dqR'); dqP = SymVariable('dqP'); dqY = SymVariable('dqY');
ddx = SymVariable('ddx');   ddy = SymVariable('ddy');   ddz = SymVariable('ddz');
ddqR = SymVariable('ddqR'); ddqP = SymVariable('ddqP'); ddqY = SymVariable('ddqY');

%i=1; L(i).q = [x y z qY qP qR];    L(i).dq = [dx dy dz dqY dqP dqR]; L(i).ddq = [ddx ddy ddz ddqY ddqP ddqR];
for i = 1:3
    L(i).q = SymVariable(['q' num2str(i)]);  
    L(i).dq = SymVariable(['dq' num2str(i)]); 
    L(i).ddq = SymVariable(['ddq' num2str(i)]);
end
q_T = [L.q];
dq_T = [L.dq];
ddq_T = [L.ddq];

% ddt = @(r) jacobian(r,qdq_list)*dqddq_list'; % a handy anonymous function for taking time derivatives
ddt = @(r) jacobian(r,q_T)*dq_T' + jacobian(r,dq_T)*ddq_T'; % a handy anonymous function for taking time derivatives

%% Coordinate Transformations
disp('Computing Transformations')
for i = 1:NB
    L(i).T_prox = [Rzd(KINE(i,4))*Ryd(KINE(i,5))*Rxd(KINE(i,6))*Rz(L(i).q) KINE(i,1:3)'; 0 0 0 1]; 
    if i == 1
        L(1).T_World = L(1).T_prox;
    else
        L(i).T_World = L(L(i).Pi).T_World*L(i).T_prox;
    end
end

%% Positions
disp('Computing Positions')
for i = 1:NB
    L(i).pO = PFT(L(i).T_World,[0 0 0]' + [0 0 0]'*q_T(1));% Coordinate Sys Positions
    L(i).pO_COM = PFT(L(i).T_World,L(i).pCOM); % Link CoM Positions
end
pCOM_Tot = [L.pO_COM]*[L.m]'/mTot;
  
%% Velocities - in World Frame

disp('Computing Velocities')
for i = 1:NB
    if sum(L(i).pO) == 0
        L(i).vO = [0 0 0]';
    else
        L(i).vO = jacobian(L(i).pO,q_T)*dq_T'; % Coord Sys Origin Vel
    end
    
    if sum(L(i).pO_COM) == 0
        L(i).vO_COM = [0 0 0]';
    else        
        L(i).vO_COM = jacobian(L(i).pO_COM,q_T)*dq_T'; % Link COM Vel
    end
end
vCOM_Tot = jacobian(pCOM_Tot,q_T)*dq_T';

%% Angular Velocity
%Function to take the derivitive of a rotation matrix by a single variable
ithCol = @(i,Mat) Mat(:,i);
dR_dq = @(T,var,dvar,i) [ ithCol(i,jacobian(T(1:3,1),var)) ithCol(i,jacobian(T(1:3,2),var)) ithCol(i,jacobian(T(1:3,3),var))] *dvar;

disp('Computing Angular Velocities')
for i = 1:NB
    dR_prox = dR_dq(invT(L(i).T_prox),q_T,L(i).dq,i);
    invT_prox = invT(L(i).T_prox);
    L(i).wO_prox = -wfromS(dR_prox*invT_prox(1:3,1:3)'); %ang vel of frame in its proximal frame
    
    if i == 1
        L(i).wO_World = L(i).T_World(1:3,1:3)*L(i).wO_prox;
        L(i).i_w_i = L(i).wO_prox;
    else
        L(i).wO_World = L(L(i).Pi).wO_World + L(i).T_World(1:3,1:3)*L(i).wO_prox;
        L(i).i_w_i = L(i).wO_prox + L(i).T_prox(1:3,1:3)'*L(L(i).Pi).i_w_i;
    end
end
%Note: wO_prox is the angular velocity of body i compared to parent
%      i_w_i = wO_prox + T_prox(1:3,1:3)'pi_w_pi

%% Kinetic energy
disp('Computing Kinetic Energy')
Klin = 0;   Kang = 0;
for i = 1:NB
    Klin = Klin + 0.5*L(i).m*L(i).vO_COM'*L(i).vO_COM;
    Kang = Kang + 0.5*L(i).wO_World'*L(i).T_World(1:3,1:3)*L(i).I_MAT*L(i).T_World(1:3,1:3)'*L(i).wO_World;
end
K = Klin+Kang;

%% Potential Energy
disp('Computing Potential Energy')
V = 0;
for i = 1:NB
    V = V + L(i).m*P.g*L(i).pO_COM(3);
end


%% EOM 
disp('Computing Dynamics Equations')
dK_dqdot = jacobian(K,dq_T);
D        = jacobian(dK_dqdot,dq_T);
B        = jacobian(q_T',q_T);
dK_dq    = jacobian(K,q_T)';
Cdq      = jacobian(dK_dq'*dq_T',dq_T)' - 2*dK_dq;
G        = jacobian(V,q_T)';


%% Extras
% Contact Points
disp('Computing Extras')
N_points = c;
Pc = [PFT(L(1).T_World,[P.Lc P.La (P.Lf-P.Lb)]')  PFT(L(1).T_World,[P.Lc -P.La (P.Lf-P.Lb)]') ...
      PFT(L(1).T_World,[P.Lc P.La -P.Lb]')          PFT(L(1).T_World,[P.Lc -P.La -P.Lb]') PFT(L(3).T_World,[0 P.Lt 0]')];
I5 = eye(5);
Pc_dot = zeros(3,N_points)*q_T(1);
Pc_ddot = zeros(3,N_points)*q_T(1);
for i = 1:N_points
    Pc_dot(:,i) = ddt((I5(i,:)*Pc')');
end
for i = 1:N_points
    Pc_ddot(:,i) = ddt((I5(i,:)*Pc_dot')');
end
Pc_top = Pc + ...
    [PFT(L(1).T_World,[-P.Lc 0 0]')  PFT(L(1).T_World,[-P.Lc 0 0]') ...
     PFT(L(1).T_World,[-P.Lc 0 0]')  PFT(L(1).T_World,[-P.Lc 0 0]') zeros(3,1)];

% Contact Jacobians
for i=1:N_points
    Jc(i).Mat = jacobian(Pc(:,i),q_T);
end

% System Momenta
Sys_h = zeros(6*NB,1)*q_T(1);
Sys_V = zeros(6*NB,1)*q_T(1);
Ang_Mo_atCOM_Tot = zeros(3,1)*q_T(1);
Lin_Mo_Tot = zeros(3,1)*q_T(1);
for i=1:NB
    wO_body = L(i).i_w_i;
%     molin = L(i).T_World(1:3,1:3)'*L(i).vO_COM*L(i).m;
    molin2 = L(i).m*(L(i).T_World(1:3,1:3)'*L(i).vO - Sfromw(L(i).pCOM)*wO_body);
    moang = L(i).I_MAT*wO_body + Sfromw(L(i).pCOM)*molin2;
    hLink = [moang(1); moang(2); moang(3); molin2(1); molin2(2); molin2(3)];
    VLink = [wO_body; L(i).T_World(1:3,1:3)'*L(i).vO];
    Sys_h(6*i-5:6*i,1) = hLink;
    Sys_V(6*i-5:6*i,1) = VLink;
    Ang_Mo_atCOM_Tot = Ang_Mo_atCOM_Tot + L(i).T_World(1:3,1:3)*moang + Sfromw(L(i).pO-pCOM_Tot)*L(i).T_World(1:3,1:3)*molin2;
    Lin_Mo_Tot = Lin_Mo_Tot + L(i).T_World(1:3,1:3)*molin2;
end


% total Momentum
% Lin_Mo = zeros(3,NB)*q_T(1);
% Lin_Mo_Tot = zeros(3,1)*q_T(1);
% for i = 1:NB
%     Lin_Mo(:,i) = L(i).vO_COM*L(i).m;
% end
% Lin_Mo_Tot = sum(Lin_Mo,2);

% Ang_Mo_atCOM_Lin = zeros(3,NB)*q_T(1);
% Ang_Mo_atCOM_Ang = zeros(3,NB)*q_T(1);
% Ang_Mo_atCOM_Tot = zeros(3,1)*q_T(1);
% for i = 1:NB
%     Ang_Mo_atCOM_Lin(:,i) = Sfromw(L(i).pO_COM-pCOM_Tot)*[Lin_Mo(1,i); Lin_Mo(2,i); Lin_Mo(3,i)];
%     Ang_Mo_atCOM_Ang(:,i) = L(i).T_World(1:3,1:3)*[Sys_h(6*i-5,1); Sys_h(6*i-4,1); Sys_h(6*i-3,1)];
%     Ang_Mo_atCOM_Tot = Ang_Mo_atCOM_Tot + Ang_Mo_atCOM_Lin(:,i) + Ang_Mo_atCOM_Ang(:,i) ;
% end
% Ang_Mo_atCOM_Tot = sum(Ang_Mo_atCOM,2);

h = [Ang_Mo_atCOM_Tot(1); Ang_Mo_atCOM_Tot(2); Ang_Mo_atCOM_Tot(3); Lin_Mo_Tot(1); Lin_Mo_Tot(2); Lin_Mo_Tot(3)];
h_dot = ddt(h);
Acmm = jacobian(h,dq_T);

%accel
% for i = i:n_coords
%     Coords(i).aO = jacobian(Coords(i).vO,dq_T)*ddq;
% end


%% Generate Functions
disp('Generating functions')
Prefix = [pwd '\gen3_'];
%Coords
export([L.T_prox],'vars',{q_T}, 'file', [Prefix 'T_prox']);
export([L.T_World],'vars',{q_T}, 'file', [Prefix 'T_World']);
export([L.pO],'vars',{q_T}, 'file', [Prefix 'pO']);
export([L.vO],'vars',{q_T,dq_T}, 'file', [Prefix 'vO']);
export([L.wO_prox],'vars',{q_T,dq_T}, 'file', [Prefix 'wO_prox']);
export([L.wO_World],'vars',{q_T,dq_T}, 'file', [Prefix 'wO_World']);

%Links
export([L.pO_COM],'vars',{q_T}, 'file', [Prefix 'pO_COM']);
export([L.vO_COM],'vars',{q_T,dq_T}, 'file', [Prefix 'vO_COM']);

%Dynamics
export(D,'vars',{q_T}, 'file', [Prefix 'D']);
export(Cdq,'vars',{q_T,dq_T}, 'file', [Prefix 'Cdq']);
export(G,'vars',{q_T}, 'file', [Prefix 'G']);
export(B,'vars',{q_T}, 'file', [Prefix 'B']);

%General
export(pCOM_Tot,'vars',{q_T}, 'file', [Prefix 'pCOM_Tot']);
export(vCOM_Tot,'vars',{q_T,dq_T}, 'file', [Prefix 'vCOM_Tot']);


% export(Lin_Mo,'vars',{q_T,dq_T}, 'file', [Prefix 'Lin_Mo']);

export(h,'vars',{q_T,dq_T}, 'file', [Prefix 'h']);
export(h_dot,'vars',{q_T,dq_T,ddq_T}, 'file', [Prefix 'h_dot']);
export(Acmm,'vars',{q_T}, 'file', [Prefix 'Acmm']);
export(Sys_h,'vars',{q_T,dq_T}, 'file', [Prefix 'Sys_h']);
export(Sys_V,'vars',{q_T,dq_T}, 'file', [Prefix 'Sys_V']);

export(Pc,'vars',{q_T}, 'file', [Prefix 'Pc']);
export(Pc_top,'vars',{q_T}, 'file', [Prefix 'Pc_top']);
export(Pc_dot,'vars',{q_T,dq_T}, 'file', [Prefix 'Pc_dot']);
export(Pc_ddot,'vars',{q_T,dq_T,ddq_T}, 'file', [Prefix 'Pc_ddot']);
export([Jc.Mat],'vars',{q_T}, 'file', [Prefix 'Jc']);
export(V,'vars',{q_T}, 'file', [Prefix 'V']);

%% Fix time
Acmm_dot = Acmm*0;
tic
for i = 1:length(q_T)
    Acmm_dot(:,i) = ddt(Acmm(:,i));
end
toc
export(Acmm_dot,'vars',{q_T,dq_T}, 'file', [Prefix 'Acmm_dot']);

%% Jc_dot
Acmm_dot = Acmm*0;
tic
for ic = 1:N_points
    Jc(ic).dMat = Jc(ic).Mat * 0;
    for i = 1:length(q_T)
    Jc(ic).dMat(:,i) = ddt(Jc(ic).Mat(:,i));
    end
end
toc
export([Jc.dMat],'vars',{q_T,dq_T}, 'file', [Prefix 'Jc_dot']);

% %% Basis
% % Basis function
% syms fc n1 n2 n3 real
% n_vec = [n1 n2 n3]';
% unit_nvec = simplify(n_vec/norm(n_vec));
% vec2 = simplify(cross(unit_nvec,[1 0 0]'));
% unit_vec2 = simplify(vec2/norm(vec2));
% vec1 = simplify(cross(unit_vec2,unit_nvec));
% unit_vec1 = simplify(vec1/norm(vec1));
% 
% Basis_v1 = simplify(unit_vec1*fc + unit_vec2*fc + unit_nvec);
% unit_Basis_v1 = simplify(Basis_v1/norm(Basis_v1));
% Basis_v2 = simplify(unit_vec1*fc - unit_vec2*fc + unit_nvec);
% unit_Basis_v2 = simplify(Basis_v2/norm(Basis_v2));
% Basis_v3 = simplify(-unit_vec1*fc - unit_vec2*fc + unit_nvec);
% unit_Basis_v3 = simplify(Basis_v3/norm(Basis_v3));
% Basis_v4 = simplify(-unit_vec1*fc + unit_vec2*fc + unit_nvec);
% unit_Basis_v4 = simplify(Basis_v4/norm(Basis_v4));
% 
% 
% Basis_c = [unit_Basis_v1 unit_Basis_v2 unit_Basis_v3 unit_Basis_v4];
% 
% matlabFunction(Basis_c,'vars',{fc,n_vec}, 'file', 'FUNgen2_Basis_c', 'Optimize', false);
% codegen FUNgen2_Basis_c -args {0,zeros(3,1)} -o gen2__e_Basis_c -report



