MENU_WAVENUMBER = "/0Reference wavenumbers/";
MENU_GEO = "3Geometry";
MENU_ADV = "9Advanced";
MENU_INPUT = "1Input";
MENU_OBSTACLES = "/81Obstacles";
MENU_BOX_OBST = "/9Box (in lambda_geo)/";
//----------------
// (some) inputs
//---------------
DefineConstant[
  CLUTTER = {0, Choices{0,1}, Label "Obstacles ?", Name Str[MENU_GEO, "/80Obstacles"]}
];

//-------------
// Frequencies
//-------------
// k_geo : "k" used to build geometry (gmsh)
// k_dis : "k" used for the discretization
// k_w : "true wavenumber", used in the Helmholtz equation (getdp)
DefineConstant[
  //reference to build geometry
  k_geo = {10., Min 1., Max 100., Step 0.1, Label "k_geo", Name Str[MENU_GEO, Str[MENU_WAVENUMBER, "1"]]}
  //reference for discretization
  //(if band of frequencies for example)
  k_dis = {10., Min 1., Max 100., Step 0.1, Label "k_dis", Name Str[MENU_GEO, Str[MENU_WAVENUMBER, "2"]]}
];
lambda_geo = 2*Pi/k_geo;
lambda_dis = 2*Pi/k_dis;

/*======================================================
Parameters of the TRM
L : distance from the mirror to the source (x-direction)
Dx : Size in the x-direction 
Dy : Size in the y-direction 
Dz : Size in the z-direction
======================================================*/
MENU_TRM = "/2TRM (in lambda_geo)/";

DefineConstant[
  nDy = {15., Min 0.1, Max 100., Step 0.1, Label "Aperture", Name Str[Str[MENU_GEO, MENU_TRM], "1"]}
  nDx = {0.2, Min 0.1, Max 10., Step 0.01, Label "Thickness", Name Str[Str[MENU_GEO, MENU_TRM], "2"]}
  nL = {20., Min 1., Max 100., Step 0.1, Label "Distance to source", Name Str[Str[MENU_GEO, MENU_TRM], "3"]}
];

L = lambda_geo*nL;
Dx = lambda_geo*nDx;
Dy = lambda_geo*nDy;
Dz = lambda_geo*0;

MENU_SOURCE = "/1Source/";
DefineConstant[
  //Coordinate of the source :
  YS = {0., Min -Dy/2, Max Dy/2, Step 0.1, Label "Y coordinate", Name Str[MENU_GEO, Str[MENU_SOURCE, "0"]]}
];
XS = 0;
ZS = 0;


// TRM
//=========
X_TRM_min = XS + L;
X_TRM_max = XS + L + Dx;
Y_TRM_min = -Dy/2;
Y_TRM_max = Dy/2;

MENU_PROP = "/7Propagation domain (in lambda_geo)/";
// Domaine d'etude
//=========
DefineConstant[
  linkLS = {1, Choices {0,1},  Label "Set distances TRM-Source = Source-Xmin", Name Str[Str[MENU_GEO, MENU_PROP], "0"]}
  n_LS = {nL + nDx, Min 1., Max 30., Step 0.1, Label "Distance behind the source", Name Str[Str[MENU_GEO, MENU_PROP], "00"], ReadOnly linkLS}
  n_LTRM = {Dy/4, Min Dy/10, Max 100., Step 0.1, Label "Distance behind the TRM", Name Str[Str[MENU_GEO, MENU_PROP], "1"]}
  n_LY = {Dy/5, Min Dy/10, Max 100., Step 0.1, Label "Distance on top/bottom of the TRM", Name Str[Str[MENU_GEO, MENU_PROP], "2"]}
];
LbehindS = n_LS*lambda_geo;
LbehindTRM = n_LTRM*lambda_geo;
LUpDownTRM = n_LY*lambda_geo;

Xmin = XS - LbehindS;
Xmax = X_TRM_max + LbehindTRM;
Ymin = Y_TRM_min - LUpDownTRM;
Ymax = Y_TRM_max + LUpDownTRM;
  
MENU_LC = "/Step discretization in nb of points per lambda_dis/";
DefineConstant[
  //TRM
  nlcTRM = {15., Min 1., Max 30., Step 0.1, Label "TRM", Name Str[MENU_ADV,Str[MENU_LC, "2lcTRM"]], Closed 1}
  //Interne boundary separating propagation and absorbing domains
  nlcIntern_Bound = {10., Min 1., Max 30., Step 0.1, Label "Boundary with PML", Name  Str[MENU_ADV,Str[MENU_LC, "2lcIntBound"]], Closed 1}
  //Extern boundary of the PML (truncation)
  nlcExtern_Bound = {10., Min 1., Max 30., Step 0.1, Label "End of PML", Name  Str[MENU_ADV,Str[MENU_LC, "2lcExtBound"]], Closed 1}
  //Source (small open subset surrounding the source)
  nlcSourceExt = {15., Min 1., Max 30., Step 0.1, Label "Around the source", Name  Str[MENU_ADV,Str[MENU_LC, "2lcSourceExt"]], Closed 1}
  //source
  nlcSourceInt = {10., Min 1., Max 30., Step 0.1, Label "Near the source", Name  Str[MENU_ADV,Str[MENU_LC, "2lcSourceInt"]], Visible CLUTTER, Closed 1}
  //Scat
  nlcScat = {10., Min 1., Max 30., Step 0.1, Label "Scatterers", Name  Str[MENU_ADV,Str[MENU_LC, "2lcScat"]], Visible CLUTTER, Closed 1}
];
lcTRM = lambda_dis/nlcTRM;
lcIntern_Bound = lambda_dis/nlcIntern_Bound;
lcExtern_Bound = lambda_dis/nlcExtern_Bound;
lcSourceExt = lambda_dis/nlcSourceExt;
lcSourceInt = lambda_dis/nlcSourceInt;
lcScat = lambda_dis/nlcScat;

