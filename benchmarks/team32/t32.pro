/*
//-------------------------------------------------------------------------
// Info
//-------------------------------------------------------------------------
//--------- with command line (faster)
// To mesh (create t32.msh file):
gmsh -2 t32.geo 

// To launch computation (create t32.pre & t32.res):
getdp t32.pro -solve Analysis

// Available PostOperations :
(1) Get_LocalFields      LastTimeStepOnly
(2) Get_GlobalQuantities LastTimeStepOnly
(3) Get_AllTS            AllTimeStep
(4) az_only              AllTimeStep
(5) b_only               AllTimeStep
(6) h_only               AllTimeStep

// To do PostOp after the end of the simulation (create res/*.pos res/*dat)
// use AlltimeStep postop type  
// Example: 
getdp t32.pro -pos Get_AllTS 

// To launch computation and Then
// do PostOp after the end of the simulation (create res/*.pos res/*dat)
getdp t32.pro -solve Analysis -pos Get_AllTS 

//---------

//--------- with the graphical user interface (GUI) (slower)
// To do PostOp at every Time step during simulation,
// change in t32_data.geo:
// Flag_LiveLocalPostOp_00 = 1 
// or Flag_LiveGlobalPostOp_00 = 1;
// Equivalent to Check the box "Real Time visu LocalPostOp" in the GUI

// If these Flags are set to 1, launching this:
getdp t32.pro -solve Analysis 
// Equivalent to Click on Run in the GUI
// will create PostOp results only from the LastTimeStep (create res/*.pos res/*dat)
//---------

// To visualize a .pos file result
gmsh res/*.pos

// To draw a plot with gnuplot from a .dat file result
gnuplot
plot "res/hbp_*.dat" u numcol:numcol w l
0 Time x y z hx hy 0  bx by  0
1 2    3 4 5 6  7  8  9  10  11

Examples:
plot "res/hbp_1_all.dat" u  6:9 w l   # to plot  bx(hx)
plot "res/hbp_1_all.dat" u  7:10 w l  # to plot  by(hy)
plot "res/hbp_1_all.dat" u  6:7 w l   # to plot  hy(hx)
plot "res/hbp_1_all.dat" u  9:10 w l  # to plot  by(bx)
*/

//-------------------------------------------------------------------------
// Include Data
//-------------------------------------------------------------------------

Include "t32_data.geo";

//-------------------------------------------------------------------------
// Output Directory
//-------------------------------------------------------------------------
If(Flag_3Dmodel==0)
  Dir="res/";
EndIf
If(Flag_3Dmodel==1)
  Dir="res3d/";
EndIf

//Include "param_EnergHyst.dat";
//Dir   = Sprintf("res_msh2_N%g_C%g/",N00,Flag_TestCase00);
//Dir   = Sprintf("res_JA_C%g_TD/",Flag_TestCase00);


//-------------------------------------------------------------------------
// Physical Groups
//-------------------------------------------------------------------------
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

//-------------------------------------------------------------------------
// Additional Functions
//-------------------------------------------------------------------------

Function {
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
}

//-------------------------------------------------------------------------
// Imposed Source Functions
//-------------------------------------------------------------------------
Function {
  // Phases
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

  // With hysteresis: Damped start necessary
  Trelax = 1/Freq/8;
  Frelax[] = ($Time < Trelax) ? 0.5 * (1. - Cos [Pi*$Time/Trelax] ) : 1. ;


  //pA = (Flag_AnalysisType==AN_STATIC) ? Pi/2: 0.; // Not Used
  //IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA}; // DomainB

  I1[] = ((Flag_NL_law==NL_JA ||  Flag_NL_law==NL_ENERGHYST)? Frelax[]:1) * (F_Sin_wt_p[]{2*Pi*Freq, Phase_1}+V5[]);
  I2[] = ((Flag_NL_law==NL_JA ||  Flag_NL_law==NL_ENERGHYST)? Frelax[]:1) * (F_Sin_wt_p[]{2*Pi*Freq, Phase_2}+V5[]);

}

//-------------------------------------------------------------------------
// Include Formulation, Resolution, PostOperations, ... 
//-------------------------------------------------------------------------

If(Flag_3Dmodel==0)
  Include "magstadyn_a.pro" ;
EndIf

If(Flag_3Dmodel==1)
  Include "magstadyn_avs_3d.pro" ;
EndIf
