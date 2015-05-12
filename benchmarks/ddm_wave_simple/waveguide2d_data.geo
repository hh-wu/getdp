DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis",
    Choices {0="Helmholtz"}},
  // wavenumber
  WAVENUMBER = {30, Name "Input/0Wavenumber"},
  LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_LAMBDA = {20, Name "Input/2Points per wavelength"},
  // dimensions of the waveguide
  DX = {2, Name "Input/X dimension"},
  DY = {1, Name "Input/Y dimension"},
  DZ = {1, Name "Input/Z dimension"},
  // number of subdmains in the DDM
  N_DOM = {8, Name "Input/04Number of subdomains"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];

LC = LAMBDA/N_LAMBDA;

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

nLayersTr = 0;
nLayersPml = 1;
dTr = nLayersTr*LC;
dPml = nLayersPml*LC;
dBb = (nLayersPml+nLayersTr)*LC;
dDom = DX / N_DOM;

// PML parameters
theta = 0.;
xSigmaList = {};
thetaList = {};
For i In {0:N_DOM}
  xSigmaList += i*dDom;
  thetaList += theta;
EndFor

// for sweeping preconditioners
ListOfCuts = {0, N_DOM-1};
// ListOfCuts = {0, 4, N_DOM-1};

ProcOwnsDomain = {};
For idom In{0:N_DOM-1}
  ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
EndFor
