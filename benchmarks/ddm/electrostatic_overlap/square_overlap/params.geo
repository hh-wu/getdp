N_DOM = 2;
TOL = 1.000000e-06 ;

D = 1; // 'long' side of the domain
d = 1; // 'short' side
H_ol = .1; // size of the overlap
LC = .01;

//STORE/WRITE the initial u (0th iteration)
STORE_U_INIT = 1; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_U_INIT = 0; // if written (on disk), then u_init*.pos files are created

N = N_DOM;

// If each subdomain has its own mesh file (vs. all physicals are defined in the same file)
MSH_SPLIT = 1;

// Iterative Solver parameters
LinSystType = "I-A";
SOLVER = "gmres";
MAXIT = 200;
RESTART = MAXIT;
