function [az,el] = PlotFrame(Si,timeS,Positions,Orientations,timeR,Q,xlims,ylims,zlims,az,el,choice)
scl = 39.3701; %m to in plotting in inches
% scl = 1; %plotting in meters
Positions = Positions*scl;

VF4 = [1 0 0 0; 0 1 0 0; 0 0 1 0]; %Positions from translation matrix output
hold on
axis equal
view([az,el])

%% Point Radii
Zrad = 0.04*scl; %global zero
CoMrad = 1; %Center of mass
SJrad = 0.04*scl; %subject joints
RJrad = 0.02*scl; %Robot joints
LCrad = 0.5;

%% plot Ground
plot_xyground(xlims(1),xlims(2),ylims(1),ylims(2))

%% Plot Global Zero
plot_sphere(Zrad,[0;0;0],[1 0 1])

%% Plot Subject 
%Joints
Jpos = Positions(:,Si);
for ii = 1:23
    Cen = [Jpos(((ii-1)*3)+1); Jpos(((ii-1)*3)+2); Jpos(((ii-1)*3)+3)];
    plot_sphere(SJrad,Cen,	[1 0 0])
end

% Plot handle pos from human assuming 9cm forward in wrist frame
SLeftHand_Orie_Rows = 57:60; %15
SRightHand_Orie_Rows = 41:44; %11

offset = [0; 9*0.393701; 0];
T_Wld_LHndS = TfromQ(Orientations(SLeftHand_Orie_Rows,Si),Positions(43,Si),Positions(44,Si),Positions(45,Si));
T_Wld_RHndS = TfromQ(Orientations(SRightHand_Orie_Rows,Si),Positions(31,Si),Positions(32,Si),Positions(33,Si));

Pos_Lhand_Wld = VF4*T_Wld_LHndS*[offset; 1];
Pos_Rhand_Wld = VF4*T_Wld_RHndS*[-offset; 1];
plot_sphere(1,Pos_Lhand_Wld,[0 0 1])
plot_sphere(1,Pos_Rhand_Wld,[0 0 1])




%plot Subject lines
[jpos_Pelv, jpos_L5, jpos_L3, jpos_T12, jpos_T8, jpos_Neck, jpos_Head, ...
    jpos_RSho, jpos_RUpA, jpos_RFoA, jpos_RHnd, jpos_LSho, jpos_LUpA, jpos_LFoA, ...
    jpos_LHnd, jpos_RUpL, jpos_RLoL, jpos_RFoo, jpos_RToe, jpos_LUpL, jpos_LLoL, ...
    jpos_LFoo, jpos_LToe] =  SubjectJointPosWld(Jpos);
LnEndS = [jpos_L5, jpos_L3, jpos_T12, jpos_T8, jpos_Neck, jpos_Head, jpos_RSho,...
    jpos_RSho, jpos_RUpA, jpos_RFoA, jpos_RHnd, jpos_LSho, jpos_LUpA, jpos_LFoA, ...
    jpos_LHnd, jpos_RUpL, jpos_RLoL, jpos_RFoo, jpos_RToe, jpos_LUpL, jpos_LLoL, ...
    jpos_LFoo, jpos_LToe];
LnBeginS = [jpos_Pelv, jpos_L5, jpos_L3, jpos_T12, jpos_T8, jpos_Neck, jpos_LSho,...
    jpos_T8, jpos_RSho, jpos_RUpA, jpos_RFoA, jpos_T8, jpos_LSho, jpos_LUpA, ...
    jpos_LFoA, jpos_Pelv, jpos_RUpL, jpos_RLoL, jpos_RFoo, jpos_Pelv, jpos_LUpL, ...
    jpos_LLoL, jpos_LFoo];
xptsS = [LnBeginS(1,:); LnEndS(1,:)];
yptsS = [LnBeginS(2,:); LnEndS(2,:)];
zptsS = [LnBeginS(3,:); LnEndS(3,:)];
line(xptsS,yptsS,zptsS,'LineWidth',3,'Color',[1 0 0]); %Matlab RGB Triplets

%% plot Robot 
%find robot i based on Subject timestamp
Ri = 0;
look = 0;
while Ri==0
    if timeS(Si)<501
        chkframes = 1:(timeS(Si)+500);
    else
        chkframes = (timeS(Si)-500):(timeS(Si)+500);
    end
    for jj = chkframes
        if (timeR(jj)==(timeS(Si)-look))||(timeR(jj)==(timeS(Si)+look))
            Ri = jj;
            if look ~= 0
                look
            end
        end
    end
    look = look+1;
