DefineConstant[
  // number of subdomains
  N_DOM = {2, Min 2, Max 2, Step 1, Name "Input/04Number of subdomains", ReadOnly 1},
  //Mesh refinment
  LC = {0.05, Min 0.01, Max 0.5, Step 0.01, Name "Input/00Mesh refinment"}
  //X and Y--size
  dx = {1, Min 1, Max 1, Step 0.05, Name "Input/01X-size", ReadOnly 1},
  dy = {1, Min 1, Max 1, Step 0.05, Name "Input/02Y-size", ReadOnly 1},
  //Overlap
  delta = {0.1, Min 0.1, Max 0.95, Step 0.05, Name "Input/03Overlap size"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];


// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;
