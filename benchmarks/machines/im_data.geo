// Authors - J. Gyselinck, R.V. Sabariego (May 2013)

// ------------------------------------------
// Induction machine -- TFE Suzanne Guerard
// ------------------------------------------

// 4-pole IP55 three-phase motor from WEG Motores - 60Hz
// rated power 18.5 kW
// rated speed: 1760 rpm
// rated voltage: 220 V
// rated current: 64.3 A
// 91% efficiency at rated power
// weight: 125 kg

// "Finite element modelling of an asynchronous motor with one broken rotor bar, comparison
// with the data recorded on a prototype and material aspects"
// S. Guerard, J. Gyselinck, and J. Lecomte-Beckers
// Prix Melchior Salier 2004 du meilleur travail de fin d'études
// section électromécanique-énergétique

u = 1e-3 ; // unit = mm
deg2rad = Pi/180 ;

pp = "Input/Constructive parameters/";

DefineConstant[
  NbrPolesInModel = { 1, Choices{ 1 = "1", 2 = "2", 4 = "4" },
    Name "Input/20Number of poles in FE model", Highlight "Blue"},
  InitialRotorAngle_deg = { 10,
    Name "Input/20Initial rotor angle (deg)", Highlight "AliceBlue"},
  Flag_OpenRotor = {1, Choices{0,1},
    Name "Input/39Open slots in rotor"}
];


//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
// Rotor

NbrPolesTot = 4;  // number of poles in complete cross-section
NbrPolePairs = NbrPolesTot/2 ;

SymmetryFactor = NbrPolesTot/NbrPolesInModel;
Flag_Symmetry = (SymmetryFactor==1)?0:1;

NbrSectTot  = 40; // number of rotor teeth
NbrSect = NbrSectTot*NbrPolesInModel/NbrPolesTot; // number of rotor teeth in FE model

//Stator
NbrSectStatorTot = 48; // number of stator teeth
NbrSectStator = NbrSectStatorTot*NbrPolesInModel/NbrPolesTot; // number of stator teeth in FE model

StatorAngle_  = Pi/NbrSectStatorTot-Pi/2; // initial stator angle (radians)
StatorAngle_S = StatorAngle_;

//--------------------------------------------------------------------------------

InitialRotorAngle = InitialRotorAngle_deg*deg2rad ; // initial rotor angle, 0 if aligned

RotorAngle_R = InitialRotorAngle + Pi/NbrSectTot-Pi/2; // initial rotor angle (radians)
RotorAngle_S = RotorAngle_R;

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
// Rotor dimensions
DefineConstant[
  AG = {u*0.47, Name StrCat[pp, "Airgap width [m]"], Closed 1}
];

R2 = u*92/2 - AG;  // outer rotor radius
R3 = u* 31.75/2;   // shaft radius
R1 = R2 + AG/3;    // inner radius of moving band

// parameters for conductor and slot opening
h1  = u*1;
h2  = u*14.25;
d1  = u*2;
Rsl = u*4.26/2;

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
// Stator dimensions
R2s = u*92/2  ; // inner stator radius
R3s = u*150/2 ; // outer stator radius
R1s = R2s-AG/3; // outer radius of moving band

// parameters for conductor and slot opening
h1s  = u* 1;
h2s  = u* 15.3;
d1s  = u* 2.5;
Rsls = u* 6.36/2;
ss   = 0.05;
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
Freq = 60 ;

sigma_fe = 0 ;
DefineConstant[
  sigma_bars = {28e6, Name StrCat[pp, "ss"], Label "Conductivity of rotor bars [S/m]"},
  // alloy in die-cast rotor cages: Si (0.2%) + Fe (0.25%) + Cu (0.01%) + Zn
  // (0.04%) + Ti (0.02%)
  mur_fe = {1000, Name StrCat[pp, "Relative permeability for linear case"]}
];

Lz = 0.2 ;    // axial length of magnetic core in m

DefineConstant[
  R_endring_segment = {0.836e-6,  // 88 value taken from 3kW im
    Name StrCat[pp, "Resistance of two endring segments in series [Ohm]"]},
  L_endring_segment = {4.8e-9,  // 88 value taken from 3kW im
    Name StrCat[pp, "Inductance of two endring segments in series [H]"]},
  Rs = {0.4992,
    Name StrCat[pp, "Resistance per stator phase [Ohm]"]},
  Ls = {1.7036e-3,
    Name StrCat[pp, "Endwinding inductance per stator phase [H]"]}
];

Xs = 2*Pi*Freq * Ls ; // endwinding inductance and reactance in H and ohm

DefineConstant[
  Ns ={ 8*16, Name StrCat[pp, "Total number of turns in series per phase"]}
] ;


AxialLength = Lz ;


VA = 150 ; // or 150 to 440 amplitude of supply voltage in V (delta series)
IA = 64.3; // rated

rpm_syn = 60*Freq/NbrPolePairs ;
rpm_nominal  = 1760 ;
slip_nominal = (rpm_syn-rpm_nominal)/rpm_syn ;

