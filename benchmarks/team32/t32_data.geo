// Geometrical data for transformer in Team32
// We solve CASE3: each winding is connected in series with a 11.1 resistance,
// one is supplied by a sinusoidal voltage (14.5 V peak value),
// the other is supplied by a co sinusoidal voltage (14.5 V peak value);

//-------------------------------------------------------------------------
// Default Parameters
//-------------------------------------------------------------------------

// GEO parameters .............................
mm = 1e-3; // Unit
cteaux = 1;

Flag_3Dmodel_00 = 0;
Flag_Symmetry2D_00 = 1; // Use symmetry
Flag_Symmetry3D_00 = 1; // Symmetry type (1="1/4 model",2="1/2 model")

// SIMU parameters .............................
freq_00 = 10; // frequency
nstep_00 = 1000; // number of time step per period (without Flexible DT)
NbT_00 = 2; //number of periods

// SOURCE parameters ............................
Flag_TestCase00 = 3; //1: - case 1: windings series connected with sinusoidal supply,
                     //2: - case 2: windings series connected with 5th harmonic added,
                     //3: - case 3: rotational flux,
                     //4: - case 4: secondary winding on load  

// RESOLUTION parameters .........................
Flag_NL_law00 = 4;  // 0: "linear",
                    // 1: "analytical",
                    // 2: "anhysteretic part of JA-model",
                    // 3: "Jiles-Atherton hysteresis model",
                    // 4: "EnergHyst model"

// non linear loop default parameters
Flag_NLRes00 = 1; // 0: use classical IterativeLoop to solve the NL (non linear) problem
                  // 1: use IterativeLoopN to solve the NL (non linear) problem
                  // 2: solve the NL (non linear) problem "by hand"
Nb_max_iter00       = 50; // maximum number of NL (non linear) iterations
stop_criterion00    = 1e-5;  // strop criterion for the NL (non linear) iteration
relaxation_factor00 = 1; // default relaxation factor (between ]0,1] )
Flag_AdaptRelax00   = 1; // set to 1 to test different relaxation factors
relax_max00         = 1 ;
relax_min00         = 0.1;
relax_numtest00     = 10;
TestAllFactors00    = 1; // 0 : stops when the residual goes up !!
                       // 1 : try every relaxation factors and keep the optimal one
Reltol_Mag00        = stop_criterion00; // 0 before with IterativeLoopN
Abstol_Mag00        = stop_criterion00;
Reltoldx_Mag00      = 1e-5*stop_criterion00;
Abstoldx_Mag00      = 1e-3*stop_criterion00;

// POST OP paremeters ............................
Flag_LiveLocalPostOp_00 = 0; // set to 1 to Real Time visu LocalPostOp
Flag_LiveGlobalPostOp_00 = 0; // set to 1 to Real Time visu GlobalPostOp

//-------------------------------------------------------------------------
// Useful Constants
//-------------------------------------------------------------------------
NL_LIN = 0;
NL_ANA = 1;
NL_ANA_JA = 2;
NL_JA = 3;
NL_ENERGHYST = 4;

NLRES_ITERATIVELOOP    = 0;
NLRES_ITERATIVELOOPN   = 1;
NLRES_ITERATIVELOOPPRO = 2;

AN_STATIC    = 0;
AN_TIME      = 1;
AN_FREQUENCY = 2;

//-------------------------------------------------------------------------
// Extension Labels
//-------------------------------------------------------------------------
ExtGmsh     = ".pos";
//ExtGnuplot  = "_Td.dat";// transverse direction
ExtGnuplot  = ".dat";// rolling direction

//-------------------------------------------------------------------------
// SubMenu Labels
//-------------------------------------------------------------------------
ppDIM= "Input/10Geometric Dimensions/0";
ppGEO="Input/20Geometric Parameters/";
ppTC="Input/30Excitation Source/";
ppAC="Input/40Analysis Set Up/";
ppML="Input/50Material Law/";
ppNL="Input/60NonLinear Iterations/";
ppPOST="Input/70PostOp Visualisation/";

//-------------------------------------------------------------------------
// Color Definitions
//-------------------------------------------------------------------------
colorro  = "LightGrey";
colorpp = "Ivory";
colAC1="Green2"; 
colAC2 ="Green4";
colNL1="Blue";
colNL2="Blue2";
colNL3="LightBlue4";
colNL4 ="Blue4";

