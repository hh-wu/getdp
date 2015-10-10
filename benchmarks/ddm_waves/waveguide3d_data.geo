DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis",
    Choices {0="Helmholtz", 1="Maxwell"}},
  // wavenumber
  // WAVENUMBER = {10, Name "Input/0Wavenumber"},
  FREQ = {470, Name "Input/0Frequency (MHz)"},
  // LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_LAMBDA = {15, Name "Input/2Points per wavelength"},
  // dimensions of the waveguide
  DX = {2, Name "Input/X dimension"},
  DY = {1, Name "Input/Y dimension"},
  DZ = {1, Name "Input/Z dimension"},
  // number of subdmains in the DDM
  N_DOM = {4, Name "Input/04Number of subdomains"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/",
  nLayersTr = 1,
  nLayersPml = 4
];

om0 = 2*Pi*FREQ*1e6;

eps0 = 8.854e-12;
mu0 = 4*Pi*1e-7;
c0 = 1 / Sqrt[mu0*eps0];

WAVENUMBER = om0/c0;
LAMBDA = 2*Pi/WAVENUMBER ;
LC = LAMBDA/N_LAMBDA;

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

dx = (DX / N_DOM);

// recompute the LC to ensure continuity in the PML direction
nLayersDom = Ceil[dx/(LC*(1.+1e-6))];
LC = dx/nLayersDom;

theta = Pi/12.;//0.; // angle of the structure

// PML parameters
dTr = nLayersTr*LC;
dPml = nLayersPml*LC;
dBb = (nLayersPml+nLayersTr)*LC;
dDom = DX / N_DOM;
