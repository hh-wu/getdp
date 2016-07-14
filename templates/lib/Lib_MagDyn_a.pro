/*
  MagDyn_a
    Magnetodynamics - Magnetic vector potential a formulation,
*/

/* I N P U T
   ---------
  A problem index ~{.} is associated with each Group, Function, Constraint, Parameter
  (Entries between [] will be added/defined later)

  GlobalGroup :
  -----------
  Domain               Whole magnetic domain
  DomainCC             Nonconducting regions
  DomainC              Conducting regions (All)
  DomainS0             Elementary stranded inductor regions (Sources)
  DomainS              Stranded inductor regions (Sources)
 [DomainV              All regions in movement (for speed term)]
  DomainMagnet         Magnet regions

  Function :
  --------
  js0[]                    Source current density in DomainS0 (along ez)

  nu[]                     Magnetic reluctivity
  sigma[]                  Electric conductivity

  br[]                     remnant magnetic flux density in magnets

  nxh[]                    Neumann BC (along ez)

 [Velocity[]               Velocity of regions]

  Constraint :
  ----------
  MagneticVectorPotential  Fixed magnetic vector potential
                           (essential boundary condition)

  Parameters :
  ----------
  Freq                     Frequency (Hz)

  CoefPower                1 or 0.5 (in Complex with either rms or amplitude values)

  Parameters for time loop with theta scheme:
    TD_Time0, TD_TimeMax, TD_DTime[]
                             Initial time, Maximum time, Time step  (s)
    TD_Theta[]               Theta  (e.g. 1.  : Implicit Euler,
                                          0.5 : Cranck Nicholson)

*/

DefineConstant[ iP = 1 ];
DefineConstant[ Process_Lib~{iP} = 1 ];


// INIT

DefineConstant[ ResDir = "Res/" ];


/////
Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

DefineConstant[
  DimPro~{iP} = 2,

  Coef_JouleLosses~{iP} = 1. // 0.5 if Joule losses not from rms values
];

// Global Groups, Functions and Constants
Group {
  DefineGroup[ Domain~{iP}, DomainCC~{iP}, DomainC~{iP}, DomainS0~{iP} ];
  DefineGroup[ DomainMagnet~{iP}, Sur_Gh~{iP} ];

  Domain~{iP} = Region[{DomainCC~{iP}, DomainC~{iP}}];

  DomainWithSurf~{iP} = Region[ {Domain~{iP}, Sur_Gh~{iP}} ];
  DomainCWithSurf~{iP} = Region[ {DomainC~{iP}} ];
}

Function {
  DefineFunction[ nu~{iP}, sigma~{iP}, js0~{iP}, br~{iP}, nxh~{iP} ];

  DefineConstant[ Freq~{iP} = 50. ];

  // For time domain analysis (time loop)
  DefineConstant[
    TD_Time0~{iP} = 0.,
    TD_TimeMax~{iP} = 1./(Freq~{iP}? Freq~{iP} : 1)
  ];
  If (!Exists(TD_DTime~{iP}[]))
    TD_DTime~{iP}[] = TD_TimeMax~{iP}/24;
  EndIf
  If (!Exists(TD_Theta~{iP}[]))
    TD_Theta~{iP}[] = 1.;
  EndIf
}

//
Include "Lib_JacInt.pro";


//
// Same FunctionSpace for both static and dynamic formulations

FunctionSpace {
  {
    Name Hcurl_a~{iP}; Type Form1P;
    BasisFunction {
      {
        Name s_n; NameOfCoef a_n; Function BF_PerpendicularEdge;
        Support DomainWithSurf~{iP}; Entity NodesOf[All];
      }
    }
    Constraint {
      { NameOfCoef a_n;
        EntityType Auto; NameOfConstraint MagneticVectorPotential~{1}~{iP}; }
    }
  }
}


// Static Formulation
Formulation {
  {
    Name MagSta_a~{iP}; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a~{iP}; }
    }
    Equation {
      Galerkin { [ nu~{iP}[] * Dof{d a} , {d a} ];
                 In Domain~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ -js0~{iP}[] , {a} ];
                 In DomainS0~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ -nu~{iP}[] * br~{iP}[] , {d a} ];
                 In DomainMagnet~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ nxh~{iP}[] , {a} ];
                 In Sur_Gh~{iP}; Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}


