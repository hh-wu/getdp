/*
  Vectorized Jiles-Atherton hysteresis model
  J. Gyselinck, P. Dular, N. Sadowski, J. Leite and J.P.A. Bastos,
  "Incorporation of a Jiles-Atherton vector hysteresis model in
  2D FE magnetic field computations. Application of the Newton-Raphson method",
  Vol. 23, No. 3, pp. 685-693, 2004.

gmsh -2 Vinch2D.geo
getdp -v 3 Vinch2D.pro -solve NonLinTime -pos Map_Vinch2D
getdp -v 3 Vinch2D.pro -solve Res_Test -pos Pos_Test
gmsh res_Vinch2D/h.pos res_Vinch2D/b.pos res_Vinch2D/hr.pos
gmsh res_Vinch2D/h.pos res_Vinch2D/b.pos res_Vinch2D/J.pos
gnuplot
plot u "res_Vinch2D/hb.dat" n1:n2 w l
hx hy Jx bx by  Jy
6  7  8  9  10  11
plot "res_Vinch2D/hb.dat" u  6:8 w l
plot "res_Vinch2D/hb.dat" u  6:9 w l
*/

Include "square.dat";

//EnergHyst++:----------------- 
Flag_TestCase00 = 3; //1: - case 1: windings series connected with sinusoidal supply,
                     //2: - case 2: windings series connected with 5th harmonic added,
                     //3: - case 3: rotational flux,
                     //4: - case 4: secondary winding on load   

Flag_NLRes00 = 1; // 0: use classical IterativeLoop to solve the NL (non linear) problem
                  // 1: use IterativeLoopN to solve the NL (non linear) problem
                  // 2: solve the NL (non linear) problem "by hand"

// non linear loop default parameters
Nb_max_iter00       = 50;
stop_criterion00    = 1e-5;
relaxation_factor00 = 1;
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

// Useful Constant--------------
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
//------------------------------

ExtGmsh     = ".pos";
//ExtGnuplot  = "_Td.dat";// transverse direction
ExtGnuplot  = ".dat";// rolling direction

ppNL="Input/50NonLinear Iterations/";
ppTC="Input/30Excitation Source/";
ppAC="Input/40Analysis Set Up/";
colNL1="Blue";
colNL2="Blue2";
colNL3="LightBlue4";
colNL4 ="Blue4";
colAC1="Green2"; 
colAC2 ="Green4";

