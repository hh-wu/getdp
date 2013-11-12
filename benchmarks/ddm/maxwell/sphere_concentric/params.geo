//Number of subdomains, frequency, element size
N_DOM = 3;
WAVENUMBER = 2*Pi*1;
LAMBDA = 2*Pi/WAVENUMBER;
// LC = LAMBDA/40;
LC = 2*Pi/40;

PRECOND_SWEEP = 0;

//Geometry
R_INT = 1.0;
R_EXT = 2;
Z = 3; 

//Transmission boundary condition
OSRC = 1;
SILVER_MULLER = 0;
JFLee =  0;
OSRC2 = 0;

// Compute the full solution (to check error, ...)
FULL_SOLUTION = 0;
// Is the mesh full or split ? (useful with mpirun)
NON_CONFORM = 0;
MSH_SPLIT = 1;
//STORE/WRITE the initial u (0th iteration) ; UPDATE Alex: no longer useful as final solution is computed by incoporating both physical and interface sources
STORE_E_VOL_INIT = 0; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
WRITE_E_VOL_INIT = 0; // if written (on disk), then u_init*.pos files are created 

//Iterative solver
TOL = 1e-4;
MAXIT = 200;
RESTART = MAXIT;
SOLVER = "gmres";
