// Lib_Magnetodynamics2D_av_Cir.pro
//
// Template library for 2D magnetostatic and magnetodynamic problems in terms
// of the magnetic vector potential a (potentially coupled with the electric
// scalar potential v), with optional circuit coupling.

// Default definitions of constants, groups and functions that can/should be
// redefined from outside the template:

DefineConstant[
  modelPath = "", // default path of the model
  resPath = StrCat[modelPath, "res/"], // path for post-operation files
  Flag_Axi = 0, // axisymmetric model?
  Flag_FrequencyDomain = 1, // frequency-domain or time-domain simulation
  Flag_CircuitCoupling = 0, // consider coupling with external electric circuit
  Flag_NewtonRaphson = 1, // Newton-Raphson or Picard method for nonlinear iterations
  CoefPower = 0.5, // coefficient for power calculations
  Freq = 50, // frequency (for harmonic simulations)
  TimeInit = 0, // intial time (for time-domain simulations)
  TimeFinal = 1/50, // final time (for time-domain simulations)
  DeltaTime = 1/500, // time step (for time-domain simulations)
  FE_Order = 1, // finite element order
  Val_Rint = 0, // interior radius of annulus shell transformation region (Vol_Inf_Mag)
  Val_Rext = 0 // exterior radius of annulus shell  transformation region (Vol_Inf_Mag)
  Val_Cx = 0, // x-coordinate of center of Vol_Inf_Mag
  Val_Cy = 0, // y-coordinate of center of Vol_Inf_Mag
  Val_Cz = 0, // z-coordinate of center of Vol_Inf_Mag
  NL_tol_abs = 1e-6, // absolute tolerance on residual for noninear iterations
  NL_tol_rel = 1e-6, // relative tolerance on residual for noninear iterations
  NL_iter_max = 20 // maximum number of noninear iterations
];

Group {
  DefineGroup[
    // The full magnetic domain:
    Vol_Mag,

    // Subsets of Vol_Mag:
    Vol_C_Mag, // massive conductors
    Vol_S0_Mag, // stranded conductors with imposed current densities js0
    Vol_S_Mag, // stranded conductors with imposed current, voltage or circuit coupling
    Vol_NL_Mag, // nonlinear magnetic materials
    Vol_V_Mag, // moving massive conducting parts (with invariant mesh)
    Vol_M_Mag, // permanent magnets
    Vol_Inf_Mag, // annulus where a infinite shell transformation is applied

    // Boundaries:
    Sur_Neu_Mag, // boundary with Neumann BC (flux tube with n x h = nxh[])
    Sur_Perfect_Mag, // boundary of perfect conductors (non-meshed)
    Sur_Imped_Mag // boundary of conductors approximated by an impedance (non-meshed)
  ];
  If(Flag_CircuitCoupling)
    DefineGroup[
      SourceV_Cir, // voltage sources
      SourceI_Cir, // current sources
      Resistance_Cir, // resistors (linear)
      Inductance_Cir, // inductors
      Capacitance_Cir, // capacitors
      Diode_Cir // diodes (treated as nonlinear resistors)
    ];
  EndIf
}

Function {
  DefineFunction[
    nu, // reluctivity (in Vol_Mag)
    sigma, // conductivity (in Vol_C_Mag and Vol_S_Mag)
    br, // remanent magnetic flux density (in Vol_M_Mag)
    js0, // source current density (in Vol_S0_Mag)
    dhdb, // Jacobian for Newton-Raphson method (in Vol_NL_Mag)
    nxh, // n x magnetic field (on Sur_Neu_Mag)
    Velocity, // velocity of moving part (in Vol_V_Mag)
    Ns, // number of turns (in Vol_S_Mag)
    Sc, // cross-section of windings (in Vol_S_Mag)
    CoefGeos, // geometrical coefficient for 2D or 2D axi model (in Vol_Mag)
    Ysur // surface admittance (on Sur_Imped_Mag)
  ];
  If(Flag_CircuitCoupling)
    DefineFunction[
      Resistance, // resistance values
      Inductance, // inductance values
      Capacitance // capacitance values
    ];
  EndIf
}

