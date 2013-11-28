clear all
close all

set(0,'DefaultAxesFontName', 'Helvetica')
set(0,'DefaultAxesFontSize', 18)
set(0,'defaultlinelinewidth', 2)

set(0,'DefaultAxesColorOrder',distinguishable_colors(20))

ResDir = 'res/';

NbPhases = 1;
if(NbPhases==1)
    ref = load('ref_results_t30a_1p.txt');
else
    ref = load('ref_results_t30a_3p.txt');
end

Tr  = load([ResDir,'Tr.dat']);
Ts  = load([ResDir,'Ts.dat']);
Tmb  = load([ResDir,'Tmb.dat']);

wr = ref(:,1);
wr_ = Tr(:,1) ;

figure, hold on, grid on
plot(wr, ref(:,2),'-','color',rgb('steelblue'), 'DisplayName','reference'),
plot(wr_,Tr(:,2),':','color', rgb('crimson'), ...
     'DisplayName', 'GetDP MB rotor')
plot(wr_,Ts(:,2),'--','color', rgb('chartreuse'), ...
     'DisplayName', 'GetDP MB stator')
plot(wr_,Tmb(:,2),'-.','color', rgb('fuchsia'), ...
     'DisplayName','GetDP MB')
legend('-DynamicLegend','Location','Best')
xlabel('rotor speed (rad/s)')
ylabel('torque (N/m)')


% Joule losses
P  = load([ResDir,'P.dat']);
P_fe  = load([ResDir,'P_fe.dat']);

figure, hold on, grid on
plot(wr,ref(:,4),'*-','color',rgb('steelblue'), 'DisplayName','reference'),
plot(wr_,P(:,2),'*-','color', rgb('crimson'), 'DisplayName','GetDP')
legend('-DynamicLegend','Location','Best')
ylabel('rotor loss (W/m)')
xlabel('rotor speed (rad/s)')


figure, hold on, grid on 
plot(wr,ref(:,5),'*-','color',rgb('steelblue'), 'DisplayName','reference'),
plot(wr_,P_fe(:,2),'*-','color', rgb('crimson'), 'DisplayName','GetDP')
legend('-DynamicLegend','Location','Best')
ylabel('steel loss (W/m)')
xlabel('rotor speed (rad/s)')

% Voltage
a  = load([ResDir,'Ua.dat']);
%b  = load([ResDir,'Ub.dat']);
%c  = load([ResDir,'Uc.dat']);

Ua  = a(:,2) + i*a(:,3);
Ua_ = a(:,4) + i*a(:,5);

%Ub = b(:,2) + i*b(:,3);
%Uc  = c(:,2) + i*c(:,3);


figure, hold on, grid on, 
plot(wr, ref(:,3),'*-','color',rgb('steelblue'), 'DisplayName','reference'),
plot(wr_, abs(Ua-Ua_),'*-','color', rgb('crimson'), 'DisplayName','GetDP')
legend('-DynamicLegend','Location','Best')
ylabel('voltage (V/m/turn)')
xlabel('rotor speed (rad/s)')
