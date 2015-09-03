/*
  MagDyn_av_2D
    Magnetodynamics - Magnetic vector potential and
    electric scalar potential a-v formulation (2D),
    with massive and stranded inductors
    and electrical circuit coupling
*/

/* I N P U T
   ---------

  GlobalGroup :  (Extension '_Mag' is for Magnetic problem)
  -----------
    Domain_Mag               Whole magnetic domain
    DomainCC_Mag             Nonconducting regions
    DomainC_Mag              Conducting regions (All)
    DomainS_Mag              Stranded inductor regions (Sources)
    DomainS0_Mag             Elementary stranded inductor regions (Sources)
   [DomainV_Mag              All regions in movement (for speed term)]
   [DomainMagnet_Mag         Magnet regions]

  Function :
  --------
    js0[]                    Source current density in DomainS0_Mag

    nu[]                     Magnetic reluctivity
    sigma[]                  Electric conductivity

   [Velocity[]               Velocity of regions]

   [br[]                     remnant magnetic flux density in magnets]

  Constraint :
  ----------
    MagneticVectorPotential_2D
                             Fixed magnetic vector potential (2D)
                             (essential boundary condition)

    Voltage_2D               Fixed voltage
    Current_2D               Fixed current

    Convention: voltage and current are given the same reference direction
                (e.g. leads to 'voltage+resistance*current=0' in a resistance)

  Parameters :
  ----------
    Freq                     Frequency (Hz)

    CoefGeos[]               In case of some symmetries (e.g. 2*Pi for Axi)
    CoefGeo                  Single value considered in any CoefGeos[.] if
                             Flag_CoefGeos == 0
    Flag_CoefGeos            see above

    FE_Degree                Interpolation degree of 'a', if > 1, change the number
                             of Gauss integration points

    Flag_CircuitCoupling     Circuit coupling (1) or not (0)

    CoefPower                1 or 0.5 (in Complex with either rms or amplitude values)

  Parameters for time loop with theta scheme :
    Mag_Time0, Mag_TimeMax, Mag_DTime
                             Initial time, Maximum time, Time step  (s)
    Mag_Theta                Theta  (e.g. 1.  : Implicit Euler,
                                          0.5 : Cranck Nicholson)
  ]
*/

////////////////////////////////////////////////////////////////////////////////
// Global Groups, Functions and Constants
Group {
  DefineGroup[ Domain_Mag, DomainCC_Mag, DomainC_Mag, DomainS0_Mag, DomainS_Mag ];
  DefineGroup[ Sur_FluxTube_Mag ];

  DomainWithSurf_Mag = Region[ {Domain_Mag, Sur_FluxTube_Mag} ];
}
Function {
  DefineFunction[ nu, sigma, js0, nxh ];

  DefineVariable[ Flag_CircuitCoupling = 0 ];
  DefineVariable[ CoefPower = 0.5 ];

  DefineConstant[ Flag_CoefGeos = 0, CoefGeo = 1. ];
  DefineFunction[ CoefGeos ];

  DefineFunction[ Ns, Sc ];

  DefineConstant[ Freq = 50. ];

  DefineConstant[ Mag_Time0 = 0., Mag_TimeMax = 1./Freq ];
  DefineConstant[ Mag_DTime = Mag_TimeMax/24, Mag_Theta = 1. ]; // Could be defined as functions as well

  DefineConstant[
    time0 = 0,
    timemax = 1,
    delta_time = 0.01
  ];

  DefineConstant[ ResDir = "Res/" ];

  DefineConstant[
    Coef_JouleLosses = 1. // 0.5 if Joule losses from rms values
  ];
}

DefineConstant[
  FE_Degree = 1, // Will be 1 if not defined before
];

//+++
If (!Flag_CoefGeos)
  Function {
    CoefGeos[Region[{DomainC_Mag, -DomainS_Mag}]] = CoefGeo;
    CoefGeos[Region[{DomainS_Mag}]] = CoefGeo;
    // Split because possible regions in both DomainC_Mag and DomainS_Mag
  }
EndIf

If (Flag_CircuitCoupling)
  Group {
    DefineGroup[ DomainZt_Cir, DomainSource_Cir,
                 Resistance_Cir, Inductance_Cir, Capacitance_Cir, Diode_Cir,
	         Capacitance1_Cir, Capacitance2_Cir ] ;
  }
  Function {
    DefineFunction[ Resistance, Inductance, Capacitance ] ;
  }
