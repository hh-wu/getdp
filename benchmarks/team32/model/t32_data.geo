// Geometrical data for transformer in Team32
// We solve CASE3: each winding is connected in series with a 11.1 resistance,
// one is supplied by a sinusoidal voltage (14.5 V peak value),
// the other is supplied by a co sinusoidal voltage (14.5 V peak value);

mm = 1e-3; // Unit

pp  = "Input/10Geometric dimensions/0";

DefineConstant[
  Flag_3Dmodel = {0, Choices{0,1},
    Name "Input/11Use 3D model"}
  Flag_Symmetry2D = { 1, Choices{0,1},
    Name "Input/12Use symmetry", ReadOnly Flag_3Dmodel, Visible !Flag_3Dmodel}
  Flag_Symmetry3D = { 1, Choices{1="1/4 model",2="1/2 model"},
    Name "Input/12Symmetry Type", ReadOnly !Flag_3Dmodel, Visible Flag_3Dmodel}
  Flag_Infinity = {(Flag_3Dmodel==0), Choices{0,1},
    Name "Input/13Use shell transformation to infinity", ReadOnly 1}
];

Flag_Symmetry = Flag_3Dmodel ? Flag_Symmetry3D : Flag_Symmetry2D;
// To check: symmetry factor for the source is 2 not but for energy/power computation.. 4?

SymmetryFactor = (Flag_Symmetry)?(Flag_3Dmodel ? 4/Flag_Symmetry3D: 2) : 1;

//Printf("====> SymmetryFactor=%g", SymmetryFactor);

close_menu = 1;
colorro  = "LightGrey";
colorpp = "Ivory";

cteaux = 1;

DefineConstant[
  wcore = {30*mm,  Name StrCat[pp, "1Width of legs [m]"],
    Highlight Str[colorpp],Closed close_menu},
  wTot = {184.5*mm,  Name StrCat[pp, "2Total width [m]"],
    Highlight Str[colorpp],Closed close_menu},
  hcoil  = {120*mm,  Name StrCat[pp, "4Coil height [m]"],
    Highlight Str[colorpp]},
  whole  = {42.25*mm,  Name StrCat[pp, "2Space between legs width [m]"],
    Highlight Str[colorpp],Closed close_menu},
  wcoil  = {(wTot-3*wcore-2*whole)/2, Name StrCat[pp, "3Coil width [m]"], ReadOnly 1,
    Highlight Str[colorro]},
  hcore = {hcoil+2*wcore, Name StrCat[pp, "2Core height [m]"], ReadOnly 1,
    Highlight Str[colorro]},
  AxialLength = {cteaux*2.4*mm, Name StrCat[pp, "0Length along z-axis [m]"], Highlight Str[colorpp]}
];

Lz = AxialLength;
Printf("Lz %g",Lz);

// The core has five Fe-Si 0.48 mm thich sheets
Rint = (Flag_3Dmodel==1?1.5:1)*wTot ; // No transformation to infinity in 3D
Rext = 1.25*Rint;

Val_Rint = Rint;
Val_Rext = Rext;

//-------------------------------------------------------------------------

sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
sigma_cu = 5.77e7  ; // conductivity of copper [S/m]

// FeSi -- data for Jiles-Atherton model from Bastos paper
// Oxz is the lamination plane, Oy is perpendicular to the lamination
// Ox == transverse direction (Oy taken equal to Ox, as the field is negligible)
Msat_x = 1.31e6;
a_x = 233.78;
k_x = 374.975;
c_x = 0.736;
alpha_x = 562e-6 ;

// Oz == rolling direction
Msat_z = 1.33e6;
a_z = 172.856;
k_z = 232.652;
c_z = 0.652;
alpha_z = 417e-6;

// Point for post-processing at (0,hcore/2-28.5*mm,0)
ypos_1 = hcore/2-20.5*mm;
ypos_2 = hcore/2-28.5*mm;
ypos_3 = 0;

depthZ = 15 * (AxialLength/2 + wcoil);

//-------------------------------------------------------------------------
// Reluctance computation - magnetic circuit values obtained from geo
//-------------------------------------------------------------------------
mu0 = 4.e-7 * Pi ;

// ----------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ----------------------------------------------------

CORE = 1000;
SKINCORE = 1111; // Conduction core

COIL       = 2000;
LEG_INCOIL = 2100; //3d

SKINCOIL = 20000; //3d
ELECCOIL = 21000; //3d
SKINCOIL_CUT = 22000; //3d
COIL_CUT     = 22200; //3d

AIR    = 3000;
AIRINF = 3100;


// Lines and surfaces for boundary conditions
SURF_AIROUT = 3333;
SURF_CUTXY  = 4444; // 3d
SURF_CUTXZ  = 4445; // not needed with a-form
