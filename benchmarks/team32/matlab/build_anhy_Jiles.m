function [b0,h0]=build_anhy_Jiles()

h0=[linspace(0,100,101), linspace(109,1000,100)];
%h0=1;
%FAC=2:2:10;
FAC=10;

for k=1:length(FAC)
    fac=FAC(k);
    for i=1:length(h0)
        display(i);
    res{k}.b0(i)=get_damped_b(h0(i),fac);
    end
end

b0=res{length(FAC)}.b0;

for k=1:length(FAC)
    figure(4);hold all;
    plot(h0,res{k}.b0); 

end
 legendCell = cellstr(num2str(FAC', 'FAC=%-g'));
 legend(legendCell,'Location','Best');
 
    h_anhy=h0;
    b_anhy=b0;
    fileID=fopen('hb_anhy_TD_xy_kj.dat','w');
    fprintf(fileID,'%1s\t%1s\r\n','h','b');
    fprintf(fileID,'%.16f\t%.16f\r\n',[h_anhy;b_anhy]);
    fclose(fileID);

end


function b0=get_damped_b(h0, fac)
% Material parameters: e.g. hyst_FeSi = { Msat, a, k, c, alpha}
global mu0 Msat aa kk cc alpha ;

% FeSi for Team32, data from
% A Differential Permeability 3-D Formulation for Anisotropic Vector Hysteresis Analysis
% J. P. A. Bastos, N. Sadowski, J. Vianei Leite, N. J. Batistela, K. Hoffmann, G. Meunier, and O. Chadebec
% IEEE Trans. Mag., Vol. 50, No. 2, Feb. 2014

%xy direction  %% 'direction 90' in fimet90.dat (transverse direction)
Msat = 1.31e6; 
aa = 233.78; 
kk = 374.975; 
cc = 0.736; 
alpha = 562e-6 ;

%z direction  %% direction 00' in fimet00.dat (rolling direction)
% Msat = 1.33e6;
% aa = 172.856;
% kk = 232.652;
% cc = 0.652;
% alpha = 417e-6;


mu0 = 4*pi*1e-7; 

%%%%%%%%%%%%%%%%%%%%%%%%%%%

%h0=1000;




ha = 2000 ;
freq = 1 ;
T = 1/freq ;
t0 = 0 ;
nbrT = 100;
tmax = T*nbrT ;
nbrsteps = 700 ;
N = nbrsteps*nbrT ;

time = linspace(t0,tmax,N) ;
h=zeros(size(time)) ;
Trelax=2*T;
Tdamp=fac*T;

for i=1:N
    t=time(i);
    if t<Trelax
       h(i)= 0.5*(1.-cos(pi*t/Trelax))*h0-...
                ha *sin(2*pi*freq*t)*exp(-t/(Tdamp));
    else
       h(i)=h0- (ha *sin(2*pi*freq*t))*exp(-t/(Tdamp));
    end
       
end

b = zeros(size(h)) ;
nint = 10 ;

for k=1:N-1
    b(k+1) = get_b(b(k), h(k), h(k+1), nint) ;
end

b0=b(end);


end