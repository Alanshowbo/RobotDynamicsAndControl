function [az,el] = PlotFrameCAD(Si,timeS,Positions,Orientations,timeR,Q,xlims,ylims,zlims,az,el,choice,match)
%Master Plotting function - updated 5/9
scl = 39.3701; %m to in plotting in inches
% scl = 1; %plotting in meters
scl2 = 0.0393701; %mm to in for Subject CREO

Positions = Positions*scl;

VF4 = [1 0 0 0; 0 1 0 0; 0 0 1 0]; %Positions from translation matrix output
hold on
axis equal
view([az,el])

%% Point Radii
Zrad = 0.04*scl; %global zero
CoMrad = 1; %Center of mass
SJrad = 0.04*scl; %subject joints
RJrad = 0.03*scl; %Robot joints
LCrad = 0.5;

%% plot Ground
plot_xyground(xlims(1),xlims(2),ylims(1),ylims(2))

%% Plot Global Zero
% plot_sphere(Zrad,[0;0;0],[1 0 1])

%% Plot Subject 
PelvNum = 1;    L5Num = 2;        L3Num = 3;
L12Num = 4;        L8Num = 5;        NeckNum = 6;
HeadNum = 7;        RShoNum = 8;        RUArNum = 9;
RForNum = 10;        RHndNum = 11;        LShoNum = 12;
LUArNum = 13;        LForNum = 14;        LHndNum = 15;
RUpLNum = 16;        RLoLNum = 17;        RFtNum = 18;
RToeNum = 19;        LUpLNum = 20;        LLoLNum = 21;
LFtNum = 22;        LToeNum = 23;

% %Joints
Jpos = Positions(:,Si);

%plot Subject lines
[jpos_Pelv, jpos_L5, jpos_L3, jpos_T12, jpos_T8, jpos_Neck, jpos_Head, ...
    jpos_RSho, jpos_RUpA, jpos_RFoA, jpos_RHnd, jpos_LSho, jpos_LUpA, jpos_LFoA, ...
    jpos_LHnd, jpos_RUpL, jpos_RLoL, jpos_RFoo, jpos_RToe, jpos_LUpL, jpos_LLoL, ...
    jpos_LFoo, jpos_LToe] =  SubjectJointPosWld(Jpos);


%% Plot subject Model

SubColor = [1 0 0];   SubOpacity = 1;
%Define Right Side files - Left Side is rotated 180 deg about right side part frame to get left part frame
T_R2Lx = [Rxd(180),[0;0;0];[0 0 0 1]];
T_R2Ly = [Ryd(180),[0;0;0];[0 0 0 1]];
T_R2Lz = [Rzd(180),[0;0;0];[0 0 0 1]];

if strcmp(match,'Lankle_Gait')
    Lhandang = -30;
    Rhandang = -30;
    Rfootang = 0;
elseif strcmp(match,'Hip_Shelf')
    Lhandang = -20;
    Rhandang = -0;
    Rfootang = 40;
else
    Lhandang = -10;
    Rhandang = -10;
    Rfootang = 0;
end

