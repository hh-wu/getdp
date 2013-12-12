
Problem = "test" ;
//
PRECOND_SWEEP = 0;
N_DOM = 5;

CELERITY = 3e8 ;


FREQ = 3e9 ;
WAVENUMBER = 2*Pi*FREQ / CELERITY ;

WAVENUMBER = 4.0*Pi;
N_LAMBDA = 20 ;

LAMBDA = 2*Pi/WAVENUMBER;
LC = LAMBDA/ N_LAMBDA ;

//Geometry (useless for submarine but avoid errors)
R_INT = 1;
R_EXT = 5;
Z = 3;

// incident angle
THETA_INC = Pi/4;

// Which transmission condition ? (only one must be equal to 1)
OSRC = 1;
OO2 = 1;
EMDA = 1;

// Constant DDM parameters (other parameters are located in the .pro file)
// EMDA parameter
BETA_EMDA = 1.5708;
// OSRC parameters (nb of Padé approx and angle of branch cut)
NP_OSRC = 4;
THETA_BRANCH_OSRC = 0.785398;

// For mixed formulations (pressure/velocity)
MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)
DDM_MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 0; // NameOfMesh = MeshName_Full_merged.msh
EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE
//STORE/WRITE the initial u (0th iteration)
STORE_U_INIT = 1; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_U_INIT = 0; // if written (on disk), then u_init*.pos files are created

//One different mesh file per subdomain ?
NON_CONFORM = 0;
MSH_SPLIT = 1;  // NameOfMesh = MeshName_idom.msh
// 0 for full (merged or one block)
// 1 for DDM
// TODO,FIXME: -msh stronger than NameOfMesh

// Dimension of the problem (a priori, do not change)
DIM = 1;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
TOL = 1e-05;
MAXIT = 1000;
RESTART = MAXIT;
