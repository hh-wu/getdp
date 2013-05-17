// Induction machine -- TFE Suzanne Guerard
// ------------------------------------------
// Finite element modelling of an asynchronous motor with one broken rotor bar, comparison with the data
// recorded on a prototype and material aspects
// S. Guérard, J. Gyselinck, and J. Lecomte-Beckers
// Prix Melchior Salier 2004 du meilleur travail de fin d'études
// section électromécanique-énergétique

u = 1e-3 ; // unit = mm
deg2rad = Pi/180 ;

DefineConstant[ NbrPoles = { 1, Choices{ 1 = "1",
                                         2 = "2",
                                         4 = "4" },
                                       Label "Number of poles in FE model",
                                       Path "Input/1", Highlight "Blue", Visible 1} ] ;

DefineConstant[ InitialRotorAngle_deg = { 0, Path "Input/2", Highlight "AliceBlue"} ];

//--------------------------------------------------------------------------------

InitialRotorAngle = InitialRotorAngle_deg*deg2rad ; // initial rotor angle, 0 if aligned


//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
// Rotor dimensions
AG = u*0.47;       // airgap width
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


Lz = 0.2 ;    // axial length of magnetic core in m
Rs = 0.4992 ; // resistance of a stator phase in ohm
Ls = 1.7036e-3 ; Xs = 2*Pi*Freq * Ls ; // endwinding inductance and reactance in H and ohm
Ns = 8*16 ;   // number of series turns per stator phase (delta series connection)
sigma_bars = 28e6 ; // conductivity of rotor bars in S/m
sigma_fe = 0 ;

RendringSeg2 = 88; // resistance of two endring segments in series in ohm
LendringSeg2 = 88; // inductance of two endring segments in series in H

VA = 147 ; // amplitude of supply voltage in V (delta series)

AxialLength = Lz ;

mur_fe = 1000 ; // if linear

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
// Rotor

NbrPolesTot = 4;  // number of poles in complete cross-section

SymmetryFactor = NbrPolesTot/NbrPoles;
Flag_Symmetry = (SymmetryFactor==1)?0:1;

NbrSectTot  = 40; // number of rotor teeth
NbrSect = NbrSectTot*NbrPoles/NbrPolesTot; // number of rotor teeth in FE model

RotorAngle_R = InitialRotorAngle + Pi/NbrSectTot-Pi/2; // initial rotor angle (radians)
RotorAngle_S = RotorAngle_R;

//Stator
NbrSectStatorTot = 48; // number of stator teeth
NbrSectStator = NbrSectStatorTot*NbrPoles/NbrPolesTot; // number of stator teeth in FE model

StatorAngle_  = Pi/NbrSectStatorTot-Pi/2; // initial stator angle (radians)
StatorAngle_S = StatorAngle_;

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



