DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis", ReadOnly 1,
    Choices {0="Helmholtz", 1="Maxwell"}},
  // wavenumber
  // WAVENUMBER = {30, Name "Input/0Wavenumber"},
  // LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  FREQ = {7, Name "Input/0Frequency"},
  // number of points per wavelength
  GAUSSIAN = {0, Name "Input/05Velocity Profile",
    Choices {0="Homogeneous", 1="Gaussian"}},
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
  DIR = "out/",
  nLayersTr = 1,
  nLayersPml = 2,
  theta = 0.
];

// meshing for shortest wavelength
If(GAUSSIAN==0)
  // constant velocity c=1
  WAVENUMBER = 2*Pi*FREQ/1.;
EndIf
If(GAUSSIAN==1)
  // cMin of the gaussian profile
  WAVENUMBER = 2*Pi*FREQ/(1.25*(1.-.4)) ;
EndIf

Printf("k=%g",WAVENUMBER);

LAMBDA = 2*Pi/WAVENUMBER ;
LC = LAMBDA/N_LAMBDA;

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

// PML parameters
dTr = nLayersTr*LC;
dPml = nLayersPml*LC;
dBb = (nLayersPml+nLayersTr)*LC;
dDom = DX / N_DOM;
