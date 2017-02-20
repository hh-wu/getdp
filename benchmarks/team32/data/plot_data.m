function [OUT]=plot_data
clear;close all;

Flag_Revpaper=0;
Flag_Manhe=0;
Flag_anhyRuth=0;
Flag_anhyKj=1;
Flag_virgin=1;

% CHOOSE WHICH DATA TO PLOT HERE:
kk=1; % plot out0 (rolling direction)
%kk=4; % plot out90 (transverse direction)
%kk=1:4;  %plot all


C = {'k','b','r',[0 0.5,0], [20/25 20/25 0],'y',[.5 .6 .7],[.8 .2 .6]}; % Cell array of colors.
DIR=[0,30,60,90];
%0 is rolling direction
%90 is transverse direction

figure(1);
hold all;
grid on;

for k=kk
dir=DIR(k);
clear out;
ff=fopen(sprintf('fimet%02d.dat',dir),'r');
tl=fgets(ff);
numtest=sscanf(tl,'%g\n');
fclose(ff);

ff=fopen(sprintf('fimet%02d.dat',dir),'r');
for i=1:numtest
%display(i);
out{i}=filter_data(ff);
plot(out{i}.hh, out{i}.bb,'Color',C{k},'HandleVisibility','off');
end
fclose(ff);

OUT{k}=out;
%eval(sprintf('out%d=out',out{1}.direction));
end

%hdata=OUT{kk(1)}{end}.hh;
hdata=linspace(0,max(OUT{kk(1)}{end}.hh),5000);

%% rev with param from paper (not anhy apparently)
if (Flag_Revpaper)
C1=1.17; %[T-1/2]
C2= 0.79;      
C3=59.78;  %[Am-1] 
D1=1.86*1e-4; %[TmA-1] 
D2=1e1; %[Am-1] 
D3=1.29*1e-4; %[TmA-1]

Brev = @(x) (D3*x+D1*D2*atan(x/D2));

plot(hdata, Brev(hdata),'ro','DisplayName','rev with param from paper');
end

%% anhy from man(he) of Jiles fitting
if (Flag_Manhe)
display('anhy from man(he) of Jiles fitting');
mu0 = 4*pi*1e-7;
display(kk);

if(kk(1)==1)
%z direction  %% direction 00' in fimet00.dat (rolling direction)
Msat = 1.33e6;
aa = 172.856;
%kkk = 232.652;
cc = 0.652;
alpha = 417e-6;
dir00='(RD z)';
end

if(kk(end)==4)
%xy direction  %% 'direction 90' in fimet90.dat (transverse direction)
Msat = 1.31e6; 
aa = 233.78; 
%kkk = 374.975; 
cc = 0.736; 
alpha = 562e-6 ;
dir00='(TD xy)';
end

if (kk(1)==1 || kk(end)==4)
man = @(he) Msat*(cosh(he/aa)./sinh(he/aa)-aa./he) ;
BrevJ = @(x) mu0*(x+ man(x));
plot(hdata, BrevJ(hdata),'b','LineWidth',2,'DisplayName',['anhy from man(he) ',dir00]);
end
end

%% anhy from first nonlinear computation of Jiles Atherton model with Ruth's code
if (Flag_anhyRuth)
display('anhy from first nonlinear computation of Jiles Atherton model with Ruth s code');
if(kk(1)==1)
temp=importdata('hb_anhy_RD_z_Ruth.dat');
h_anhy_RD_z_Ruth=temp.data(:,1);
b_anhy_RD_z_Ruth=temp.data(:,2);
plot(h_anhy_RD_z_Ruth, b_anhy_RD_z_Ruth, 'g','LineWidth',2,'DisplayName','anhy from first curve (RD z)');
end

if(kk(end)==4)
temp=importdata('hb_anhy_TD_xy_Ruth.dat');
h_anhy_TD_xy_Ruth=temp.data(:,1);
b_anhy_TD_xy_Ruth=temp.data(:,2);
plot(h_anhy_TD_xy_Ruth, b_anhy_TD_xy_Ruth, 'm','LineWidth',2,'DisplayName','anhy from first curve (TD xy)');
end
end



%% build anhy with decreasing exponential
if (Flag_anhyKj)
display('build anhy with decreasing exponential');
if(kk(1)==1)
temp=importdata('hb_anhy_RD_z_kj.dat');
h_anhy_RD_z_kj=temp.data(:,1);
b_anhy_RD_z_kj=temp.data(:,2);
plot(h_anhy_RD_z_kj, b_anhy_RD_z_kj, 'r','LineWidth',2,'DisplayName','anhy decreasing exponential (RD z)');
end
if(kk(end)==4)
temp=importdata('hb_anhy_TD_xy_kj.dat');
h_anhy_TD_xy_kj=temp.data(:,1);
b_anhy_TD_xy_kj=temp.data(:,2);
plot(h_anhy_TD_xy_kj, b_anhy_TD_xy_kj, 'c','LineWidth',2,'DisplayName','anhy decreasing exponential (TD xy)');
end
end


%% build virgin curve
if (Flag_virgin)
    bvir=zeros(1,numtest+1);
    hvir=zeros(1,numtest+1);
    for i=1:numtest
    [bvir(i+1), xx]=max(OUT{1}{i}.bb);
    hvir(i+1)=OUT{1}{i}.hh(xx);
    end
    plot(hvir, bvir,'kx','LineWidth',2,'DisplayName','virgin curve data');
    hvirdata=hdata(hdata>=0);
    bvirdata=pchip(hvir,bvir,hvirdata);
    plot(hvirdata, bvirdata,'b','LineWidth',1,'DisplayName','virgin curve fitted with Piecewise Cubic Hermite Interpolating Polynomial');   
end

legend('-DynamicLegend','Location','Best');%Best
ylabel('b [T]');
xlabel('h [A/m]');
end






function out=filter_data(fileID)

ff=fileID;
formatSpec = '%f';
fgets(ff); %% to pass an empty line
tl=fgets(ff);
temp=sscanf(tl,'Bmax=%g (T) direction=%g°\n');
%display(temp);
out.Bmax=temp(1);
out.direction=temp(2);
tl=fgets(ff);
out.N=sscanf(tl,'%g\n');
A=fscanf(ff,formatSpec,[2,out.N]);
out.hh=A(1,:);
out.bb=A(2,:);

end