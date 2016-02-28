// Permanent magnet synchronous machine

mm = 1e-3;
deg = Pi/180;
po = "Output - Electromagnetics/";
poI = StrCat[po,"0Current [A]/"];
poV = StrCat[po,"1Voltage [V]/"];
poF = StrCat[po,"2Flux linkage [Vs]/"];
poJL = StrCat[po,"3Joule Losses [W]/"];
po_mec = "Output - Mechanics/";
po_mecT = StrCat[po_mec,"0Torque [Nm]/"];
po_min = "Output/";
ExtOnelabScal = ".onelabScal";
ExtOnelabVec = ".onelabVec";  

DefineConstant[
  pp = "Input/ConstructiveParameters/", 
  NbrPoles = { 1, Choices {0,1}, Name "Number of poles in FE model", Visible 0},
  lc = {.2,Name "Geo/Mesh Characteristic Length Factor", Visible 1},
  Flag_IPM = {1, Choices {0,1},Name "Geo/Inner PM", Visible 1},
  modelpath = CurrentDir, 
  ResDir = StrCat[ modelpath, "res/" ],
  InitialRotorAngle_deg = {0, Name "Geo/Initial rotor position [mech. deg]", Visible 1},
  b_remanent = { 1.2, Name StrCat[pp,"Remanent induction[T]"] },
  // Design variables -> FIXME: write in py toolkit!
  em = {0.7389*2.352*mm , Visible Flag_IPM, 
    Name StrCat[pp,"Magnet length"], Visible 1, Closed 1},  
  lm = {2.352*mm , 
    Name StrCat[pp,"Magnet length"], Visible 1, Closed 1},  
  Th_magnet = {32.67 *deg, 
    Name StrCat[pp,"Magnet thickness"], Visible 1, Closed 1},
  AxialLength = {35*mm,
    Name StrCat[pp,"Axial length [m]"],Visible 1, Closed 1},
  Gap = {(26.02-25.6)*mm,
    Name StrCat[pp,"Airgap width [m]"], Visible 1, Closed 1}
];


// Optimization problem specification
Include "opt_data.geo";

NbrPolesInModel = 1;
InitialRotorAngle = InitialRotorAngle_deg*deg ; // initial rotor angle, 0 if aligned
NbrPolesTot = 8 ; // number of poles in complete cross-section
NbrPolePairs = NbrPolesTot/2 ;
SymmetryFactor = NbrPolesTot/NbrPoles ;
Flag_Symmetry = (SymmetryFactor==1)?0:1 ;
NbrSectTot = NbrPolesTot ; // number of "rotor teeth"
NbrSect = NbrSectTot*NbrPoles/NbrPolesTot ; // number of "rotor teeth" in FE model

//------------------------------------------------
// Stator
//------------------------------------------------
NbrSectTotStator  = 24; // number of stator teeth / slots
NbrSectStator = NbrSectTotStator*NbrPolesInModel/NbrPolesTot;
NbrSect = NbrSectStator;

rRext = 25.6*mm;
rR1 = 10.5*mm;
If(!Flag_IPM)
  rR2 = (rRext-lm); //23.243e-03;
  rR3 = (rRext-0.7389*lm); //23.862e-03;
  rR4 = (rRext-0.72278*lm); //23.9e-03;
Else
  rR2 = (rRext-lm*2);
  rR3 = (rRext-em); 
  rR4 = (rRext-em);
EndIf
rR5 = rRext; //25.6e-03;

rS1 = rR5 + Gap;     //rS1 = 26.02*mm;
rS2 = rS1 + 0.6*mm;  //rS2 = 26.62*mm;
rS3 = rS2 + 0.34*mm; //rS3 = 26.96*mm;
rS4 = rS3 + 11.2*mm; //rS4 = 38.16*mm;
rS5 = rS4 + 0.11*mm; //rS5 = 38.27*mm;
rS6 = rS5 + 1.75*mm; //rS6 = 40.02*mm;
rS7 = rS6 + 5.98*mm; //rS7 = 46.00*mm;

// decrease MB
delta = (1-0.5*lc)/2.;
rB1  = rR5+Gap*delta;
rB1b = rB1;
rB2  = rR5+Gap*(1.-delta);
/*
rB1  = rR5+Gap/3;
rB1b = rB1;
rB2  = rR5+Gap*2/3;
*/

A0 =  45 * deg ;

Drotor = rR5*2;
Ef = Gap*10;

sigma_fe = 0. ; // laminated steel

rpm_nominal = 500 ;
Inominal = 3.9 ; // Nominal current
Tnominal = 2.5 ; // Nominal torque

// ----------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ----------------------------------------------------
// Rotor
ROTOR_FE     = 1000 ;
ROTOR_FE_PM  = 5000 ;
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
STATOR_IND_AP = STATOR_IND + 1 ; STATOR_IND_BM = STATOR_IND + 2 ;STATOR_IND_CP = STATOR_IND + 3 ;
STATOR_IND_AM = STATOR_IND + 4 ; STATOR_IND_BP = STATOR_IND + 5 ;STATOR_IND_CM = STATOR_IND + 6 ;

SURF_EXT = 3000 ; // outer boundary

MOVING_BAND = 9999 ;

NICEPOS = 111111 ;


