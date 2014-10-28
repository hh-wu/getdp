// PRECOND_SWEEP = 1;
// N_DOM = 10;

// L_SUB = 4330; //size of the submarine
// WAVENUMBER = 2.39*Pi;///L_SUB;
// LAMBDA = 2*Pi/WAVENUMBER;

// N_LAMBDA = 20;
// LC = LAMBDA/N_LAMBDA;

//Geometry (useless for submarine but avoid errors)
R_INT = 1;
R_EXT = 5;
Z = 3;

// incident angle
THETA_INC = 0;

// Which transmission condition ? (only one must be equal to 1)
OSRC = 0;
OO2 = 0;
EMDA = 0;
PML = 1;

// Preconditioner for full problem
LEFTPC = 0;
ILU = 0;
DDM_PC = 0;


// Constant DDM parameters (other parameters are located in the .pro file)
// EMDA parameter
// BETA_EMDA = 4.*1.5708;
// BETA_EMDA[] = k[]/4.; // moved to waveguide2d_mshcut.pro
// OSRC parameters (nb of Padé approx and angle of branch cut)
NP_OSRC = 2;

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

N = N_DOM;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
// MAXIT = 500;
RESTART = MAXIT;