end
q = Q(:,Ri);


%Transforms
TMP = TransMat_Pelv(q);
    T_Pelv_LA_1 = TMP(:,1:4);  T_Pelv_LA_2 = TMP(:,5:8);  T_Pelv_LA_3 = TMP(:,9:12);  T_Pelv_LA_4 = TMP(:,13:16);  T_Pelv_LA_5 = TMP(:,17:20);  
    T_Pelv_LL_1 = TMP(:,21:24);  T_Pelv_LL_2 = TMP(:,25:28);  T_Pelv_LL_3 = TMP(:,29:32);  T_Pelv_LL_4 = TMP(:,33:36);  T_Pelv_LL_5 = TMP(:,37:40);  T_Pelv_LL_6 = TMP(:,41:44);  
    T_Pelv_RA_1 = TMP(:,45:48);  T_Pelv_RA_2 = TMP(:,49:52);  T_Pelv_RA_3 = TMP(:,53:56);  T_Pelv_RA_4 = TMP(:,57:60);  T_Pelv_RA_5 = TMP(:,61:64); 
    T_Pelv_RL_1 = TMP(:,65:68);  T_Pelv_RL_2 = TMP(:,69:72);  T_Pelv_RL_3 = TMP(:,73:76);  T_Pelv_RL_4 = TMP(:,77:80);  T_Pelv_RL_5 = TMP(:,81:84);  T_Pelv_RL_6 = TMP(:,85:88);  
    T_Pelv_TT_1 = TMP(:,89:92);  T_Pelv_TT_2 = TMP(:,93:96);  
    T_Pelv_BS_2 = TMP(:,97:100);  T_Pelv_TT_3 = TMP(:,101:104);  T_Pelv_LA_6 = TMP(:,105:108);  T_Pelv_LL_7 = TMP(:,109:112);  T_Pelv_RA_6 = TMP(:,113:116);  T_Pelv_RL_7 = TMP(:,117:120);

%How to Plot Robot on Human
%         quat = Quat(:,i);
%         T_WP = TfromQ(quat, 0, 0, 0);
%         T_WldPlt_Pelv = T_WldPlt_Pelv0*T_WP;


%         %For orientations:
        SPelvis_Orie_Rows = 1:4;
        SLeftToe_Orie_Rows = 89:92;
        SLeftAnkle_Orie_Rows = 85:88;
        SRightAnkle_Orie_Rows = 69:72;

%Position Exo Hip relative to Subject Hip
T_Wld_HipS = TfromQ(Orientations(SPelvis_Orie_Rows,Si),Positions(1,Si),Positions(2,Si),Positions(3,Si));
if choice ==1
    offset = [-8; -1; 0];
    T_HipS_Pelv = [Ryd(-83) offset; [0 0 0] 1]; 
elseif choice ==2
    offset = [-8; -1; 0];
    T_HipS_Pelv = [Ryd(-83) offset; [0 0 0] 1]; 
elseif choice ==3
    offset = [-7; -1; 0];
    T_HipS_Pelv = [Ryd(-90) offset; [0 0 0] 1]; 
elseif choice ==4
    offset = [-8; -1; 0];
    T_HipS_Pelv = [Ryd(-83) offset; [0 0 0] 1]; 
elseif choice ==5
    offset = [-8; -1; -2];
    T_HipS_Pelv = [Ryd(-83) offset; [0 0 0] 1]; 
else
    offset = [-7; -1; 0];
    T_HipS_Pelv = [Rxd(-4)*Rzd(10)*Ryd(-80) offset; [0 0 0] 1]; 
end
T_WldPlt_Pelv = T_Wld_HipS*T_HipS_Pelv;

%         plot_sphere(5,VF4*T_Wld_LAnkS*[0;0;0;1],[0 0 0])
%         plot_sphere(5,VF4*T_Wld_LAnkS*[10;10;10;1],[0 0 0])

