// From paper:
// E.A. Lomonova, E. Kazmin, Y. Tang, J.J.H. Paulides, (2011)
// "In-wheel PM Motor: Compromise between High Power Density and
// Extended Speed Capability", COMPEL: The International Journal
// for Computation and Mathematics in Electrical and Electronic
// Engineering, 30(1), pp. 98-116.
// Work presented at Ecologic Vehicles-Renewable Energies (EVRE),
// Monaco, March 26-29, 2009

u = 1e-3 ; // mm
deg2rad = Pi/180 ;
pp = "Input/Constructive parameters/";

DefineConstant[ Flag_Type = { 0, Choices{ 0="Concentrated",
                                          1="Distributed 1",
                                          2="Distributed 2",
                                          3="Distributed 3"},
                              Name "Input/1Type of windings",
                              Highlight "Blue"} ];

boolreadonly = (Flag_Type==0) ? 1 : 0 ;

// No symmetry possible with concentrated type

DefineConstant[
  NbrPolesInModel = { (Flag_Type==0) ? 8 : 1, Choices {1="1", 2="2", 4="4", 8="8"},
    Name "Input/20Number of poles in FE model",
    ReadOnly (Flag_Type==0) ? 1 : 0},
  InitialRotorAngle_deg = { 0., Name "Input/21Start rotor angle [deg]",
    Highlight "AliceBlue"}
] ;

//--------------------------------------------------------------------------------

InitialRotorAngle = InitialRotorAngle_deg*deg2rad ; // initial rotor angle, 0 if aligned

//--------------------------------------------------------------------------------

// SPM rotor data with internal rotor and distribtuted winding
// Dimensions in m

p = 4  ; // number of pole pairs
Z = (Flag_Type==0) ? 9 : 24 ; // number of slot
q = 1 ;  // number of slots per pole per phase

If(Flag_Type==0)
  DOD = 501.3*u ; // Stator outer diameter
  hm = 7.5*u ; // Magnet height
  D1 = 338*u ; // Stator bore diameter
  A1 = 56000 ; // Electrical loading (A/m) (rms)
  V1 = 219.5 ; // Phase voltage
  I1 = 138.3 ;  // Phase current
  nw1 = 78 ;  // number of coil turns
  kf  = 0.65 ; // Slot fill factor
EndIf
If(Flag_Type==1)
  DOD = 500*u ; // Stator outer diameter
  hm = 7.5*u; // Magnet height
  D1 = 365*u ;  // Stator bore diameter
  A1 = 48000 ;   // Electrical loading (A/m) (rms)
  V1 = 205.8 ; // Phase voltage
  I1 = 127.4 ;  // Phase current
  nw1 = 72 ;  // number of coil turns
  kf  = 0.5 ; // Slot fill factor
  kcomp = 0.53 ; // End winding compression coefficient - ratio between overhang lengths of the DW and the CW machine
EndIf
If(Flag_Type==2)
  DOD = 477*u ; // Stator outer diameter
  hm = 7.5*u; // Magnet height
  D1 = 338*u ;  // Stator bore diameter
  A1 = 56200 ;   // Electrical loading (A/m) (rms)
  V1 = 218 ; // Phase voltage
  I1 = 124.3 ;  // Phase current
  nw1 = 80 ;  // number of coil turns
  kf  = 0.5 ; // Slot fill factor
  kcomp = 0.558 ; // End winding compression coefficient - ratio between overhang lengths of the DW and the CW machine
EndIf
If(Flag_Type==3)
  DOD = 499*u ; // Stator outer diameter
  hm  = 5*u ; // Magnet height
  D1  = 352*u ;  // Stator bore diameter
  A1 = 54500 ;   // Electrical loading (A/m) (rms)
  V1 = 215.4 ; // Phase voltage
  I1 = 139.5 ;  // Phase current
  nw1 = 72 ;  // number of coil turns
  kf  = 0.5 ; // Slot fill factor
  kcomp = 0.54 ; // End winding compression coefficient - ratio between overhang lengths of the DW and the CW machine
EndIf

