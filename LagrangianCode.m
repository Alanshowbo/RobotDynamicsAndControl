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

%% Symbolic Code
n = 34; %num x
m = length(b_ineq); %num ineq constraint
p = 6; %num eq constraint

%i=1; L(i).q = [x y z qY qP qR];    L(i).dq = [dx dy dz dqY dqP dqR]; L(i).ddq = [ddx ddy ddz ddqY ddqP ddqR];
for i = 1:3
    L(i).q = SymVariable(['q' num2str(i)]);  
    L(i).dq = SymVariable(['dq' num2str(i)]); 
    L(i).ddq = SymVariable(['ddq' num2str(i)]);
end

for i = 1:n
    Xstruct(i).x = SymVariable(['q' num2str(i)]);
end
for i = 1:p
    Vstruct(i).v = SymVariable(['v' num2str(i)]);
end
for i = 1:m
    Ustruct(i).u = SymVariable(['u' num2str(i)]);
    Sstruct(i).s = SymVariable(['s' num2str(i)]);
    Sstruct(i).s2 = Sstruct(i).s*Sstruct(i).s;
end
x_T = [Xstruct.x];
% x = SymVariable('x',[18,1]);
v_T = [Vstruct.v];
u_T = [Ustruct.u];
s_T = [Sstruct.s];
s2_T = [Sstruct.s2];

eqn1 = x_T*H + F + v_T*A_eq;% + u_T*A_ineq;
eqn2 = A_ineq*x_T' - b_ineq + s2_T';
eqn3 = 2*u_T.*s_T;
eqn4 = A_eq*x_T' - b_eq;

eqn1 = eqn1';
eqn3 = eqn3';

xvec = x_T(:);
% size_zeros = eqn4*0;
% 
% eqnToSolve = eqn4(1)
% expr1 = SymExpression([eqnToSolve '==8'])
% eval_math_fun('Solve',{['q1-3',0],xvec(1)})
% 
% 
% eval_math_fun('Solve',{'eqnToSolve==0',xvec})
% eval_math_fun('Equals',{eqnToSolve,0})
% 
% eval_math_fun('Solve',{eval_math_fun('Equals',{eqnToSolve,0}),xvec})

sysOfEqns = [];
for i=1:length(eqn1)
    expr_str = eval_math(formula(eqn1(i)));
    sysOfEqns = [sysOfEqns; SymExpression([expr_str(1:end-1) ' == 0}'])];
end
for i=1:length(eqn2)
    expr_str = eval_math(formula(eqn2(i)));
    sysOfEqns = [sysOfEqns; SymExpression([expr_str(1:end-1) ' == 0}'])];
end
% for i=1:length(eqn3)
%     expr_str = eval_math(formula(eqn3(i)));
%     sysOfEqns = [sysOfEqns; SymExpression([expr_str(1:end-1) ' == 0}'])];
% end
for i=1:length(eqn4)
    expr_str = eval_math(formula(eqn4(i)));
    sysOfEqns = [sysOfEqns; SymExpression([expr_str(1:end-1) ' == 0}'])];
end
xvec = [x_T(:); v_T(:); s_T(:)];
soln = eval_math_fun('Solve',{sysOfEqns(:),xvec(:)})

solutionVec = [];
for i = 1:length(soln)
    solutionVec = [solutionVec; soln(i,:)];
end