%Torso
pltNum = PelvNum;
DistReal = norm(jpos_RUpL-jpos_LUpL);        DistPart = 7.12627; %Hip Width
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('pelvis_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,DistReal/DistPart)
%
pltNum = L5Num;
DistReal = norm(jpos_L3-jpos_L5);        DistPart = 3; %vertebrae height
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('neck_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,[1 1 1.5*DistReal/DistPart])
%
pltNum = L3Num;
DistReal = norm(jpos_L3-jpos_Neck);        DistPart = 14.2849; %torso height
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('torso_asm.stl',T_Wld_PrtPlot*[Ryd(5),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,DistReal/DistPart)
%
pltNum = HeadNum;
DistReal = 7;        DistPart = 165*scl2; %Hip Width
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('head2_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,DistReal/DistPart)
%
pltNum = NeckNum;
DistReal = norm(jpos_Neck-jpos_Head);        DistPart = 5; %Hip Width
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('neck_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,[1 1 1.5*DistReal/DistPart])

%RightLeg
pltNum = RUpLNum;
DistReal = norm(jpos_RUpL-jpos_RLoL);        DistPart = 11.8149; %Upper Leg Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rupleg_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,[1 1 DistReal/DistPart])
%
pltNum = RLoLNum;
DistReal = norm(jpos_RLoL-jpos_RFoo);        DistPart = 15.5129; %Lower Leg Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rlowleg_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,DistReal/DistPart)
%
pltNum = RFtNum;
DistReal = norm(jpos_RFoo-jpos_RToe);        DistPart = 7.66944; %Foot Length Ankle to Toe
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rfoot_asm.stl',T_Wld_PrtPlot*[Rzd(Rfootang),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,DistReal/DistPart*[1 1 1.5])

%LeftLeg
pltNum = LUpLNum;
DistReal = norm(jpos_LUpL-jpos_LLoL);        DistPart = 11.8149; %Upper Leg Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rupleg_asm.stl',T_Wld_PrtPlot*T_R2Lz,SubColor,SubOpacity,[1 1 DistReal/DistPart])
%
pltNum = LLoLNum;
DistReal = norm(jpos_LLoL-jpos_LFoo);        DistPart = 15.5129; %Lower Leg Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rlowleg_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,DistReal/DistPart)
%
pltNum = LFtNum;
DistReal = norm(jpos_LFoo-jpos_LToe);        DistPart = 7.66944; %Foot Length Ankle to Toe
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rfoot_asm.stl',T_Wld_PrtPlot,SubColor,SubOpacity,DistReal/DistPart*[1 1 1.5])

%RightArm
pltNum = RUArNum;
DistReal = norm(jpos_RUpA-jpos_RFoA);        DistPart = 10; %Upper Arm Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('ruparm_asm.stl',T_Wld_PrtPlot*[Rxd(-90),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,[.9 .9 DistReal/DistPart])
%
pltNum = RForNum;
DistReal = norm(jpos_RFoA-jpos_RHnd);        DistPart = 9.5; %Lower Arm Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rlowarm_asm.stl',T_Wld_PrtPlot*[Rxd(-90),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,DistReal/DistPart)
%
pltNum = RHndNum;
DistReal = 6;        DistPart = 165*scl2; %Hand Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rhand2_asm.stl',T_Wld_PrtPlot*[Rxd(-90)*Ryd(Rhandang),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,DistReal/DistPart)

%LeftArm
pltNum = LUArNum;
DistReal = norm(jpos_LUpA-jpos_LFoA);        DistPart = 10; %Upper Arm Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('ruparm_asm.stl',T_Wld_PrtPlot*[Rxd(90),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,[.9 .9 DistReal/DistPart])
%
pltNum = LForNum;
DistReal = norm(jpos_LFoA-jpos_LHnd);        DistPart = 9.5; %Lower Arm Length
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('rlowarm_asm.stl',T_Wld_PrtPlot*[Rxd(90),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,DistReal/DistPart)
%
pltNum = LHndNum;
DistReal = 6;        DistPart = 165*scl2; %Hand Length 
T_Wld_PrtPlot = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
PlotPart('lhand2_asm.stl',T_Wld_PrtPlot*[Rxd(90)*Ryd(Lhandang),[0;0;0];[0 0 0 1]],SubColor,SubOpacity,DistReal/DistPart)



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
    if chkframes(end) > length(timeR)
        Ri = length(timeR);
    else
        for jj = chkframes
            if (timeR(jj)==(timeS(Si)-look))||(timeR(jj)==(timeS(Si)+look))
                Ri = jj;
                if look ~= 0
                    look
                end
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
    T_Pelv_Pelv = eye(4);
%How to Plot Robot on Human

switch match
    case 'Lankle_Five'
        %Position Exo Hip relative to Subject Ankle
        pltNum = LFtNum;
        T_Wld_LAnkS = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
        if choice ==1
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(92)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1]; 
        elseif choice ==2
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(92)*Rxd(89)*Ryd(-13)*Rzd(0) offset; [0 0 0] 1]; 
        elseif choice ==3
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(92)*Rxd(89)*Ryd(-1)*Rzd(0) offset; [0 0 0] 1]; 
        elseif choice ==4
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(92)*Rxd(89)*Ryd(-6)*Rzd(0) offset; [0 0 0] 1]; 
        elseif choice ==5
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(92)*Rxd(89)*Ryd(-12)*Rzd(0) offset; [0 0 0] 1];  
        else
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(92)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1]; 
        end
        T_WldPlt_Pelv = T_Wld_LAnkS*T_LAnkS_LL_6*invTr(T_Pelv_LL_6);
    case 'Lankle_IV'
        pltNum = LFtNum;
        T_Wld_LAnkS = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
        if choice == 4
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(95)*Rxd(89)*Ryd(-6.5)*Rzd(0) offset; [0 0 0] 1];
        else
            offset = [1; 6; 0];
            T_LAnkS_LL_6 = [Ryd(95)*Rxd(89)*Ryd(-6.5)*Rzd(0) offset; [0 0 0] 1];
        end
        T_WldPlt_Pelv = T_Wld_LAnkS*T_LAnkS_LL_6*invTr(T_Pelv_LL_6);
    case 'Lankle_Gait'
        pltNum = LFtNum;
        T_Wld_LAnkS = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
        if choice == 2
            offset = [1.6; 4; 0];
            T_LAnkS_LL_6 = [Ryd(86)*Rxd(85)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1];
        elseif choice == 3
            offset = [1.3; 4; 0];
            T_LAnkS_LL_6 = [Ryd(90)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1];
        elseif choice == 4
            offset = [0.3; 5; 0];
            T_LAnkS_LL_6 = [Ryd(92)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1];
        else
            offset = [0.3; 5; 0];
            T_LAnkS_LL_6 = [Ryd(90)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1];
        end
        T_WldPlt_Pelv = T_Wld_LAnkS*T_LAnkS_LL_6*invTr(T_Pelv_LL_6);
    case 'Hip_Shelf'
        pltNum = PelvNum;
        T_Wld_HipS = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
        if choice == 1
            offset = [-7.5; -1; 2];
            T_HipS_Pelv = [Rxd(-2)*Rzd(3)*Ryd(-68) offset; [0 0 0] 1]; 
        elseif choice == 2
            
            offset = [-7; -1; 1.5];
            T_HipS_Pelv = [Rxd(-2)*Rzd(3)*Ryd(-72) offset; [0 0 0] 1]; 
        else
            offset = [-7; -2; 1.5];
            T_HipS_Pelv = [Rxd(0)*Rzd(0)*Ryd(-78) offset; [0 0 0] 1]; 
        end
        T_WldPlt_Pelv = T_Wld_HipS*T_HipS_Pelv;
    case 'Lankle_Carry'
        pltNum = LFtNum;
        T_Wld_LAnkS = TfromQ(Orientations(((1:4)+4*(pltNum-1)),Si),Positions(((1:3)+3*(pltNum-1)),Si));
        if choice == 2
            offset = [1.6; 4; 0];
            T_LAnkS_LL_6 = [Ryd(84)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1];
        elseif choice == 3
            offset = [1.3; 4; 0];
            T_LAnkS_LL_6 = [Ryd(90)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1];
        else
            offset = [0.3; 5; 0];
            T_LAnkS_LL_6 = [Ryd(90)*Rxd(89)*Ryd(-8)*Rzd(0) offset; [0 0 0] 1];
        end
        T_WldPlt_Pelv = T_Wld_LAnkS*T_LAnkS_LL_6*invTr(T_Pelv_LL_6);
