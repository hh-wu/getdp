
//Number of obstacles (wanted by the user)
NMAX = 100;
MENU_OBST = "Obstacles";
DefineConstant[
  N_scat_to_create = {1, Min 1, Max NMAX, Step 1,
    Name StrCat[MENU_OBST,"/00Nb. of wanted obstacles"]}
];

//Frequency
MENU_INPUT = "Input";
DefineConstant[
  k = {1, Min 0.1, Step 0.1, Max 50,
    Name StrCat[MENU_INPUT, "/2Wavenumber"]}
  n_lc = {10, Min 1, Step 0.1, Max 100,
    Name StrCat[MENU_INPUT,"/3Number of points per wavelength"]}
];
lambda = 2*Pi/k;
lc = lambda/n_lc;
lcScat = lc;

//Type of problem: penetrable or not ?
IMPENETRABLE = 0;
PENETRABLE = 1;
DefineConstant[
  Type_PROBLEM = {IMPENETRABLE,
    Choices{IMPENETRABLE = "Impenetrable", PENETRABLE = "Penetrable"},
    Name StrCat[MENU_INPUT, "/00Type of problem"]}
];

//Type of truncation (ABC or PML)
//------------------------------------
ABC = 0;
PML = 1;
MENU_TRUNC = "Truncation at infinity";
DefineConstant[
  Type_Truncation = { PML,
    Choices{ ABC ="Absorbing Boundary Condition",  PML="Perfectly matched layer"},
    Name StrCat[MENU_TRUNC, "/2Type of truncation"]}
];

//Shape and domain
//-----------------
MENU_DOM = "/4Computational Domain/";
DOM_SQUARE = 0;
DOM_CIRCULAR = 1;
DefineConstant[
  Type_SHAPE_PML = {DOM_SQUARE,
    Choices{DOM_SQUARE ="Rectangular", DOM_CIRCULAR="Circular"},
    Name StrCat[MENU_TRUNC, MENU_DOM, "20Shape"],
    Visible (Type_Truncation == PML)}
  Type_SHAPE_ABC = {DOM_CIRCULAR, Choices{DOM_CIRCULAR="Ellipsoidal"},
    Name StrCat[MENU_TRUNC, MENU_DOM, "21Shape"],
    Visible (Type_Truncation == ABC)}
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
  linkLS = {(Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR),
    Choices {0,1}, Name StrCat[MENU_TRUNC, MENU_DOM, "4Set Xmax=Ymax"],
    ReadOnly (Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR)}
  Xmax = {10., Min 0.1, Step 0.1, Max 10000,
    Name StrCat[MENU_TRUNC, MENU_DOM, "4Xmax"], Label Str[Axis_string_x]}
  Ymax = {Xmax, Min 0.1, Step 0.1, Max 10000,
    Name StrCat[MENU_TRUNC, MENU_DOM, "4Ymax"], Label Str[Axis_string_y],
    ReadOnly linkLS}
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
    Name StrCat[MENU_TRUNC, MENU_ABC, "2ABC"],
    Visible (Type_Truncation == ABC)}
] ;

//PML
//----
MENU_PML = "/PML parameters/";
//size (in number of elements)
DefineConstant[
  SizePML_LC = {10., Min 1., Max 1000., Step 0.1,
    Name StrCat[MENU_TRUNC, MENU_PML, "2Size (in nb. of elements)"],
    Visible (Type_Truncation == PML)}
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
    Choices{ PML_LINEAR ="Linear", PML_BERMUDEZ="Bermudez",
      PML_BERMUDEZ_QUAD="Bermudez Squared"},
    Name StrCat[MENU_TRUNC, MENU_PML,"30Damping functions"],
    Visible (Type_Truncation == PML && Type_SHAPE == DOM_SQUARE)}
  PML_TYPE_CIRCULAR = {PML_BERMUDEZ,
    Choices{ PML_LINEAR ="Linear", PML_BERMUDEZ="Bermudez"},
    Name StrCat[MENU_TRUNC, MENU_PML,"31Damping functions"],
    Visible (Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR)}
];

PML_TYPE = Type_SHAPE == DOM_SQUARE ? PML_TYPE_SQUARE:PML_TYPE_CIRCULAR;

//Linear
DefineConstant[
  SigmaMax = {100, Min 0, Max 10000, Step 1,
    Name StrCat[MENU_TRUNC, MENU_PML,"51Max value"],
    Visible (Type_Truncation == PML && PML_TYPE == PML_LINEAR)}
];
SigmaXmax = SigmaMax;
SigmaYmax = SigmaMax;

//chose whether the incident wave is plane of emitted by a point source (green function)
//should be optimized (avoiding remesh ...)
MENU_UINC = "/Incident wave";
PLANEWAVE = 0;
POINTSOURCE = 1;
//To approximate the Dirac function (Type_PROBLEM == PENETRABLE)
DefineConstant[
  rad_int_s = {1/100.,
    Name StrCat[MENU_INPUT, MENU_UINC,"/rad_int"],
    Visible 0}
  rad_ext_s = {10*rad_int_s,
    Name StrCat[MENU_INPUT, MENU_UINC,"/rad_ext"],
    Visible 0}
];

DefineConstant[
  INCIDENT_WAVE = {(Type_PROBLEM == PENETRABLE?POINTSOURCE:PLANEWAVE),
    Choices{PLANEWAVE ="Plane Wave", POINTSOURCE="Point source"},
    Name StrCat[MENU_INPUT, MENU_UINC,"/0Type"],
    ReadOnly (Type_PROBLEM == PENETRABLE)}
  PLOT_POINT_SOURCE = {Type_PROBLEM == PENETRABLE, Choices{0,1},
    Name StrCat[MENU_INPUT, MENU_UINC,"/1Plot point source (remesh at every change)"],
    Visible (INCIDENT_WAVE == POINTSOURCE || Type_PROBLEM == PENETRABLE),
    ReadOnly (Type_PROBLEM==PENETRABLE)}
];

//Just to plot the point source
DefineConstant[
  r_source = {(Type_PROBLEM == PENETRABLE?Xmax/2-rad_ext_s:Xmax/2),
    Name StrCat[MENU_INPUT, MENU_UINC,"/Distance from origin"],
    Visible (INCIDENT_WAVE == POINTSOURCE && PLOT_POINT_SOURCE),
    ReadOnly !PLOT_POINT_SOURCE}
  theta_source = {0., Min -1., Max 1., Step 0.01,
    Name StrCat[MENU_INPUT, MENU_UINC,"/Angle (in pi-radian)"],
    Visible (INCIDENT_WAVE == POINTSOURCE && PLOT_POINT_SOURCE),
    ReadOnly !PLOT_POINT_SOURCE}
  X_source = {r_source*Cos[theta_source],
    Name StrCat[MENU_INPUT, MENU_UINC,"/x_source"],
    ReadOnly 1, Visible 0}
  Y_source = {r_source*Sin[theta_source],
    Name StrCat[MENU_INPUT, MENU_UINC,"/y_source"],
    ReadOnly 1, Visible 0}
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
Ind_SourceInt = 8;
Ind_SourceExt = 9;
