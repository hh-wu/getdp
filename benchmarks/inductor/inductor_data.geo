// Geometrical data for inductor model

cm = 1e-2; // Unit

pp  = "Input/10Geometric dimensions/0";
pp2 = "Input/10Geometric dimensions/01Shell radius/";
ppm = "Input/11Mesh control (Nbr of divisions)/";

DefineConstant[
  Flag_3Dmodel = {0, Choices{0="2D",1="3D"},
    Name "Input/00FE model", Highlight "Blue"},
  Flag_Symmetry2D = {1, Choices{0="Full",1="Half"},
    Name "Input/00Symmetry type", Highlight "Blue", Visible (Flag_3Dmodel==0)},
  Flag_Symmetry3D = {2, Choices{0="Full",1="Half",2="One fourth"},
    Name "Input/01Symmetry type", Highlight "Blue", Visible (Flag_3Dmodel==1)},
  Flag_OpenCore = {1, Choices{0,1},
    Name "Input/02Core with air gap", Highlight "White"},
  Flag_Infinity = {1, Choices{0,1},
    Name "Input/01Use shell transformation to infinity", Highlight "White"}
];

Flag_Symmetry  = (Flag_3Dmodel==0) ? Flag_Symmetry2D : Flag_Symmetry3D;
SymmetryFactor = (Flag_Symmetry) ? 2*Flag_Symmetry:1;
Printf("====> SymmetryFactor=%g", SymmetryFactor);


close_menu = 1;
colorro  = "LightGrey";
colorpp = "Ivory";

DefineConstant[
  wcoreE = {3*cm,  Name StrCat[pp, "1E-core width of side legs [m]"],
    Highlight Str[colorpp],Closed close_menu},
  hcoil  = {9*cm,  Name StrCat[pp, "4Coil height [m]"],
    Highlight Str[colorpp]},
  wcoil  = {wcoreE, Name StrCat[pp, "3Coil width [m]"], ReadOnly 1,
    Highlight Str[colorro]},
  hcoreE = {hcoil+wcoreE, Name StrCat[pp, "2E-core height of legs [m]"], ReadOnly 1,
    Highlight Str[colorro]},
  ag     = {0.33*cm, Min 0.1*cm, Max 4*cm, Step 0.2*cm, ReadOnlyRange 1, Visible (Flag_OpenCore==1),
    Name StrCat[pp, "5Air gap width [m]"], Highlight Str[colorpp]},
  Lz     = {9*cm, Name StrCat[pp, "0Length along z-axis [m]"], Highlight Str[colorpp]}
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
  Rint = {20*cm, Min 0.15, Max 0.9, Step 0.1, Name StrCat[pp2, "0Inner [m]"],
    Visible (Flag_Infinity==1), Highlight Str[colorpp] },
  Rext = {28*cm, Min Rint, Max 1, Step 0.1, Name StrCat[pp2, StrCat["1", label_Rext]],
    Label Str[label_Rext], Visible 1, Highlight Str[colorpp] }
];

Val_Rint = Rint;
Val_Rext = Rext;

//-------------------------------------------------------------------------
// Some mesh control stuff
DefineConstant[
  md = { 1., Name StrCat[ppm, "0Mesh density"],
    Highlight Str[colorpp], Closed close_menu},
  nn_wcore   = { Ceil[md*2], Name StrCat[ppm, "0Core width"], ReadOnly 1,
    Highlight Str[colorro], Closed close_menu},
  nn_airgap  = { Ceil[md*1], Name StrCat[ppm, "1Air gap width"], ReadOnly 1,
    Highlight Str[colorro]},
  nn_ri = { Ceil[md*6], Name StrCat[ppm, "2One fourth shell in"], ReadOnly 1,
    Visible (Flag_Infinity==1), Highlight Str[colorro]},
  nn_ro = { Ceil[md*6], Name StrCat[ppm, "3One fourth shell out"], ReadOnly 1,
    Highlight Str[colorro]}
];

//-------------------------------------------------------------------------

IA = 10;
Nw = 288;

sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
sigma_cu = 5.77e7  ; // conductivity of copper [S/m]


//-------------------------------------------------------------------------
// Reluctance computation - magnetic circuit values obtained from geo
//-------------------------------------------------------------------------
mu0 = 4.e-7 * Pi ;

// Simplified magnetic circuit taking only air gap reluctances into account

ff = 2.; // fringing factor \in [1,2]: core cross section increased by a fraction of the air gap on each side
//Rm_c_ref= 4.381e5; // just for checking
//Printf("fringing factor = %g",(ag/(Rm_c_ref*mu0*Lz)-wcoreE_centralleg)/ag);

Rm_c = ag/(mu0*(wcoreE_centralleg+ff*ag)*Lz) ; // center leg
Rm_s = ag/(mu0*(wcoreE+ff*ag)*Lz) ; // side legs
Rm_0 = Rm_c + Rm_s/2 ;
L_0 = Nw^2*1e3/Rm_0;
Printf("Rm1 = %.4e [H^-1]; Rm2 = %.4e [H^-1]; Rm = %.4e [H^-1];", Rm_c, Rm_s, Rm_0);
Printf("L0 = %g [mH];", L_0);

// Improved magnetic circuit of the inductor taking leakage flux into account
Rm_lf =  3*wcoreE/(mu0*hcoil*Lz) ; // leakage flux
iRm_1 = 1/Rm_0 + 1/(Rm_lf/2) ;
Rm_1 = 1/iRm_1 ;
L_1 = Nw^2*1e3/Rm_1;
Printf("Rm3 = %.4e [H^-1]; Rm = %.4e [H^-1];", Rm_lf, Rm_1);
Printf("L1 = %g [mH];", L_1);

// Fringing effect based on the Carter factor

beta = wcoil/(2*ag);
lambda = 3*wcoil ; // slot pitch
alpha = 4/Pi*(beta*Atan[beta]-Log[Sqrt[1+beta^2]]);

kc = lambda/(lambda-alpha*ag) ; // Carter factor
kf = beta-alpha/2; // Correction factor of the cross-section of the airgap
Printf("kc=%g kf=%g", kc, kf);

Rmc_c = ag/(mu0*(wcoreE_centralleg+kf*ag)*Lz) ; // center leg
Rmc_s = ag/(mu0*(wcoreE+kf*ag)*Lz) ; // side legs
Rmc_0 = Rmc_c + Rmc_s/2 ;

iRm_2 = 1/Rmc_0 + 1/(Rm_lf/2) ;
Rm_2 = 1/iRm_2 ;

NbAvailableMagCircuits = 3;

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