%         %Position Exo Hip relative to Subject Ankles
% if events(Ri) == 1
%     T_Wld_RAnkS = TfromQ(Orientations(SRightAnkle_Orie_Rows,Si),Positions(52,Si),Positions(53,Si),Positions(54,Si));
%     offset = [-1; -6.97; 2];
%     T_RAnkS_RL_6 = [Ryd(90)*Rxd(92.2)*Ryd(1.3)*Rzd(0.7) offset; [0 0 0] 1]; 
%     T_WldPlt_Pelv = T_Wld_RAnkS*T_RAnkS_RL_6*invTr(T_Pelv_RL_6);
% else
%     T_Wld_LAnkS = TfromQ(Orientations(SLeftAnkle_Orie_Rows,Si),Positions(64,Si),Positions(65,Si),Positions(66,Si));
%     offset = [-1; 7; 2];
%     T_LAnkS_LL_6 = [Ryd(90)*Rxd(80)*Ryd(0)*Rzd(2) offset; [0 0 0] 1]; 
%     T_WldPlt_Pelv = T_Wld_LAnkS*T_LAnkS_LL_6*invTr(T_Pelv_LL_6);
% end

%         %Position Exo Hip relative to Subject Left Toe
%         T_Wld_LFtS = TfromQ(Orientations(SLeftToe_Orie_Rows,Si),Positions(67,Si),Positions(68,Si),Positions(69,Si));
%         offset = [-3; -0; -.75];
%         T_LftS_LFLC = [Rxd(-3.5)*Rzd(195)*Ryd(90) offset; [0 0 0] 1]; 
%         
%         T_WldPlt_Pelv = T_Wld_LFtS*T_LftS_LFLC*invTr(T_Pelv_LL_7);
%Position Exo by original transformation matrix

%Plot Joint Pos
J_Pts = JT_CSPos_Pelv(q);
J_Pts = VF4*T_WldPlt_Pelv*[J_Pts; ones(1,length(J_Pts(1,:)))];
    pPelv_LA_1 = J_Pts(:,1);  pPelv_LA_2 = J_Pts(:,2);  pPelv_LA_3 = J_Pts(:,3);  pPelv_LA_4 = J_Pts(:,4);  pPelv_LA_5 = J_Pts(:,5);  
    pPelv_LL_1 = J_Pts(:,6);  pPelv_LL_2 = J_Pts(:,7);  pPelv_LL_3 = J_Pts(:,8);  pPelv_LL_4 = J_Pts(:,9);  pPelv_LL_5 = J_Pts(:,10);  pPelv_LL_6 = J_Pts(:,11);  
    pPelv_RA_1 = J_Pts(:,12);  pPelv_RA_2 = J_Pts(:,13);  pPelv_RA_3 = J_Pts(:,14);  pPelv_RA_4 = J_Pts(:,15);  pPelv_RA_5 = J_Pts(:,16);  
    pPelv_RL_1 = J_Pts(:,17);  pPelv_RL_2 = J_Pts(:,18);  pPelv_RL_3 = J_Pts(:,19);  pPelv_RL_4 = J_Pts(:,20);  pPelv_RL_5 = J_Pts(:,21);  pPelv_RL_6 = J_Pts(:,22);  
    pPelv_TT_1 = J_Pts(:,23);  pPelv_TT_2 = J_Pts(:,24);  
for ii = 1:length(J_Pts(1,:))
    plot_sphere(RJrad,J_Pts(:,ii),	[0 0 0])
end

%Load Cell Pos
LC_Pts = LC_CSPos_Pelv(q);
LC_Pts = VF4*T_WldPlt_Pelv*[LC_Pts; ones(1,length(LC_Pts(1,:)))];
    pPelv_BS_2 = LC_Pts(:,1);  pPelv_TT_3 = LC_Pts(:,2);  pPelv_LA_6 = LC_Pts(:,3);  pPelv_LL_7 = LC_Pts(:,4);  pPelv_RA_6 = LC_Pts(:,5);  pPelv_RL_7 = LC_Pts(:,6);
for ii = 1:length(LC_Pts(1,:))
    plot_sphere(LCrad,LC_Pts(:,ii),[0 0 1])
end

%Other Point Positions
pPelv_BS_1 = [0 0 0]';
pPelv_BS_1 = VF4*T_WldPlt_Pelv*[pPelv_BS_1; 1];
pTtop = VF4*T_WldPlt_Pelv*T_Pelv_TT_2*[0 0 -9.815 1]';
pStopR = VF4*T_WldPlt_Pelv*T_Pelv_RA_1*[0 0 -11.65 1]';
pSfrntR = VF4*T_WldPlt_Pelv*T_Pelv_RA_2*[0 1.1766 .95 1]';
pEinR = VF4*T_WldPlt_Pelv*T_Pelv_RA_4*[0 0 -1.44 1]';
pHndR = VF4*T_WldPlt_Pelv*T_Pelv_RA_5*[0 0 2 1]';
pHdlR = VF4*T_WldPlt_Pelv*T_Pelv_RA_6*[-2.603 -.375 0 1]';

