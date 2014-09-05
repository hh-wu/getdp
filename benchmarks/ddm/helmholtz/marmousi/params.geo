N_DOM = 16 ;

SPLIT_V = 1;
SPLIT_H = (1-SPLIT_V);
EXTERNAL_VELOCITY_FIELD = 0;
PRECOND_SWEEP = 1 ;


om = 2*Pi*15;
cMin = 1500.;
cAvg = 3500.;
kMax = om/cMin;


WAVENUMBER = kMax ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = LAMBDA/N_LAMBDA;

D = 9192.000000 ;
d = 2904.000000 ;

xSource = 6200;
ySource = -2300;

MAXIT = 300 ;
TOL = 1.000000e-03 ;
Include "params_part2.geo";
