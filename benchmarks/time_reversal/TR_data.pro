// Menu names in the ONELAB interface
MENU_GEO = "3Geometry";
MENU_WAVENUMBER = "/0Reference wavenumbers/";
MENU_ADV = "9Advanced";
MENU_INPUT = "1Input";
MENU_OBSTACLES = "/81Obstacles";
MENU_BOX_OBST = "/9Box (in lambda_geo)/";
MENU_TRM = "/2TRM (in lambda_geo)/";
MENU_SOURCE = "/1Source/";
MENU_PROP = "/7Propagation domain (in lambda_geo)/";
MENU_LC = "/Step discretization in nb of points per lambda_dis/";
MENU_PML = "/PML size (in nb. element)/";

//----------------
// (some) inputs
//---------------

//-------------
// Frequencies
//-------------
// k_geo : "k" used to build geometry (gmsh)
// k_dis : "k" used for the discretization
// k_w : "true wavenumber", used in the Helmholtz equation (getdp)
DefineConstant[
  // reference to build geometry
  k_geo = {10., Min 1., Max 100., Step 0.1,
    Name StrCat[MENU_GEO, MENU_WAVENUMBER, "1k_geo"], Closed 1},
  // reference for discretization (if band of frequencies for example)
  k_dis = {10., Min 1., Max 100., Step 0.1,
    Name StrCat[MENU_GEO, MENU_WAVENUMBER, "2k_dis"]}
];
lambda_geo = 2*Pi/k_geo;
lambda_dis = 2*Pi/k_dis;

//--------------------------------------------------------
// Parameters of the Time Reversal Mirror (TRM)
// L : distance from the mirror to the source (x-direction)
// Dx : Size in the x-direction
// Dy : Size in the y-direction
// Dz : Size in the z-direction
//----------------------------------------------------------

DefineConstant[
  nDy = {15., Min 0.1, Max 100., Step 0.1,
    Name StrCat[MENU_GEO, MENU_TRM, "1Aperture"], Closed 1}
  nDx = {0.2, Min 0.1, Max 10., Step 0.01,
    Name StrCat[MENU_GEO, MENU_TRM, "2Thickness"]}
  nL = {20., Min 1., Max 100., Step 0.1,
    Name StrCat[MENU_GEO, MENU_TRM, "3Distance to source"]}
];

L = lambda_geo*nL;
Dx = lambda_geo*nDx;
Dy = lambda_geo*nDy;
Dz = lambda_geo*0;

DefineConstant[
  // Coordinate of the source :
  YS = {0., Min -Dy/2, Max Dy/2, Step 0.1,
    Name StrCat[MENU_GEO, MENU_SOURCE, "0Y coordinate"], Closed 1}
];
XS = 0;
ZS = 0;

X_TRM_min = XS + L;
X_TRM_max = XS + L + Dx;
Y_TRM_min = -Dy/2;
Y_TRM_max = Dy/2;

//---------------------
// Computational domain
//---------------------

DefineConstant[
  linkLS = {1, Choices {0,1},
    Name StrCat[MENU_GEO, MENU_PROP, "0Set distances TRM-Source = Source-Xmin"], Closed 1}
  n_LS = {nL + nDx, Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_GEO, MENU_PROP, "00Distance behind the source"], ReadOnly linkLS}
  n_LTRM = {Dy/4, Min Dy/10, Max 100., Step 0.1,
    Name StrCat[MENU_GEO, MENU_PROP, "1Distance behind the TRM"]}
  n_LY = {Dy/5, Min Dy/10, Max 100., Step 0.1,
    Name StrCat[MENU_GEO, MENU_PROP, "2Distance on top & bottom of the TRM"]}
];

LbehindS = n_LS*lambda_geo;
LbehindTRM = n_LTRM*lambda_geo;
LUpDownTRM = n_LY*lambda_geo;

Xmin = XS - LbehindS;
Xmax = X_TRM_max + LbehindTRM;
Ymin = Y_TRM_min - LUpDownTRM;
Ymax = Y_TRM_max + LUpDownTRM;

