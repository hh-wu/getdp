DefineConstant[ // allows to set these from outside
  // wavenumber
  WAVENUMBER = {10, Name "Input/0Wavenumber"},
  LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_LAMBDA = {10, Name "Input/2Points per wavelength"},
  // dimensions of the waveguide
  DX = {2, Name "Input/X dimension"},
  DY = {1, Name "Input/Y dimension"},
  DZ = {1, Name "Input/Z dimension"},
  // number of subdmains in the DDM
  N_DOM = {2, Name "Input/04Number of subdomains"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];

LAMBDA = 2*Pi/WAVENUMBER ;
LC = LAMBDA/N_LAMBDA;

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;
