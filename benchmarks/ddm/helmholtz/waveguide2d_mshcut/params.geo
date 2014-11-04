N_DOM = 16 ;
OM = 2*Pi*3.69 ;
WAVENUMBER = OM;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = 0.05000;
PRECOND_SWEEP = 1 ;
MAXIT = 100 ;
m = 2 ;
D = 4.000000 ;
d = 1.000000 ;
TOL = 1.000000e-06 ;
Include "params_part2.geo";

COMBINED_SWEEP = 0;

nDoms = N_DOM;

meshFactor = 2;

nLayersTr = 0;
nLayersPml = 7;//*meshFactor;

lc = .02/meshFactor;
LC = lc; // overwrite


dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;

sigmaPml = 1000;
xPmlRight = D;
xPmlLeft = 0.;
m=2;

xDelta = 0.;

DList = {0,2,4};

dDom = D/nDoms;
