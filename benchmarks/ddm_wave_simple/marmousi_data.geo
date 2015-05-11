DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis",
    // Choices {0="Helmholtz", 1="Maxwell"}},
    Choices {0="Helmholtz"}},
  // wavenumber
  WAVENUMBER = {2*Pi*15, Name "Input/0Wavenumber"},
  LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_LAMBDA = {20, Name "Input/2Points per wavelength"},
  // number of subdmains in the DDM
  N_DOM = {16, Name "Input/04Number of subdomains"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/",
  xSource = 6200,
  ySource = -2300
];

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

om = 2*Pi*7;
cMin = 1500.;
cMax = 5500.;
cAvg = 3500.;
kMax = om/cMin;

WAVENUMBER = kMax ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = LAMBDA/N_LAMBDA;

D = 9192.000000 ;
d = 2904.000000 ;

nLayersTr = 0;
nLayersPml = 3;

nDoms = N_DOM;

dTr = nLayersTr*LC;
dPml = nLayersPml*LC;
dBb = (nLayersPml+nLayersTr)*LC;

dDom = D/nDoms;
