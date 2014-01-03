// Number of subdomains
N_DOM = 9;

//Frequency
WAVENUMBER = 2*Pi*4;
LAMBDA = 2*Pi/WAVENUMBER;

PRECOND_SWEEP = 1;

// Mesh refinement
lc = LAMBDA/20.;
LC = 2*lc;
//Geometry
R_INT = 1;
R_EXT = 5;
Z = 3;
// incident angle
THETA_INC = -Pi/2;

// Which transmission condition ? (only one must be equal to 1)
OSRC = 1;
OO2 = 0;
EMDA = 0;

// Constant DDM parameters (other parameters are located in the .pro file)
// EMDA parameter
BETA_EMDA = 0;//1.5708;
// OSRC parameters (nb of Padé approx and angle of branch cut)
NP_OSRC = 2;
THETA_BRANCH_OSRC = 0.785398;

// For mixed formulations (pressure/velocity)
MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)
DDM_MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 0;
EXACT_SOLUTION = 0; //cost quite a lot
//STORE/WRITE the initial u (0th iteration)
STORE_U_INIT = 1; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_U_INIT = 0; // if written (on disk), then u_init*.pos files are created 

//Non conforming mesh at interface ?
// Carreful, if non conforming then FULL_SOLUTION must be set to zero
NON_CONFORM = 0;
MSH_SPLIT = 1;

// Dimension of the problem (a priori, do not change)
DIM = 2;
GEOM2D = 2;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
TOL = 1e-04;
MAXIT = 100;
RESTART = MAXIT;