EndIf


// Same FunctionSpace for both static and dynamic formulations

FunctionSpace {
  {
    Name Hcurl_a_2D; Type Form1P;
    BasisFunction {
      {
        Name s_n; NameOfCoef a_n; Function BF_PerpendicularEdge;
        Support DomainWithSurf_Mag; Entity NodesOf[All];
      }
      If (FE_Degree == 2)
        {
          Name s_e; NameOfCoef a_e; Function BF_PerpendicularEdge_2E;
          Support Domain_Mag; Entity EdgesOf[All];
        }
      EndIf
    }
    Constraint {
      { NameOfCoef a_n;
        EntityType NodesOf; NameOfConstraint MagneticVectorPotential_2D~{1}; }
      If (FE_Degree == 2)
        { NameOfCoef a_e;
          EntityType EdgesOf; NameOfConstraint MagneticVectorPotential_2D~{0}; }
      EndIf
    }
  }
}

FunctionSpace {
  // Gradient of Electric scalar potential (2D)
  { Name Hregion_u_Mag_2D ; Type Form1P ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_RegionZ ;
        Support DomainC_Mag ; Entity DomainC_Mag ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ;
        EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef I ;
        EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }
}

FunctionSpace {
  // Current in stranded coil (2D)
  { Name Hregion_i_Mag_2D ; Type Vector ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_RegionZ ;
        Support DomainS_Mag ; Entity DomainS_Mag ; }
    }
    GlobalQuantity {
      { Name Is ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Us ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      //+++
      { NameOfCoef ir ;
        EntityType Region ; NameOfConstraint Current_2D ; }
      { NameOfCoef Us ;
        EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef Is ;
        EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }
}

//+++
If (Flag_CircuitCoupling)
  // UZ and IZ for impedances
  FunctionSpace {
    { Name Hregion_Z ; Type Scalar ;
      BasisFunction {
        { Name sr ; NameOfCoef ir ; Function BF_Region ;
          Support DomainZt_Cir ; Entity DomainZt_Cir ; }
      }
      GlobalQuantity {
        { Name Iz ; Type AliasOf        ; NameOfCoef ir ; }
        { Name Uz ; Type AssociatedWith ; NameOfCoef ir ; }
      }
      Constraint {
        { NameOfCoef Uz ;
          EntityType Region ; NameOfConstraint Voltage_Cir ; }
        { NameOfCoef Iz ;
          EntityType Region ; NameOfConstraint Current_Cir ; }
      }
    }
  }
EndIf

// Static Formulation and Resolution
Formulation {
  {
    Name MagSta_a_2D; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_2D; }

      { Name ir ; Type Local  ; NameOfSpace Hregion_i_Mag_2D ; }
      { Name Is ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Is] ; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ];
                 In Domain_Mag; Jacobian Vol; Integration Gauss_v; }

      Galerkin { [ -js0[] , {a} ];
                 In DomainS0_Mag; Jacobian Vol; Integration Gauss_v; }

      // js[0] should be of the form: Ns[]/Sc[] * Vector[0,0,1]
      Galerkin { [ - (js0[]*Vector[0,0,1]) * Dof{ir} , {a} ] ; In DomainS_Mag ;
                 Jacobian Vol ; Integration Gauss_v ; }

     Galerkin { [ nxh[] , {a} ];
                 In Sur_FluxTube_Mag; Jacobian Sur; Integration Gauss_v; }
    }
  }
}

