Include "t32_data.geo";

//EnergHyst++:----------------- 
Flag_TestCase00 = 3; //1: - case 1: windings series connected with sinusoidal supply,
                     //2: - case 2: windings series connected with 5th harmonic added,
                     //3: - case 3: rotational flux,
                     //4: - case 4: secondary winding on load   


Flag_NLRes00 = 0; // 0: use classical IterativeLoop to solve the NL (non linear) problem
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

If(Flag_3Dmodel==0)
  Dir="res/";
EndIf
If(Flag_3Dmodel==1)
  Dir="res3d/";
EndIf

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
  Flag_ConductingCore     = {0, Choices{0,1}, Name "Input/Conducting core", Visible 0}
  Flag_VoltageTransformer = {1, Choices{0,1}, Name StrCat[ppTC, "0Voltage transformer"],
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
                "- case 4: secondary winding on load"]}, 

  Freq = {10., Name StrCat[ppAC, "Frequency"], Highlight Str[colAC2]}
  NbT  = {2, Name StrCat[ppAC, "Number of periods"],  Highlight Str[colAC2],Visible (Flag_AnalysisType==AN_TIME)}
  NbSteps = {(Flag_3Dmodel==0)?250:200, Name StrCat[ppAC, "Number of steps"], Highlight Str[colAC2], Visible (Flag_AnalysisType==AN_TIME)}

  Flag_NL_law = { (Flag_AnalysisType==AN_FREQUENCY)?NL_LIN:NL_LIN , Choices{
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
];


Group{
  Core   = # CORE;
  Air    = # AIR;
  AirInf = # AIRINF;

  If(Flag_3Dmodel==0) // 2D case
    IndB~{1} = #{(COIL+3)}; IndA~{1} = #{(COIL+2)};  Ind~{1} = Region[{IndB~{1}, IndA~{1}}];
    IndB~{2} = #{(COIL+0)}; IndA~{2} = #{(COIL+1)};  Ind~{2} = Region[{IndB~{2}, IndA~{2}}];
  EndIf
  If(Flag_3Dmodel==1) // 3D case
    Ind~{1}     = #{(COIL+1)};
    SkinInd~{1} = #{(SKINCOIL+1)};
    CutInd~{1}  = #{(COIL_CUT+1)};
    SkinHole~{1} = #{(SKINCOIL_CUT+1)};
    ElecInd~{1} = #{(ELECCOIL+1)};
    VolInInd~{1} = #{(LEG_INCOIL+1)};

    Ind~{2} = #{(COIL+0)};
    SkinInd~{2} = #{(SKINCOIL+0)};
    CutInd~{2}  = #{(COIL_CUT+0)};
    SkinHole~{2} = #{(SKINCOIL_CUT+0)};
    ElecInd~{2} = #{(ELECCOIL+0)};
    VolInInd~{2} = #{(LEG_INCOIL+0)};

    SkinInds = Region[ {SkinInd~{1}, SkinInd~{2}} ];
  EndIf

  Inds = Region[ {Ind~{1}, Ind~{2}} ];

  SurfaceGh0 = #{}; // Bnd with zero tangential magnetic field...
  SurfaceGe0 = #{}; // Bnd with zero tangential electric field

  If(Flag_3Dmodel==1)
    Surf_bn0 += Region[ {SURF_CUTXY} ];
  EndIf

  SurfaceGInf = #{SURF_AIROUT};

}

// --------------------------------------------------------------------------

Function {


  mu0 = 4.e-7 * Pi;

  // Hysteresis parameters with Jiles-Atherton hysteresis model

  hyst_FeSi = { Msat_z, a_z, k_z, c_z, alpha_z}; // rolling direction
  //hyst_FeSi = { Msat_x, a_x, k_x, c_x, alpha_x}; // transverse direction

  sigma_core = 2.5e7/1000;
  sigma_coil = 5.9e7;
  mur_fe     = 1000; // linear case

  nb_wires = 90;
  If(Flag_3Dmodel==0)
    nbInductors =2;
    For iInd In {1:nbInductors}
      NbWires[Ind~{iInd}] = nb_wires/SymmetryFactor ;

      SurfCoil[IndA~{iInd}] = SurfaceArea[];
      Idir[IndA~{iInd}] = -1;

      SurfCoil[IndB~{iInd}] = SurfaceArea[];
      Idir[IndB~{iInd}] = 1;

      vDir[Ind~{iInd}] = Vector[0,0,Idir[]] ;
      CoefGeos[Ind~{iInd}] = Idir[] * SymmetryFactor;
    EndFor
    CoefGeos[Core] = 1;
  EndIf
  If(Flag_3Dmodel==1)
    Printf("====> SymmetryFactor %g nb_wires %g", SymmetryFactor, 2*nb_wires/SymmetryFactor);

    NbWires[] = 2*nb_wires/SymmetryFactor ;// nbr of wires corresponding to half electrode

    // center
    x_1 = wcore+whole ; // Ind_1
    xc1_1 = wcore/2 + whole;
    xc1_2 = xc1_1 + wcore;

    x_2   = -x_1;
    xc2_1 = -xc1_1;
    xc2_2 = -xc1_2;

    SurfCoil[] = SurfaceArea[]{ELECCOIL+0} ;

    vDir[Ind_2] = (Fabs[Z[]]>=Lz/2 && Fabs[X[]-x_1]<=wcore/2 ) ? Vector[-1,0,0]:(
      (Fabs[Z[]]<Lz/2)? Vector[0, 0, (X[]>x_1)?-1:1 ]:
      -Vector[ -Sin[Atan2[Z[]-Lz/2, X[]-((X[]>x_1)?xc1_1:xc1_2) ]#1], 0, Cos[#1]] ) ;

    vDir[Ind_1] = (Fabs[Z[]]>=Lz/2 && Fabs[X[]-x_2]<=wcore/2 ) ? Vector[-1,0,0]:(
      (Fabs[Z[]]<Lz/2)? Vector[0, 0, (X[]>x_2)?-1:1 ]:
      -Vector[ -Sin[Atan2[Z[]-Lz/2, X[]-((X[]>x_2)?xc2_2:xc2_1) ]#1], 0, Cos[#1]] ) ;

  EndIf

  js0[] = NbWires[]/SurfCoil[]*vDir[] ;


    // Resistance for circuits
    Rp = 11.1;
    Rs = 11.1; // useful for casse 3
    Rwinding = 0.32; // Resistance of each of the windings is 0.32 (team32 measurements)
    Rload = 0.05; //useful for case 4 only

    // Phase
    Phase_1 = 0.;
    Phase_2 = Pi/2;

    // Applied voltage
    If (Flag_TestCase==1 )
      val_Voltage1 = 13.5 ; 
    EndIf
    If (Flag_TestCase==2)
      val_Voltage1 = 11.8/2 ;  // 11.8 in problem32.pdf but division by 2 to be in agreement with measurements
    EndIf
    If (Flag_TestCase==3)
      val_Voltage1 = 14.5 ; // 15 in problem32.pdf but 14.5 in measurements
      val_Voltage2 = 14.5 ;
    EndIf
    If (Flag_TestCase==4 )
      val_Voltage1 = 10.9 ; 
    EndIf

    // Harmonics
    If (Flag_TestCase==2)
      V5[] = F_Sin_wt_p[]{2*Pi*(5*Freq), Phase_1};
    Else
      V5[] = 0.;
    EndIf

  // With hysteresis: Relaxation necessary
  Trelax = 1/Freq/8;
  Frelax[] = ($Time < Trelax) ? 0.5 * (1. - Cos [Pi*$Time/Trelax] ) : 1. ;


  //pA = (Flag_AnalysisType==AN_STATIC) ? Pi/2: 0.; // Not Used
  //IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA}; // DomainB

  I1[] = ((Flag_NL_law==NL_JA ||  Flag_NL_law==NL_ENERGHYST)? Frelax[]:1) * (F_Sin_wt_p[]{2*Pi*Freq, Phase_1}+V5[]);
  I2[] = ((Flag_NL_law==NL_JA ||  Flag_NL_law==NL_ENERGHYST)? Frelax[]:1) * (F_Sin_wt_p[]{2*Pi*Freq, Phase_2}+V5[]);

}

If(Flag_3Dmodel==0)
  Include "magstadyn_a.pro" ;
EndIf

If(Flag_3Dmodel==1)
  Include "magstadyn_avs_3d.pro" ;
EndIf
