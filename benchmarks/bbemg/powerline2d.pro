Include "powerline2d_param.geo";

DefineConstant[
  Flag_AnalysisType = {0,  Choices{0="Magnetic",  1="Electric"},
    Name "Parameters/00Type of analysis", Highlight "Blue",
    Help Str["- Use 'Magnetic' to compute the magnetic field created by the power line",
      "- Use 'Electric' to compute the electric field created by the power line"]}
  r_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0}
  c_ = {"-solve", Name "GetDP/9ComputeCommand", Visible 0},
  p_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

Group {
  Air = Region[ {100} ];
  AirInf = Region[ {101} ];
  For k In {1 : 7}
    Ind~{k} = Region[ {k} ] ;
    Inds += Region[ {k} ] ;
  EndFor

  // magnetodynamics (overkill ;-)
  SurfaceGe0 = Region[ {102} ]; // n.b=0 on this boundary
  DomainInf = Region[{AirInf}];
  DomainCC_Mag = Region[ {Air, AirInf, Inds} ];
  DomainC_Mag = Region[ {} ];
  DomainS0_Mag = Region[ {Inds} ];
  Domain_Mag = Region[ {DomainCC_Mag, DomainC_Mag} ];

  // electrostatics
  DomainCC_Ele = Region[ {Air, AirInf, Inds} ];
}

Function {
  mu0 = 4.e-7 * Pi;
  nu [ Region[{Air, AirInf, Inds}] ]  = 1. / mu0;
  sigma [ Inds ]  = 5.9e7;
  epsr[] = 1;
  Freq = 50;

  DefineConstant[
    I = {175, Name "Parameters/Max. current [A]"}
    // "terne transpose" R S T, T S R
    phase_1 = {0,   Name "Parameters/Phase 1 [deg]"}
    phase_2 = {120, Name "Parameters/Phase 2 [deg]"}
    phase_3 = {240, Name "Parameters/Phase 3 [deg]"}

    phase_4 = {240, Name "Parameters/Phase 4 [deg]"}
    phase_5 = {120, Name "Parameters/Phase 5 [deg]"}
    phase_6 = {0,   Name "Parameters/Phase 6 [deg]"}

    V = {70e3, Name "Parameters/Max. voltage [V]"}
  ];

  For k In {1: 6}
    js0[ Ind~{k} ] = Vector[0,0,1] * I / SurfaceArea[] *
                         F_Cos_wt_p[]{2*Pi*Freq, phase~{k}*2*Pi/360 } ;
  EndFor
  js0[ Ind~{7} ] = 0.;

  CoefGeos[] = 1; // 2D planar

  // for jacobian
  Val_Rint = rair;
  Val_Rext = rair + dair;

  // second order calculation
  Flag_Degree_a = 2;
  Flag_Degree_v = 2;
}

Constraint {
  { Name MagneticVectorPotential_2D ;
    Case {
      { Region SurfaceGe0  ; Value 0. ; }
    }
  }
  { Name Voltage_2D ;
    Case {
    }
  }
  { Name Current_2D ;
    Case {
    }
  }
}

Constraint {
  { Name ElectricScalarPotential ;
    Case {
      For k In {1:6}
      { Region Ind~{k}  ; Value V ;
        TimeFunction F_Cos_wt_p[]{2*Pi*Freq, phase~{k}*2*Pi/360}; }
      EndFor
      { Region Ind~{7}  ; Value 0 ; }
      { Region SurfaceGe0  ; Value 0 ; }
    }
  }
  { Name ZeroElectricScalarPotential ;
    Case {
      For k In {1:6}
      { Region Ind~{k}  ; Value 0 ; }
      EndFor
      { Region Ind~{7}  ; Value 0 ; }
      { Region SurfaceGe0  ; Value 0 ; }
    }
  }
}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "Mag_Sta_Dyn_a_2D.pro"
Include "Ele_Sta_v.pro"

