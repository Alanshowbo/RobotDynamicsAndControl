clear;
clc;
%% Loading variables
var = importdata('OptProjectVar_v2.mat');

h_desired = var.h_desired; %6x1
a_swing_desired = var.a_swing_desired(1,1:3)';%3x1
b = [h_desired; a_swing_desired; zeros(3,1)]; %12x1

Acmm = var.Acmm;  %6x18
J1 = var.Jf1_left; %3x18
J2 = var.Jf2_right; %3x18
J = [Acmm; J1; J2]; %12x18


Acmm_dot = var.Acmm_dot; %6x18
J1_dot = var.Jf1_left_dot; %3x18
J2_dot = var.Jf2_right_dot; %3x18
J_dot = [Acmm_dot; J1_dot; J2_dot]; %12x18

dq = var.dq; %18x1
C = var.Cb; %18x1
Q = var.Q; %18x18
lambda = [zeros(18,1); ones(16,1)];%34x1

%equality constraint
A_2 = var.A_2; %6x16
wg = var.wg'; %6x1
h1 = @(ddq, rho)(Acmm*ddq + Acmm_dot*dq - A_2*rho - wg); %6 constraints ???

% 52 inequality constraints
ddq_ub = var.ddq_ub; %18x1
ddq_lb = var.ddq_lb; %18x1

g1 = @(ddq,rho)(ddq-ddq_ub); %18 constraints
g2 = @(ddq,rho)(-ddq + ddq_lb); %18 constraints
g3 = @(ddq, rho)(-rho); %16 constraints

x0 = ones(34,1);
j = [J zeros(12,16)];
grad_f = 2.*j'*Q*j;
H = grad_f;
F = lambda'-2.*(b-J_dot*dq)'*Q*j;


A_eq=[-Acmm, A_2];
b_eq=Acmm_dot*dq-wg;%rand(6,1);
A_ineq=[-eye(18),zeros(18,16);eye(18),zeros(18,16);zeros(16,18),-eye(16,16)];
b_ineq=[-ddq_lb;ddq_ub;zeros(16,1)];

% -------------------------------------------
A_ineq=[zeros(16,18),-eye(16,16)];
b_ineq=[zeros(16,1)];

xstar=quadprog(H,F,A_ineq,b_ineq,A_eq,b_eq)
ddqstar = xstar(1:18);
rhostar = xstar(19:34);

%check constraints
g1(ddqstar,rhostar);
g2(ddqstar,rhostar);
g3(ddqstar,rhostar);

%% Solve 
n = length(lambda); %number of design variables
m = length(b_ineq); %number of inequality constraints
p = length(b_eq); %number of equality constraints

% Make a big matrix
bigA = [H' A_eq' A_ineq' zeros(n,m);
        A_ineq zeros(m,p) zeros(m,m) eye(m,m);
        A_eq zeros(p,p) zeros(p,m) zeros(p,m)];
bigB = [F'; b_ineq; b_eq];

rhosThatEqualZero = round(xstar,5)==0;

bigAcopy1 = bigA;
uremoved = 0;
for i =flip(1:m)
    j = i+p+n-uremoved
    bigAcopy1(:,j) = [];
%     uremoved = uremoved+1;
end
xsoln1 = inv(bigAcopy1)*bigB

bigAcopy = bigA;
uremoved = 0;
for i =1:m
    j = i+p+n-uremoved
    bigAcopy(:,j) = [];
    uremoved = uremoved+1;
end
xsoln2 = inv(bigAcopy)*bigB

bigAcopy = bigA;
uremoved = 0;
for i =flip(1:m)
    if rhosThatEqualZero(18+i)
       % si = 0
        j=i+m-uremoved;
    else
       % ui=0
        j=i-uremoved;
        
    end
    uremoved = uremoved +1;
    bigAcopy(:,j+n+p) = [];
end
for i = 1:1
    xsoln = bigAcopy\bigB
end
%Can run through cases of whether ui or si == 0
%in each case you remove the spot for the u or s that is zero from the bigX
%vector, and then remove the corresponding column in the bigA matrix.
%Removing 52 u or s variables and their bigA columns makes bigA square and
%thus invertible. 
%If the inversion fails or any of the s variables are negative then the
%solution is invalid

