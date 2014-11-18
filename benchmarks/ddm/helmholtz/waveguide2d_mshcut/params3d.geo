N_DOM = 8 ;
WAVENUMBER = 2*Pi*1.69 ; //Sqrt[2.0]*Pi ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = 0.05;
PRECOND_SWEEP = 1 ;

EXT_TIME = 1;

// waveguide dimensions
dx = 4. ;
dy = 1. ;
dz = 1. ;

TEM = 0 ;
TM = 1 ;
TE = 0 ;

m = 1 ; // y
n = 1 ; // z

//Geometry
R_INT = 1.0;
R_EXT = 2;
Z = 3; 

//Transmission boundary condition
SILVER_MULLER = 0 ;
OSRC = 1 ;
JFLee = 0 ;

// Compute the full solution (to check error, ...)
FULL_SOLUTION = 0;
EXACT_SOLUTION = 0;

// Is the mesh full or splitted ? (usefull with mpirun)
NON_CONFORM = 0;
MSH_SPLIT = 1;

If (MSH_SPLIT)
  MshName = "waveguide3d_mshcut" ;
EndIf
If (!MSH_SPLIT)
  MshName = "waveguide3d_simple" ;
EndIf

//Iterative solver
TOL = 1.000000e-4 ;
MAXIT = 100;
RESTART = MAXIT;
SOLVER = "gmres";



Include "params_part2.geo";