rpm_other = rpm_syn-48; // slip = 0.02666

inertia_fe = 5.63*1e-3 ; //kg*m^2




// ----------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ----------------------------------------------------
// Rotor
ROTOR_FE     = 20000 ;
ROTOR_SHAFT  = 20001 ;
ROTOR_SLOTOPENING = 20002 ; // RotorSlotOpening
ROTOR_AIRGAP      = 20003 ; // RotorAirgapLayer

ROTOR_BAR = 30000 ;
ROTOR_BAR01 = ROTOR_BAR+1;  ROTOR_BAR11 = ROTOR_BAR+11;  ROTOR_BAR21 = ROTOR_BAR+21;  ROTOR_BAR31 = ROTOR_BAR+31;
ROTOR_BAR02 = ROTOR_BAR+2;  ROTOR_BAR12 = ROTOR_BAR+12;  ROTOR_BAR22 = ROTOR_BAR+22;  ROTOR_BAR32 = ROTOR_BAR+32;
ROTOR_BAR03 = ROTOR_BAR+3;  ROTOR_BAR13 = ROTOR_BAR+13;  ROTOR_BAR23 = ROTOR_BAR+23;  ROTOR_BAR33 = ROTOR_BAR+33;
ROTOR_BAR04 = ROTOR_BAR+4;  ROTOR_BAR14 = ROTOR_BAR+14;  ROTOR_BAR24 = ROTOR_BAR+24;  ROTOR_BAR34 = ROTOR_BAR+34;
ROTOR_BAR05 = ROTOR_BAR+5;  ROTOR_BAR15 = ROTOR_BAR+15;  ROTOR_BAR25 = ROTOR_BAR+25;  ROTOR_BAR35 = ROTOR_BAR+35;
ROTOR_BAR06 = ROTOR_BAR+6;  ROTOR_BAR16 = ROTOR_BAR+16;  ROTOR_BAR26 = ROTOR_BAR+26;  ROTOR_BAR36 = ROTOR_BAR+36;
ROTOR_BAR07 = ROTOR_BAR+7;  ROTOR_BAR17 = ROTOR_BAR+17;  ROTOR_BAR27 = ROTOR_BAR+27;  ROTOR_BAR37 = ROTOR_BAR+37;
ROTOR_BAR08 = ROTOR_BAR+8;  ROTOR_BAR18 = ROTOR_BAR+18;  ROTOR_BAR28 = ROTOR_BAR+28;  ROTOR_BAR38 = ROTOR_BAR+38;
ROTOR_BAR09 = ROTOR_BAR+9;  ROTOR_BAR19 = ROTOR_BAR+19;  ROTOR_BAR29 = ROTOR_BAR+29;  ROTOR_BAR39 = ROTOR_BAR+39;
ROTOR_BAR10 = ROTOR_BAR+10; ROTOR_BAR20 = ROTOR_BAR+20;  ROTOR_BAR30 = ROTOR_BAR+30;  ROTOR_BAR40 = ROTOR_BAR+40;

ROTOR_BND_MOVING_BAND = 22000 ; // Index for first line (1/8 model->1; full model->8)
MB_R1 = ROTOR_BND_MOVING_BAND+0 ;
MB_R2 = ROTOR_BND_MOVING_BAND+1 ;
MB_R3 = ROTOR_BND_MOVING_BAND+2 ;
MB_R4 = ROTOR_BND_MOVING_BAND+3 ;

ROTOR_BND_A0 = 21000 ; // RotorPeriod_Reference
ROTOR_BND_A1 = 21001 ; // RotorPeriod_Dependent

SURF_INT     = 21002 ; // OuterShaft

// Stator
STATOR_FE          = 10000 ;
STATOR_SLOTOPENING = 11000 ; // Slot opening
STATOR_AIRGAP      = 12000 ; // Between the moving band and the slot opening

STATOR_IND = 13000;
STATOR_IND_AP = STATOR_IND + 1 ; STATOR_IND_CM = STATOR_IND + 2 ;STATOR_IND_BP = STATOR_IND + 3 ;
STATOR_IND_AM = STATOR_IND + 4 ; STATOR_IND_CP = STATOR_IND + 5 ;STATOR_IND_BM = STATOR_IND + 6 ;

STATOR_BND_MOVING_BAND = 14000 ;// Index for first line (1/8 model->1; full model->8)
MB_S1 = STATOR_BND_MOVING_BAND+0 ;
MB_S2 = STATOR_BND_MOVING_BAND+1 ;
MB_S3 = STATOR_BND_MOVING_BAND+2 ;
MB_S4 = STATOR_BND_MOVING_BAND+3 ;


STATOR_BND_A0          = 15000 ;
STATOR_BND_A1          = 15001 ;

SURF_EXT = 16000 ; // outer boundary

MOVING_BAND = 9999 ;

NICEPOS = 111111 ;



