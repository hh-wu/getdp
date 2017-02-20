% Results from C. Guerin (Flux)
% Measurements from Team32

% variables: 
% with t => transversal; with r=>rolling 
% with 1 => point 1 => coil C1-C2
% with 2 => point 2 => coil C3-C4

% voltage
% tV, V1t, V2t, V1r, V2r, tVm, V1m, V2m
% current
% tI, I1t, I2t, I1r, I2r, tIm, I1m, I2m

% H B at point 1
% t1 Hx1t Hz1t Bx1t Bz1t Hx1r Hz1r Bx1r Bz1r tm1 Bx1m Bz1m 

% H B at point 2
% t2 Hx2t Hz2t Bx2t Bz2t Hx2r Hz2r Bx2r Bz2r tm2 Bx2m Bz2m 

% load measurements and Flux results
load('results_flux/results_flux_measurements.mat')

Flag_res2d=0;
Flag_res3d=0;
Flag_save=0;

path_res=''; % path where res_saved or res3d_saved are located

% load GetDP result
% 2D
if (exist([path_res,'res_saved'],'file'))
Flag_res2d=1;
tI1=load([path_res,'res_saved/I1.dat']);
tI2=load([path_res,'res_saved/I2.dat']);
thb1 = load([path_res,'res_saved/hbp_1.dat']); % (2:t 6:hx 7:hy 8:hz 10:bx 11:by 12:bz)
thb2 = load([path_res,'res_saved/hbp_2.dat']);
end

% 3D
if (exist([path_res,'res3d_saved'],'file'))
Flag_res3d=1;
tI1_=load([path_res,'res3d_saved/I1.dat']);
tI2_=load([path_res,'res3d_saved/I2.dat']);
thb1_ = load([path_res,'res3d_saved/hbp_1.dat']); % (2:t 6:hx 7:hy 8:hz 10:bx 11:by 12:bz)
thb2_ = load([path_res,'res3d_saved/hbp_2.dat']);
end

Freq = 10;
Period = 1/Freq;
nbsteps=250; % steps per period

nbsteps3d=300; % steps per period, 3d

cc=hsv(4); % 3 colors
myfontsize = 14;

figure(1), hold on, axis([0 0.1 -1.5 1.5]), grid on,
plot(tI, I1r, 'color', cc(1,:), 'LineWidth',2, 'DisplayName','I1 (Flux)')
plot(tI, I2r, 'color', cc(2,:), 'LineWidth',2, 'DisplayName','I2 (Flux)')
plot(tIm, I1m, ':', 'color', cc(1,:), 'LineWidth',1, 'DisplayName','I1 (meas)')
plot(tIm, I2m, ':', 'color', cc(2,:),'LineWidth',1, 'DisplayName','I2 (meas)')
if (Flag_res2d)
plot(tI1(end-nbsteps:end,1)-tI1(end-nbsteps,1), tI1(end-nbsteps:end,2), 'color', cc(3,:), 'LineWidth',2, ...
     'DisplayName','I1 GetDP 2D')
plot(tI2(end-nbsteps:end,1)-tI2(end-nbsteps,1), -tI2(end-nbsteps:end,2), 'color', cc(3,:), 'LineWidth',1, ...
     'DisplayName','I2 GetDP 2D')
end
if (Flag_res3d)
plot(tI1_(end-nbsteps3d:end,1)-tI1_(end-nbsteps3d,1), tI1_(end-nbsteps3d:end,2), 'color', cc(3,:), 'LineWidth',2, ...
     'DisplayName','I1 GetDP 3D')
plot(tI2_(end-nbsteps3d:end,1)-tI2_(end-nbsteps3d,1), -tI2_(end-nbsteps3d:end,2), 'color', cc(3,:), 'LineWidth',1, ...
     'DisplayName','I2 GetDP 3D')
end
ylabel('I(A)','FontName','Times New Roman','FontSize',myfontsize)
xlabel('t','FontName','Times New Roman','FontSize',myfontsize)
legend('-DynamicLegend','Location','Best');%Best
hold off
%
if (Flag_save)
saveas(figure(1), 'currents.eps', 'eps2c')
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
if (Flag_res2d)
nend= size(thb1,1);
pp = 1 ; % 1 period ...
ti = nend-pp*nbsteps;  %end-nbsteps-1:end
te = ti+pp*nbsteps;
end
if (Flag_res3d)
%3d case
nend_= size(thb1_,1);
pp_ = 0 ; % 1 period ...
ti_ = 1 ;%nend_-pp_*nbsteps3d;  %end-nbsteps-1:end
te_ = nend_;%ti+pp_*nbsteps3d;
end


figure(2), hold on, axis([0 0.1 -1 1]),grid on,
plot(t1,  Bx1r, 'color', cc(1,:), 'LineWidth',2, 'DisplayName','Flux')
plot(tm1-0.0248, Bx1m, 'color', cc(2,:), 'LineWidth',2, 'DisplayName','meas')
if (Flag_res2d)
plot(thb1(ti:te,2)-thb1(ti,2), thb1(ti:te,9), 'color', cc(3,:), ...
     'LineWidth',2, 'DisplayName','GetDP 2D')
end
if (Flag_res3d)
plot(thb1_(ti_:te_,2)-thb1_(ti_,2), thb1_(ti_:te_,9), 'color', cc(4,:), ...
     'LineWidth',2, 'DisplayName','GetDP 3D')
end
ylabel('Bx (T)','FontName','Times New Roman','FontSize',myfontsize)
xlabel('t (s)','FontName','Times New Roman','FontSize',myfontsize)
title('Bx at Point 1')
legend('-DynamicLegend','Location','Best');%Best
hold off
if (Flag_save)
saveas(figure(2), 'bx_pnt1.eps', 'eps2c')
end


