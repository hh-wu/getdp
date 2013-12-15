Include "param.geo";

PRECOND_SWEEP = 0;
N_DOM = NUM_SLICES;

geo2d = 0;
geo3d = 1;

L_CUB = .5; //size of the small cube
WAVENUMBER = 1*Pi;///L_CUB;
k = WAVENUMBER;
LAMBDA = 2*Pi/WAVENUMBER;
// LC = 100;//LAMBDA/15;

//Geometry (useless for submarine but avoid errors)
R_INT = 1;
R_EXT = 5;
Z = 3;

// incident angle
THETA_INC = 0;

// Which transmission condition ? (*only one* must be equal to 1)
SILVER_MULLER = 1;
OSRC = 0;
JFLee = 0;


BETA_EMDA = k;//1.5708;


// Constant DDM parameters (other parameters are located in the .pro file)
// EMDA parameter
// BETA_EMDA = 1.5708;

// OSRC parameters (nb of Padé approx and angle of branch cut)
NP_OSRC = 2;
THETA_BRANCH_OSRC = 0.785398;


// For mixed formulations (pressure/velocity)
MIXED_NODAL = 0; //NODAL(=1) of Form3(=0) ? (Mixed only)
DDM_MIXED_NODAL = 0; //NODAL(=1) of Form3(=0) ? (Mixed only)

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 0;
EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE

//STORE/WRITE the initial u (0th iteration)
STORE_U_INIT = 1; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_U_INIT = 0; // if written (on disk), then u_init*.pos files are created

//One different mesh file per subdomain ?
NON_CONFORM = 0;
MSH_SPLIT = 1;

// Dimension of the problem (a priori, do not change)
DIM = 3;
GEOM2D = 3;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
TOL = 1e-4;
MAXIT = 100;
RESTART = MAXIT;