//constant parameters

// PML
//====
SizeInteriorDomainX = Xmax - Xmin;
SizeInteriorDomainY = Ymax - Ymin;
// Coordinate of the center of the domain (it's possibily not the source !)
XF = (Xmax + Xmin)/2;
YF = (Ymax + Ymin)/2;
ZF = ZS;

// Width and Height of the absorbing layer
MENU_PML = "/PML size (in nb. element)/";
DefineConstant[
  HidePML = {1, Choices{0,1}, Label "Hide PML", Name Str[MENU_ADV, Str[MENU_PML, "0"]], Closed 1}
  nSizePMLX = {10., Min 1., Max 30., Step 0.1, Label "x-size", Name Str[MENU_ADV, Str[MENU_PML, "00"]], Closed 1}
  nSizePMLY = {10., Min 1., Max 30., Step 0.1, Label "y-size", Name Str[MENU_ADV, Str[MENU_PML, "1"]]}
];
SizePMLX = nSizePMLX*lcIntern_Bound;
SizePMLY = nSizePMLY*lcIntern_Bound;



//-----------
// Obstacles
//------------
epsilon = lambda_dis/1000; //radius of source
d_secure = 1/5; //"security distance"

nconst_Xboxmin = d_secure;
nconst_Xboxmax = nL - d_secure;
nconst_Yboxmin = -n_LY - nDy/2 + d_secure;
nconst_Yboxmax = n_LY + nDy/2 - d_secure;

const_Xboxmin = nconst_Xboxmin*lambda_geo;
const_Xboxmax = nconst_Xboxmax*lambda_geo;
const_Yboxmin = nconst_Yboxmin*lambda_geo;
const_Yboxmax = nconst_Yboxmax*lambda_geo;

DefineConstant[
  N_scat_to_create = {40, Min 1, Max 1000, Step 1, Label "Nb. of obstacles", Name Str[MENU_GEO, Str[MENU_OBSTACLES, "/1NSCAT"]], Visible CLUTTER}
  linkr_maxmin = {0, Choices {0,1},  Label "Set radius_max = radius_min", Name Str[MENU_GEO, Str[MENU_OBSTACLES, "/3linkr"]], Visible CLUTTER}  
  ir_max = {0.2, Min 0.01, Max 5., Step 0.01, Label "Maximum radius (in lambda_geo)", Name Str[MENU_GEO, Str[MENU_OBSTACLES, "/3radiusmax"]], Visible CLUTTER}
  ir_min = {0.2, Min 0.01, Max 5., Step 0.01, Label "Minimum radius (in lambda_geo)", Name Str[MENU_GEO, Str[MENU_OBSTACLES, "/3radiusmin"]], Visible CLUTTER}
  nXboxmin = {nconst_Xboxmin, Min nconst_Xboxmin, Max nconst_Xboxmax, Step 0.1, Label "x-min", Name Str[Str[MENU_GEO, Str[MENU_OBSTACLES, MENU_BOX_OBST]], "40xboxmin"], Visible CLUTTER, Closed 1}
  nXboxmax = {nconst_Xboxmax, Min nconst_Xboxmin, Max nconst_Xboxmax, Step 0.1, Label "x-max", Name Str[MENU_GEO, Str[MENU_OBSTACLES, Str[MENU_BOX_OBST,"41xboxmax"]]], Visible CLUTTER, Closed 1}
  nYboxmin = {nconst_Yboxmin, Min nconst_Yboxmin, Max nconst_Yboxmax, Step 0.1, Label "y-min", Name Str[MENU_GEO, Str[MENU_OBSTACLES, Str[MENU_BOX_OBST,"42yboxmin"]]], Visible CLUTTER, Closed 1}
  nYboxmax = {nconst_Yboxmax, Min nconst_Yboxmin, Max nconst_Yboxmax, Step 0.1, Label "y-max", Name Str[MENU_GEO, Str[MENU_OBSTACLES, Str[MENU_BOX_OBST,"43yboxmax"]]], Visible CLUTTER, Closed 1}
  dmin = {0.2, Min 0.01, Max 10., Step 0.01, Label "dist. min between disks (in lambda_geo)", Name Str[MENU_GEO, Str[MENU_OBSTACLES, "/2dmin"]], Visible CLUTTER, Closed 1}
];

Xboxmin = nXboxmin * lambda_geo;
Xboxmax = nXboxmax * lambda_geo;
Yboxmin = nYboxmin * lambda_geo;
Yboxmax = nYboxmax * lambda_geo;

r_max = lambda_geo*ir_max;
r_min = lambda_geo*ir_min;