//-------------------------------------------------------------------------
// Interactive Menu 
//-------------------------------------------------------------------------

// Geometric Parameters........................ (subMenu ppGEO)
DefineConstant[
  Flag_3Dmodel = {Flag_3Dmodel_00, Choices{0,1},
    Name StrCat[ppGEO,"11Use 3D model"]}
  Flag_Symmetry2D = { Flag_Symmetry2D_00, Choices{0,1},
    Name StrCat[ppGEO,"12Use symmetry"], ReadOnly Flag_3Dmodel, Visible !Flag_3Dmodel}
  Flag_Symmetry3D = { Flag_Symmetry3D_00, Choices{1="1/4 model",2="1/2 model"},
    Name StrCat[ppGEO,"12Symmetry Type"], ReadOnly !Flag_3Dmodel, Visible Flag_3Dmodel}
  Flag_Infinity = {(Flag_3Dmodel==0), Choices{0,1},
    Name StrCat[ppGEO,"13Use shell transformation to infinity"], ReadOnly 1}

  Flag_Symmetry = Flag_3Dmodel ? Flag_Symmetry3D : Flag_Symmetry2D,
  // To check: symmetry factor for the source is 2 
  //not but for energy/power computation.. 4?
  SymmetryFactor = (Flag_Symmetry)?(Flag_3Dmodel ? 4/Flag_Symmetry3D: 2) : 1
  //Printf("====> SymmetryFactor=%g", SymmetryFactor);
];

// Geometric dimensions........................ (subMenu ppDIM)
close_menu = 1;
DefineConstant[
  wcore = {30*mm,  Name StrCat[ppDIM, "1Width of legs [m]"],
    Highlight Str[colorpp],Closed close_menu},
  wTot = {184.5*mm,  Name StrCat[ppDIM, "2Total width [m]"],
    Highlight Str[colorpp],Closed close_menu},
  hcoil  = {120*mm,  Name StrCat[ppDIM, "4Coil height [m]"],
    Highlight Str[colorpp]},
  whole  = {42.25*mm,  Name StrCat[ppDIM, "2Space between legs width [m]"],
    Highlight Str[colorpp],Closed close_menu},
  wcoil  = {(wTot-3*wcore-2*whole)/2, Name StrCat[ppDIM, "3Coil width [m]"], ReadOnly 1,
    Highlight Str[colorro]},
  hcore = {hcoil+2*wcore, Name StrCat[ppDIM, "2Core height [m]"], ReadOnly 1,
    Highlight Str[colorro]},
  AxialLength = {cteaux*2.4*mm, Name StrCat[ppDIM, "0Length along z-axis [m]"], Highlight Str[colorpp]}
];

// Excitation Source .......................... (SubMenu ppTC)
DefineConstant[
  Flag_VoltageTransformer = {1, Choices{0,1}, 
    Name StrCat[ppTC, "0Voltage transformer"],
    Help Str["- 0: current fixed in each inductor",
      "- 1: voltage fixed in Ind1, zero current in Ind2"]},
  Flag_CircuitCoupling    = { (Flag_VoltageTransformer==1), Choices{0,1}, Name StrCat[ppTC, "1Circuit coupling"],
    ReadOnly (Flag_VoltageTransformer==1)}
  Flag_TestCase = {(!Flag_VoltageTransformer)?3:Flag_TestCase00, Choices {
      1="CASE 1",
      2="CASE 2",
      3="CASE 3",
      4="CASE 4"}, Name StrCat[ppTC, "20Test Case"], ReadOnly (!Flag_VoltageTransformer), Highlight "Red4",
      Help Str[ "- case 1: windings series connected with sinusoidal supply",
                "- case 2: windings series connected with 5th harmonic added",
                "- case 3: rotational flux",
                "- case 4: secondary winding on load"]} 
];

