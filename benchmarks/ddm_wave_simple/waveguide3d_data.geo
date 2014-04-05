DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/Type of analysis",
    Choices {0="Helmholtz", 1="Maxwell"}},
  // number of subdmains in the DDM
  N_DOM = {4, Name "Input/Number of subdomains"},
  // wavenumber
  WAVENUMBER = {Pi*3.19, Name "Input/Wavenumber"},
  // number of points per wavelength
  N_LAMBDA = 10,
  // dimensions of the waveguide
  DX = 4,
  DY = 0.5,
  DZ = 1,
  // type of walls
  WALLS = {1, Name "Input/Walls",
    Choices {0="Transparent", 1="Metallic"}},
  // excitation mode
  MODE_M = {1, Name "Input/m"}, // y
  MODE_N = {1, Name "Input/n"}, // z
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 2,
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/",
  // parameters for the DDM iterative solver
  SOLVER = "gmres", // bcgs, gmsh_pcleft, ...
  TOL = 1e-4,
  MAXIT = 1000,
  RESTART = MAXIT
  // default getdp parameters for onelab
  R_ = {"DDM", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v 3 -bin -ksp_monitor", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

LAMBDA = 2*Pi/WAVENUMBER ;
LC = LAMBDA/N_LAMBDA;

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;
