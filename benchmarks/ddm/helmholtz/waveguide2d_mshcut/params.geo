N_DOM = 8 ;
OM = 2*Pi*3.69 ;
WAVENUMBER = OM;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = LAMBDA/N_LAMBDA;//0.05000;
PRECOND_SWEEP = 0 ;
MAXIT = 100 ;
m = 2 ;
D = 4.000000 ;
d = 1.000000 ;
TOL = 1.000000e-06 ;
Include "params_part2.geo";

COMBINED_SWEEP = 0;

nDoms = N_DOM;

meshFactor = 1;

nLayersTr = 1;
nLayersPml = 5;//*meshFactor;

lc = LC;//.05/meshFactor;
LC = lc; // overwrite

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;

theta = 0*Pi/12.;

sigmaPml = 1000;
xPmlRight = D;
xPmlLeft = 0.;
m=2;

xDelta = 0.;

DList = {0,2,4};

dDom = D/nDoms;