// End of definitions.

Group{
  // all linear materials
  Vol_L_Mag = Region[ {Vol_Mag, -Vol_NL_Mag} ];
  // all volumes + surfaces on which integrals will be computed
  Dom_Mag = Region[ {Vol_Mag, Sur_Neu_Mag, Sur_Perfect_Mag, Sur_Imped_Mag} ];
  If(Flag_CircuitCoupling)
    // all circuit impedances
    DomainZ_Cir = Region[ {Resistance_Cir, Inductance_Cir, Capacitance_Cir} ];
    // all circuit sources
    DomainSource_Cir = Region[ {SourceV_Cir, SourceI_Cir} ];
    // all circuit elements
    Domain_Cir = Region[ {DomainZ_Cir, DomainSource_Cir} ];
  EndIf
}

Jacobian {
  { Name Vol;
    Case {
      If(Flag_Axi)
        { Region Vol_Inf_Mag;
          Jacobian VolAxiSquSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
        { Region All; Jacobian VolAxiSqu; }
      Else
        { Region Vol_Inf_Mag;
          Jacobian VolSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
        { Region All; Jacobian Vol; }
      EndIf
    }
  }
  { Name Sur;
    Case {
      If(Flag_Axi)
        { Region All; Jacobian SurAxi; }
      Else
        { Region All; Jacobian Sur; }
      EndIf
    }
  }
}

Integration {
  { Name Gauss_v;
    Case {
      { Type Gauss;
        Case {
          { GeoElement Point; NumberOfPoints  1; }
          { GeoElement Line; NumberOfPoints  5; }
          { GeoElement Triangle; NumberOfPoints  7; }
          { GeoElement Quadrangle; NumberOfPoints  4; }
          { GeoElement Tetrahedron; NumberOfPoints 15; }
          { GeoElement Hexahedron; NumberOfPoints 14; }
          { GeoElement Prism; NumberOfPoints 21; }
        }
      }
    }
  }
}

// Same FunctionSpace for both static and dynamic formulations
FunctionSpace {
  { Name Hcurl_a_2D; Type Form1P; // 1-form (circulations) on edges
                                  // perpendicular to the plane of study
    BasisFunction {
      // \vec{a}(x) = \sum_{n \in N(Domain)} a_n \vec{s}_n(x)
      //   without nodes on perfect conductors (where a is constant)
      { Name s_n; NameOfCoef a_n; Function BF_PerpendicularEdge;
        Support Dom_Mag; Entity NodesOf[All, Not Sur_Perfect_Mag]; }

      // global basis function on boundary of perfect conductors
      { Name s_skin; NameOfCoef a_skin; Function BF_GroupOfPerpendicularEdges;
        Support Dom_Mag; Entity GroupsOfNodesOf[Sur_Perfect_Mag]; }

      // additional basis functions for 2nd order interpolation
      If(FE_Order == 2)
        { Name s_e; NameOfCoef a_e; Function BF_PerpendicularEdge_2E;
          Support Vol_Mag; Entity EdgesOf[All]; }
      EndIf
    }
    GlobalQuantity {
      { Name A; Type AliasOf; NameOfCoef a_skin; }
      { Name I; Type AssociatedWith; NameOfCoef a_skin; }
    }
    Constraint {
      { NameOfCoef a_n;
        EntityType NodesOf; NameOfConstraint MagneticVectorPotential_2D; }

      { NameOfCoef I;
        EntityType GroupsOfNodesOf; NameOfConstraint Current_2D; }

      If(FE_Order == 2)
        { NameOfCoef a_e;
          EntityType EdgesOf; NameOfConstraint MagneticVectorPotential_2D_0; }
      EndIf
    }
  }
}

FunctionSpace {
  // Gradient of Electric scalar potential (2D)
  { Name Hregion_u_2D; Type Form1P; // same as for \vec{a}
    BasisFunction {
      { Name sr; NameOfCoef ur; Function BF_RegionZ;
        // constant vector (over the region) with nonzero z-component only
        Support Region[{Vol_C_Mag, Sur_Imped_Mag}];
        Entity Region[{Vol_C_Mag, Sur_Imped_Mag}]; }
    }
    GlobalQuantity {
      { Name U; Type AliasOf; NameOfCoef ur; }
      { Name I; Type AssociatedWith; NameOfCoef ur; }
    }
    Constraint {
      { NameOfCoef U;
        EntityType Region; NameOfConstraint Voltage_2D; }
      { NameOfCoef I;
        EntityType Region; NameOfConstraint Current_2D; }
    }
  }

  // Current in stranded coil (2D)
  { Name Hregion_i_2D; Type Vector;
    BasisFunction {
      { Name sr; NameOfCoef ir; Function BF_RegionZ;
        Support Vol_S_Mag; Entity Vol_S_Mag; }
    }
    GlobalQuantity {
      { Name Is; Type AliasOf; NameOfCoef ir; }
      { Name Us; Type AssociatedWith; NameOfCoef ir; }
    }
    Constraint {
      { NameOfCoef Us;
        EntityType Region; NameOfConstraint Voltage_2D; }
      { NameOfCoef Is;
        EntityType Region; NameOfConstraint Current_2D; }
    }
  }
}

If(Flag_CircuitCoupling)
  // UZ and IZ for impedances
  FunctionSpace {
    { Name Hregion_Z; Type Scalar;
      BasisFunction {
        { Name sr; NameOfCoef ir; Function BF_Region;
          Support Domain_Cir; Entity Domain_Cir; }
      }
      GlobalQuantity {
        { Name Iz; Type AliasOf; NameOfCoef ir; }
        { Name Uz; Type AssociatedWith; NameOfCoef ir; }
      }
      Constraint {
        { NameOfCoef Uz;
          EntityType Region; NameOfConstraint Voltage_Cir; }
        { NameOfCoef Iz;
          EntityType Region; NameOfConstraint Current_Cir; }
      }
    }
  }
EndIf


// Static Formulation
Formulation {
  { Name Magnetostatics2D_a; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_2D; }
      { Name ir; Type Local; NameOfSpace Hregion_i_2D; }
    }
    Equation {
      Integral { [ nu[] * Dof{d a} , {d a} ];
        In Vol_L_Mag; Jacobian Vol; Integration Gauss_v; }

      If(Flag_NewtonRaphson)
        Integral { [ nu[{d a}] * {d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
        Integral { [ dhdb[{d a}] * Dof{d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
        Integral { [ - dhdb[{d a}] * {d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
      Else
        Integral { [ nu[{d a}] * Dof{d a}, {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
      EndIf

      Integral { [ - nu[] * br[] , {d a} ];
        In Vol_M_Mag; Jacobian Vol; Integration Gauss_v; }

      Integral { [ - js0[] , {a} ];
        In Vol_S0_Mag; Jacobian Vol; Integration Gauss_v; }

      Integral { [ - (js0[]*Vector[0,0,1]) * Dof{ir} , {a} ];
        In Vol_S_Mag; Jacobian Vol; Integration Gauss_v; }

      Integral { [ nxh[] , {a} ];
        In Sur_Neu_Mag; Jacobian Sur; Integration Gauss_v; }
    }
  }
}

// Dynamic Formulation (eddy currents)
Formulation {
  { Name Magnetodynamics2D_av; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_2D; }
      { Name A_floating; Type Global; NameOfSpace Hcurl_a_2D [A]; }
      { Name I_perfect; Type Global; NameOfSpace Hcurl_a_2D [I]; }

      { Name ur; Type Local; NameOfSpace Hregion_u_2D; }
      { Name I; Type Global; NameOfSpace Hregion_u_2D [I]; }
      { Name U; Type Global; NameOfSpace Hregion_u_2D [U]; }

      { Name ir; Type Local; NameOfSpace Hregion_i_2D; }
      { Name Us; Type Global; NameOfSpace Hregion_i_2D [Us]; }
      { Name Is; Type Global; NameOfSpace Hregion_i_2D [Is]; }

      If(Flag_CircuitCoupling)
        { Name Uz; Type Global; NameOfSpace Hregion_Z [Uz]; }
        { Name Iz; Type Global; NameOfSpace Hregion_Z [Iz]; }
      EndIf
    }
    Equation {
      Integral { [ nu[] * Dof{d a} , {d a} ];
        In Vol_L_Mag; Jacobian Vol; Integration Gauss_v; }

      If(Flag_NewtonRaphson)
        Integral { [ nu[{d a}] * {d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
        Integral { [ dhdb[{d a}] * Dof{d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
        Integral { [ - dhdb[{d a}] * {d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
      Else
        Integral { [ nu[{d a}] * Dof{d a}, {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Gauss_v; }
      EndIf

      Integral { [ - nu[] * br[] , {d a} ];
        In Vol_M_Mag; Jacobian Vol; Integration Gauss_v; }

      // Electric field e = -Dt[{a}]-{ur},
      // with {ur} = Grad v constant in each region of Vol_C_Mag
      Integral { DtDof [ sigma[] * Dof{a} , {a} ];
        In Vol_C_Mag; Jacobian Vol; Integration Gauss_v; }
      Integral { [ sigma[] * Dof{ur} / CoefGeos[] , {a} ];
        In Vol_C_Mag; Jacobian Vol; Integration Gauss_v; }

      Integral { [ - sigma[] * (Velocity[] /\ Dof{d a}) , {a} ];
        In Vol_V_Mag; Jacobian Vol; Integration Gauss_v; }

      Integral { [ - js0[] , {a} ];
        In Vol_S0_Mag; Jacobian Vol; Integration Gauss_v; }

      Integral { [ nxh[] , {a} ];
        In Sur_Neu_Mag; Jacobian Sur; Integration Gauss_v; }

      Integral { DtDof [  Ysur[] * Dof{a} , {a} ];
        In Sur_Imped_Mag; Jacobian Sur; Integration Gauss_v; }
      Integral { [ Ysur[] * Dof{ur} / CoefGeos[] , {a} ];
        In Sur_Imped_Mag; Jacobian Sur; Integration Gauss_v; }

      // When {ur} act as a test function, one obtains the circuits relations,
      // relating the voltage and the current of each region in Vol_C_Mag
      Integral { DtDof [ sigma[] * Dof{a} , {ur} ];
        In Vol_C_Mag; Jacobian Vol; Integration Gauss_v; }
      Integral { [ sigma[] * Dof{ur} / CoefGeos[] , {ur} ];
        In Vol_C_Mag; Jacobian Vol; Integration Gauss_v; }
      GlobalTerm { [ Dof{I} *(CoefGeos[]/Fabs[CoefGeos[]]) , {U} ]; In Vol_C_Mag; }

      Integral { DtDof [ Ysur[] * Dof{a} , {ur} ];
        In Sur_Imped_Mag; Jacobian Sur; Integration Gauss_v; }
      Integral { [ Ysur[] * Dof{ur} / CoefGeos[] , {ur} ];
        In Sur_Imped_Mag; Jacobian Sur; Integration Gauss_v; }
      GlobalTerm { [ Dof{I} *(CoefGeos[]/Fabs[CoefGeos[]]) , {U} ]; In Sur_Imped_Mag; }

      // js[0] should be of the form: Ns[]/Sc[] * Vector[0,0,1]
      Integral { [ - (js0[]*Vector[0,0,1]) * Dof{ir} , {a} ];
        In Vol_S_Mag; Jacobian Vol; Integration Gauss_v; }
      Integral { DtDof [ Ns[]/Sc[] * Dof{a} , {ir} ];
        In Vol_S_Mag; Jacobian Vol; Integration Gauss_v; }
      Integral { [ Ns[]/Sc[] / sigma[] * (js0[]*Vector[0,0,1]) * Dof{ir} , {ir} ];
        In Vol_S_Mag; Jacobian Vol; Integration Gauss_v; }
      GlobalTerm { [ Dof{Us} / CoefGeos[] , {Is} ]; In Vol_S_Mag; }
      // Attention: CoefGeo[.] = 2*Pi for Axi

      GlobalTerm { [ - Dof{I_perfect} , {A_floating} ]; In Sur_Perfect_Mag; }

      If(Flag_CircuitCoupling)
	GlobalTerm { NeverDt[ Dof{Uz} , {Iz} ]; In Resistance_Cir; }
        GlobalTerm { NeverDt[ Resistance[] * Dof{Iz} , {Iz} ]; In Resistance_Cir; }

	GlobalTerm { [ Dof{Uz} , {Iz} ]; In Inductance_Cir; }
	GlobalTerm { DtDof [ Inductance[] * Dof{Iz} , {Iz} ]; In Inductance_Cir; }

	GlobalTerm { NeverDt[ Dof{Iz} , {Iz} ]; In Capacitance_Cir; }
	GlobalTerm { DtDof [ Capacitance[] * Dof{Uz} , {Iz} ]; In Capacitance_Cir; }

	GlobalTerm { NeverDt[ Dof{Uz} , {Iz} ]; In Diode_Cir; }
	GlobalTerm { NeverDt[ Resistance[{Uz}] * Dof{Iz} , {Iz} ]; In Diode_Cir; }

	GlobalTerm { [ 0. * Dof{Iz} , {Iz} ]; In DomainSource_Cir; }

	GlobalEquation {
	  Type Network; NameOfConstraint ElectricalCircuit;
	  { Node {I};  Loop {U};  Equation {I};  In Vol_C_Mag; }
	  { Node {Is}; Loop {Us}; Equation {Us}; In Vol_S_Mag; }
	  { Node {Iz}; Loop {Uz}; Equation {Uz}; In Domain_Cir; }
	}
      EndIf

    }
  }
}

Resolution {
  { Name Magnetodynamics2D_av;
    System {
      { Name A; NameOfFormulation Magnetodynamics2D_av;
        If(Flag_FrequencyDomain)
          Type ComplexValue; Frequency Freq;
        EndIf
      }
    }
    Operation {
      If(Flag_FrequencyDomain)
        Generate[A]; Solve[A]; SaveSolution[A];
      Else
        InitSolution[A]; // provide initial condition
        TimeLoopTheta[TimeInit, TimeFinal, DeltaTime, 1.]{
          // Euler implicit (1) -- Crank-Nicolson (0.5)
          Generate[A]; Solve[A];
          If(NbrRegions[Vol_NL_Mag])
            Generate[A]; GetResidual[A, $res0];
            Evaluate[ $res = $res0, $iter = 0 ];
            Print[{$iter, $res, $res / $res0},
              Format "Residual %03g: abs %14.12e rel %14.12e"];
            While[$res > NL_tol_abs && $res / $res0 > NL_tol_rel &&
                  $res / $res0 <= 1 && $iter < NL_iter_max]{
              Solve[A]; Generate[A]; GetResidual[A, $res];
              Evaluate[ $iter = $iter + 1 ];
              Print[{$iter, $res, $res / $res0},
                Format "Residual %03g: abs %14.12e rel %14.12e"];
            }
          EndIf
          SaveSolution[A];
        }
      EndIf
    }
  }
  { Name Magnetostatics2D_a;
    System {
      { Name A; NameOfFormulation Magnetostatics2D_a; }
    }
    Operation {
      InitSolution[A];
      Generate[A]; Solve[A];
      If(NbrRegions[Vol_NL_Mag])
        Generate[A]; GetResidual[A, $res0];
        Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0},
          Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > NL_tol_abs && $res / $res0 > NL_tol_rel &&
              $res / $res0 <= 1 && $iter < NL_iter_max]{
          Solve[A]; Generate[A]; GetResidual[A, $res];
          Evaluate[ $iter = $iter + 1 ];
          Print[{$iter, $res, $res / $res0},
            Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
      EndIf
      SaveSolution[A];
    }
  }
}

// Same PostProcessing for both static and dynamic formulations (both refer to
// the same FunctionSpace from which the solution is obtained)
PostProcessing {
  { Name Magnetodynamics2D_av; NameOfFormulation Magnetodynamics2D_av;
    PostQuantity {
      // In 2D, a is a vector with only a z-component: (0,0,az)
      { Name a; Value {
          Term { [ {a} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      // The equilines of az are field lines (giving the magnetic field direction)
      { Name az; Value {
          Term { [ CompZ[{a}] ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name b; Value {
          Term { [ {d a} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name norm_of_b; Value {
          Term { [ Norm[{d a}] ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name h; Value {
          Term { [ nu[] * {d a} ]; In Vol_Mag; Jacobian Vol; }
          Term { [ -nu[] * br[] ]; In Vol_M_Mag; Jacobian Vol; }
        }
      }
      { Name js; Value {
          Term { [ js0[] ]; In Vol_S0_Mag; Jacobian Vol; }
          Term { [  (js0[]*Vector[0,0,1])*{ir} ]; In Vol_S_Mag; Jacobian Vol; }
	  // to force a vector result out of sources
          Term { [ Vector[0,0,0] ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name j; Value {
          Term { [ -sigma[] * (Dt[{a}]+{ur}/CoefGeos[]) ]; In Vol_C_Mag; Jacobian Vol; }
          Term { [ js0[] ]; In Vol_S0_Mag; Jacobian Vol; }
          Term { [ (js0[]*Vector[0,0,1])*{ir} ]; In Vol_S_Mag; Jacobian Vol; }
          Term { [ Vector[0,0,0] ]; In Vol_Mag; Jacobian Vol; }
          // Current density in A/m
          Term { [ -Ysur[] * (Dt[{a}]+{ur}/CoefGeos[]) ]; In Sur_Imped_Mag; Jacobian Sur; }
        }
      }
      { Name JouleLosses; Value {
          Integral { [ CoefPower * sigma[]*SquNorm[Dt[{a}]+{ur}/CoefGeos[]] ];
            In Vol_C_Mag; Jacobian Vol; Integration Gauss_v; }
          Integral { [ CoefPower * 1./sigma[]*SquNorm[js0[]] ];
            In Vol_S0_Mag; Jacobian Vol; Integration Gauss_v; }
	  Integral { [ CoefPower * 1./sigma[]*SquNorm[(js0[]*Vector[0,0,1])*{ir}] ];
            In Vol_S_Mag; Jacobian Vol; Integration Gauss_v; }
          Integral { [ CoefPower * Ysur[]*SquNorm[Dt[{a}]+{ur}/CoefGeos[]] ];
            In Sur_Imped_Mag; Jacobian Sur; Integration Gauss_v; }
	}
      }
      { Name U; Value {
          Term { [ {U} ]; In Vol_C_Mag; }
          Term { [ {Us} ]; In Vol_S_Mag; }
          If(Flag_CircuitCoupling)
            Term { [ {Uz} ]; In Domain_Cir; }
          EndIf
        }
      }
      { Name I; Value {
          Term { [ {I} ]; In Vol_C_Mag; }
          Term { [ {Is} ]; In Vol_S_Mag; }
          If(Flag_CircuitCoupling)
            Term { [ {Iz} ]; In Domain_Cir; }
          EndIf
        }
      }
    }
  }

  { Name Magnetostatics2D_a; NameOfFormulation Magnetostatics2D_a;
    PostQuantity {
      { Name a; Value {
          Term { [ {a} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name az; Value {
          Term { [ CompZ[{a}] ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name b; Value {
          Term { [ {d a} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name h; Value {
          Term { [ nu[] * {d a} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name j; Value {
          Term { [ js0[] ]; In Vol_S0_Mag; Jacobian Vol; }
          Term { [ (js0[]*Vector[0,0,1])*{ir} ]; In Vol_S_Mag; Jacobian Vol; }
          Term { [ Vector[0,0,0] ]; In Vol_Mag; Jacobian Vol; }
        }
      }
    }
  }
}
