N_DOM = 16 ;

SPLIT_V = 1;
SPLIT_H = (1-SPLIT_V);
EXTERNAL_VELOCITY_FIELD = 1;
PRECOND_SWEEP = 0 ;

N_ON_TOP = 0;

om = 2*Pi*7;
cMin = 1500.;
cMax = 5500.;
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
TOL = 1.000000e-04 ;
Include "params_part2.geo";

meshFactor = 2.;

nLayersTr = 2;
nLayersPml = 7*meshFactor;

lc = 20./meshFactor;
// lc = 40.;//10./meshFactor;
LC = lc; // overwrite

nDoms = N_DOM;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;

dDom = D/nDoms;
