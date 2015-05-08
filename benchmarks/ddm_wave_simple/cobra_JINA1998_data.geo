
DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis",
    Choices {0="Helmholtz", 1="Maxwell"}},
  // wavenumber
  WAVENUMBER = {2*Pi*15, Name "Input/0Wavenumber"},
  LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_LAMBDA = {20, Name "Input/2Points per wavelength"},
  // dimensions of the waveguide
  DX = {2, Name "Input/X dimension"},
  DY = {1, Name "Input/Y dimension"},
  DZ = {1, Name "Input/Z dimension"},
  // number of subdmains in the DDM
  // N_DOM = {4, Name "Input/04Number of subdomains"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

// WAVENUMBER = 2*Pi*15. ;
// LAMBDA = 2*Pi/WAVENUMBER ;
// N_LAMBDA = 20.000000 ;
LC = LAMBDA/N_LAMBDA;//0.005-0*1e-9;//2500;
// LC = 0.005-1*1e-9;//2500;
LC = 0.005;//2500;

Printf("LC: %g",LC);

// Geometry.Tolerance = 1e-12;

PRECOND_SWEEP = 1 ;
MAXIT = 100 ;
m = 1 ; // 'vertical'
n = 1 ; // 'horizontal'
TOL = 1.000000e-06 ;

PARTS = 5; // use 5 for the full model
OPEN_ENDED = 1;

// nDomList = {3,5,2,5,1}; // number of domains in the different parts of the domain, starting from inner straight part
nDomList = {2,2,1,2,1}; // number of domains in the different parts of the domain, starting from inner straight part
// nDomList = {6,10,4,10,2}; // number of domains in the different parts of the domain, starting from inner straight part


D1 = .1; // inner straight part length
D2 = .08; // middle straight part length
D3 = .01; // outlet straight part length
d1 = .084 ; // cross-section
d2 = .11; // cross-section
R = 0.186 + d1/2.; // rotation radius
alpha = 35/360*2*Pi; // rotation angle
shiftX = 0;
shiftY = -( (R+d1)*(1-Cos[alpha]) + D2*Sin[alpha] + R*(1-Cos[alpha]) ) ;

PML = 1;
OSRC = 0;

nLayersTr = 1;
nLayersPml = 4;

lc = LC;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;









/////////////////////////////////////////////
/////////////////////////////////////////////

// //Geometry (useless for submarine but avoid errors)
// R_INT = 1;
// R_EXT = 5;
// Z = 3;

// // incident angle
// THETA_INC = 0;

// // Which transmission condition ? (only one must be equal to 1)
// OSRC = 1;
// OO2 = 0;
// EMDA = 0;

// // Constant DDM parameters (other parameters are located in the .pro file)
// // EMDA parameter
// // BETA_EMDA = 4.*1.5708;
// // BETA_EMDA[] = k[]/4.; // moved to waveguide2d_mshcut.pro
// // OSRC parameters (nb of Padé approx and angle of branch cut)
// NP_OSRC = 2;

// // For mixed formulations (pressure/velocity)
// MIXED_NODAL = 0; //NODAL(=1) of Form3(=0) ? (Mixed only)
// DDM_MIXED_NODAL = 0; //NODAL(=1) of Form3(=0) ? (Mixed only)

// //Compute Full solution (one-domain) ? Exact/analytic solution ?
// FULL_SOLUTION = 0;
// EXACT_SOLUTION = 0; // NO EXACT SOLUTION FOR SUBMARINE
// //STORE/WRITE the initial u (0th iteration)
// STORE_U_INIT = 1; // if stored (in ram) then the "real" scattered field is computed at the end in u*.pos files
// WRITE_U_INIT = 0; // if written (on disk), then u_init*.pos files are created

// //One different mesh file per subdomain ?
// NON_CONFORM = 0;
// MSH_SPLIT = 1;

// // Dimension of the problem (a priori, do not change)
// DIM = 3;
// GEOM2D = 3;


// // Iterative Solver parameters
// LinSystType = "I-A";
// SOLVER = "gmres";
// // MAXIT = 500;
// RESTART = MAXIT;
