// Permanent magnet synchronous machine - Model used in:

// Harmonic Balance Finite Element Modelling of a Permanent-Magnet Synchronous Machine
// J. Gyselinck, N. Sadowski, P. Dular, M. V. Ferreira da Luz, J. P. A. Bastos, and W. Legros
// Proceedings of CBMag 2002.

// Two-dimensional harmonic balance finite element modelling of electrical machines
// taking motion into account
// J. Gyselinck, P. Dular, L. Vandevelde and J. Melkebeek, A.M. Oliveira and P. Kuo-Peng
// COMPEL, Vol. 22, No. 4, 2003, pp. 1021-1036

// Modified and customised for Onelab by Ruth V. Sabariego (February, 2013)

mm = 1e-3 ;
deg2rad = Pi/180 ;

pp = "Input/Constructive parameters/";

DefineConstant[
  NbrPolesInModel = { 1, Choices {1="1", 2="2", 4="4", 8="8"},
    Name "Input/20Number of poles in FE model",
    Highlight "Blue"},
  InitialRotorAngle_deg = {0., Name "Input/21Start rotor angle [deg]",
    Highlight "AliceBlue"}
] ;

//--------------------------------------------------------------------------------

mur_fe = 1000 ;
sigma_fe = 0 ;


InitialRotorAngle = InitialRotorAngle_deg*deg2rad ;


//--------------------------------------------------------------------------------

//------------------------------------------------
// Rotor
//------------------------------------------------
NbrPolesTot = 8 ; // number of poles in complete cross-section

SymmetryFactor = NbrPolesTot/NbrPolesInModel ;
Flag_Symmetry = (SymmetryFactor==1)?0:1 ;

NbrSectTot = NbrPolesTot; // number of "rotor teeth"
NbrSect = NbrSectTot*NbrPolesInModel/NbrPolesTot; // number of "rotor teeth" in FE model

//RotorAngle_R = 0*Pi/8+0; //-Pi/8; //Pi/NbrSectT; // initial rotor angle (radians)
//RotorAngle_R = -8*Pi/24+0; //-Pi/8; //Pi/NbrSectT; // initial rotor angle (radians)
RotorAngle_R = InitialRotorAngle-Pi/2 ; //Pi/NbrSectT; // initial rotor angle (radians)
RotorAngle_S = RotorAngle_R;

//------------------------------------------------
// Stator
//------------------------------------------------
NbrSectTotStator  = 24; // number of stator teeth
NbrSectStator   = NbrSectTotStator*NbrPolesInModel/NbrPolesTot; // number of stator teeth in FE model

StatorAngle_ = -Pi/2 + Pi/NbrSectTotStator; // initial stator angle (radians)
StatorAngle_S = StatorAngle_;

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
mm = 1e-3;

// dimensions rotor
rR1   = 10.5*mm ;
rR2   = 22.45*mm ;
rR3   = 24.2*mm ;
rRext = 26*mm ;

wrR3 = 14.35/2 *mm ;
wrR2 = 14.1/2 *mm ;

DefineConstant[
  AxialLength = {40*mm, Name StrCat[pp, "Axial length [m]"], Closed 1},
  Gap = {0.55*mm, Name StrCat[pp, "Airgap width [m]"], Closed 1}
];


// Moving band radius
rB0 = rRext - Gap ;
rB1 = rRext - 2*Gap/3 ;
rB2 = rRext - Gap/3 ;

// dimensions stator
rS1 = rRext+.6*mm ;
rS2 = rRext+10*mm ;
rS3 = rRext+14*mm-1.861*mm ;
rS4 = rRext+14*mm ;
rSext = 46 * mm ;

ws1  = 0.9*mm ;
ws2  = 0.6*mm ;
ws3  = 1.861*mm ;

wsS1 = 3.299/2*mm ;
wsS3 = 2.583/2*mm ;



sigma_fe = 0. ; // laminated steel
DefineConstant[
  mur_fe = {1000, Name StrCat[pp, "Relative permeability for linear case"]},
  b_remanent = { 1.03, Name StrCat[pp, "Remanent induction [T]"] }
];

rpm_nominal = 1000 ;
Inominal = 4 ;
// ----------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ----------------------------------------------------

// Rotor
ROTOR_FE     = 1000 ;
ROTOR_AIR    = 1001 ;
ROTOR_AIRGAP = 1002 ;
ROTOR_SHAFT =  1003 ;
ROTOR_MAGNET = 1010 ; // Index for first Magnet (1/8 model->1; full model->8)

ROTOR_BND_MOVING_BAND = 1100 ; // Index for first line (1/8 model->1; full model->8)
ROTOR_BND_A0          = 1200 ;
ROTOR_BND_A1          = 1201 ;
SURF_INT       = 1202 ;
ROTOR_BND = 1111 ; //+++


// Stator
STATOR_FE     = 2000 ;
STATOR_AIR    = 2001 ;
STATOR_AIRGAP = 2002 ;

STATOR_BND_MOVING_BAND = 2100 ;// Index for first line (1/8 model->1; full model->8)
STATOR_BND_A0          = 2200 ;
STATOR_BND_A1          = 2201 ;
STATOR_BND = 2222 ; //+++

STATOR_IND = 2300 ; //Index for first Ind (1/8 model->3; full model->24)
STATOR_IND_AP = STATOR_IND + 1 ; STATOR_IND_BM = STATOR_IND + 2 ;STATOR_IND_CP = STATOR_IND + 3 ;
STATOR_IND_AM = STATOR_IND + 4 ; STATOR_IND_BP = STATOR_IND + 5 ;STATOR_IND_CM = STATOR_IND + 6 ;

SURF_EXT = 3000 ; // outer boundary


NICEPOS = 111111 ;

MOVING_BAND = 9999 ;


