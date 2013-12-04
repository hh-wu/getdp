//data for the single - or multiple - scattering

//Frequency
DefineConstant[
  k = {2, Min 0.1, Step 0.1, Max 500, Name "Input/0", Label "Wavenumber"}
  n_lc = {20, Min 1, Step 0.1, Max 100, Name "Input/1", Label "Number of points per wavelength"}
];
lambda = 2*Pi/k;
lc = lambda/n_lc;
lcScat = lc;

// BC at infinity
ABC = 0;
PML = 1;

//Type of truncation (ABC or PML)
//------------------------------------
MENU_TRUNC = "Truncation at Infinity/";
DefineConstant[
  Type_Truncation = { PML, Choices{ ABC ="Absorbing Boundary Condition",  PML="Perfectly matched layer"},
    Label "Truncation at infinity", Name Str[MENU_TRUNC, "0"]}
];

//Shape and domain
//-----------------
MENU_DOM = "Truncation at Infinity/1Computational Domain/";
DOM_SQUARE = 0;
DOM_CIRCULAR = 1;
If(Type_Truncation == PML)
DefineConstant[
  Type_SHAPE = {DOM_SQUARE, Choices{ DOM_SQUARE ="Rectangular", DOM_CIRCULAR="Circular"}, Label "Shape", Name Str[MENU_DOM, "00"], Visible (Type_Truncation == PML)}
];
EndIf
If(Type_Truncation == ABC)
DefineConstant[
  Type_SHAPE = {DOM_CIRCULAR, Choices{DOM_CIRCULAR="Ellipsoidal"}, Label "Shape", Name Str[MENU_DOM, "00"], Visible 0}
];
EndIf

//Size

If(Type_SHAPE == DOM_SQUARE)
  DefineConstant[
    Xmax = {10., Min 0.1, Step 0.1, Max 10000, Name Str[MENU_DOM, "00Xmax"], Label "Semi-length in x-direction"}
    //  XBoundmin = {-10, Min -0.1, Step -0.1, Max -10000, Name "Truncation at Infinity/0Size/1", Label "Min X value (<0)"}
    Ymax = {10., Min 0.1, Step 0.1, Max 10000, Name Str[MENU_DOM, "00Ymax"], Label "Semi-length in y-direction"}
    //  YBoundmin = {-10, Min -0.1, Step -0.1, Max -10000, Name "Truncation at Infinity/0Size/3", Label "Min Y value (<0)"}  
  ];
EndIf
If(Type_SHAPE == DOM_CIRCULAR)
  If(Type_Truncation == ABC)
    Axis_string = "Semi-axis in x-direction";
  EndIf
  If(Type_Truncation == PML)
    Axis_string = "Radius";
  EndIf
  DefineConstant[
    Xmax = {10, Min 0.1, Step 0.1, Max 10000, Name Str[MENU_DOM, "00Xmax"], Label Str[Axis_string]}
    //  XBoundmin = {-10, Min -0.1, Step -0.1, Max -10000, Name "Truncation at Infinity/0Size/1", Label "Min X value (<0)"}
    Ymax = {10, Min 0.1, Step 0.1, Max 10000, Name Str[MENU_DOM, "00Ymax"], Label "Semi-axis in y-direction", Visible (Type_Truncation == ABC)}
    //  YBoundmin = {-10, Min -0.1, Step -0.1, Max -10000, Name "Truncation at Infinity/0Size/3", Label "Min Y value (<0)"}  
  ];
EndIf

If(Type_Truncation == PML)
  Ymax = Xmax;
EndIf

XBoundmax = Xmax;
YBoundmax = Ymax;
XBoundmin = -Xmax;
YBoundmin = -Ymax;

//ABC
//----
ABC_SOMMERFELD = 0;
ABC_BAYLISS = 1;
DefineConstant[
  Type_ABC = { ABC_BAYLISS,
    Choices{ ABC_SOMMERFELD ="Sommerfeld",  ABC_BAYLISS="Bayliss-Turkel-Gunzburger"},
    Label "ABC", Name "Truncation at Infinity/ABC Type/", Visible (Type_Truncation == ABC)}
] ;

//PML
//----
MENU_PML = "Truncation at Infinity/2PML/";
//size (in number of elements)
DefineConstant[
  SizePML_LC = {10., Min 1., Max 1000., Step 0.1, Label "Size PML (in nb. of elements)", Name Str[MENU_PML, "0"], Visible (Type_Truncation == PML)}
];
SizePMLX = SizePML_LC*lc;
SizePMLY = SizePML_LC*lc;
//Damping function
PML_LINEAR = 0;
PML_QUADRATIC = 1;
PML_BERMUDEZ = 2;
PML_BERMUDEZ_QUAD = 3;
DefineConstant[
  PML_TYPE_SQUARE = {PML_LINEAR,
    Choices{ PML_LINEAR ="Linear", PML_BERMUDEZ="Bermudez", PML_BERMUDEZ_QUAD="Bermudez Squared"},
    Label "Damping functions", Name Str[MENU_PML,"10"], Visible (Type_Truncation == PML && Type_SHAPE == DOM_SQUARE)}
  PML_TYPE_CIRCULAR = {PML_LINEAR,
    Choices{ PML_LINEAR ="Linear", PML_BERMUDEZ="Bermudez"},
    Label "Damping functions", Name Str[MENU_PML,"11"], Visible (Type_Truncation == PML && Type_SHAPE == DOM_CIRCULAR)}
];

PML_TYPE = Type_SHAPE == DOM_SQUARE ? PML_TYPE_SQUARE:PML_TYPE_CIRCULAR;


//Linear
DefineConstant[
  SigmaMax = {100, Min 0, Max 10000, Step 1, Label "Max value", Name "Truncation at Infinity/2PML/4Linear damping function/Max value", Visible (Type_Truncation == PML && PML_TYPE == PML_LINEAR)}
];
SigmaXmax = SigmaMax;
SigmaYmax = SigmaMax;
//Quadratic
// To Do...

//Bermudez
// To do ?

// indexes of physical entities
// surface :
Ind_Propagation_Domain = 1;
Ind_PML = 2;
// boundary
Ind_Fictitious_Bound = 3;
Ind_Scat_Bound = 4;
Ind_PML_Bound = 5;

DefineConstant[
  ComputeCommand = {"-solve -pos -bin", Name "GetDP/9"}
];

//chose whether the incident wave is plane of emitted by a point source (green function)
MENU_UINC = "Incident wave";
PLANEWAVE = 0;
POINTSOURCE = 1;

DefineConstant[
  INCIDENT_WAVE = {PLANEWAVE, Choices{ PLANEWAVE ="Plane Wave",  POINTSOURCE="Point source"}, Label "Type", Name Str[MENU_UINC,"/0"]}
    beta_inc_aux = {1., Min -1., Max 1., Step 0.01 , Label "Angle (in Pi)", Name Str[MENU_UINC,"/Plane wave/0"], Visible (INCIDENT_WAVE == PLANEWAVE)}
    r_source = {Xmax+1., Min Xmax + 0.1, Max Xmax + 1000., Step 0.1, Label "Distance from origin", Name Str[MENU_UINC,"/Source coord/r"], Visible (INCIDENT_WAVE == POINTSOURCE)}
    theta_source = {0., Min 0., Max 2*Pi, Step 0.01 , Label "Angle (rad)", Name Str[MENU_UINC,"/Source coord/theta"], Visible (INCIDENT_WAVE == POINTSOURCE)}
];  
  
