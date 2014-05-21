DefineConstant[ // allows to set these from outside
  // number of subdmains in the DDM
  N_DOM = {2, Name "Input/Number of subdomains"},
  // wavenumber
  WAVENUMBER = {10, Name "Input/Wavenumber"},
  // number of points per wavelength
  N_LAMBDA = {10, Name "Input/Points per wavelength"},
  // dimensions of the waveguide
  DX = {2, Name "Input/X dimension"},
  DY = {1, Name "Input/Y dimension"},
  DZ = {1, Name "Input/Z dimension"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];

LAMBDA = 2*Pi/WAVENUMBER ;
LC = LAMBDA/N_LAMBDA;

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;
