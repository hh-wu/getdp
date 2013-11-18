lc = .075*3; // surface
LC = lc * 2; // volume
NUM_SLICES = 20;

//Number of subdomains, frequency, element size
N_DOM = NUM_SLICES;
WAVENUMBER = 2*Pi/4;
LAMBDA = 2*Pi/WAVENUMBER;
// LC = LAMBDA/40;
LC = 2*Pi/40;

PRECOND_SWEEP = 1;

IGNORE_INNER_BOUNDARY = 0; // whether or not to declare the boundary of the interfaces as physicals in the .geo file -- impacts convergence !!
IGNORE_OUTER_BOUNDARY = 0;

//Geometry
R_INT = 1.0;
R_EXT = 2;
Z = 3; 

//Transmission boundary condition
OSRC = 1;
EMDA = 0;
OO2 =  0;

NP_OSRC = 2;

// Compute the full solution (to check error, ...)
FULL_SOLUTION = 0;
// Is the mesh full or split ? (useful with mpirun)
NON_CONFORM = 0;
MSH_SPLIT = 1;

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 0;
EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE
// For mixed formulations (pressure/velocity)
MIXED_NODAL = 0; //NODAL(=1) of Form3(=0) ? (Mixed only)
DDM_MIXED_NODAL = 0; //NODAL(=1) of Form3(=0) ? (Mixed only)

//STORE/WRITE the initial u (0th iteration)
STORE_U_INIT = 1; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_U_INIT = 0; // if written (on disk), then u_init*.pos files are created 

// Dimension of the problem (a priori, do not change)
DIM = 3;
GEOM2D = 3;

N = N_DOM;

//STORE/WRITE the initial u (0th iteration) ; UPDATE Alex: no longer useful as final solution is computed by incoporating both physical and interface sources
STORE_E_VOL_INIT = 0; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_E_VOL_INIT = 0; // if written (on disk), then u_init*.pos files are created 

//Iterative solver
LinSystType = "I-A";
TOL = 1e-4;
MAXIT = 200;
RESTART = MAXIT;
SOLVER = "gmres";
