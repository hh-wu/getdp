MENU_GEO = "Geometry";
MENU_FREQ = "Frequency";
MENU_INPUT = "Input";

DefineConstant[
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];
// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

// Number of subdomains
DefineConstant[
  /////// Frequency
  WAVENUMBER = {2*Pi, Min 0.1, Max 31.5, Step 0.1,Name StrCat[MENU_FREQ,"/0Wavenumber"]}
  LAMBDA = {2*Pi/WAVENUMBER, Name StrCat[MENU_FREQ,"/1Wavelength"], ReadOnly 1}
  N_LAMBDA = {10, Name "Input/Points per wavelength"},
    
  ////// GEOMETRY
  //Number of subdomains
  N_DOM = {5, Min 1, Max 20, Step 1, Name StrCat[MENU_GEO,"/0Nb. of subdomains"]}
  
  //Geometry
  R_INT = {1, Name StrCat[MENU_GEO,"/3Internal radius"]}
  R_EXT = {5, Name StrCat[MENU_GEO,"/5External radius"]}
  //Non conforming mesh at interface ?  
  NON_CONFORM = {0, Choices{0 = "Conform", 1 = "Non conform"}, Name StrCat[MENU_GEO,"/0Mesh conformity"]}  

  // incident angle
  THETA_INC = {0, Min 0., Max 2*Pi, Step 0.1, Name StrCat[MENU_INPUT,"/0Incident angle"]}
];
  
LC = LAMBDA/N_LAMBDA;