end

%Load Cell Pos
LC_Pts = LC_CSPos_Pelv(q);
LC_Pts = VF4*T_WldPlt_Pelv*[LC_Pts; ones(1,length(LC_Pts(1,:)))];
    pPelv_BS_2 = LC_Pts(:,1);  pPelv_TT_3 = LC_Pts(:,2);  pPelv_LA_6 = LC_Pts(:,3);  pPelv_LL_7 = LC_Pts(:,4);  pPelv_RA_6 = LC_Pts(:,5);  pPelv_RL_7 = LC_Pts(:,6);
for ii = 1:length(LC_Pts(1,:))
    plot_sphere(LCrad,LC_Pts(:,ii),[0 0 1])
end


ExoColor = [0.5 0.5 0.5];   ExoOpacity = 0.9;
%Define Right Side files - Left Side is rotated 180 deg about right side part frame to get left part frame
T_R2Lx = [Rxd(180),[0;0;0];[0 0 0 1]];
T_R2Ly = [Ryd(180),[0;0;0];[0 0 0 1]];
T_R2Lz = [Rzd(180),[0;0;0];[0 0 0 1]];

PlotPart('pelvis.stl',T_WldPlt_Pelv,ExoColor,ExoOpacity,1)
PlotPart('torsotilt.stl',T_WldPlt_Pelv*T_Pelv_TT_1,ExoColor,ExoOpacity,1)
PlotPart('torsorotate.stl',T_WldPlt_Pelv*T_Pelv_TT_2,ExoColor,ExoOpacity,1)
%Right Leg
PlotPart('rhiprotate.stl',T_WldPlt_Pelv*T_Pelv_RL_1,ExoColor,ExoOpacity,1) 
PlotPart('rhipabad.stl',T_WldPlt_Pelv*T_Pelv_RL_2,ExoColor,ExoOpacity,1) 
PlotPart('rhipflex.stl',T_WldPlt_Pelv*T_Pelv_RL_3,ExoColor,ExoOpacity,1)
PlotPart('rkneeflex.stl',T_WldPlt_Pelv*T_Pelv_RL_4,ExoColor,ExoOpacity,1)
PlotPart('rcalfrotate.stl',T_WldPlt_Pelv*T_Pelv_RL_5,ExoColor,ExoOpacity,1)
PlotPart('rankleflex.stl',T_WldPlt_Pelv*T_Pelv_RL_6,ExoColor,ExoOpacity,1)
%Left Leg
PlotPart('rhiprotate.stl',T_WldPlt_Pelv*T_Pelv_LL_1,ExoColor,ExoOpacity,1) 
PlotPart('rhipabad.stl',T_WldPlt_Pelv*T_Pelv_LL_2*T_R2Lx,ExoColor,ExoOpacity,1) 
PlotPart('rhipflex.stl',T_WldPlt_Pelv*T_Pelv_LL_3,ExoColor,ExoOpacity,1)
PlotPart('rkneeflex.stl',T_WldPlt_Pelv*T_Pelv_LL_4,ExoColor,ExoOpacity,1)
PlotPart('rcalfrotate.stl',T_WldPlt_Pelv*T_Pelv_LL_5*T_R2Ly,ExoColor,ExoOpacity,1)
PlotPart('lankleflex.stl',T_WldPlt_Pelv*T_Pelv_LL_6,ExoColor,ExoOpacity,1)
%Right Arm
PlotPart('rshoabad.stl',T_WldPlt_Pelv*T_Pelv_RA_1,ExoColor,ExoOpacity,1) 
PlotPart('rshoflex.stl',T_WldPlt_Pelv*T_Pelv_RA_2,ExoColor,ExoOpacity,1)
PlotPart('rhumrot.stl',T_WldPlt_Pelv*T_Pelv_RA_3,ExoColor,ExoOpacity,1)
PlotPart('relbflex.stl',T_WldPlt_Pelv*T_Pelv_RA_4,ExoColor,ExoOpacity,1)
PlotPart('rwristrot.stl',T_WldPlt_Pelv*T_Pelv_RA_5,ExoColor,ExoOpacity,1)