DefineConstant[
  Flag_AnalysisType = { AN_TIME, Choices{AN_STATIC="Static", AN_TIME="Time domain", AN_FREQUENCY="Frequency domain"},
    Name StrCat[ppAC, "2Type of analysis"], Highlight Str[colAC1],
    Help Str["- Use 'Static' to compute static fields created in TFO",
      "- Use 'Time domain' to compute the dynamic response of TFO",
      "- Use 'Frequency domain' to compute the dynamic steady-state response of TFO"
    ]},
  Freq = {1., Name StrCat[ppAC, "Frequency"], Highlight Str[colAC2]}
  NbT  = {2, Name StrCat[ppAC, "Number of periods"],  Highlight Str[colAC2],Visible (Flag_AnalysisType==AN_TIME)}
  NbSteps = {200, Name StrCat[ppAC, "Number of steps"], Highlight Str[colAC2], Visible (Flag_AnalysisType==AN_TIME)}

  Flag_NL_law = { (Flag_AnalysisType==AN_FREQUENCY)?NL_LIN:NL_ENERGHYST , Choices{
      NL_LIN="linear",
      NL_ANA="analytical",
      NL_ANA_JA="anhysteretic part of JA-model",
      NL_JA="Jiles-Atherton hysteresis model",
      NL_ENERGHYST="EnergHyst model"}, Name "Input/50Magnetic material law", ReadOnly (Flag_AnalysisType==2)}
  Flag_NL = (Flag_NL_law!=0)

// Non Linear Parameters ---------------------------------   
  Flag_NLRes = { (Flag_AnalysisType!=AN_TIME)? NLRES_ITERATIVELOOP:Flag_NLRes00  , Choices {
      NLRES_ITERATIVELOOP ="IterativeLoop",
      NLRES_ITERATIVELOOPN ="IterativeLoopN",
      NLRES_ITERATIVELOOPPRO ="IterativeLoopPro"}, Name StrCat[ppNL, "0Resolution type"], Highlight Str[colNL1], Visible Flag_NL ,ReadOnly (Flag_AnalysisType!=AN_TIME),
      Help Str["- Use 'IterativeLoop' to solve the NL (non linear) problem with classical IterativeLoop Operation",
               "- Use 'IterativeLoopN' to solve the NL (non linear) problem with IterativeLoopN Operation",
               "- Use 'IterativeLoopPro' to solve the NL (non linear) problem 'by hand'"]},

  Nb_max_iter = {Nb_max_iter00, Name StrCat[ppNL, "1Nb max iter"], Highlight Str[colNL4], Visible Flag_NL}
  stop_criterion = {stop_criterion00, Name StrCat[ppNL, "2stop criterion"], Highlight Str[colNL2], Visible (Flag_NL && Flag_NLRes==NLRES_ITERATIVELOOP)}
  Reltol_Mag = {Reltol_Mag00, Name StrCat[ppNL, "2Reltol"], Highlight Str[colNL2], Visible (Flag_NL && (Flag_NLRes==NLRES_ITERATIVELOOPN || Flag_NLRes==NLRES_ITERATIVELOOPPRO) && Flag_AnalysisType==AN_TIME)}
  Abstol_Mag = {Abstol_Mag00, Name StrCat[ppNL, "2Abstol"], Highlight Str[colNL2], Visible (Flag_NL && (Flag_NLRes==NLRES_ITERATIVELOOPN || Flag_NLRes==NLRES_ITERATIVELOOPPRO) && Flag_AnalysisType==AN_TIME)}
  Reltoldx_Mag = {Reltoldx_Mag00, Name StrCat[ppNL, "2Reltoldx"], Highlight Str[colNL2], Visible (Flag_NL && Flag_NLRes==NLRES_ITERATIVELOOPPRO  && Flag_AnalysisType==AN_TIME)}
  Abstoldx_Mag = {Abstoldx_Mag00, Name StrCat[ppNL, "2Abstoldx"], Highlight Str[colNL2], Visible (Flag_NL && Flag_NLRes==NLRES_ITERATIVELOOPPRO  && Flag_AnalysisType==AN_TIME)}


  Flag_AdaptRelax = {Flag_AdaptRelax00, Choices{0,1}, Name StrCat[ppNL, "3Adaptive Relaxation (or not)"], Highlight Str[colNL3], Visible (Flag_NL && Flag_AnalysisType==AN_TIME)}

  relaxation_factor = {relaxation_factor00, Name StrCat[ppNL, "4relaxation factor"], Help Str["'1' = no relaxation"],Highlight Str[colNL3], Visible (Flag_NL && !Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}

  relax_max = {relax_max00, Min 0.001, Max 1., Name StrCat[ppNL, "4maximal relaxation factor"], Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}
  relax_min = {relax_min00, Min 0.001, Max 1., Name StrCat[ppNL, "5minimal relaxation factor"], Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}
  relax_numtest = {relax_numtest00, Min 2, Max 100, Name StrCat[ppNL, "6number of relaxation factors to test"], Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME)}

  TestAllFactors = {TestAllFactors00, Choices{0,1}, Name StrCat[ppNL, "7Test All Factors (or not)"], Highlight Str[colNL3], Visible (Flag_NL && Flag_AdaptRelax && Flag_AnalysisType==AN_TIME),
  Help Str["0: Keep the last factor that induced a decrease in the residual",
           Sprintf("1: Test all %g factors and keep the optimal one", relax_numtest)]}

  // PostOP
  Flag_LiveLocalPostOp = {1, Choices{0,1}, Name "Input/Real Time visu LocalPostOp", Visible 1}
  Flag_LiveGlobalPostOp = {0, Choices{0,1}, Name "Input/Real Time visu GlobalPostOp", Visible 0}


];