l1  = 100*u ;  // Stack length
hyr = 36.8*u ; // Rotor back iron height
hs   = 45*u  ;  // Stator slot depth
hc   = 29.9*u;  // Coil height (at the slot m middle)
hso  = 3*u;     // Slot opening height
hw   = 12.1*u;  // Slot wedge height
wag  = 1*u; //Airgap


J1  = 5e6 ;     // Current density (A/m2)
lew = 0.045 ;   // End winding length per mm side
Pcul = 1458 ;   // Armature copper losses (W)
kbs_tz = 0.45 ; // Slot width to slot pitch - ratio



DefineConstant[
  AxialLength = {l1,  Name StrCat[pp, "Axial length [m]"], Closed 1}
];


sigma_fe = 0. ; // laminated steel
DefineConstant[
  mur_fe = {1000, Name StrCat[pp, "Relative permeability for linear case"]},
  b_remanent = { 1.175, Name StrCat[pp, "Remanent induction [T]"] }
];


// ----------------------------------------------------



tz2 = 2*Pi*(D1/2+hs)/Z ; // slot pitch at the top of the coil area
bs3 = (1-kbs_tz)*tz2 ; // slot width at the top of the coil area
bt1 = kbs_tz*tz2 ; // stator tooth width

bs2 = 2*Pi*(D1/2+hso+hw)/Z - bt1;
bs1 = bs2/5 ; // slot opening...(my choice)

nbMagnets = 2*p ;
thm = 2/3*Pi/8 ; // angle in rad 0 < thm < Pi/4
//thm = 132*Pi/180/8 ;

// ----------------------------------------------------
// ----------------------------------------------------

NbrPolesTot = 2*p ; // number of poles in complete cross-section
SymmetryFactor = NbrPolesTot/NbrPolesInModel ;
Flag_Symmetry = (SymmetryFactor==1)?0:1 ;

NbrPolesInModel = NbrPolesTot/SymmetryFactor ; // number of rotor poles in FE model
NbrSectTot = NbrPolesTot ; // number of "rotor teeth"
NbrSect = NbrSectTot*NbrPolesInModel/NbrPolesTot ; // number of "rotor teeth" in FE model

NbrSectTotStator  = (Flag_Type==0) ? 2*Z : Z ; // number of stator teeth
NbrSectStator   = NbrSectTotStator*NbrPolesInModel/NbrPolesTot; // number of stator teeth in FE model

// ----------------------------------------------------
// ----------------------------------------------------
// Definition of some radius
rR1 = D1/2 - wag - hm - hyr ; // Inner rotor radius
rR2 = D1/2 - wag - hm ; // Rotor radius iron height
rR3 = D1/2 - wag ; // Rotor radius magnet height

rB1 = rR3 + 1*wag/3 ; // Moving band rotor side
rB2 = rR3 + 2*wag/3 ; // Moving band stator side

rS1 = D1/2 ;
rS2 = rS1 + hso ;
rS3 = rS2 + hw ;
rS4 = rS3 + hc ;
rS5 = DOD/2 ;


rpm_nominal = 800 ;

// ----------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ----------------------------------------------------
// Rotor
ROTOR_FE     = 1000 ;
ROTOR_AIR    = 1001 ;
ROTOR_AIRGAP = 1002 ;
ROTOR_MAGNET = 1010 ; // Index for first Magnet (1/8 model->1; full model->8)

ROTOR_BND_MOVING_BAND = 1100 ; // Index for first line (1/8 model->1; full model->8)
ROTOR_BND_A0 = 1200 ;
ROTOR_BND_A1 = 1201 ;
SURF_INT     = 1202 ;

// Stator
STATOR_FE     = 2000 ;
STATOR_AIR    = 2001 ;
STATOR_AIRGAP = 2002 ;

STATOR_BND_MOVING_BAND = 2100 ;// Index for first line (1/8 model->1; full model->8)
STATOR_BND_A0          = 2200 ;
STATOR_BND_A1          = 2201 ;

STATOR_IND = 2300 ; //Index for first Ind (1/8 model->3; full model->24)

SURF_EXT = 3000 ; // outer boundary


MOVING_BAND = 9999 ;

NICEPOS = 111111 ;
