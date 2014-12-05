N_DOM = 8 ;
WAVENUMBER = 2.00000*Pi ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = 0.012500*2.;
PRECOND_SWEEP = 1 ;
m = 1 ;
D = 4.000000 ;
d = 1.000000 ;

theta = 0;

TOL = 1.000000e-6 ;

// Which transmission condition ? (only one must be equal to 1)
OSRC = 0 ;
SILVER_MULLER = 0 ;
JFLee =  0 ;
PML = 1;

meshFactor = 1;

nLayersTr = 1;
nLayersPml = 3*meshFactor;

lc = LC;//.05/meshFactor;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;

nDoms = N_DOM;
dDom = D/nDoms;

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 0;
EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE

//One different mesh file per subdomain ?
NON_CONFORM = 0;
MSH_SPLIT = 1;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
MAXIT = 100;
RESTART = MAXIT;

MshName = "waveguide2d_mshcut" ;

