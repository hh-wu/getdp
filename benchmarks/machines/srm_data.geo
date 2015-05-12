// Switched Reluctance Motor Parameter File (2D)
// All dimensions in meters and rads
// Ruth V. Sabariego (August, 2013)

mm = 1e-3 ;
deg2rad = Pi/180 ;

pp  = "Input/10Geometric dimensions/";

DefineConstant[
  Flag_Symmetry = {1, Choices {0="Full", 1="Half"},
    Name "Input/00Type of FE model", Highlight "Blue"},
  NbrStatorPoles = { Flag_Symmetry ? 3:6, Choices {3="3", 6="6"},
    Name "Input/01Number of stator poles", ReadOnly 1, Highlight "Black"},
  NbrRotorPoles = { Flag_Symmetry ? 2:4, Choices {2="2", 4="4"},
    Name "Input/02Number of rotor poles", ReadOnly 1, Highlight "Black"},
  InitialRotorAngle_deg = {-30, Range {0,180}, Step 10,
    Name "Input/03Start rotor angle [deg]", Highlight "AliceBlue"}
] ;

//--------------------------------------------------------------------------------

InitialRotorAngle = InitialRotorAngle_deg*deg2rad ; // initial rotor angle, 0 if aligned

//------------------------------------------------------------------------------
// Stator:
NbrStatorPolesTot = 6 ;
SymmetryFactor = NbrStatorPolesTot/NbrStatorPoles ;
Ns = NbrStatorPolesTot;
th0ss=0.;       	// Angular pos. stator
dths = 2.*Pi/Ns;	// Ang. shift between 2 stator poles

// Rotor
NbrRotorPolesTot = 4 ;  // Num. of Rotor Poles
Nr = NbrRotorPolesTot;
th0rs = InitialRotorAngle ; // Angular pos. rotor
dthr  = 2.*Pi/Nr ;	// Ang. shift between 2 rotor poles

close_menu = 1;
colorro  = "LightGrey";
colorpp = "Ivory";

//------------------------------------------------------------------------------
DefineConstant[
  ag     = {0.29*mm, Name StrCat[pp, "0Air gap width [m]"], Highlight Str[colorpp], Closed close_menu},
  AxialLength = {60*mm, Name StrCat[pp, "0Axial length [m]"], Highlight Str[colorpp]},

  Betas_deg = {32, Name StrCat[pp, "1Stator/Pole opening angle [deg]"], Highlight Str[colorpp]},
  Rsout  = {60*mm, Name StrCat[pp, "1Stator/Outer radius [m]"], Highlight Str[colorpp]},
  Rsin   = {30*mm, Name StrCat[pp, "1Stator/Inner radius [m]"], Highlight Str[colorpp]},
  YWs    = {12*mm, Name StrCat[pp, "1Stator/Yoke width [m]"], Highlight Str[colorpp]},

  Betar_deg = {32, Name StrCat[pp, "2Rotor/Pole opening angle [deg]"], Highlight Str[colorpp]},
  Rrout  = {Rsin-ag, Name StrCat[pp, "2Rotor/Outer radius [m]"], ReadOnly 1, Highlight Str[colorro]},
  Rrin  = {20*mm, Name StrCat[pp, "2Rotor/Inner radius [m]"], Highlight Str[colorpp]},
  Rshaft  = {6*mm, Name StrCat[pp, "2Rotor/Shaft radius [m]"], Highlight Str[colorpp]}
];

Betas = Betas_deg * deg2rad ;
Betar = Betar_deg * deg2rad ;

// moving band
frac_ag = 1/3 ;
Rag  = Rsin  - frac_ag*ag ; // radious from inner stator radious
Ragr = Rrout + frac_ag*ag ; // radious from outer rotor radious

sigma_fe = 0 ; // laminated steel
DefineConstant[
  mur_fe = {1000, Name StrCat[pp, "Relative permeability for linear case"]}
];

VA = 220 ; // rms values
IA = 1/Sqrt[2] ;
inertia_fe = 8.3e-3 ;


//------------------------------------------------------------
// Physical regions
//------------------------------------------------------------

// Rotor
ROTOR_FE     = 1000 ;
ROTOR_AIR    = 1001 ;
ROTOR_AIRGAP = 1002 ;
ROTOR_SHAFT = 1010 ;

ROTOR_BND_MOVING_BAND = 1100 ; // Index for first line (1/8 model->1; full model->8)
ROTOR_BND_A0 = 1200 ;
ROTOR_BND_A1 = 1201 ;
SURF_INT     = 1202 ;
ROTOR_REF_PNT = 1203;

// Stator
STATOR_FE     = 2000 ;
STATOR_AIR    = 2001 ;
STATOR_AIRGAP = 2002 ;

STATOR_BND_MOVING_BAND = 2100 ;// Index for first line (1/8 model->1; full model->8)
STATOR_BND_A0          = 2200 ;
STATOR_BND_A1          = 2201 ;

STATOR_IND = 2300 ; //Index for first Ind
STATOR_IND_AP = STATOR_IND + 1 ; STATOR_IND_BM = STATOR_IND + 2 ;STATOR_IND_CP = STATOR_IND + 3 ;
STATOR_IND_AM = STATOR_IND + 4 ; STATOR_IND_BP = STATOR_IND + 5 ;STATOR_IND_CM = STATOR_IND + 6 ;

STATOR_IND_AP_ = STATOR_IND + 7 ; STATOR_IND_BM_ = STATOR_IND + 8 ;STATOR_IND_CP_ = STATOR_IND + 9 ;
STATOR_IND_AM_ = STATOR_IND + 10 ; STATOR_IND_BP_ = STATOR_IND + 11 ;STATOR_IND_CM_ = STATOR_IND + 12 ;


SURF_EXT = 3000 ; // outer boundary

MOVING_BAND = 9999 ;

NICEPOS = 111111 ;
