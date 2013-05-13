// TEAM Workshop problem 30
// 1) Three-Phase induction motor with a 45 degree winding spread per phase
// 2) Single-Phase induction motor

//------------------------------------------------------------------------------------------
//Dimensions
//------------------------------------------------------------------------------------------

cm = 1e-2 ;
deg2rad = Pi/180;

DefineConstant
[
 NbPhases = {1, Label "Type", Choices {1="Single-phase", 3="Three-phase"}, Path "Input/2", Highlight "NavyBlue"}
 ];

thetas = 45 * deg2rad ;

//AxialLength    = 1 ;
SymmetryFactor = 1 ;
Flag_Symmetry  = 0 ;

r1 = 2.0*cm ; // rotor steel
r2 = 3.0*cm ; // rotor aluminum
r3 = 3.2*cm ; // inner stator winding
r4 = 5.2*cm ; // outer stator winding
r5 = 5.7*cm ; // stator steel

gap  = r3-r2 ;
aaa = 1/3 ;
rmb0 = r2 + aaa*gap ; // radius moving band rotor
rmb1 = r3 - aaa*gap ; // radius moving band stator

mur_fe = 30 ; // relative permeability for rotor and stator steel
sigma_fe = 1.6e6 ; // conductivity of rotor steel [S/m]

// winding
// Phase groups ABC are located on 60 degrees centers and lag each other in
// phase by 120 degrees
IA = 2045.175 ; // [A] (rms value)   Current in windings
JA = 310/cm^2 ; // [A/m2] Current density in windings mantained constant

SurfInd    = Pi*(r4^2-r3^2)*45/360 ;
NbWiresInd = Floor[JA*SurfInd/IA] ;

Printf("Inductor area =%g", SurfInd);
Printf("Nbwires of Inductor =%g", NbWiresInd);

Area_Rotor_Airgap  = Pi*(rmb0^2-r2^2) ;
Area_Stator_Airgap = Pi*(r3^2-rmb1^2) ;
Printf("Area rotor airgap =%g", Area_Rotor_Airgap);
Printf("Area stator airgap =%g", Area_Stator_Airgap);

//rotor speed ranging from 0 to 1200 rad/s, routhly 3 times faster than the
//stator field speed of 377 rad/s
Freq = 60 ; //Hz


// ----------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ----------------------------------------------------
// Rotor
ROTOR_FE = 1000 ;
ROTOR_AL = 1001 ;
ROTOR_CU = 1002 ;
ROTOR_AIR = 1003 ;
ROTOR_AIRGAP = 1004 ;
ROTOR_BND_MOVING_BAND = 1005 ;
ROTOR_INDA = 1100 ; ROTOR_INDAN = 1101 ;
ROTOR_INDB = 1200 ; ROTOR_INDBN = 1201 ;
ROTOR_INDC = 1300 ; ROTOR_INDCN = 1301 ;

// Stator
STATOR_FE = 2000 ;
STATOR_AL = 2001 ;
STATOR_CU = 2002 ;
STATOR_AIR = 2003 ;
STATOR_AIRGAP = 2004 ;
STATOR_BND_MOVING_BAND = 2005 ;
STATOR_INDA = 2100 ; STATOR_INDAN = 2101 ;
STATOR_INDB = 2200 ; STATOR_INDBN = 2201 ;
STATOR_INDC = 2300 ; STATOR_INDCN = 2301 ;

MOVING_BAND = 9999 ;

SURF_INF = 3000 ; // outer boundary


/*
DefineConstant
[
 rotor  = {1, Label "Rotor", Choices {1="Team 30",
                                     2="Generic Winded"} },
 stator = {1, Label "Stator", Choices {1="Team 30",
                                       2="Generic Winded"}}
];
*/
