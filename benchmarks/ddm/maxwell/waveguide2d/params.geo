N_DOM = 16 ;
WAVENUMBER = 4.00000*Pi ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = 0.012500;
PRECOND_SWEEP = 1 ;
m = 2 ;
D = 4.000000 ;
d = 1.000000 ;
TOL = 1.000000e-6 ;

// Which transmission condition ? (only one must be equal to 1)
OSRC = 0 ;
SILVER_MULLER = 1 ;
JFLee =  0 ;

OSRC2 = 1;

//Compute Full solution (one-domain) ? Exact/analytic solution ?
FULL_SOLUTION = 0;
EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE

//One different mesh file per subdomain ?
NON_CONFORM = 0;
MSH_SPLIT = 1;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
MAXIT = 200;
RESTART = MAXIT;

MshName = "waveguide2d_mshcut" ;