Function {


  mu0 = 4.e-7 * Pi;

  // Hysteresis parameters with Jiles-Atherton hysteresis model

  hyst_FeSi = { Msat_z, a_z, k_z, c_z, alpha_z}; // rolling direction
  //hyst_FeSi = { Msat_x, a_x, k_x, c_x, alpha_x}; // transverse direction

  sigma_core = 2.5e7/1000;
  sigma_coil = 5.9e7;
  mur_fe     = 1000; // linear case


  // With hysteresis: Relaxation necessary
  Trelax = 1/Freq/8;
  Frelax[] = ($Time < Trelax) ? 0.5 * (1. - Cos [Pi*$Time/Trelax] ) : 1. ;
  phase=phase_00;

  hx[] = Frelax[] * (hax * Complex_MH[1,0]{Freq} + haharmx * Complex_MH[1,0]{freqharm}) ;
  hy[] = Frelax[] * (hay0 + hay * Complex_MH[Cos[phase],Sin[phase]]{Freq} + haharmy * Complex_MH[Cos[phase],Sin[phase]]{freqharm});
  hhh[] = Vector[hx[],hy[],0]   ;
  bbb[] = hhh[]/ha_00;

  nxh[] = (Tangent[]*hhh[])*Vector[0,0,1] ; // Source magnetic field = current layer imposed on the outer boundary of the domain


}


Dir   = "res/";
//Dir_t = "res_square/split_t/";

Group {
  Corner   = Region[{11}];
  Air=Region[{}];
  AirInf=Region[{}];
  Inds = Region[{}];
  Boundary = Region[{15}];
  Iron     = Region[{16}];
  Core     = Region[{16}];
  //DummyR = #54321 ; // dummy group (for being able to use Store's)
}

num_postop_points=1;
d = THICKNESS_00;
ypos_1 = d/2;
xpos_1 = d/2;

Include "magstadyn_a.pro";

//--------------------------------
// Additionnal PostOperations ...
//--------------------------------

ExtGmsh = ".pos";
//ExtData = Str[Sprintf("_ha%g_p%g.dat", ha, phase*180/Pi)] ;
ExtData = ".dat";
  
PostOperation {
  { Name Map_square2D ; NameOfPostProcessing MagStaDyn_a_2D ;
    Operation {
      If(1) // Slow post-pro
        Print[ az, OnElementsOf Domain, File StrCat[Dir,StrCat["a",ExtGmsh]] ] ;
        Print[ b,  OnElementsOf Domain, File StrCat[Dir, "b", ExtGmsh] ] ;
        Print[ h,  OnElementsOf Domain, File StrCat[Dir, "h", ExtGmsh] ] ;
      EndIf
/*
      If (Flag_NL_law == NL_ENERGHYST)
        If(FLAG_VARORDIFF==1)
          Print[ J,  OnElementsOf Domain, File StrCat[Dir, "J", ExtGmsh] ] ;
        EndIf
        If(FLAG_VARORDIFF==2)
          Print[ hr,  OnElementsOf Domain, File StrCat[Dir, "hr", ExtGmsh] ] ;
        EndIf
      EndIf
*/
    For k In {1:num_postop_points}
      Print[ hb, OnPoint {xpos~{k},ypos~{k},0}, Format TimeTable,
        File > StrCat[Dir,Sprintf("hbp_%g",k),ExtGnuplot] ];
    EndFor
/*
      Print[ hproj, OnPoint {d/2,d/2,0}, File StrCat[Dir, "hproj", ExtData] , Format TimeTable] ;
      Print[ bproj, OnPoint {d/2,d/2,0}, File StrCat[Dir, "bproj", ExtData] , Format TimeTable] ;
      Print[ Jproj, OnPoint {d/2,d/2,0}, File StrCat[Dir, "Jproj", ExtData] , Format TimeTable] ;
*/
    }
  }
}