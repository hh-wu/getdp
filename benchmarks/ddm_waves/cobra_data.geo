
DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis",
    Choices {0="Helmholtz", 1="Maxwell"}},
  // wavenumber
  WAVENUMBER = {2*Pi*15, Name "Input/0Wavenumber"},
  LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_DOM = {16, Name "Input/1Wavelength", ReadOnly 1},
  N_LAMBDA = {20, Name "Input/2Points per wavelength"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/",
  nLayersTr = 1,
  nLayersPml = 3,
  OPEN_ENDED = 1 // radiation condition ; otherwise wall condition
];

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

LC = LAMBDA/N_LAMBDA;

Printf("LC: %g",LC);

m = 1 ; // 'vertical'
n = 1 ; // 'horizontal'

PARTS = 5; // use 5 for the full model

D1 = .1; // inner straight part length
D2 = .08; // middle straight part length
D3 = .01; // outlet straight part length
d1 = .084 ; // cross-section
d2 = .11; // cross-section
R = 0.186 + d1/2.; // rotation radius
alpha = 35/360*2*Pi; // rotation angle

// dispatch the subdomains on the different parts
Include "cobra_balance.pro";

shiftX = 0;
shiftY = -( (R+d1)*(1-Cos[alpha]) + D2*Sin[alpha] + R*(1-Cos[alpha]) ) ;

lc = LC;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;
