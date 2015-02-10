// Permanent magnet synchronous machine
// Example of Prof. Dr. Mauricio Valencia Ferreira da Luz (Florianopolis,August 23,2010)
// Modified and customised for Onelab by Ruth V. Sabariego (February, 2013)

mm = 1e-3 ;
deg2rad = Pi/180 ;

pp = "Input/ConstructiveParameters/"; 
ppp = "Input/OptParam/";

DefineConstant[
  lc={.2,Name "Geo/Mesh Characteristic Length Factor",Visible 1},
  InputId = "",
  ResId = "",
  ResDir = "res/",
  mshName = "pmsm.msh",
  mshParamName="pmsmParams.msh",
  pInOpt = StrCat[InputId,ppp],
  NbrPoles = { 1, Choices {0,1}, Name "Number of poles in FE model",Visible 0},
  //!!! check !!!
/*
  InitialRotorAngle_deg = {30+45/2, Name StrCat["Input/", StrCat[ResId,"Shift rotor position (no remesh) [mech. deg]"]],
                           Highlight "AliceBlue"},
*/
  InitialRotorAngle_deg = {7.5/*22.5*/, Name "Geo/Initial rotor position [mech. deg]", Visible 1},
  
  // Optimization parameters
  Flag_topopt = {0, Name "Input/OptParam/optType",Label "Optimization Type",
             Choices {0="Structural Optimization",1="Topology Optimization"}, Visible 1}
  // -- SO --
  Flag_Spline = { 0, Name StrCat[pInOpt,"Flag_Spline"],
                     Label "PM_Spline_Interface",Choices {0,1}, Visible 0},

  r_PtSpline_0 = {0, Name StrCat[pInOpt,"x_0"], Label "radius Spline Point 0 [m]", Visible (!Flag_topopt)},
  r_PtSpline_1 = {0, Name StrCat[pInOpt,"x_1"], Label "radius Spline Point 1 [m]", Visible (!Flag_topopt)},
  r_PtSpline_2 = {0, Name StrCat[pInOpt,"x_2"], Label "radius Spline Point 2 [m]", Visible (!Flag_topopt)},
  r_PtSpline_3 = {0, Name StrCat[pInOpt,"x_3"], Label "radius Spline Point 3 [m]", Visible (!Flag_topopt)},
  r_PtSpline_4 = {0, Name StrCat[pInOpt,"x_4"], Label "radius Spline Point 4 [m]", Visible (!Flag_topopt)},
  r_PtSpline_5 = {0, Name StrCat[pInOpt,"x_5"], Label "radius Spline Point 5 [m]", Visible (!Flag_topopt)},
  r_PtSpline_6 = {0, Name StrCat[pInOpt,"x_6"], Label "radius Spline Point 6 [m]", Visible (!Flag_topopt)},
  r_PtSpline_7 = {0, Name StrCat[pInOpt,"x_7"], Label "radius Spline Point 7 [m]", Visible (!Flag_topopt)},
  r_PtSpline_8 = {0, Name StrCat[pInOpt,"x_8"], Label "radius Spline Point 8 [m]", Visible (!Flag_topopt)},
  r_PtSpline_9 = {0, Name StrCat[pInOpt,"x_9"], Label "radius Spline Point 9 [m]", Visible (!Flag_topopt)},
  r_PtSpline_10 = {0, Name StrCat[pInOpt,"x_10"], Label "radius Spline Point 10 [m]", Visible (!Flag_topopt)},

  // Constructive parameters
  lm = {2.352*mm , Name StrCat[pp,"Magnet height [m]"], Closed 1},
  Th_magnet = {32.67 *deg2rad, Name StrCat[pp,"Magnet angular opening [deg]"], Closed 1},
  AxialLength = {35*mm,  Name StrCat[pp,"Axial length [m]"], Closed 1},
  Gap = {(26.02-25.6)*mm, Name StrCat[pp,"Airgap width [m]"], Closed 1},
  //mur_fe = {1000, Name StrCat[pp,"Relative permeability for linear case"], Visible 0 },
  b_remanent = { 1.2, Name StrCat[pp,"Remanent induction [T]"] },
  Flag_Bradial = { 1, Name StrCat[pp,"Bradial"],Choices{0,1}, Visible 1},
  Flag_AddInfo = {0, Name "Input/Add info about phases and axis",Choices{0,1}}
                                
] ;
//--------------------------------------------------------------------------------
InitialRotorAngle = InitialRotorAngle_deg*deg2rad ; // initial rotor angle, 0 if aligned
NbrPolesTot = 8 ; // number of poles in complete cross-section
NbrPolePairs = NbrPolesTot/2 ;
SymmetryFactor = NbrPolesTot/NbrPoles ;
Flag_Symmetry = (SymmetryFactor==1)?0:1 ;
NbrSectTot = NbrPolesTot ; // number of "rotor teeth"
NbrSect = NbrSectTot*NbrPoles/NbrPolesTot ; // number of "rotor teeth" in FE model
//------------------------------------------------
// Stator
//------------------------------------------------
NbrSectTotStator  = 24; // number of stator teeth
NbrSectStator   = NbrSectTotStator*NbrPoles/NbrPolesTot; // number of stator teeth in FE model
rRext = 25.6*mm;
rR1 = 10.5*mm;
rR2 = (rRext-lm); //23.243e-03;
rR3 = (rRext-0.7389*lm); //23.862e-03;
rR4 = (rRext-0.72278*lm); //23.9e-03;
rR5 = rRext; //25.6e-03;
//Gap = rS1-rR5;
rS1 = rR5 + Gap;     //rS1 = 26.02*mm;
rS2 = rS1 + 0.6*mm;  //rS2 = 26.62*mm;
rS3 = rS2 + 0.34*mm; //rS3 = 26.96*mm;
rS4 = rS3 + 11.2*mm; //rS4 = 38.16*mm;
rS5 = rS4 + 0.11*mm; //rS5 = 38.27*mm;
rS6 = rS5 + 1.75*mm; //rS6 = 40.02*mm;
rS7 = rS6 + 5.98*mm; //rS7 = 46.00*mm;