Resolution {
  { Name Analysis ;
    System {
      { Name Sys_Mag ; NameOfFormulation Magnetodynamics_av_2D ;
        Type Complex ; Frequency Freq ; }
      { Name Sys_Ele; NameOfFormulation Electrostatics_v;
        Type Complex; Frequency Freq ; }
    }
    Operation {
      CreateDir["res"];
      If(Flag_AnalysisType == 0)
        Generate[Sys_Mag] ; Solve[Sys_Mag] ; SaveSolution[Sys_Mag] ;
        PostOperation[Mag_Maps] ;
        PostOperation[Mag_Cuts] ;
      EndIf
      If(Flag_AnalysisType == 1)
        Generate[Sys_Ele]; Solve[Sys_Ele]; SaveSolution[Sys_Ele];
        PostOperation[Ele_Maps] ;
        PostOperation[Ele_Cuts] ;
      EndIf
    }
  }
}

PostOperation{
  { Name Mag_Maps; NameOfPostProcessing MagDyn_av_2D;
    Operation {
      /*
      Print[ I, OnElementsOf DomainS_Mag, File "res/I.pos"] ;
      Print[ az, OnElementsOf Air, File "res/a.pos"] ;
      Echo[Str["View[PostProcessing.NbViews-1].RangeType = 3;" ,// per timestep
           "View[PostProcessing.NbViews-1].IntervalsType = 1;" // iso
         ], File "res/a.opt"];
      */
      Print[ bm , OnElementsOf Air , Name "|B| [T]", File "res/bm.pos"] ;
      Echo[Str["View[PostProcessing.NbViews-1].ScaleType = 2;", // log
          "View[PostProcessing.NbViews-1].RangeType = 3;" ,// per timestep
          "View[PostProcessing.NbViews-1].ShowTime = 0;",
          "View[PostProcessing.NbViews-1].IntervalsType = 3;" // filled iso
        ], File "res/bm.opt"];
    }
  }
  { Name Mag_Cuts; NameOfPostProcessing MagDyn_av_2D;
    Operation {
      Print[ bm , OnLine { {-50,1.5,0} {50,1.5,0} } {100},
        Name "|B| at 1.5m above ground [T]", File "res/bm_cut.pos"] ;
      Echo[Str["View[PostProcessing.NbViews-1].Type = 4;", // 2D
          "View[PostProcessing.NbViews-1].Axes = 3;",
          "View[PostProcessing.NbViews-1].AutoPosition = 2;" ,// top left
          "View[PostProcessing.NbViews-1].ShowTime = 0;",
          "View[PostProcessing.NbViews-1].NbIso = 5;"
        ], File "res/bm_cut.opt"];
    }
  }
}

PostOperation{
  { Name Ele_Maps; NameOfPostProcessing EleSta_v;
    Operation {
      //Print[ v, OnElementsOf Air, File "res/v.pos"] ;
      Print[ em, OnElementsOf Air, Name "|E| [V/m]", File "res/e.pos"] ;
      Echo[Str["View[PostProcessing.NbViews-1].ScaleType = 2;", // log
          "View[PostProcessing.NbViews-1].RangeType = 3;" ,// per timestep
          "View[PostProcessing.NbViews-1].ShowTime = 0;",
          "View[PostProcessing.NbViews-1].IntervalsType = 3;" // filled iso
        ], File "res/em.opt"];
    }
  }
  { Name Ele_Cuts; NameOfPostProcessing EleSta_v;
    Operation {
      Print[ em , OnLine { {-50,1.5,0} {50,1.5,0} } {100},
        Name "|E| at 1.5m above ground [V/m]", File "res/em_cut.pos"] ;
      Echo[Str["View[PostProcessing.NbViews-1].Type = 4;",
          "View[PostProcessing.NbViews-1].Axes = 3;",
          "View[PostProcessing.NbViews-1].AutoPosition = 2;", // top right
          "View[PostProcessing.NbViews-1].ShowTime = 0;",
          "View[PostProcessing.NbViews-1].NbIso = 5;"
        ],
        File "res/em_cut.opt"];
    }
  }
}

