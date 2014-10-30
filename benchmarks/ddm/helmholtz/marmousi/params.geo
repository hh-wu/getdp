N_DOM = 8 ;

SPLIT_V = 1;
SPLIT_H = (1-SPLIT_V);
EXTERNAL_VELOCITY_FIELD = 1;
PRECOND_SWEEP = 1 ;

N_ON_TOP = 1;

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
TOL = 1.000000e-06 ;
Include "params_part2.geo";

meshFactor = 2.;

nLayersTr = 2;
nLayersPml = 15*meshFactor;

lc = 10./meshFactor;
LC = lc; // overwrite

nDoms = N_DOM;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;

sigmaPml = 1000;
xPmlRight = D;
xPmlLeft = 0.;
m=2;

xDelta = 0.;

// DList = {0,2,4};

dDom = D/nDoms;
