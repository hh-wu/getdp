/*
  TheSta_T
    Thermic static - Temperature T formulation
*/

/* I N P U T
   ---------

   Entries between [] will be added/defined later

  GlobalGroups :  (Extension '_The' is for Thermic problem)
  ------------
    Domain               Whole electric domain
    DomainS0             Domain with thermal source
    DomainJoule          Domain with Joule losses from MagDyn problem

    DomainV              All regions in movement (for speed (transport) term)

    SurfaceConv          Surface with convection BCs
    SurfaceRad           Surface with radiation BCs

  Function :
  --------
    lambda[]                 Thermal conductivity [W/K/m]
    rhoc[]                   Thermal capacity [J/K]
    q_source[]               Thermal source density [W/m3]

    Velocity[]               Velocity of regions

    Coef_Convection[]        Convection coefficient for BC
    Coef_Radiation[]         Radiation coefficient for BC

  Constraint :
  ----------
    Temperature              Fixed Temperature [K] or [°C]
                             (classical boundary condition)

  Parameters :
  ----------

  Parameters for time loop with theta scheme :
    The_Time0, The_TimeMax, The_DTime
                             Initial time, Maximum time, Time step  (s)
    The_Theta                Theta  (e.g. 1.  : Implicit Euler,
                                          0.5 : Cranck-Nicholson)

  Physical constants :
  ------------------
*/

/* O U T P U T
   -----------

  PostQuantities :
  --------------
   T : Temperature
   gradT : Gradient of Temperature

*/


DefineConstant[ iP = 1 ];

DefineConstant[ Process_Lib~{iP} = 1 ];

//+++ TODO!!! define different iP for Mag and The
DefineConstant[ iP_Mag = 1 ];


// INIT
DefineConstant[ ResDir = "Res/" ];

DefineConstant[ Flag_SP = 0 ];


/////
Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

DefineConstant[
  DimPro~{iP} = 3,
  FE_Degree~{iP} = 1,

  Flag_MagDyn_Thermal_Coupling~{iP} = 0,

  Flag_Static~{iP} = 0,

  Level_Lib~{iP} = 0
];

// Global Groups, Functions and Constants
Group {
  DefineGroup[
    Domain~{iP}, DomainS0~{iP}, DomainV~{iP}, SkinDomain~{iP},
    DomainJoule~{iP},

    SurfaceConv~{iP}, SurfaceRad~{iP}
  ];

  DomainWithSurf~{iP} = Region[ {Domain~{iP}, SurfaceConv~{iP}, SurfaceRad~{iP}, SkinDomain~{iP}} ];
}

Function {
  DefineFunction[
    lambda~{iP}, rhoc~{iP},
    q_source~{iP}, Velocity~{iP},
    Coef_Convection~{iP}, Temperature_Convection~{iP},
    Coef_Radiation~{iP}, Temperature_Radiation~{iP}
  ];

  // For time domain analysis (time loop)
  DefineConstant[
    TD_Time0~{iP} = 0.,
    TD_TimeMax~{iP} = 1.
  ];
  If (!Exists(TD_DTime~{iP}))
    TD_DTime~{iP}[] = TD_TimeMax~{iP}/10;
  EndIf
  If (!Exists(TD_DTime~{iP}))
    TD_Theta~{iP}[] = 1.;
  EndIf
}

//
Include "Lib_JacInt.pro";



FunctionSpace {
  {
    Name Hgrad_T~{iP}; Type Form0;

    BasisFunction {
      {
        Name s_n; NameOfCoef T_n; Function BF_Node;
        Support DomainWithSurf~{iP}; Entity NodesOf[All];
      }
    }
    Constraint {
      { NameOfCoef T_n;
        EntityType NodesOf; NameOfConstraint Temperature~{1}~{iP}; }
    }
  }
}


// Static Formulation and Resolution
Formulation {
  {
    Name TheSta_T~{iP}; Type FemEquation;
    Quantity {
      { Name T; Type Local; NameOfSpace Hgrad_T~{iP}; }
    }
    Equation {
      Galerkin { [ lambda~{iP}[] * Dof{d T} , {d T} ];
                 In Domain~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }

      Galerkin { [ - q_source~{iP}[] , {T} ];
                 In DomainS0~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }

      // Transport term
      Galerkin { [ rhoc~{iP}[{T}] * Velocity~{iP}[] * Dof{d T} , {T} ];
                 In DomainV~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }

      // Boundary condition: Convection
      Galerkin { [ Coef_Convection~{iP}[] * Dof{T} , {T} ];
                 In SurfaceConv~{iP}; Integration Gauss_v~{iP}; Jacobian Sur~{iP}; }
      Galerkin { [ -Coef_Convection~{iP}[] * Temperature_Convection~{iP}[] , {T} ];
                 In SurfaceConv~{iP}; Integration Gauss_v~{iP}; Jacobian Sur~{iP}; }
    }

    // Thermal source from coupled Formulation
    //If (Exists(Lib_MagDyn_av_ThermalCoupling))
    // If (Flag_Lib~{iP}~{Lib_MagDyn_av_ThermalCoupling})
      CallTest(Flag_MagDyn_Thermal_Coupling~{iP}) Lib_MagDyn_av_ThermalCoupling_FO_;
    // EndIf
    //EndIf

  }
}

