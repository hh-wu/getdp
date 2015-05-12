DefineConstant[
  // Analysis type
  ANALYSIS = {1, Name "Input/00Type of analysis",
    Choices {0="Helmholtz", 1="Maxwell"}},
  // frequency
  WAVENUMBER = {Pi, Min 0.1, Max 31.5, Step 0.1, Name "Input/0Wavenumber"},
  LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_LAMBDA = {10, Name "Input/2Points per wavelength"},
  // incident angle
  THETA_INC = {0, Min 0., Max 2*Pi, Step 0.1, Name "Input/3Incident angle"},
  // geometry
  R_INT = {1, Name "Input/4Internal radius"},
  R_EXT = {5, Name "Input/5External radius"},
  // number of subdomains
  N_DOM = {5, Min 1, Max 20, Step 1, Name "Input/04Number of subdomains"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];

LC = LAMBDA/N_LAMBDA;

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

// for sweeping preconditioners
ListOfCuts = {0, N_DOM-1};
// ListOfCuts = {0, 4, N_DOM-1};

ProcOwnsDomain = {};
For idom In{0:N_DOM-1}
  ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
EndFor
