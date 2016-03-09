DefineConstant[
  // Analysis type - only Helmholtz
  ANALYSIS = {0, Name "Input/00Type of analysis",
    Choices {0="Helmholtz", 2="Elastodynamics"}, GmshOption "Reset" },
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/"
];

If(ANALYSIS == 0 || ANALYSIS == 1)
  DefineConstant[
    // number of subdomains
    N_DOM = {5, Min 1, Max 20, Step 1, Name "Input/04Number of subdomains"},
    // incident angle
    THETA_INC = {0, Min 0., Max 2*Pi, Step 0.1, Name "Input/3Incident angle"},
    // geometry
    R_INT = {1, Name "Input/4Internal radius"},
    R_EXT = {5, Name "Input/5External radius"},
    // frequency
    WAVENUMBER = {2*Pi, Min 0.1, Max 31.5, Step 0.1, Name "Input/0Wavenumber"},
    LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
    // number of points per wavelength
    N_LAMBDA = {10, Name "Input/2Points per wavelength"},
    LC = LAMBDA/N_LAMBDA
  ];
Else
  DefineConstant[
    // number of subdomains
    N_DOM = {3, Min 1, Max 20, Step 1, Name "Input/04Number of subdomains"},
    // geometry
    R_INT = {2000, Name "Input/4Internal radius"},
    R_EXT = {8000, Name "Input/5External radius"},
    rho=1,           //.............[kg/m3]    masse volumique
    f=4,             //.............[Hz]       frequence
    w=2*Pi*f,        //.............[rad/s]    pulsation
    mu=4e6,          //.............[Pa]       deuxieme coefficient de lame
    lambda=8e6,      //.............[Pa]       premier coefficient de lame
    cs=Sqrt[mu/rho], //.............[m/s]      celerite de l'onde s
    cp=Sqrt[(lambda + 2*mu)/rho], //.............[m/s]      celerite de l'onde p
    ks=w/cs,  //.............[1/m]      nombre d'onde s
    kp=w/cp,  //.............[1/m]      nombre d'onde p
    G=mu,    //.............[Pa]       shear modulus
    K=lambda + (2/3)*G, //.............[Pa]       bulk modulus
    LC = 100            //.............[m]
  ];
EndIf

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;
