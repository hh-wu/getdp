DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis", ReadOnly 1,
    Choices {0="Helmholtz", 1="Maxwell"}},
  // wavenumber
  // WAVENUMBER = {2*Pi*15, Name "Input/0Wavenumber"},
  FREQ = {7, Name "Input/0Frequency"},
  // LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_LAMBDA = {20, Name "Input/2Points per wavelength"},
  // number of subdmains in the DDM
  N_DOM = {7, Name "Input/04Number of subdomains"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/",
  xSource = 0.5,
  ySource = -0.5,
  nLayersTr = 1,
  nLayersPml = 2
];

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

om = 2*Pi*FREQ;
cMin = 1.;
cMax = 1.;
cAvg = 1.;
kMax = om/cMin;

// meshing for shortest wavelength
WAVENUMBER = kMax ;
LAMBDA = 2*Pi/WAVENUMBER ;
LC = LAMBDA/N_LAMBDA;

tPml = 20*LC;

DGeo = 2. + 2*tPml;
dGeo = 2. + 2*tPml ;

shiftX = 0;
shiftY = 0;
shiftX = -DGeo/2.;
shiftY = dGeo/2.;

xSource = (DGeo/2.+shiftX) - 0*2*DGeo/N_DOM; // last term is a shift from the center of the domain
ySource = (-dGeo/2.+shiftY) - 0*.1;

nDoms = N_DOM;

dTr = nLayersTr*LC;
dPml = nLayersPml*LC;
dBb = (nLayersPml+nLayersTr)*LC;

dDom = DGeo/nDoms;
