
Problem = "test" ;

// Dimension of the problem (used to generate the useful mesh)
DIM = 3;

N_DOM = 5;

//
PRECOND_SWEEP = 0;
REUSE = 1;

WAVENUMBER = 1.0*Pi;
N_LAMBDA = 10 ;

THETA_INC = Pi/4;

// Which transmission condition ? (only one must be equal to 1)
OSRC = 0;
OO2 = 1;
EMDA = 0;
//// not working yet;
PML = 0; 

//probing to ouput time data
EXT_TIME = 1;

LAMBDA = 2*Pi/WAVENUMBER;
LC = LAMBDA/ N_LAMBDA ;


// Constant DDM parameters (other parameters are located in the .pro file)
// EMDA parameter
BETA_EMDA = 1.5708;
// OSRC parameters (nb of Padé approx and angle of branch cut)
NP_OSRC = 2;
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

SKIP_SAVE_SOLUTION = 0;

//One different mesh file per subdomain ?
NON_CONFORM = 0;
MSH_SPLIT = 1;  // NameOfMesh = MeshName_idom.msh
// 0 for full (merged or one block)
// 1 for DDM
// TODO,FIXME: -msh stronger than NameOfMesh

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
TOL = 1e-07;
MAXIT = 1000;
RESTART = MAXIT;

Problemm = Str[Problem] ;
Dir= Str["../photonic/"];
MshName=StrCat[Dir, Problemm];
