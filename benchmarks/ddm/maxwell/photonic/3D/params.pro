
Problem = "test" ;
//
PRECOND_SWEEP = 0;
N_DOM = 3;

WAVENUMBER = 4.0*Pi;

N_LAMBDA = 10 ;
LAMBDA = 2*Pi/WAVENUMBER;
LC = LAMBDA/ N_LAMBDA ;

//Geometry (useless for submarine but avoid errors)
// R_INT = 1;
// R_EXT = 5;
// Z = 3;

// incident angle
THETA_INC = Pi/4;

//Transmission boundary condition
OSRC = 0;
SILVER_MULLER = 1;
JFLee =  0;
OSRC2 = 0;


// Constant DDM parameters (other parameters are located in the .pro file)
// EMDA parameter
BETA_EMDA = 1.5708;
// OSRC parameters (nb of Padé approx and angle of branch cut)
NP_OSRC = 2;
THETA_BRANCH_OSRC = 0.785398;

// // For mixed formulations (pressure/velocity)
// MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)
// DDM_MIXED_NODAL = 1; //NODAL(=1) of Form3(=0) ? (Mixed only)

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 0; // NameOfMesh = MeshName_Full_merged.msh
EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE
//STORE/WRITE the initial u (0th iteration)
STORE_E_VOL_INIT = 0; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_E_VOL_INIT = 0; // if written (on disk), then u_init*.pos files are created 


//One different mesh file per subdomain ?
NON_CONFORM = 0;
MSH_SPLIT = 1;  // NameOfMesh = MeshName_idom.msh
// 0 for full (merged or one block)
// 1 for DDM
// TODO,FIXME: -msh stronger than NameOfMesh

// Dimension of the problem (a priori, do not change)
DIM = 3;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
TOL = 1e-04;
MAXIT = 200;
RESTART = MAXIT;