%Left Arm
PlotPart('rshoabad.stl',T_WldPlt_Pelv*T_Pelv_LA_1*T_R2Ly,ExoColor,ExoOpacity,1) 
PlotPart('lshoflex.stl',T_WldPlt_Pelv*T_Pelv_LA_2,ExoColor,ExoOpacity,1)
PlotPart('rhumrot.stl',T_WldPlt_Pelv*T_Pelv_LA_3*T_R2Ly,ExoColor,ExoOpacity,1)
PlotPart('lelbflex.stl',T_WldPlt_Pelv*T_Pelv_LA_4,ExoColor,ExoOpacity,1)
PlotPart('rwristrot.stl',T_WldPlt_Pelv*T_Pelv_LA_5*T_R2Lz*T_R2Ly,ExoColor,ExoOpacity,1)


% %Plot Robot CoM
% pCoM_Pelv = pCoM(q);
% pCoM_Wld = VF4*T_WldPlt_Pelv*[pCoM_Pelv; 1];
% plot_sphere(CoMrad,pCoM_Wld,[0 1 0])

xlim(xlims);
ylim(ylims);
zlim(zlims);


% grid off
% xlabel('Gait Cycle')
% title('')
INtoM = .0254;
MtoIN = 39.3701;
zlabel('z(m)');
set(gca,'ZTick', [0*MtoIN 0.5*MtoIN 1*MtoIN 1.5*MtoIN 2*MtoIN])
set(gca,'ZTickLabel', [0 0.5 1.0 1.5 2.0])

ylabel('y(m)');
set(gca,'YTick', [-1*MtoIN -0.5*MtoIN -0.25*MtoIN 0*MtoIN 0.25*MtoIN 0.5*MtoIN 1*MtoIN])
set(gca,'YTickLabel', [-1.0 -0.5 -0.25 0 0.25 0.5 1.0])

xlabel('x(m)');
set(gca,'XTick', [-0.5*MtoIN 0*MtoIN 0.5*MtoIN 1*MtoIN 1.5*MtoIN 2*MtoIN 2.5*MtoIN 3*MtoIN])
set(gca,'XTickLabel', [-0.5 0 0.5 1.0 1.5 2.0 2.5 3.0])

set(gca,'fontsize',10);

grid on;
% grid off;
title(sprintf('time = %6.3f seconds,',timeS(Si)/1000));
% title(['Subject: P0' num2str(choice)]);
drawnow;
[az,el] = view();
end