Resolution {
  { Name TheSta_T~{iP};
    System {
      { Name Sys; NameOfFormulation TheSta_T~{iP}; }
    }
    Operation {
      InitSolution[Sys]; // For possible init temperature
      CreateDir[ResDir];
      Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
    }
  }
}

PostProcessing {
  { Name TheSta_T~{iP}; NameOfFormulation TheSta_T~{iP};
    PostQuantity {
      { Name T; Value { Term { [ {T} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name gradT; Value { Term { [ {d T} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
    }
  }
}


// Dynamic Formulation and Resolution
Formulation {
  {
    Name TheDyn_T~{iP}; Type FemEquation;
    Quantity {
      { Name T; Type Local; NameOfSpace Hgrad_T~{iP}; }
    }
    Equation {
      Galerkin { [ lambda~{iP}[{T}] * Dof{d T} , {d T} ];
                 In Domain~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }

      Galerkin { DtDof[ rhoc~{iP}[]  * Dof{T} , {T} ];
                 In Domain~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }

      Galerkin { [ - q_source~{iP}[] , {T} ];
                 In DomainS0~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }

      // Transport term (+++ not used in time domain)
      Galerkin { [ rhoc~{iP}[{T}] * Velocity~{iP}[] * Dof{d T} , {T} ];
                 In DomainV~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }

      // Boundary condition: Convection
      Galerkin { [ Coef_Convection~{iP}[] * Dof{T} , {T} ];
                 In SurfaceConv~{iP}; Integration Gauss_v~{iP}; Jacobian Sur~{iP}; }
      Galerkin { [ -Coef_Convection~{iP}[] * Temperature_Convection~{iP}[] , {T} ];
                 In SurfaceConv~{iP}; Integration Gauss_v~{iP}; Jacobian Sur~{iP}; }

      // Boundary condition: Radiation
      Galerkin { [ Coef_Radiation~{iP}[] * (({T}+273.)^4-(Temperature_Radiation~{iP}[]+273.)^4), {T}];
	         In SurfaceRad~{iP}; Integration Gauss_v~{iP}; Jacobian Sur~{iP}; }
    }

    // Thermal source from coupled Formulation
    //If (Exists(Lib_MagDyn_av_ThermalCoupling))
    // If (Flag_Lib~{iP}~{Lib_MagDyn_av_ThermalCoupling})
    CallTest(Flag_MagDyn_Thermal_Coupling~{iP}) Lib_MagDyn_av_ThermalCoupling_FO_;
    // EndIf
    //EndIf

  }
}

Resolution {
  { Name TheDyn_T_t~{iP};
    System {
      If (Flag_MagDyn_Thermal_Coupling~{iP})
        { Name Sys_Mag; NameOfFormulation MagDyn_a~{iP_Mag};
          Type ComplexValue; Frequency Freq;
        }
      EndIf
      If (Flag_Static~{iP})
        { Name Sys; NameOfFormulation TheDyn_T~{iP}; }
      Else
        { Name Sys; NameOfFormulation TheDyn_T~{iP}; }
      EndIf
    }
    Operation {
      CreateDir[ResDir];

      If (Flag_MagDyn_Thermal_Coupling~{iP})
        InitSolution[Sys_Mag];

        //This is valid when MagDyn properties (sigma, mur) do not depend on Temperature
        //... to be moved inside the TimeLoopTheta to update the MagDyn solution at each time step
        Generate[Sys_Mag]; Solve[Sys_Mag]; SaveSolution[Sys_Mag];
      EndIf

      If (Flag_Static~{iP})
        InitSolution[Sys];
        Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
      Else
        InitSolution[Sys]; SaveSolution[Sys];
        TimeLoopTheta [ TD_Time0~{iP}, TD_TimeMax~{iP},
                        TD_DTime~{iP}[], TD_Theta~{iP}[] ] {
          Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
        }
      EndIf

    }
  }
}

PostProcessing {
  { Name TheDyn_T~{iP}; NameOfFormulation TheDyn_T~{iP};
    PostQuantity {
      { Name T; Value { Term { [ {T} ]; In DomainWithSurf~{iP}; Jacobian Vol~{iP}; } } }
      { Name gradT; Value { Term { [ {d T} ]; In DomainWithSurf~{iP}; Jacobian Vol~{iP}; } } }
    }
  }
}


//
If (FE_Degree~{iP} == 2)
FunctionSpace {
  {
    Append;
    Name Hgrad_T~{iP}; Type Form0;

    BasisFunction {
      {
        Name s_e; NameOfCoef T_e; Function BF_Node_2E;
        Support DomainWithSurf~{iP}; Entity EdgesOf[All];
      }
    }
    Constraint {
      { NameOfCoef T_e;
        EntityType EdgesOf; NameOfConstraint Temperature~{0}~{iP}; }
    }

  }
}
EndIf


Return
//////

//
CallTest(Process_Lib~{iP}) Str[BaseFileName];
