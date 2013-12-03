// Synchronous machine from Electrimacs'2002 paper:
// Steady-State Finite Element Analysis of a Salient-Pole Synchronous Machine
// in the Frequency Domain
// J. Gyselinck, L. Vandevelde, J. Melkebeek and W. Legros

// wfsm = wound field synchronous machine

deg2rad = Pi/180 ;

pp = "Input/Constructive parameters/";

DefineConstant[
  NbrPolesInModel = { 1, Choices {1="1", 2="2", 4="4"},
    Name "Input/20Number of poles in FE model", Highlight "Blue"},
  InitialRotorAngle_deg = { 0., Range{0,90},
    Name "Input/21Start rotor angle [deg]", Highlight "AliceBlue"}
] ;

InitialRotorAngle = InitialRotorAngle_deg*deg2rad ; // initial rotor angle, 0 if aligned

DefineConstant[ PhaseBelt = { 120., Choices{60, 120},
    Name "Input/22Phase belt", Highlight "AliceBlue", Visible 0} ] ;

//--------------------------------------------------------------------------
// Rotor
//--------------------------------------------------------------------------
NbrPolesTot = 4; // number of poles in complete cross-section
NbrSectTot = NbrPolesTot; // number of "rotor teeth"
NbrSect = NbrSectTot*NbrPolesInModel/NbrPolesTot; // number of "rotor teeth" in FE model

RotorAngle_R = InitialRotorAngle + Pi/4;

SymmetryFactor = NbrPolesTot/NbrPolesInModel ;
Flag_Symmetry = (SymmetryFactor==1)?0:1 ;

//--------------------------------------------------------------------------
// Stator
//--------------------------------------------------------------------------
NbrSectStatorTot = 60 ; // number of stator teeth
NbrSectStator = NbrSectStatorTot*NbrPolesInModel/NbrPolesTot; // number of stator teeth in FE model

StatorAngle_ = Pi/NbrSectStatorTot; // initial stator angle (radians)
StatorAngle_S = StatorAngle_ +Pi/2-Pi/6;

//--------------------------------------------------------------------------
u = 1e-3 ; // dimension unit = mm

R0 = 124.9 * u ;
R1 = R0 - 0.1 * u ;
R2 = R1 - 0.15 * u ;
R3 = R2 - 0.2 * u ;
R4 = R3 - 0.3 * u ;
R5 = R4 - 0.5 * u ;
X  = (110.9-3) * u ;

Rext = 195 * u ;

AxialLength = 0.180 ;

sigma_fe = 0. ; // laminated steel
DefineConstant[
  mur_fe = {1000, Name StrCat[pp, "Relative permeability for linear case"], Closed 1}
];

rpm_nominal = 1500 ;

//--------------------------------------------------------------------------
// Physical numbers
//--------------------------------------------------------------------------
ROTOR_FE     = 5000;
ROTOR_SHAFT  = 5555;
ROTOR_AIR    = 7000;
ROTOR_AIRGAP = 999;
ROTOR_COND   = 300; ROTOR_COND1 =  ROTOR_COND + 1; ROTOR_COND2 =  ROTOR_COND + 2;

ROTOR_PERIOD_REFERENCE = 200000;
ROTOR_PERIOD_DEPENDENT = 200001;

SURF_INT = 6666;
ROTOR_BND_MOVING_BAND = 16000;
MB_R1 = ROTOR_BND_MOVING_BAND+0;
MB_R2 = ROTOR_BND_MOVING_BAND+1;
MB_R3 = ROTOR_BND_MOVING_BAND+2;
MB_R4 = ROTOR_BND_MOVING_BAND+3;

STATOR_COND = 12000;

If (PhaseBelt == 60)
  STATOR_UP = STATOR_COND+1; STATOR_WM = STATOR_COND+2; STATOR_VP = STATOR_COND+3;
  STATOR_UM = STATOR_COND+4; STATOR_WP = STATOR_COND+5; STATOR_VM = STATOR_COND+6;
EndIf
If (PhaseBelt == 120)
  STATOR_UP = STATOR_COND+1; STATOR_VP = STATOR_COND+2; STATOR_WP = STATOR_COND+3;
  STATOR_VM = STATOR_COND+4; STATOR_WM = STATOR_COND+5; STATOR_UM = STATOR_COND+6;
EndIf

STATOR_FE          = 10000;
STATOR_SLOT_OPENING = 14000;
STATOR_AIRGAP      = 11000;

SURF_EXT = 40000;
STATOR_PERIOD_REFERENCE = 100000;
STATOR_PERIOD_DEPENDENT = 100001;

STATOR_BND_MOVING_BAND = 17000;
MB_S1 = STATOR_BND_MOVING_BAND+0;
MB_S2 = STATOR_BND_MOVING_BAND+1;
MB_S3 = STATOR_BND_MOVING_BAND+2;
MB_S4 = STATOR_BND_MOVING_BAND+3;


MOVING_BAND = 99999 ;
NICEPOS = 111111 ;
PNT_REF = 222222 ;
