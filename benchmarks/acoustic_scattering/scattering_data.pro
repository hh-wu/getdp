//data for the single - or multiple - scattering
DIRICHLET = 0;
NEUMANN = 1;
PENETRABLE = 2;

//Frequency
MENU_INPUT = "Input";
DefineConstant[
  k = {2, Min 0.1, Step 0.1, Max 500, Name Str[MENU_INPUT, "/2"], Label "Wavenumber"}
  n_lc = {20, Min 1, Step 0.1, Max 100, Name Str[MENU_INPUT,"/3"], Label "Number of points per wavelength"}
];
lambda = 2*Pi/k;
lc = lambda/n_lc;
lcScat = lc;

//Truncation
ABC = 0;
PML = 1;

//Type of truncation (ABC or PML)
//------------------------------------
MENU_TRUNC = "Truncation at infinity";
DefineConstant[
  Type_Truncation = { PML, Choices{ ABC ="Absorbing Boundary Condition",  PML="Perfectly matched layer"},
    Label "Type of truncation", Name Str[MENU_TRUNC, "/2"]}
];

//Shape and domain
//-----------------
MENU_DOM = "/4Computational Domain/";
DOM_SQUARE = 0;
DOM_CIRCULAR = 1;
DefineConstant[
  Type_SHAPE_PML = {DOM_SQUARE, Choices{DOM_SQUARE ="Rectangular", DOM_CIRCULAR="Circular"}, Label "Shape", Name Str[MENU_TRUNC, Str[MENU_DOM, "20"]], Visible (Type_Truncation == PML)}
  Type_SHAPE_ABC = {DOM_CIRCULAR, Choices{DOM_CIRCULAR="Ellipsoidal"}, Label "Shape", Name Str[MENU_TRUNC, Str[MENU_DOM, "21"]], Visible (Type_Truncation == ABC)}
];
If(Type_Truncation == PML)
  Type_SHAPE = Type_SHAPE_PML;
EndIf
If(Type_Truncation == ABC)
  Type_SHAPE = Type_SHAPE_ABC;
EndIf

//Size
If(Type_Truncation == ABC)
  Axis_string_x = "Semi-axis in x-direction";
  Axis_string_y = "Semi-axis in y-direction";
EndIf
If(Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR)
  Axis_string_x = "Radius";
  Axis_string_y = "Radius";
EndIf
If(Type_Truncation == PML && Type_SHAPE == DOM_SQUARE)
  Axis_string_x = "Semi-length in x-direction";
  Axis_string_y = "Semi-length in y-direction";
EndIf
DefineConstant[
  linkLS = {(Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR), Choices {0,1},  Label "Set Xmax=Ymax", Name Str[Str[MENU_TRUNC, MENU_DOM], "4Link"], ReadOnly (Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR)}
  Xmax = {10., Min 0.1, Step 0.1, Max 10000, Name Str[MENU_TRUNC, Str[MENU_DOM, "4Xmax"]], Label Str[Axis_string_x]}
  //  XBoundmin = {-10, Min -0.1, Step -0.1, Max -10000, Name "Truncation at Infinity/0Size/1", Label "Min X value (<0)"}
  Ymax = {Xmax, Min 0.1, Step 0.1, Max 10000, Name Str[MENU_TRUNC, Str[MENU_DOM, "4Ymax"]], Label Str[Axis_string_y], ReadOnly linkLS}
  //  YBoundmin = {-10, Min -0.1, Step -0.1, Max -10000, Name "Truncation at Infinity/0Size/3", Label "Min Y value (<0)"}
];
//force ellipsoidal PML to be circular (to fix)
If(Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR)
  Ymax = Xmax;
EndIf

XBoundmax = Xmax;
YBoundmax = Ymax;
XBoundmin = -Xmax;
YBoundmin = -Ymax;

//ABC
//----
MENU_ABC = "/ABC/";
ABC_SOMMERFELD = 0;
ABC_BAYLISS = 1;
DefineConstant[
  Type_ABC = { ABC_BAYLISS,
    Choices{ ABC_SOMMERFELD ="Sommerfeld",  ABC_BAYLISS="Bayliss-Turkel-Gunzburger"},
    Label "ABC", Name Str[MENU_TRUNC, Str[MENU_ABC, "2"]], Visible (Type_Truncation == ABC)}
] ;

//PML
//----
MENU_PML = "/PML parameters/";
//size (in number of elements)
DefineConstant[
  SizePML_LC = {10., Min 1., Max 1000., Step 0.1, Label "Size (in nb. of elements)", Name Str[MENU_TRUNC, Str[MENU_PML, "2Size"]], Visible (Type_Truncation == PML)}
];
SizePMLX = SizePML_LC*lc;
SizePMLY = SizePML_LC*lc;
//Damping function
PML_LINEAR = 0;
PML_QUADRATIC = 1;
PML_BERMUDEZ = 2;
PML_BERMUDEZ_QUAD = 3;
DefineConstant[
  PML_TYPE_SQUARE = {PML_BERMUDEZ,
    Choices{ PML_LINEAR ="Linear", PML_BERMUDEZ="Bermudez", PML_BERMUDEZ_QUAD="Bermudez Squared"},
    Label "Damping functions", Name Str[MENU_TRUNC, Str[MENU_PML,"30DampingFunctions"]], Visible (Type_Truncation == PML && Type_SHAPE == DOM_SQUARE)}
  PML_TYPE_CIRCULAR = {PML_BERMUDEZ, Choices{ PML_LINEAR ="Linear", PML_BERMUDEZ="Bermudez"},
    Label "Damping functions", Name Str[MENU_TRUNC, Str[MENU_PML,"31DampingFunctions"]], Visible (Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR)}
];

PML_TYPE = Type_SHAPE == DOM_SQUARE ? PML_TYPE_SQUARE:PML_TYPE_CIRCULAR;

//Linear
DefineConstant[
  SigmaMax = {100, Min 0, Max 10000, Step 1, Label "Max value", Name Str[MENU_TRUNC, Str[MENU_PML,"51LinearFun"]], Visible (Type_Truncation == PML && PML_TYPE == PML_LINEAR)}
];
SigmaXmax = SigmaMax;
SigmaYmax = SigmaMax;
//Quadratic
// To Do...

//Bermudez
// To do ?

DefineConstant[
  C_ = {"-solve -pos -bin", Name "GetDP/9ComputeCommand"}
];

//chose whether the incident wave is plane of emitted by a point source (green function)
//should be optimized (avoiding remesh ...)
MENU_UINC = "/Incident wave";
PLANEWAVE = 0;
POINTSOURCE = 1;

DefineConstant[
  INCIDENT_WAVE = {PLANEWAVE, Choices{ PLANEWAVE ="Plane Wave",  POINTSOURCE="Point source"}, Label "Type", Name Str[MENU_INPUT, Str[MENU_UINC,"/0"]]}
  PLOT_POINT_SOURCE = {0, Choices{0,1}, Label "Plot point source (remesh)", Name Str[MENU_INPUT, Str[MENU_UINC,"/1Plot"]], Visible (INCIDENT_WAVE == POINTSOURCE)}
];


// indexes of physical entities
// surface :
Ind_Propagation_Domain = 1;
Ind_PML = 2;
// boundary
Ind_Fictitious_Bound = 3;
Ind_Scat_Bound = 4;
Ind_PML_Bound = 5;
Ind_Scat = 6;
Ind_GammaInf = 7;