pStopL = VF4*T_WldPlt_Pelv*T_Pelv_LA_1*[0 0 11.65 1]';
pSfrntL = VF4*T_WldPlt_Pelv*T_Pelv_LA_2*[0 1.1766 -.95 1]';
pEinL = VF4*T_WldPlt_Pelv*T_Pelv_LA_4*[0 0 1.44 1]';
pHndL = VF4*T_WldPlt_Pelv*T_Pelv_LA_5*[0 0 -2 1]';
pHdlL = VF4*T_WldPlt_Pelv*T_Pelv_LA_6*[-2.603 .375 0 1]';

pHoutR = VF4*T_WldPlt_Pelv*T_Pelv_RL_2*[3.444 0 0 1]';
pFoutR = VF4*T_WldPlt_Pelv*T_Pelv_RL_6*[5.475 0 0 1]';

pHoutL = VF4*T_WldPlt_Pelv*T_Pelv_LL_2*[3.444 0 0 1]';
pFoutL = VF4*T_WldPlt_Pelv*T_Pelv_LL_6*[5.475 0 0 1]';

%Plot Robot Lines
LnEnd = [pPelv_LA_1, pPelv_LA_2, pPelv_LA_3, pPelv_LA_4, pPelv_LA_5, ...
    pPelv_LL_1, pPelv_LL_2, pPelv_LL_3, pPelv_LL_4, pPelv_LL_5, pPelv_LL_6,...
    pPelv_RA_2, pPelv_RA_3, pPelv_RA_4, pPelv_RA_5, ...
    pPelv_RL_1, pPelv_RL_2, pPelv_RL_3, pPelv_RL_4, pPelv_RL_5, pPelv_RL_6, ...
    pPelv_TT_1, pPelv_TT_2, pPelv_BS_2, pPelv_TT_3, pPelv_LA_6, pPelv_LL_7, pPelv_RA_6, pPelv_RL_7,...
    pTtop, pStopR, pSfrntR, pEinR, pHndR, pHdlR, ...
    pStopL, pSfrntL, pEinL, pHndL, pHdlL, pHoutR, pFoutR, pHoutL, pFoutL];
LnBegin = [pPelv_RA_1, pStopL, pSfrntL, pPelv_LA_3, pEinL, ...
    pPelv_BS_1, pPelv_LL_1, pHoutL, pPelv_LL_3, pPelv_LL_4, pPelv_LL_5,...
    pStopR, pSfrntR, pPelv_RA_3, pEinR, ...
    pPelv_BS_1, pPelv_RL_1, pHoutR, pPelv_RL_3, pPelv_RL_4, pPelv_RL_5, ...
    pPelv_BS_1, pPelv_TT_1, pPelv_BS_1, pTtop, pHndL, pFoutL, pHndR, pFoutR,...
    pPelv_TT_2, pPelv_RA_1, pPelv_RA_2, pPelv_RA_4, pPelv_RA_5, pPelv_RA_6, ...
    pPelv_LA_1, pPelv_LA_2, pPelv_LA_4, pPelv_LA_5, pPelv_LA_6, pPelv_RL_2, pPelv_RL_6, pPelv_LL_2, pPelv_LL_6];
xptsR = [LnBegin(1,:); LnEnd(1,:)];
yptsR = [LnBegin(2,:); LnEnd(2,:)];
zptsR = [LnBegin(3,:); LnEnd(3,:)];
line(xptsR,yptsR,zptsR,'LineWidth',5,'Color',[0.35 0.35 0.35]); %Matlab RGB Triplets

%Plot Robot CoM
pCoM_Pelv = pCoM(q);
pCoM_Wld = VF4*T_WldPlt_Pelv*[pCoM_Pelv; 1];
plot_sphere(CoMrad,pCoM_Wld,[0 1 0])



light('Position',[1 1 3],'Style','infinite')
%lightangle(180,45)
lighting flat

xlim(xlims);
ylim(ylims);
zlim(zlims);

xlabel 'x(in)'; ylabel 'y(in)'; zlabel 'z(in)';
grid on;
% title(sprintf('time = %6.3f seconds,',timeS(Si)/1000));
title(['Subject: P0' num2str(choice)]);
drawnow;
[az,el] = view();
end

