clear
clc

XOParametersMatrices
%% Helper Functions
Rxd = @ (theta) [1 0 0 ; 0 cos(theta) -sin(theta); 0 sin(theta) cos(theta)];
Ryd = @ (theta) [cos(theta) 0 sin(theta); 0 1 0 ; -sin(theta) 0 cos(theta)];
Rzd = @ (theta) [cos(theta) -sin(theta) 0; sin(theta) cos(theta) 0; 0 0 1];

NB = length(INER(:,1));

for i = 1:NB
    %Load Link Values from Matrices
    RLinks(i).pi_r_i = KINE(i,1:3)'; 
    RLinks(i).pi_R0_i = Rzd(KINE(i,6))*Ryd(KINE(i,5))*Rxd(KINE(i,4)); 
    RLinks(i).pi_T0_i = [RLinks(i).pi_R0_i RLinks(i).pi_r_i; 0 0 0 1];
    RLinks(i).i_rCOM_i = INER(i,1:3)';
    RLinks(i).mass = INER(i,7); 
    RLinks(i).I_MAT = [INER(i,8:10); INER(i,9) INER(i,11:12); INER(i,10) INER(i,12) INER(i,13)]; 
    
    
    %Associated Variables
    if PARENT(i) == 0
        RLinks(i).O_R0_i = RLinks(i).pi_R0_i;
        RLinks(i).O_T0_i = [RLinks(i).O_R0_i [0 0 0]'; 0 0 0 1];
    else
        RLinks(i).O_R0_i = RLinks(PARENT(i)).O_R0_i*RLinks(i).pi_R0_i;
        RLinks(i).O_T0_i = RLinks(PARENT(i)).O_T0_i*RLinks(i).pi_T0_i;
    end
    RLinks(i).joint_axis = RLinks(i).O_R0_i*[0 0 1]';
end

cyl_L = 0.07;
cyl_r = 0.03;
tc = ',,,,,,,,,,'; %ten commas
ns = @ (num) num2str(num);

[file] = fopen([pwd '\XOcsvOut.csv'],'wt');
fprintf(file, ['empty,empty,empty,' tc tc tc tc tc ',,,,,,' '\n']);
fprintf(file, 'name,	J_name,	type,	parent,	a_x,	a_y,	a_z,	px,	py,	pz,	pRx,	pRy,	pRz,	uri,	mesh scale x,	mesh scale y,	mesh scale z,	vpx,	vpy,	vpz,	vproll,	vppitch,	vpyaw,	cylinder,	length,	radius,	vpx,	vpy,	vpz,	vproll,	vppitch,	vpyaw,	box,	sizex,	sizey,	sizez,	vpx,	vpy,	vpz,	vproll,	vppitch,	vpyaw,	lower,	upper,	effort,	velocity,	ipx,	ipy,	ipz,	iproll,	ippitch,	ipyaw,	mass,	ixx,	ixy,	ixz,	iyy,	iyz,	izz \n');
%Pelvis
i=1;
fprintf(file, 'pelvis,,,,,,,');
fprintf(file, [ns(RLinks(i).O_T0_i(1,4)) ',' ns(RLinks(i).O_T0_i(2,4)) ',' ns(RLinks(i).O_T0_i(3,4)) ',']);
fprintf(file, [ns(LINKPOSEROT(i,1)) ',' ns(LINKPOSEROT(i,2)) ',' ns(LINKPOSEROT(i,3)) ',']);
fprintf(file, tc);
fprintf(file, ',,,,,,,,,');
fprintf(file, ['1,' ns(BOX(i,1)) ',' ns(BOX(i,2)) ',' ns(BOX(i,3)) ',' ns(BOX(i,4)) ',' ns(BOX(i,5)) ',' ns(BOX(i,6)) ',' ns(BOX(i,7)) ',' ns(BOX(i,8)) ',' ns(BOX(i,9)) ',' ]);
fprintf(file, [ns(JointLimits(i,1)) ',' ns(JointLimits(i,2)) ',' ns(JointLimits(i,3)) ',' ns(JointLimits(i,4)) ',']);
fprintf(file, [ns(INER(i,1)) ',' ns(INER(i,2)) ',' ns(INER(i,3)) ',' ns(INER(i,4)) ',' ns(INER(i,5)) ',' ns(INER(i,6)) ',' ...
    ns(INER(i,7)) ',' ns(INER(i,8)) ',' ns(INER(i,9)) ',' ns(INER(i,10)) ',' ns(INER(i,11)) ',' ns(INER(i,12)) ',' ns(INER(i,13))]);
fprintf(file, '\n');

%Links
JointOrder = [2 3 9 10 11 12 13 4 5 6 7 8 20 21 22 23 24 25 14 15 16 17 18 19];
for i = JointOrder
    fprintf(file, [NAMES{i,1} ',' NAMES{i,2} ',' NAMES{i,3} ',' NAMES{i,4} ',']);
    fprintf(file, [ns(RLinks(i).joint_axis(1)) ',' ns(RLinks(i).joint_axis(2)) ',' ns(RLinks(i).joint_axis(3)) ',']);
    fprintf(file, [ns(RLinks(i).O_T0_i(1,4)) ',' ns(RLinks(i).O_T0_i(2,4)) ',' ns(RLinks(i).O_T0_i(3,4)) ',']);
    fprintf(file, [ns(LINKPOSEROT(i,1)) ',' ns(LINKPOSEROT(i,2)) ',' ns(LINKPOSEROT(i,3)) ',']);
    fprintf(file, tc);
    fprintf(file, ['1,' ns(cyl_L) ',' ns(cyl_r) ',0,0,0,0,0,0,']);
    fprintf(file, ['1,' ns(BOX(i,1)) ',' ns(BOX(i,2)) ',' ns(BOX(i,3)) ',' ns(BOX(i,4)) ',' ns(BOX(i,5)) ',' ns(BOX(i,6)) ',' ns(BOX(i,7)) ',' ns(BOX(i,8)) ',' ns(BOX(i,9)) ',' ]);
    fprintf(file, [ns(JointLimits(i,1)) ',' ns(JointLimits(i,2)) ',' ns(JointLimits(i,3)) ',' ns(JointLimits(i,4)) ',']);
    fprintf(file, [ns(INER(i,1)) ',' ns(INER(i,2)) ',' ns(INER(i,3)) ',' ns(INER(i,4)) ',' ns(INER(i,5)) ',' ns(INER(i,6)) ',' ...
        ns(INER(i,7)) ',' ns(INER(i,8)) ',' ns(INER(i,9)) ',' ns(INER(i,10)) ',' ns(INER(i,11)) ',' ns(INER(i,12)) ',' ns(INER(i,13))]);
    fprintf(file, '\n');
end
%Sensors


fclose(file);

clear file;
fclose all;
fprintf('Done \n');