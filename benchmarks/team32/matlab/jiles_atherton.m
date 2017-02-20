clear all; close all

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
Msat = 1.33e6;
aa = 172.856;
kk = 232.652;
cc = 0.652;
alpha = 417e-6;


mu0 = 4*pi*1e-7; 

%%%%%%%%%%%%%%%%%%%%%%%%%%%

ha = 1000 ;
freq = 1 ;
T = 1/freq ;
t0 = 0 ;
nbrT = 2;
tmax = T*nbrT ;
nbrsteps = 200 ;
N = nbrsteps*nbrT ;

time = linspace(t0,tmax,N) ;

h = ha*sin(2*pi*freq*time) ;
b = zeros(size(h)) ;
nint = 10 ;

for k=1:N-1
    b(k+1) = get_b(b(k), h(k), h(k+1), nint) ;
end

figure(1), hold on, plot(time, h, 'b','LineWidth',2)
xlabel('time(s)'), ylabel('h')

figure(2), plot(h, b, 'r','LineWidth',2), grid on
xlabel('h'), ylabel('b')

    N = nbrsteps*1/4 ;
       figure(3), plot(h(1:N), b(1:N), 'm','LineWidth',2), grid on
    xlabel('h'), ylabel('b') 
    
    if (0)
        h_anhy=h(1:N);
        b_anhy=b(1:N);
        fileID=fopen('z.dat','w');
        fprintf(fileID,'%1s\t%1s\r\n','h','b');
        fprintf(fileID,'%.16f\t%.16f\r\n',[h_anhy;b_anhy]);
        fclose(fileID);
    end

    


% Save anhysteretic curve for first nonlinear computation



%===============================================================================
if(0) % one for creating file
    N = nbrsteps*1/4 ; % anhysteretic curve ==> increasing h, till
                       % max sin
    figure(3), plot(h(1:N), b(1:N), 'm','LineWidth',2), grid on
    xlabel('h'), ylabel('b')

    filename = sprintf('BH_anhysteretic.pro');    
    fid = fopen(filename, 'wt');
    
    fprintf(fid, 'Function { \n\n');
    
    fprintf(fid, 'anhys_b  = { \n' );
    fprintf(fid, '%.8f, %.8f, %.8f, %.8f, %.8f,\n', b(1:N));
    fprintf(fid, '%.8f } ; \n\n', b(N+1));
    
    fprintf(fid, 'anhys_h  = { \n' );
    fprintf(fid, '%.8f, %.8f, %.8f, %.8f, %.8f, \n', h(1:N));
    fprintf(fid, '%.8f } ; \n\n', h(N+1));
    
    fprintf(fid, 'anhys_b2  = List[anhys_b]^2 ;\n');
    fprintf(fid, 'anhys_nu  = List[anhys_h]/List[anhys_b] ;\n');
    fprintf(fid, 'anhys_nu(0)  = anhys_nu(1) ;\n');
    fprintf(fid, 'anhys_nu_b   = ListAlt[anhys_b, anhys_nu] ;\n');
    fprintf(fid, 'anhys_nu_b2  = ListAlt[anhys_b2, anhys_nu] ;\n');
    fprintf(fid, '\n');
    fprintf(fid, 'nu_anhys[]     = InterpolationLinear[SquNorm[$1]]{List[anhys_nu_b2]} ;\n');
    fprintf(fid, 'dnudb2_anhys[] = dInterpolationLinear[SquNorm[$1]]{List[anhys_nu_b2]} ;\n');
    fprintf(fid, 'h_anhys[] = nu_anhys[$1#1] * #1 ;\n');
    fprintf(fid, ['dhdb_anhys[] = TensorDiag[1,1,1] * nu_anhys[$1#1] ' ...
                  '+ 2*dnudb2_anhys[#1] * SquDyadicProduct[#1] ;\n']);
    fprintf(fid, 'dhdb_anhys_NL[] = 2*dnudb2_anhys[$1#1] * SquDyadicProduct[#1] ;\n');
    
    fprintf(fid, '} \n');
    %================================================================
    fclose(fid)
    
end