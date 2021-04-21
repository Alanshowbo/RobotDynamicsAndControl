st = 1:round(1/(fps*Simulation_dt)):length(t_vec)-1;

figure(21)
subplot(311)
    plot(t_vec(st),q(:,st)); 
    grid on
    xlabel('Time (sec)'); ylabel('Joint Angles (rad)'); 
    title('Joint Angles')
    legend('q_1','q_2','q_3')
subplot(312)
    plot(t_vec(st),dq(:,st)); 
    grid on
    xlabel('Time (sec)'); ylabel('dq (rad/s)'); 
    title('dq')
    legend('dq_1','dq_2','dq_3')
subplot(313)
    plot(t_vec(st),u(:,st)); 
    grid on
    xlabel('Time (sec)'); ylabel('Input (Nm)'); 
    title('Input Torques')
    legend('\tau_1','\tau_2','\tau_3')
%     ylim([-400 400])
% subplot(313)
%     plot(t_vec,GRF); 
%     grid on
%     xlabel('Time (sec)'); ylabel('GRF (N)'); 
%     title('GRF')
%     legend('F_G_R_F_x','F_G_R_F_y')
%     ylim([-1000 1000])

figure(22)
subplot(311)
    plot(t_vec(st),pCOM(1,(st)),t_vec(st),vCOM(1,(st))); 
    grid on
    xlabel('Time (sec)'); ylabel('x'); 
    title('x')
    legend('pCOM','vCOM')
subplot(312)
    plot(t_vec(st),pCOM(2,(st)),t_vec(st),vCOM(2,(st))); 
    grid on
    xlabel('Time (sec)'); ylabel('y'); 
    title('y')
    legend('pCOM','vCOM')
subplot(313)
    plot(t_vec(st),pCOM(3,(st)),t_vec(st),vCOM(3,(st))); 
    grid on
    xlabel('Time (sec)'); ylabel('z'); 
    title('z')
    legend('pCOM','vCOM')
