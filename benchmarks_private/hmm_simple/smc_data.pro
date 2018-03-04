DefineConstant[
  Flag_NL = {1, Choices{0,1},
    Name "Parameters/0Non-linear meso material"},
  Flag_Dynamic = {1, Choices{0,1},
    Name "Parameters/1Dynamic analysis"}
  Flag_PostCuts = {1, Choices{0,1},
    Name "Parameters/2Post-process meso problem on cuts"},
  Flag_3D = {1, Choices{0,1},
    Name "Parameters/0Currents in the plane or 3D"},
  Flag_Geometry = {2, Choices{0,1,2},
  Name "Parameters/0Half geometry for mesoproblems or not"}
  Freq = {50000,
    Name "Parameters/Frequency", Visible Flag_Dynamic},
  NbT = {2./50.,
    Name "Parameters/Number of periods", Visible Flag_Dynamic},
  NbSteps = {50,
    Name "Parameters/Steps per period", Visible Flag_Dynamic}
];

// FIXME:
source_amplitude = Flag_3D ? 7e7 : 700.e7;

Quarter_Geometry = 0;
Half_Geometry    = 1;
Full_Geometry    = 2;

Flag_Local = 1;
If(Flag_Local)
  results_dir = "";
EndIf
If(!Flag_Local)
  results_dir = "../../../../project/";
EndIf
Dir_Macro = StrCat(results_dir, "res_macro/");
Dir_Meso  = StrCat(results_dir, "res_meso/");
Dir_Ref   = StrCat(results_dir, "res_ref/");

// Infos for PostProcessing
ExtGmsh = Str[ Sprintf("_nl%g.pos", Flag_NL) ];
ExtData = Str[ Sprintf("_nl%g.txt", Flag_NL) ];

// 2D problem -> 3 meso computations for dhdb
Nbr_SubProblems = Flag_3D ? 4 : 3;

// Common dimensions
micron    = 1e-6;        // the micron
d         = 45 * micron; // thickness of conductor
e         = 50 * micron; // thickness of smc grain
eps       = e;
n_smc     = 10;          // number of SMC grains for reference calculation
nlai      = 4;          //
LX        = e * n_smc;      // width of the entire SMC structure
LY        = LX;
w_ind     = 1 * e;
rla_ind   = 2.5 * e; // minimum distance between lamination and inductor (radious)
gap_ind   = (n_smc <= 2) ? (0.5 * e) : e;
xlam      = LX; //w_lam/2;
ylam      = LX;
x_air     = 7.5 * (LX + rla_ind + w_ind);
y_air     = x_air;
d_inf     = 0.5 * x_air;
Val_Rint  = x_air;
Val_Rext  = x_air + d_inf;

// Common characteristic lengths
pind        = w_ind/2;
plam        = d/8; // lc for the homogenized domain
lca         = 5 * e; // lc for the inf transfo domain
lc_smc_iso  = d/20. ;
lc_smc_cond = e/40. ;
DefineConstant[Lay1 = 31];
DefineConstant[Lay2 = 31];
DefineConstant[Lay3 = 16];
DefineConstant[Lay_X = 7];
DefineConstant[Lay_Y = 7];
Pro1        = 1.0;
Pro2        = 1.0;
Pro3        = 1.0;
Pro_X       = 1.0;//0.95;
Pro_Y       = 1.0;//.95;
n_thickness = 6;
n_circle    = 16;

// meso dimensions
lx          = e;   // length of the cell
ly          = lx;       //
lc_ext      = e/20.0; // characteristic length for points in the insulator
lc_int      = e/40.0; // characteristic length for points in the conductor
r_c         = 5.e-6;    // radius of the chamfer
d_i         = 5.e-6;    // thickness of the insulator
n_1         = 41;       // subdivisions along length of insulation layer
n_2         = 6;        // subdivisions along thickness of insulation layer
// Physical groups for macro & reference problems
GAMMA_INF   = 10000;
SYMMETRY_X0 = 10001;
SYMMETRY_Y0 = 10002;
SKIN_COND   = 10003;
AIR         = 10004;
INDUCTOR    = 10005;
OMEGA_INF   = 10006;
ISOLATION   = 10007;
CONDUCTOR   = 10008; // ! (CONDUCTOR + i) is defined

// Physical groups for meso problem
GAMMA_POINT = 1000; // point used for fixing the value of the
GAMMA_LEFT  = 1001; // left boundary
GAMMA_RIGHT = 1002; // right boundary
GAMMA_DOWN  = 1003; // lower boundary
GAMMA_UP    = 1004; // upper boundary
IRON        = 1005; // conductor
INSULATION  = 1006; // insulation

If(Flag_Geometry == Half_Geometry)
GAMMA_LEFT_NJ = 1007; // right boundary
GAMMA_LEFT_TH = 1008; // right boundary
EndIf

If(Flag_Geometry == Quarter_Geometry)
GAMMA_LEFT_NJ = 1007; // right boundary
GAMMA_LEFT_TH = 1008; // right boundary

GAMMA_DOWN_NJ = 1009; // right boundary
GAMMA_DOWN_TH = 1010; // right boundary
EndIf
// Information concerning the cuts

nTS          = 2;
listOfTS~{1} = 1;
listOfTS~{2} = 5;
listOfTS~{3} = 10;
listOfTS~{4} = 15;
listOfTS~{5} = 20;
listOfTS~{6} = 25;
listOfTS~{7} = 30;
listOfTS~{8} = 35;
listOfTS~{9} = 40;
listOfTS~{10} = 45;
listOfTS~{11} = 50; 