// Dynamic Formulation (eddy currents) and Resolution
Formulation {
  {
    Name MagDyn_a_2D; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_2D; }

      { Name ur; Type Local ; NameOfSpace Hregion_u_Mag_2D; }
      { Name I ; Type Global; NameOfSpace Hregion_u_Mag_2D [I]; }
      { Name U ; Type Global; NameOfSpace Hregion_u_Mag_2D [U]; }

      { Name ir; Type Local ; NameOfSpace Hregion_i_Mag_2D ; }
      { Name Us; Type Global; NameOfSpace Hregion_i_Mag_2D [Us]; }
      { Name Is; Type Global; NameOfSpace Hregion_i_Mag_2D [Is]; }

      If (Flag_CircuitCoupling)
        { Name Uz ; Type Global ; NameOfSpace Hregion_Z [Uz] ; }
        { Name Iz ; Type Global ; NameOfSpace Hregion_Z [Iz] ; }
      EndIf
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ];
                 In Domain_Mag; Jacobian Vol; Integration Gauss_v; }

      Galerkin { DtDof [ sigma[] * Dof{a} , {a} ];
                 In DomainC_Mag; Jacobian Vol; Integration Gauss_v; }

      // Electric field e = -Dt[{a}]-{ur},
      // with {ur} = Grad v constant in each region of DomainC_Mag
      Galerkin { [ sigma[] * Dof{ur} / CoefGeos[] , {a} ] ; In DomainC_Mag ;
                 Jacobian Vol ; Integration Gauss_v ; }

      // When {ur} act as a test function, one obtains the circuits relations,
      // relating the voltage and the current of each region in DomainC_Mag
      Galerkin { DtDof [ sigma[] * Dof{a} , {ur} ] ; In DomainC_Mag ;
                 Jacobian Vol ; Integration Gauss_v ; }
      Galerkin { [ sigma[] * Dof{ur} / CoefGeos[] , {ur} ] ; In DomainC_Mag ;
                 Jacobian Vol ; Integration Gauss_v ; }
      GlobalTerm { [ Dof{I} *(CoefGeos[]/Fabs[CoefGeos[]]) , {U} ] ; In DomainC_Mag ; }

      Galerkin { [ -js0[] , {a} ];
                 In DomainS0_Mag; Jacobian Vol; Integration Gauss_v; }

      // js[0] should be of the form: Ns[]/Sc[] * Vector[0,0,1]
      Galerkin { [ - (js0[]*Vector[0,0,1]) * Dof{ir} , {a} ] ; In DomainS_Mag ;
                 Jacobian Vol ; Integration Gauss_v ; }

      Galerkin { DtDof [ Ns[]/Sc[] * Dof{a} , {ir} ] ; In DomainS_Mag ;
                 Jacobian Vol ; Integration Gauss_v ; }
      Galerkin { [ Ns[]/Sc[] / sigma[] * (js0[]*Vector[0,0,1]) * Dof{ir} , {ir} ] ;
                 In DomainS_Mag ;
                 Jacobian Vol ; Integration Gauss_v ; }
      GlobalTerm { [ Dof{Us} / CoefGeos[] , {Is} ] ;
                   In DomainS_Mag ; } // for Us in direction of Is
      // Attention: CoefGeo[.] = 2*Pi for Axi

      Galerkin { [ nxh[] , {a} ];
                 In Sur_FluxTube_Mag; Jacobian Sur; Integration Gauss_v; }

      If (Flag_CircuitCoupling)

	GlobalTerm { NeverDt[ Dof{Uz}                , {Iz} ] ; In Resistance_Cir ; }
        GlobalTerm { NeverDt[ Resistance[] * Dof{Iz} , {Iz} ] ; In Resistance_Cir ; }

	GlobalTerm { [ Dof{Uz}                      , {Iz} ] ; In Inductance_Cir ; }
	GlobalTerm { DtDof [ Inductance[] * Dof{Iz} , {Iz} ] ; In Inductance_Cir ; }

	GlobalTerm { [ Dof{Iz}        , {Iz} ] ; In Capacitance1_Cir ; }
	GlobalTerm { NeverDt[ Dof{Iz} , {Iz} ] ; In Capacitance2_Cir ; }
	GlobalTerm { DtDof [ Capacitance[] * Dof{Uz} , {Iz} ] ; In Capacitance_Cir ; }

	GlobalTerm { NeverDt[ Dof{Uz}             , {Iz} ] ; In Diode_Cir ; }
	GlobalTerm { NeverDt[ Resistance[{Uz}] * Dof{Iz} , {Iz} ] ; In Diode_Cir ; }

	GlobalTerm { [ 0. * Dof{Iz} , {Iz} ] ; In DomainSource_Cir ; }

	GlobalEquation {
	  Type Network ; NameOfConstraint ElectricalCircuit ;
	  { Node {I};  Loop {U};  Equation {I};  In DomainC_Mag ; }
          { Node {Is}; Loop {Us}; Equation {Us}; In DomainS_Mag ; }
          { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir ; }
	}
      EndIf

    }
  }
}

