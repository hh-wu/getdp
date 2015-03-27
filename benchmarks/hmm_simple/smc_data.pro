DefineConstant[
  Flag_NL = {1, Choices{0,1},
    Name "Parameters/0Non-linear meso material"},
  Flag_Dynamic = {0, Choices{0,1},
    Name "Parameters/1Dynamic analysis"}
  Flag_PostCuts = {0, Choices{0,1},
    Name "Parameters/2Post-process meso problem on cuts"},

  Freq = {50000,
    Name "Parameters/Frequency", Visible Flag_Dynamic},
  NbT = {1./20.,
    Name "Parameters/Number of periods", Visible Flag_Dynamic},
  NbSteps = {100,
    Name "Parameters/Steps per period", Visible Flag_Dynamic}
];

Dir_Macro = "res_macro/";
Dir_Meso  = "res_meso/";

// Common dimensions
micron    = 1e-6;        // the micron
d         = 45 * micron; // thickness of conductor
e         = 50 * micron; // thickness of smc grain
n_smc     = 10;          // number of SMC grains
nlai      = 4 ;          //
LX        = e * 10;      // width of the entire SMC structure
LY        = LX;
cellSize  = e;
numPoints = 16;
w_ind    = 2 * e ;
rla_ind  = 5 * e ; // minimum distance between lamination and inductor (radious)
gap_ind  = e ;
xlam     = LX ; //w_lam/2 ;
ylam     = LX ;
x_air    = 5 * (LX + rla_ind + w_ind) ;
y_air    = 5 * (LY + rla_ind + w_ind) ;
d_inf    = 2 * LY ;
Val_Rint = x_air ;
Val_Rext = x_air + d_inf ;

// Common characteristic lengths
pind        = w_ind/2 ;
plam        = d/8  ; // lc for the homogenized domain
lca         = pind * 5; // lc for the inf transfo domain
DefineConstant[Lay1 = 5];
Lay2        = 5;
DefineConstant[Lay3 = 5];
Pro1        = 0.95;
n_thickness = 6;
n_circle    = 6;

// meso dimensions
lx          = e;   // length of the cell
ly          = lx;       //
lc_ext      = LX/200.0; // characteristic length for points in the insulator
lc_int      = LX/200.0; // characteristic length for points in the conductor
r_c         = 5.e-6;    // radius of the chamfer
d_i         = 5.e-6;    // thickness of the insulator
eps         = e;        // thickness of the SMC grain
n_1         = 21;       // subdivisions along length of insulation layer
n_2         = 3;        // subdivisions along thickness of insulation layer

// Physical groups for macro problem
GAMMA_INF = 10000;
CONDUCTOR = 10001;
AIR       = 10002;
INDUCTOR  = 10003;
OMEGA_INF = 10004;

// Physical groups for meso problem
GAMMA_POINT = 1000; // point used for fixing the value of the
GAMMA_LEFT  = 1001; // left boundary
GAMMA_RIGHT = 1002; // right boundary
GAMMA_DOWN  = 1003; // lower boundary
GAMMA_UP    = 1004; // upper boundary
IRON        = 1005; // conductor
INSULATION  = 1006; // insulation
