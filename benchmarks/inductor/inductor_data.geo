// Geometrical data for inductor model

cm = 1e-2; // Unit

pp  = "Input/10Geometric dimensions/0";
pp2 = "Input/10Geometric dimensions/01Shell radius/";
ppm = "Input/11Mesh control/0";
ppm2 = "Input/11Mesh control/1Number of divisions";

DefineConstant[
  Flag_3Dmodel = {0, Choices{0="2D",1="3D"},
    Label "FE model", Path "Input/00", Highlight "Blue"},
  Flag_Symmetry2D = {1, Choices{0="Full",1="Half"},
    Label "Symmetry type", Path "Input/00", Highlight "Blue", Visible (Flag_3Dmodel==0)},
  Flag_Symmetry3D = {2, Choices{0="Full",1="Half",2="One fourth"},
    Label "Symmetry type", Path "Input/00", Highlight "Blue", Visible (Flag_3Dmodel==1)},
  Flag_OpenCore = {1, Choices{0,1},
    Label "Core with air gap", Path "Input/02", Highlight "White", Visible 1},
  Flag_Infinity = {1, Choices{0,1},
    Label "Use shell transformation to infinity", Path "Input/01", Highlight "White", Visible 1}
];

Flag_Symmetry  = (Flag_3Dmodel==0) ? Flag_Symmetry2D : Flag_Symmetry3D;
SymmetryFactor = (Flag_Symmetry) ? 2*Flag_Symmetry:1;
Printf("====> SymmetryFactor=%g", SymmetryFactor);


close_menu = 1;
colorro  = "LightGrey";
colorpp = "Ivory";

DefineConstant[
  wcoreE = {3*cm,  Label "E-core width of side legs [m]", Path Str[pp,"1"], Highlight Str[colorpp],Closed close_menu},
  hcoil  = {9*cm,  Label "Coil height [m]", Path Str[pp,"4"], Highlight Str[colorpp]},
  wcoil  = {wcoreE, Label "Coil width [m]", ReadOnly 1, Path Str[pp,"3"], Highlight Str[colorro]},
  hcoreE = {hcoil+wcoreE, Label "E-core height of legs [m]", ReadOnly 1, Path Str[pp,"2"], Highlight Str[colorro]},
  ag     = {0.33*cm, Min 0.1*cm, Max 4*cm, Step 0.2*cm, ReadOnlyRange 1, Visible (Flag_OpenCore==1),
           Label "Air gap width [m]", Path Str[pp,"5"], Highlight Str[colorpp]},
  Lz     = {9*cm, Label "Length along z-axis [m]", Path Str[pp,"0"], Highlight Str[colorpp]}
];

// rest of EI-Core dimensions
wcoreE_centralleg = 2*wcoreE;

wcoreI = 2*wcoreE + wcoreE_centralleg + 2*wcoil;
hcoreI = wcoreE ;

htot = hcoil + wcoreE + ag + wcoreE ; // Total height of EI-core, including gap

// radious for surrounding air with transformation to infinity

If(Flag_Infinity==1)
  label_Rext = "Outer [m]";
EndIf
If(Flag_Infinity==0)
  label_Rext = "[m]";
EndIf

DefineConstant[
  Rint = {20*cm, Min 0.15, Max 0.9, Step 0.1, Label "Inner [m]",
    Path Str[pp2,"0"], Visible (Flag_Infinity==1), Highlight Str[colorpp] },
  Rext = {28*cm, Min Rint, Max 1, Step 0.1, Label Str[label_Rext],
    Path Str[pp2,"1"], Label Str[label_Rext], Visible 1, Highlight Str[colorpp] }
];

Val_Rint = Rint;
Val_Rext = Rext;

IA = 10;
Nw = 288;

sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
sigma_cu = 5.77e7  ; // conductivity of copper [S/m]


// ----------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ----------------------------------------------------

ECORE = 1000;
ICORE = 1100;

COIL  = 2000;
LEG_INCOIL = 2100;
SKINCOIL = 2222;
SKINCOIL_ = 2223;


SURF_ELEC0 = 2333;
SURF_ELEC1 = 2444;
CUTCOIL = 2555;

AIR    = 3000;
AIRINF = 3100;
AIRGAP = 3200;

// Lines and surfaces for boundary conditions
SURF_AIROUT = 3333;

AXIS_Y = 10000;
CUT_YZ = 11000;
CUT_XY = 12000;
