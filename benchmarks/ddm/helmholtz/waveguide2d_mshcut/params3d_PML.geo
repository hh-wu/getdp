D = 4.;
d = 1.;

dy = d;
dz = d;


nDoms = 8;
N_DOM = nDoms;

MAXIT = 100 ;
TOL = 1e-6;
PRECOND_SWEEP = 1;

OM = 2*Pi*1.39;

meshFactor = 1;

nLayersTr = 2;
nLayersPml = 7*meshFactor;

lc = .05/meshFactor;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;

// xPmlRight = D;
// xPmlLeft = 0.;
m=1;

theta = .69*Pi/12.*1.;

dDom = D/nDoms;

LC = lc;
WAVENUMBER = OM;

Include "params_part2.geo";