DefineConstant[
  // Obstacles?
  CLUTTER = {0, Choices{0,1},
    Name StrCat[MENU_GEO, "/80Obstacles ?"]},
  // TRM
  nlcTRM = {15., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_LC, "2TRM"], Closed 1}
  // Internal boundary separating propagation and absorbing domains
  nlcIntern_Bound = {10., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_LC, "2Boundary with PML"], Closed 1}
  // External boundary of the PML (truncation)
  nlcExtern_Bound = {10., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_LC, "2End of PML"], Closed 1}
  // Source (small open subset surrounding the source)
  nlcSourceExt = {15., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_LC, "2Around the source"], Closed 1}
  // source
  nlcSourceInt = {10., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_LC, "2Near the source"], Visible CLUTTER, Closed 1}
  // Scat
  nlcScat = {10., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_LC, "2Scatterers"], Visible CLUTTER, Closed 1}
];

lcTRM = lambda_dis/nlcTRM;
lcIntern_Bound = lambda_dis/nlcIntern_Bound;
lcExtern_Bound = lambda_dis/nlcExtern_Bound;
lcSourceExt = lambda_dis/nlcSourceExt;
lcSourceInt = lambda_dis/nlcSourceInt;
lcScat = lambda_dis/nlcScat;

//-----
// PML
//-----

SizeInteriorDomainX = Xmax - Xmin;
SizeInteriorDomainY = Ymax - Ymin;
// Coordinate of the center of the domain (it's possibily not the source !)
XF = (Xmax + Xmin)/2;
YF = (Ymax + Ymin)/2;
ZF = ZS;

// Width and Height of the absorbing layer
DefineConstant[
  HidePML = {1, Choices{0,1},
    Name StrCat[MENU_ADV, MENU_PML, "0Hide PML"], Closed 1}
  nSizePMLX = {10., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_PML, "00x-size"], Closed 1}
  nSizePMLY = {10., Min 1., Max 30., Step 0.1,
    Name StrCat[MENU_ADV, MENU_PML, "1y-size"]}
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
  N_scat_to_create = {40, Min 1, Max 1000, Step 1,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/00Nb. of obstacles"], Visible CLUTTER}
  linkr_maxmin = {0, Choices {0,1},
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/3Set radius_max = radius_min"], Visible CLUTTER}
  ir_max = {0.2, Min 0.01, Max 5., Step 0.01,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/3Maximum radius (in lambda_geo)"], Visible CLUTTER}
  ir_min = {0.2, Min 0.01, Max 5., Step 0.01,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/3Minimum radius (in lambda_geo)"], Visible CLUTTER}
  nXboxmin = {nconst_Xboxmin, Min nconst_Xboxmin, Max nconst_Xboxmax, Step 0.1,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, MENU_BOX_OBST, "40x-min"], Visible CLUTTER, Closed 1}
  nXboxmax = {nconst_Xboxmax, Min nconst_Xboxmin, Max nconst_Xboxmax, Step 0.1,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, MENU_BOX_OBST,"41x-max"], Visible CLUTTER, Closed 1}
  nYboxmin = {nconst_Yboxmin, Min nconst_Yboxmin, Max nconst_Yboxmax, Step 0.1,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, MENU_BOX_OBST,"42y-min"], Visible CLUTTER, Closed 1}
  nYboxmax = {nconst_Yboxmax, Min nconst_Yboxmin, Max nconst_Yboxmax, Step 0.1,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, MENU_BOX_OBST,"43y-max"], Visible CLUTTER, Closed 1}
  dmin = {0.2, Min 0.01, Max 10., Step 0.01,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/2dist. min between disks (in lambda_geo)"], Visible CLUTTER, Closed 1}
];

Xboxmin = nXboxmin * lambda_geo;
Xboxmax = nXboxmax * lambda_geo;
Yboxmin = nYboxmin * lambda_geo;
Yboxmax = nYboxmax * lambda_geo;

r_max = lambda_geo*ir_max;
r_min = lambda_geo*ir_min;