rB1  = rR5+Gap/3;
rB1b = rB1;
rB2  = rR5+Gap*2/3;

A0 =  45 * deg2rad ; // with this choice, axis A of stator is at 30 degrees with regard to horizontal axis
A1 =  45/2*1*0 * deg2rad ; // Rotor initial aligned position, current position in angRot

sigma_fe = 0. ; // laminated steel

rpm_nominal = 500 ;
Inominal = 3.9 ; // Nominal current
Tnominal = 2.5 ; // Nominal torque

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
STATOR_IND_AP = STATOR_IND + 1 ; STATOR_IND_BM = STATOR_IND + 2 ;STATOR_IND_CP = STATOR_IND + 3 ;
STATOR_IND_AM = STATOR_IND + 4 ; STATOR_IND_BP = STATOR_IND + 5 ;STATOR_IND_CM = STATOR_IND + 6 ;

SURF_EXT = 3000 ; // outer boundary

MOVING_BAND = 9999 ;

NICEPOS = 111111 ;

//--------------------------
// define performance function type
//--------------------------
NO_PERF = 0;
BFIELD_ERROR = 1;
TORQUE_VAR = 2;
IRON_LOSSES = 3;
COMPLIANCE = 4;
VOLUME = 5;
TORQUE = 6;
//--------------------------
// shape derivative views tag
//--------------------------
VELOCITY_FIELD = 7;//pour que ça marche avec -gmshread il faut mettre à 0
MESH_VEL_FIELD = 8;
NU_ROTA_ROTLAMBDA_VELOCITY_FIELD = 9;
JS_LAMBDA_VELOCITY_FIELD = 10;
FUNC_IND_VELOCITY_FIELD = 11;
GRAD_LAMBDA_V_FIELD = 12;
GRAD_A_V_FIELD = 13;
ROT_A_FIELD = 14;
M_ROTLAMBDA_VELOCITY_FIELD = 15;
B_FIELD = 16;
A_FIELD = 17;
LAMBDA_FIELD = 18;
CURL_LAMBDA_FIELD = 19;
TORQUE_VAR_FIELD = 20;
// top opt fields
DES_VAR_FIELD = 21;
SENS_FIELD = 22;

