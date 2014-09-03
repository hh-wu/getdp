N_DOM = 64 ;

om = 2*Pi*15;
cMin = 1500.;
cAvg = 3500.;
kMax = om/cMin;

WAVENUMBER = kMax ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = LAMBDA/N_LAMBDA;

PRECOND_SWEEP = 0 ;
MAXIT = 300 ;

D = 9192.000000 ;
d = 2904.000000 ;

xSource = 6200;
ySource = -2300;

TOL = 1.000000e-03 ;
Include "params_part2.geo";