// Analysis Set Up ........................... (SubMenu ppAC)
DefineConstant[
  Flag_AnalysisType = { AN_TIME, Choices{
      AN_STATIC="Static", 
      AN_TIME="Time domain", 
      AN_FREQUENCY="Frequency domain"},
    Name StrCat[ppAC, "2Type of analysis"], Highlight Str[colAC1],
    Help Str["- Use 'Static' to compute static fields created in TFO",
             "- Use 'Time domain' to compute the dynamic response of TFO",
             "- Use 'Frequency domain' to compute the dynamic steady-state response of TFO"
    ]},
  Freq = {freq_00, Name StrCat[ppAC, "Frequency"], 
    Highlight Str[colAC2]}
  NbT  = {NbT_00, Name StrCat[ppAC, "Number of periods"],  
    Highlight Str[colAC2],Visible (Flag_AnalysisType==AN_TIME)}
  NbSteps = {nstep_00, Name StrCat[ppAC, "Number of steps"], 
    Highlight Str[colAC2], Visible (Flag_AnalysisType==AN_TIME)}
];

// Material Law ............................... (SubMenu ppML)
DefineConstant[
  Flag_ConductingCore     = {0, Choices{0,1}, 
    Name StrCat[ppML, "Conducting core"], Visible 0}
  Flag_NL_law = { (Flag_AnalysisType==AN_FREQUENCY)?NL_LIN:Flag_NL_law00 , Choices{
      NL_LIN="linear",
      NL_ANA="analytical",
      NL_ANA_JA="anhysteretic part of JA-model",
      NL_JA="Jiles-Atherton hysteresis model",
      NL_ENERGHYST="EnergHyst model"}, 
    Name StrCat[ppML, "Magnetic material law"], ReadOnly (Flag_AnalysisType==2)}
  Flag_NL = (Flag_NL_law!=0)
];

// NonLinear Iterations ....................... (SubMenu ppNL)
DefineConstant[
  Flag_NLRes = { (Flag_AnalysisType!=AN_TIME)? NLRES_ITERATIVELOOP:Flag_NLRes00  , Choices {
      NLRES_ITERATIVELOOP ="IterativeLoop",
      NLRES_ITERATIVELOOPN ="IterativeLoopN",
      NLRES_ITERATIVELOOPPRO ="IterativeLoopPro"}, 
    Name StrCat[ppNL, "0Resolution type"], Highlight Str[colNL1], Visible Flag_NL ,ReadOnly (Flag_AnalysisType!=AN_TIME),
      Help Str["- Use 'IterativeLoop' to solve the NL (non linear) problem with classical IterativeLoop Operation",
               "- Use 'IterativeLoopN' to solve the NL (non linear) problem with IterativeLoopN Operation",
               "- Use 'IterativeLoopPro' to solve the NL (non linear) problem 'by hand'"]},
  Nb_max_iter = {Nb_max_iter00, Name StrCat[ppNL, "1Nb max iter"], 
    Highlight Str[colNL4], Visible Flag_NL}
  stop_criterion = {stop_criterion00, Name StrCat[ppNL, "2stop criterion"], 
    Highlight Str[colNL2], Visible (Flag_NL && Flag_NLRes==NLRES_ITERATIVELOOP)}
  Reltol_Mag = {Reltol_Mag00, Name StrCat[ppNL, "2Reltol"], 
    Highlight Str[colNL2], Visible (Flag_NL && (Flag_NLRes==NLRES_ITERATIVELOOPN || Flag_NLRes==NLRES_ITERATIVELOOPPRO) && Flag_AnalysisType==AN_TIME)}
  Abstol_Mag = {Abstol_Mag00, Name StrCat[ppNL, "2Abstol"], 
    Highlight Str[colNL2], Visible (Flag_NL && (Flag_NLRes==NLRES_ITERATIVELOOPN || Flag_NLRes==NLRES_ITERATIVELOOPPRO) && Flag_AnalysisType==AN_TIME)}
  Reltoldx_Mag = {Reltoldx_Mag00, Name StrCat[ppNL, "2Reltoldx"], 
    Highlight Str[colNL2], Visible (Flag_NL && Flag_NLRes==NLRES_ITERATIVELOOPPRO  && Flag_AnalysisType==AN_TIME)}
  Abstoldx_Mag = {Abstoldx_Mag00, Name StrCat[ppNL, "2Abstoldx"], 
    Highlight Str[colNL2], Visible (Flag_NL && Flag_NLRes==NLRES_ITERATIVELOOPPRO  && Flag_AnalysisType==AN_TIME)}

  Flag_AdaptRelax = {Flag_AdaptRelax00, Choices{0,1}, Name StrCat[ppNL, "3Adaptive Relaxation (or not)"], 
    Highlight Str[colNL3], Visible (Flag_NL && Flag_AnalysisType==AN_TIME)}

  relaxation_factor = {relaxation_factor00, Name StrCat[ppNL, "4relaxation factor"], Help Str["'1' = no relaxation"],
    Highlight Str[colNL3], Visible (Flag_NL && !Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}

  relax_max = {relax_max00, Min 0.001, Max 1., Name StrCat[ppNL, "4maximal relaxation factor"], 
    Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}
  relax_min = {relax_min00, Min 0.001, Max 1., Name StrCat[ppNL, "5minimal relaxation factor"], 
    Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}
  relax_numtest = {relax_numtest00, Min 2, Max 100, Name StrCat[ppNL, "6number of relaxation factors to test"], 
    Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}

  TestAllFactors = {TestAllFactors00, Choices{0,1}, Name StrCat[ppNL, "7Test All Factors (or not)"], 
    Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME),
  Help Str["0: Keep the last factor that induced a decrease in the residual",
           Sprintf("1: Test all %g factors and keep the optimal one", relax_numtest)]}
];