// Dynamic Formulation (eddy currents)
Formulation {
  {
    Name MagDyn_a~{iP}; Type FemEquation;

    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a~{iP}; }
    }

    Equation {
      Galerkin { [ nu~{iP}[] * Dof{d a} , {d a} ];
                 In Domain~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { DtDof [ sigma~{iP}[] * Dof{a} , {a} ];
                 In DomainC~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ -js0~{iP}[] , {a} ];
                 In DomainS0~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      // Warning: No meaning in frequency domain
      Galerkin { [ -nu~{iP}[] * br~{iP}[] , {d a} ];
                 In DomainMagnet~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ nxh~{iP}[] , {a} ];
                 In Sur_Gh~{iP}; Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}


//
Resolution {
  // Frequency domain analysis (1st defined resolution: default resolution)
  { Name MagDyn_a~{iP};
    System {
      { Name Sys; NameOfFormulation MagDyn_a~{iP};
        Type ComplexValue; Frequency Freq~{iP};
      }
    }
    Operation {
      CreateDir[ResDir];
      Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
    }
  }

  // Time domain analysis
  { Name MagDyn_a_t~{iP};
    System {
      { Name Sys; NameOfFormulation MagDyn_a~{iP};
      }
    }
    Operation {
      CreateDir[ResDir];
      InitSolution[Sys]; // Always init before a time loop
      SaveSolution[Sys];
      TimeLoopTheta [ TD_Time0~{iP}, TD_TimeMax~{iP},
                      TD_DTime~{iP}[], TD_Theta~{iP}[] ] {
        Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
      }
    }
  }
}


Resolution {
  { Name MagSta_a~{iP};
    System {
      { Name Sys; NameOfFormulation MagSta_a~{iP}; }
    }
    Operation {
      CreateDir[ResDir];
      Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
    }
  }
}


// Same PostProcessing for both static and dynamic formulations
// (both refer to the same FunctionSpace from which the solution is obtained)
PostProcessing {
  { Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      // In 2D, a is a vector with only a z-component: (0,0,az)
      { Name a; Value { Term { [ {a} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }

      // The equilines of az are field lines (giving the magnetic field direction)
      { Name az;
        Value {
          Term { [ CompZ[{a}] ]; In Domain~{iP}; Jacobian Vol~{iP}; }
        }
      }

      { Name raz; Value { Term { [ X[] * CompZ[{a}] ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name b; Value { Term { [ {d a} ]; In Domain~{iP}; Jacobian Vol~{iP}; }}}

      { Name h; Value { Term { [ nu~{iP}[] * {d a} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      //+++ TODO: nu~{iP}[] * {b}

      { Name b_microT; Value { Term { [ Norm[{d a}]*1e6 ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }

      { Name js;
        Value {
          Term { [ js0~{iP}[] ]; In DomainS0~{iP}; Jacobian Vol~{iP}; }
          Term { [ Vector[0,0,0] ]; In Domain~{iP}; Jacobian Vol~{iP}; }
          // to force a vector result out of DomainS0~{iP}
        }
      }
      { Name j;
        // j in DomainC: only correct in MagDyn; should be fixed to 0 in MagSta
        Value {
          Term { [ -sigma~{iP}[] * Dt[{a}] ]; In DomainC~{iP}; Jacobian Vol~{iP}; }
          Term { [ js0~{iP}[] ]; In DomainS0~{iP}; Jacobian Vol~{iP}; }
          Term { [ Vector[0,0,0] ]; In Domain~{iP}; Jacobian Vol~{iP}; }
        }
      }

      { Name show_region;
        Value {
          Term { [ 1 ]; In DomainCC~{iP}; Jacobian Vol~{iP}; }
          Term { [ 2 ]; In DomainC~{iP}; Jacobian Vol~{iP}; }
        }
      }

      //+++
      { Name Emag ;
        Value {
          /*
	  Integral { Type Global; [ nu~{iP}[] * SquNorm[{d a}] ];
	             In Domain~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
          */
	}
      }

      //+++
      { Name Flux_S0 ;
        Value {
	  Integral { [ js0~{iP}[] * {a} ];
	             In DomainS0~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
	}
      }

      { Name JouleLosses;
        Value {
	  Integral { [ Coef_JouleLosses~{iP} * 1./sigma~{iP}[]*SquNorm[js0~{iP}[]] ];
	             In DomainS0~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

          //+++ Could be replaced by a possible more general form
          //          If (Level_Lib~{iP} < T_MAGDYN_AV_MASSIVE_CONDUCTOR_RELATION)
          Integral { [ Coef_JouleLosses~{iP} * sigma~{iP}[]*SquNorm[Dt[{a}]] ];
	             In DomainC~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            //          EndIf
	}
      }

    }
  }
}

Return
//////

//
CallTest(Process_Lib~{iP}) BaseFileName;
