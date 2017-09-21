//-------------------------------------------------------------------------
// Default Parameters
//-------------------------------------------------------------------------

// GEO parameters .............................
THICKNESS_00 = 1; // thickness of the sample
NumEle_00 = 1; // number of finite elements
mm = 1e-3; // Unit

Flag_3Dmodel = 0;

// SIMU parameters .............................
Flag_AnalysisType_00 = 1; // 0: "static"
                          // 1: "time domain"
                          // 2: "frequency domain"
freq_00 = 1;    // frequency (no impact as there is no dynamic effect)
nstep_00 = 200; // number of time step per period (without Flexible DT)
NbT_00 = 2; //number of periods
tmax_00 = 1; // final time of simulation

// SOURCE parameters ............................
ha_00 = 150; // maximal amplitude of the imposed magnetic field
Flag_TestCase_00 = 1; // 0: CASE 0 (Default)
                      // 1: CASE 1 (1Dx)
                      // 2: CASE 2 (1Dx+harm)
                      // 3: CASE 3 (1Dxy)
                      // 4: CASE 4 (1Dxy+harm)
                      // 5: CASE 5 (2D)
                      // 6: CASE 6 (2D+harm)
// CASE 0 (default)
hax_00     = ha_00; // maximal amplitude of the x component of the magnetic field
haharmx_00 = 0;     // maximal amplitude of the x component of the harmonic magnetic field
hay0_00    = 0;     // DC contribution on the y component of the magnetic field
hay_00     = ha_00; // maximal amplitude of the y component of the magnetic field
haharmy_00 = 0;     // maximal amplitude of the y component of the harmonic magnetic field
freqharm_00= 0;     // frequency of harmonics if one wants to add harmonics
phase_00   = 0*(90/180)*3.141592653589793; // phase angle between hx and hy, if one wants to impose rotational field
                     // 0 = unidirectional 
                     // Pi = purely rotational

// RESOLUTION parameters .........................
Flag_NL_law00 = 4;  // 0: "linear",
                    // 1: "analytical",
                    // 2: "anhysteretic part of JA-model",
                    // 3: "Jiles-Atherton hysteresis model",
                    // 4: "EnergHyst model"

Flag_NLRes00 = 0; // 0: use classical IterativeLoop to solve the NL (non linear) problem
                  // 1: use IterativeLoopN to solve the NL (non linear) problem
                  // 2: solve the NL (non linear) problem "by hand"


// non linear loop default parameters
Nb_max_iter00       = 50; // maximum number of NL (non linear) iterations
stop_criterion00    = 1e-5;  // strop criterion for the NL (non linear) iteration
relaxation_factor00 = 1; // default relaxation factor (between ]0,1] )
Flag_AdaptRelax00   = 1; // set to 1 to test different relaxation factors
relax_max00         = 1 ;
relax_min00         = 0.1;
relax_numtest00     = 10;
TestAllFactors00    = 0; // 0 : stops when the residual goes up !!
                         // 1 : try every relaxation factors and keep the optimal one
Reltol_Mag00        = stop_criterion00; // 0 before with IterativeLoopN
Abstol_Mag00        = stop_criterion00;
Reltoldx_Mag00      = 1e-5*stop_criterion00;
Abstoldx_Mag00      = 1e-3*stop_criterion00;

// POST OP paremeters
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
ppGEO="Input/10Geometric Parameters/";
ppTC="Input/20Excitation Source/";
ppAC="Input/30Analysis Set Up/";
ppML="Input/40Material Law/";
ppNL="Input/50NonLinear Iterations/";
ppPOST="Input/60PostOp Visualisation/";

//-------------------------------------------------------------------------
// Color Definitions
//-------------------------------------------------------------------------
colNL1="Blue";
colNL2="Blue2";
colNL3="LightBlue4";
colNL4 ="Blue4";
colAC1="Green2"; 
colAC2 ="Green4";

//-------------------------------------------------------------------------
// Interactive Menu 
//-------------------------------------------------------------------------

// Geometric Parameters ....................... (SubMenu ppGEO)
DefineConstant[
  THICKNESS = {THICKNESS_00, Min 0.25*mm, Max 1*mm, Step 0.25*mm, 
    Name StrCat[ppGEO, "Lamination thickness (mm)"]},
  NumEle = {NumEle_00, Min 20, Max 200, Step 60,
    Name StrCat[ppGEO, "Number of elements"]}
];

// Excitation Source .......................... (SubMenu ppTC)
DefineConstant[
  Flag_TestCase= { Flag_TestCase_00 , Choices{
      0="CASE 0 (Default)",
      1="CASE 1 (1Dx)",
      2="CASE 2 (1Dx+harm)",
      3="CASE 3 (1Dxy)",
      4="CASE 4 (1Dxy+harm)", 
      5="CASE 5 (2D)",
      6="CASE 6 (2D+harm)"},
      Name StrCat[ppTC, "Excitation Case"], Highlight "Red"}
];

// Analysis Set Up ........................... (SubMenu ppAC)
DefineConstant[
  Flag_AnalysisType = { Flag_AnalysisType_00, Choices{
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
    Name  StrCat[ppPOST, "2Real Time Visu GlobalPostOp"], Visible 0}
];

//----------------------------------------------------
//----------------------------------------------------


//-------------------------------------------------------------------------
// Reluctance computation - magnetic circuit values obtained from geo
//-------------------------------------------------------------------------
mu0 = 4.e-7 * Pi ;

//-------------------------------------------------------------------------
// Material parameters
//-------------------------------------------------------------------------

//sigma_al = 3.72e7 ; // conductivity of aluminum [S/m] (not used here)
//sigma_cu = 5.77e7  ; // conductivity of copper [S/m] (not used here)
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
num_postop_points=1;
d = THICKNESS;
ypos_1 = d/2;
xpos_1 = d/2;


// ------------------------------------------------------------------------
// Numbers for physical regions in .geo and .pro files
// ------------------------------------------------------------------------
// Empty

