lc = 0.2; // surface  0.25 coarset for reactor
lc2 = lc;// * 5; // volume
dd = 2;
TWO_PLANES = 0;
NUM_SLICES = 4;
EXT_TIME=0;
REUSE=0;
N_DOM = NUM_SLICES;

//Size of the falcon
// x-direction (length) : ~18 m  -> approx 20m
// z-direction : ~9

LAMBDA = 2; // f=150MHz
WAVENUMBER = 2*Pi/LAMBDA;

//Geometry (useless for submarine but avoid errors)
R_INT = 1;
R_EXT = 5;
Z = 3;

// incident angle
THETA_INC = 0;

// Which transmission condition ? (only one must be equal to 1)
SILVER_MULLER = 0;
OSRC = 1;
JFLee = 0;

PRECOND_SWEEP = 0;

// OSRC parameters (nb of Padé approx and angle of branch cut)
NP_OSRC = 1;
THETA_BRANCH_OSRC = Pi/2;

// For mixed formulations (pressure/velocity)
MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)
DDM_MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 1;
EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE
//STORE/WRITE the initial u (0th iteration)
STORE_U_INIT = 1; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_U_INIT = 0; // if written (on disk), then u_init*.pos files are created

STORE_E_VOL_INIT = 1;
WRITE_E_VOL_INIT = 0;

//One different mesh file per subdomain ?
NON_CONFORM = 0;
MSH_SPLIT = 1;

// Dimension of the problem (a priori, do not change)
DIM = 3;
GEOM2D = 3;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
TOL = 1e-05;
MAXIT = 500;
RESTART = MAXIT;