// PostOp Visualisation ...................... (SubMenu ppPOST)
DefineConstant[
  Flag_LiveLocalPostOp = {Flag_LiveLocalPostOp_00, Choices{0,1}, 
    Name  StrCat[ppPOST, "1Real Time Visu LocalPostOp"], Visible 1}
  Flag_LiveGlobalPostOp = {Flag_LiveGlobalPostOp_00, Choices{0,1}, 
    Name  StrCat[ppPOST, "2Real Time Visu GlobalPostOp"], Visible 1}
];



//-------------------------------------------------------------------------
// Fixing Geometry Parameters 
//-------------------------------------------------------------------------

Lz = AxialLength;
Printf("Lz %g",Lz);

// The core has five Fe-Si 0.48 mm thich sheets
Rint = (Flag_3Dmodel==1?1.5:1)*wTot ; // No transformation to infinity in 3D
Rext = 1.25*Rint;

Val_Rint = Rint;
Val_Rext = Rext;

//-------------------------------------------------------------------------
// Reluctance computation - magnetic circuit values obtained from geo
//-------------------------------------------------------------------------
mu0 = 4.e-7 * Pi ;

//-------------------------------------------------------------------------
// Material parameters
//-------------------------------------------------------------------------

sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
sigma_cu = 5.77e7  ; // conductivity of copper [S/m]
sigma_core = 2.5e7/1000;
sigma_coil = 5.9e7;
mur_fe     = 1000; // linear case

// Hysteresis parameters with Jiles-Atherton hysteresis model

// FeSi -- data for Jiles-Atherton model from Bastos paper
// Oxz is the lamination plane, Oy is perpendicular to the lamination
// Ox == transverse direction (Oy taken equal to Ox, as the field is negligible)
Msat_x = 1.31e6;
a_x = 233.78;
k_x = 374.975;
c_x = 0.736;
alpha_x = 562e-6 ;

// Oz == rolling direction
Msat_z = 1.33e6;
a_z = 172.856;
k_z = 232.652;
c_z = 0.652;
alpha_z = 417e-6;

hyst_FeSi = { Msat_z, a_z, k_z, c_z, alpha_z}; // rolling direction
//hyst_FeSi = { Msat_x, a_x, k_x, c_x, alpha_x}; // transverse direction

//-------------------------------------------------------------------------
// Point(s) for post-processing
//-------------------------------------------------------------------------
num_postop_points=3;
xpos_1 = 0;
xpos_2 = 0;
xpos_3 = 0;
ypos_1 = hcore/2-20.5*mm;
ypos_2 = hcore/2-28.5*mm;
ypos_3 = 0;

depthZ = 15 * (AxialLength/2 + wcoil);

// ------------------------------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ------------------------------------------------------------------------

CORE = 1000;
SKINCORE = 1111; // Conduction core

COIL       = 2000;
LEG_INCOIL = 2100; //3d

SKINCOIL = 20000; //3d
ELECCOIL = 21000; //3d
SKINCOIL_CUT = 22000; //3d
COIL_CUT     = 22200; //3d

AIR    = 3000;
AIRINF = 3100;


// Lines and surfaces for boundary conditions
SURF_AIROUT = 3333;
SURF_CUTXY  = 4444; // 3d
SURF_CUTXZ  = 4445; // not needed with a-form