figure(3), hold on, axis([0 0.1 -1 1]),grid on,
plot(t1,  Bz1r, 'color', cc(1,:), 'LineWidth',2, 'DisplayName','Flux')
plot(tm1-0.0248, Bz1m, 'color', cc(2,:), 'LineWidth',2, ...
     'DisplayName','meas')
if (Flag_res2d)
plot(thb1(ti:te,2)-thb1(ti,2), thb1(ti:te,10), 'color', cc(3,:), ...
     'LineWidth',2, 'DisplayName','GetDP 2D')
end
if (Flag_res3d)
plot(thb1_(ti_:te_,2)-thb1_(ti_,2), thb1_(ti_:te_,10), 'color', cc(4,:), ...
     'LineWidth',2, 'DisplayName','GetDP 3D')
end
ylabel('Bz (T)','FontName','Times New Roman','FontSize',myfontsize)
xlabel('t (s)','FontName','Times New Roman','FontSize',myfontsize)
title('Bz at Point 1')
legend('-DynamicLegend','Location','Best');%Best
hold off
if (Flag_save)
saveas(figure(3), 'bz_pnt1.eps', 'eps2c')
end

%

figure(4), hold on, axis([0 0.1 -1 1]),grid on,
plot(t2,  Bx2r, 'color', cc(1,:), 'LineWidth',2, 'DisplayName','Flux')
plot(tm2-0.0248, Bx2m, 'color', cc(2,:), 'LineWidth',2, ...
     'DisplayName','meas')
if (Flag_res2d)
plot(thb2(ti:te,2)-thb2(ti,2), thb2(ti:te,9), 'color', cc(3,:), ...
     'LineWidth',2, 'DisplayName','GetDP 2D')
end
if (Flag_res3d)
plot(thb2_(ti_:te_,2)-thb1_(ti_,2), thb2_(ti_:te_,9), 'color', cc(4,:), ...
     'LineWidth',2, 'DisplayName','GetDP 3D')
end
ylabel('Bx (T)','FontName','Times New Roman','FontSize',myfontsize)
xlabel('t (s)','FontName','Times New Roman','FontSize',myfontsize)
title('Bx at Point 2')
legend('-DynamicLegend','Location','Best');%Best
hold off
if (Flag_save)
saveas(figure(4), 'bx_pnt2.eps', 'eps2c')
end

figure(5), hold on, axis([0 0.1 -1.5 1.5]),grid on,
plot(t2,  Bz2r, 'color', cc(1,:), 'LineWidth',2, 'DisplayName','Flux')
plot(tm2-0.0248, Bz2m, 'color', cc(2,:), 'LineWidth',2, ...
     'DisplayName','meas')
if (Flag_res2d)
plot(thb2(ti:te,2)-thb2(ti,2), thb2(ti:te,10), 'color', cc(3,:), ...
     'LineWidth',2, 'DisplayName','GetDP 2D')
end
if (Flag_res3d)
plot(thb2_(ti_:te_,2)-thb1_(ti_,2), thb2_(ti_:te_,10), 'color', cc(4,:), ...
     'LineWidth',2, 'DisplayName','GetDP 3D')
end
ylabel('Bz (T)','FontName','Times New Roman','FontSize',myfontsize)
xlabel('t (s)','FontName','Times New Roman','FontSize',myfontsize)
title('Bz at Point 2')
legend('-DynamicLegend','Location','Best');%Best
hold off
if (Flag_save)
saveas(figure(5), 'bz_pnt2.eps', 'eps2c')
end

figure(6), hold on, axis square,grid on,
plot(Bx1r, Bz1r, 'color', cc(1,:), 'LineWidth',2, 'DisplayName','Flux')
plot(Bx1m, Bz1m, 'color', cc(2,:), 'LineWidth',2, 'DisplayName', ...
     'meas')
if (Flag_res2d)
plot(thb1(ti:te,9), thb1(ti:te,10), 'color', cc(3,:), 'LineWidth',2, ...
     'DisplayName','GetDP 2D')
end
if (Flag_res3d)
plot(thb1_(ti_:te_,9), thb1_(ti_:te_,10), 'color', cc(4,:), ...
     'LineWidth',2, 'DisplayName','GetDP 3D')
end
ylabel('Bz (T)','FontName','Times New Roman','FontSize',myfontsize)
xlabel('Bx (T)','FontName','Times New Roman','FontSize',myfontsize)
title('Bx-Bz locus at Point 1')
legend('-DynamicLegend','Location','Best');%Best
hold off
if (Flag_save)
saveas(figure(6), 'bxbz_pnt1.eps', 'eps2c')
end

figure(7), hold on, axis square, axis([-0.8,0.8, -1.4,1.4]), grid on,
plot(Bx2r,  Bz2r, 'color', cc(1,:), 'LineWidth',2, 'DisplayName','Flux')
plot(Bx2m, Bz2m, 'color', cc(2,:), 'LineWidth',2, 'DisplayName', ...
     'meas')
if (Flag_res2d)
plot(thb2(ti:te,9), thb2(ti:te,10), 'color', cc(3,:), 'LineWidth',2, ...
     'DisplayName','GetDP 2D')
end
if (Flag_res3d)
plot(thb2_(ti_:te_,9), thb2_(ti_:te_,10), 'color', cc(4,:), ...
     'LineWidth',2, 'DisplayName','GetDP 3D')
end
ylabel('Bz (T)','FontName','Times New Roman','FontSize',myfontsize)
xlabel('Bx (T)','FontName','Times New Roman','FontSize',myfontsize)
title('Bx-Bz locus at Point 2')
legend('-DynamicLegend','Location','Best');%Best
hold off
if (Flag_save)
saveas(figure(7), 'bxbz_pnt2.eps', 'eps2c')
end