Resolution {
  // Frequency domain analysis (1st defined resolution: default resolution)
  { Name MagDyn_a_2D;
    System {
      { Name Sys; NameOfFormulation MagDyn_a_2D;
        Type ComplexValue; Frequency Freq;
      }
    }
    Operation {
      CreateDir[ResDir];
      Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
    }
  }

  // Time domain analysis
  { Name MagDyn_a_2D_t;
    System {
      { Name Sys; NameOfFormulation MagDyn_a_2D;
      }
    }
    Operation {
      CreateDir[ResDir];
      InitSolution[Sys]; // Always init before a time loop
      SaveSolution[Sys];
      TimeLoopTheta [ Mag_Time0, Mag_TimeMax, Mag_DTime, Mag_Theta ] {
        Generate[Sys]; Solve[Sys]; SaveSolution[Sys];
      }
    }
  }
}


Resolution {
  { Name MagSta_a_2D;
    System {
      { Name Sys; NameOfFormulation MagSta_a_2D; }
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
  { Name MagDyn_a_2D; NameOfFormulation MagDyn_a_2D;
    PostQuantity {
      // In 2D, a is a vector with only a z-component: (0,0,az)
      { Name a; Value { Term { [ {a} ]; In Domain_Mag; Jacobian Vol; } } }
      // The equilines of az are field lines (giving the magnetic field direction)
      { Name az; Value { Term { [ CompZ[{a}] ]; In Domain_Mag; Jacobian Vol; } } }
      { Name b; Value { Term { [ {d a} ]; In Domain_Mag; Jacobian Vol; } } }
      { Name h; Value { Term { [ nu[] * {d a} ]; In Domain_Mag; Jacobian Vol; } } }

      { Name b_microT; Value { Term { [ Norm[{d a}]*1e6 ]; In Domain_Mag; Jacobian Vol; } } }

      { Name js;
        Value {
          Term { [ js0[] ]; In DomainS0_Mag; Jacobian Vol; }
          Term { [(js0[]*Vector[0,0,1])*{ir}] ; In DomainS_Mag ; Jacobian Vol ; }
          Term { [ Vector[0,0,0] ]; In Domain_Mag; Jacobian Vol; }
          // to force a vector result out of DomainS0_Mag
        }
      }
      { Name j;
        // Only correct in MagDyn
        Value {
          Term { [ -sigma[] * Dt[{a}] ]; In DomainC_Mag; Jacobian Vol; }
          Term { [ -sigma[] * {ur}/CoefGeos[] ]; In DomainC_Mag; Jacobian Vol; }
          Term { [ js0[] ]; In DomainS0_Mag; Jacobian Vol; }
          Term { [(js0[]*Vector[0,0,1])*{ir}] ; In DomainS_Mag ; Jacobian Vol ; }
          Term { [ Vector[0,0,0] ]; In Domain_Mag; Jacobian Vol; }
        }
      }

      { Name JouleLosses ;
        Value {
          Integral { [ CoefPower * sigma[]*SquNorm[Dt[{a}]+{ur}/CoefGeos[]] ] ;
	               In DomainC_Mag ; Jacobian Vol ; Integration Gauss_v ; }

	  Integral { [ CoefPower * 1./sigma[]*SquNorm[js0[]] ] ;
	             In DomainS0_Mag ; Jacobian Vol ; Integration Gauss_v ; }
	}
      }

      { Name U ; Value {
          Term { [ {U} ]   ; In DomainC_Mag ; }
          Term { [ {Us} ]  ; In DomainS_Mag ; }
          If (Flag_CircuitCoupling)
            Term { [ {Uz} ]  ; In DomainZt_Cir ; }
          EndIf
        }
      }
      { Name I ; Value {
          Term { [ {I} ]   ; In DomainC_Mag ; }
          Term { [ {Is} ]  ; In DomainS_Mag ; }
          If (Flag_CircuitCoupling)
            Term { [ {Iz} ]  ; In DomainZt_Cir ; }
          EndIf
        }
      }

      { Name Um ; Value {
          Term { [ Norm[{U}] ]   ; In DomainC_Mag ; }
          Term { [ Norm[{Us}] ]  ; In DomainS_Mag ; }
          If (Flag_CircuitCoupling)
            Term { [ Norm[{Uz}] ]  ; In DomainZt_Cir ; }
          EndIf
        }
      }
      { Name Im ; Value {
          Term { [ Norm[{I}] ]   ; In DomainC_Mag ; }
          Term { [ Norm[{Is}] ]  ; In DomainS_Mag ; }
          If (Flag_CircuitCoupling)
            Term { [ Norm[{Iz}] ]  ; In DomainZt_Cir ; }
          EndIf
        }
      }

    }
  }
}
