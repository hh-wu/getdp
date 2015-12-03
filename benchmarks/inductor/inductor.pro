// Common to 2D and 3D

Include "inductor_data.geo";

If(Flag_3Dmodel==0)
  Dir="res/";
EndIf
If(Flag_3Dmodel==1)
  Dir="res3d/";
EndIf

ExtGmsh     = ".pos";
ExtGnuplot  = ".dat";

DefineConstant[
  Flag_AnalysisType = { 0,  Choices{0="Static",  1="Time domain", 2="Frequency domain"},
    Name "Input/20Type of analysis",  Highlight "Blue",
    Help Str["- Use 'Static' to compute static fields created in the inductor",
      "- Use 'Time domain' to compute the dynamic, time-domain response of the inductor",
      "- Use 'Frequency domain' to compute the dynamic, time-harmonic response of the inductor"]},

  Flag_BC_Type = {1, Choices{0="Neumann",1="Dirichlet"}, ReadOnly (Flag_Infinity==1),
    Name "Input/20Boundary condition at infinity",
    Highlight "Blue"},

  Flag_NL = { 0, Choices{0,1},
              Name "Input/40Nonlinear BH-curve", ReadOnly (Flag_AnalysisType==2)}
  Flag_ConductingCore = { (Flag_AnalysisType==2), Choices{0,1},
    Name "Input/40Conducting core", ReadOnly (Flag_AnalysisType==0)}
];

Group {
  CoreE = Region[ {ECORE} ];
  CoreI = Region[ {ICORE} ];
  Core = Region[ {CoreE, CoreI} ];

  Ind_1      = Region[{COIL}] ;

  If (Flag_3Dmodel==0)
    Ind_1_ = Region[{(COIL+1)}] ;
    Inds   = Region[ {Ind_1, Ind_1_} ];
  EndIf
  If (Flag_3Dmodel==1)
    SkinInd_1  = Region[{SKINCOIL}] ;
    SkinHole_1 = Region[{SKINCOIL_}] ;
    ElecInd_1 = Region[{SURF_ELEC0}] ;
    CutInd_1  = Region[{CUTCOIL}] ;
    VolInInd_1  = Region[{LEG_INCOIL}] ;

    SkinInds = Region[ {SkinInd_1} ];
    Inds  = Region[ {Ind_1} ];
    If(Flag_ConductingCore)
      SkinCoreE = Region[ {SKINECORE} ];
      SkinCoreI = Region[ {SKINICORE} ];
      SkinCore = Region[{SkinCoreE, SkinCoreI}];
    EndIf
  EndIf

  AirGap = Region[ AIRGAP ];

  Air  = Region[ AIR ];
  AirInf = Region[ AIRINF ];

  If(Flag_OpenCore)
    Air  += Region[ {AirGap} ];
  EndIf
  If(!Flag_OpenCore)
    Core += Region[ {AirGap} ];
  EndIf

 // Surfaces for imposing boundary conditions
 If(Flag_BC_Type==1)
   Surf_Inf = Region[ SURF_AIROUT ];
 EndIf
 If(Flag_Symmetry)
   If(Flag_3Dmodel==0)
     Surf_bn0 = Region[ {AXIS_Y} ];
   EndIf
   If(Flag_3Dmodel==1)
     Surf_bn0 = Region[ {CUT_YZ, CUT_XY} ];
   EndIf
 EndIf
}

Function {
  DefineConstant[
    Freq = { 50., Min 0, Max 1e3, Step 1,
      Name "Input/21Frequency [Hz]", Highlight "AliceBlue",
      Visible Flag_AnalysisType},
    Irms = { IA, Min 1, Max 4*IA, Step 2,
      Name "Input/4Coil Parameters/0Current (rms) [A]", Highlight "AliceBlue"},
    NbWires = { Nw,
      Name "Input/4Coil Parameters/1Number of turns", Highlight "AliceBlue"}
  ];
  II = Irms *Sqrt[2] ;

  NbWires[]  = NbWires ;

  If(Flag_3Dmodel==0)
    SurfCoil[] = SurfaceArea[]{COIL} ;
    Idir[#{COIL}]     =  1. ;
    Idir[#{(COIL+1)}] = -1. ;
    vDir[]   = Vector[ 0, 0, Idir[]] ;
  EndIf
  If(Flag_3Dmodel==1)
    SurfCoil[] = SurfaceArea[]{SURF_ELEC0} ;
    vDir[] = (
      (Fabs[X[]]<=wcoreE && Z[]>= Lz/2) ? Vector [1, 0, 0]:
      (Fabs[X[]]<=wcoreE && Z[]<=-Lz/2) ? Vector [ -1, 0, 0]:
      (Fabs[Z[]]<=Lz/2   && X[]>= wcoreE) ? Vector [ 0, 0, -1]:
      (Fabs[Z[]]<=Lz/2   && X[]<=-wcoreE) ? Vector [ 0, 0,  1]:
      (X[]>wcoreE && Z[]>Lz/2)  ? Vector [Sin[Atan2[Z[]-Lz/2,X[]-wcoreE]#1], 0, -Cos[#1]]:
      (X[]>wcoreE && Z[]<-Lz/2) ? Vector [Sin[Atan2[Z[]+Lz/2,X[]-wcoreE]#1], 0, -Cos[#1]]:
      (X[]<-wcoreE && Z[]>Lz/2) ? Vector [Sin[Atan2[Z[]-Lz/2,X[]+wcoreE]#1], 0, -Cos[#1]]:
      Vector [Sin[Atan2[Z[]+Lz/2,X[]+wcoreE]#1], 0, -Cos[#1]] );
  EndIf

  pA = (Flag_AnalysisType==0) ? Pi/2: 0.;
  IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA}; // DomainB
  js0[] = NbWires[]/SurfCoil[] * vDir[] ;

  // Material properties
  mu0 = 4.e-7 * Pi ;

  // Use if linear problem
  DefineConstant[
    sigma_core = { 1e5/10, Label "Core conductivity [S/m]",
                   Name "Input/44Core Conductivity", Highlight "AliceBlue", Visible Flag_ConductingCore},
    sigma_coil = { sigma_cu, Label "Conductivity [S/m]",
      Name "Input/4Coil Parameters/5Conductivity", Highlight "AliceBlue"},
    mur_fe = { 2000., Min 100, Max 2000, Step 100,
      Name "Input/42Core relative permeability", Highlight "AliceBlue",
      Visible (!Flag_NL)},
    sigma_core = { 1e4, Label "Core conductivity [S/m]",
      Name "Input/43Core conductivity", Highlight "AliceBlue",
      Visible Flag_ConductingCore}
  ];

  // Reluctance of the simplified magnetic circuit (neglecting leakage and frindging)
  For k In {0:2}
    Reluctance~{k}[] = Rm~{k};// [A/Wb]
    Inductance~{k}[] = NbWires[]*NbWires[]/Reluctance~{k}[]*1e3;// [mH]
  EndFor
 }

 If(Flag_3Dmodel==0)
   Include "magstadyn_a.pro" ;
 EndIf
 If(Flag_3Dmodel==1)
   Include "magstadyn_avs_3d.pro" ;
 EndIf
