
FunctionSpace {
  { Name Hgrad_v_EleKin; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef vn; Function BF_Node;
        Support Domain; Entity NodesOf[ DomainC, Not SurfaceElec ]; }
      { Name sgn; NameOfCoef vgn; Function BF_GroupOfNodes;
        Support Domain; Entity GroupsOfNodesOf[ SurfaceElec ]; }
    }
    GlobalQuantity {
      { Name V; Type AliasOf; NameOfCoef vgn; }
      { Name I; Type AssociatedWith; NameOfCoef vgn; }
    }
    Constraint {
      { NameOfCoef vn;
        EntityType NodesOf; NameOfConstraint ElectricScalarPotential; }
      { NameOfCoef V;
        EntityType GroupsOfNodesOf; NameOfConstraint Voltage_3D; }
      { NameOfCoef I;
        EntityType GroupsOfNodesOf; NameOfConstraint Current_3D; }
    }
  }

  { Name Hcurl_a_3D_MagSta; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_Edge;
        Support Domain; Entity EdgesOf[ All]; }
    }
    Constraint {
      { NameOfCoef ae;
        EntityType EdgesOf; NameOfConstraint MagneticVectorPotential_3D; }
      { NameOfCoef ae;
        EntityType EdgesOfTreeIn; EntitySubType StartingOn;
	NameOfConstraint GaugeCondition_a_3D_MagSta; }
    }
  }

  { Name Hcurl_a_3D_MagDyn; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_Edge;
        Support Domain; Entity EdgesOf[ All, Not SkinDomainC ]; }
      { Name se2; NameOfCoef ae2; Function BF_Edge;
        Support Domain; Entity EdgesOf[ SkinDomainC ]; }
    }
    Constraint {
      { NameOfCoef ae;
        EntityType EdgesOf; NameOfConstraint MagneticVectorPotential_3D; }
      { NameOfCoef ae2;
        EntityType EdgesOf; NameOfConstraint MagneticVectorPotential_3D; }

      { NameOfCoef ae;
        EntityType EdgesOfTreeIn; EntitySubType StartingOn;
	NameOfConstraint GaugeCondition_a_3D_MagDyn; }
    }
  }

  { Name Hcurl_a_3D_FullWave; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_Edge;
        Support Region[{Domain,SurfaceInf}]; Entity EdgesOf[ Domain ]; }
    }
    Constraint {
      { NameOfCoef ae;
        EntityType EdgesOf; NameOfConstraint MagneticVectorPotential_3D; }
    }
  }

  { Name Hregion_u_3D; Type Form0;
    BasisFunction {
      { Name sr; NameOfCoef ur; Function BF_GroupOfNodes;
        Support Domain; Entity GroupsOfNodesOf[ SurfaceElec ]; }
    }
    GlobalQuantity {
      { Name U; Type AliasOf; NameOfCoef ur; }
      { Name I; Type AssociatedWith; NameOfCoef ur; }
    }
    Constraint {
      { NameOfCoef U;
        EntityType GroupsOfNodesOf; NameOfConstraint Voltage_3D; }
      { NameOfCoef I;
        EntityType GroupsOfNodesOf; NameOfConstraint Current_3D; }
    }
  }

  { Name Hgrad_v_EleSta; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef vn; Function BF_Node;
        Support DomainCC; Entity NodesOf[ All, Not SkinDomainC ]; }
    }
    Constraint {
      { NameOfCoef vn; EntityType NodesOf; NameOfConstraint ElectricScalarPotential; }
    }
  }

}

Formulation {

  { Name Electrokinetics_v0; Type FemEquation;
    Quantity {
      { Name v0; Type Local; NameOfSpace Hgrad_v_EleKin; }
      { Name I; Type Global; NameOfSpace Hgrad_v_EleKin [I]; }
      { Name V; Type Global; NameOfSpace Hgrad_v_EleKin [V]; }
    }

    Equation {
      Galerkin { [ sigma[] * Dof{d v0}, {d v0} ];
        In DomainC; Jacobian Vol; Integration I1; }
      GlobalTerm { [ Dof{I}, {V} ]; In SurfaceElec; }
    }
  }

  { Name Electrostatics_v0_v; Type FemEquation;
    Quantity {
      { Name v0; Type Local; NameOfSpace Hgrad_v_EleKin; } // +++ source
      { Name v; Type Local; NameOfSpace Hgrad_v_EleSta; } // only in DomainCC
    }
    Equation {
      Galerkin { [ sigma[] * {d v0}  , {d v} ]; // no contribution (v only in DomainCC)
        In DomainC; Jacobian Vol; Integration I1; }

      Galerkin { DtDof[ epsilon[] * Dof{d v} , {d v} ];
        In DomainCC; Jacobian Vol; Integration I1; }

      Galerkin { [ epsilon[] * Dt[{d v0}] , {d v} ]; // Only non-zero on the elements touching SurfaceElec
        In DomainCC; Jacobian Vol; Integration I1; }
      Galerkin { [ epsilon[] * Dt[{d v0}] , {d v} ]; // no contribution  (v only in DomainCC)
        In DomainC; Jacobian Vol; Integration I1; }
    }
  }

  { Name Magnetostatics_v0_a_3D; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_3D_MagSta; }
      { Name v0; Type Local; NameOfSpace Hgrad_v_EleKin; }
      { Name I; Type Global; NameOfSpace Hgrad_v_EleKin [I]; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ];
        In Domain; Jacobian Vol; Integration I1; }
      Galerkin { [ sigma[]*{d v0} , {a} ];
        In DomainC; Jacobian Vol; Integration I1; }
    }
  }

  { Name Magnetodynamics_av_3D; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_3D_MagDyn; }
      { Name v; Type Local; NameOfSpace Hregion_u_3D; }
      { Name U; Type Global; NameOfSpace Hregion_u_3D [U]; }
      { Name I; Type Global; NameOfSpace Hregion_u_3D [I]; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ];
        In Domain; Jacobian Vol; Integration I1; }
      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ];
        In DomainC; Jacobian Vol; Integration I1; }
      Galerkin { [ sigma[] * Dof{d v} , {a} ];
        In DomainC; Jacobian Vol; Integration I1; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {d v} ];
        In DomainC; Jacobian Vol; Integration I1; }
      Galerkin { [ sigma[] * Dof{d v} , {d v} ];
        In DomainC; Jacobian Vol; Integration I1; }

      GlobalTerm { [ Dof{I} , {U} ]; In SurfaceElecWithI; }
    }
  }

  { Name Electrostatics_a0_v; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_3D_MagDyn; } // +++ source
      { Name v0; Type Local; NameOfSpace Hregion_u_3D; }

      { Name v; Type Local; NameOfSpace Hgrad_v_EleSta; } // only in DomainCC
    }

    Equation {
      Galerkin { DtDof[ epsilon[] * Dof{d v} , {d v} ];
        In DomainCC; Jacobian Vol; Integration I1; }

      /* no contribution (v only in DomainCC):
      Galerkin { [ sigma[] * Dt[{a}] , {d v} ];
        In DomainC; Jacobian Vol; Integration I1; }
      Galerkin { [ sigma[] * {d v0}  , {d v} ];
        In DomainC; Jacobian Vol; Integration I1; }
      */

      Galerkin { [ epsilon[] * Dt[Dt[{a}]] , {d v} ];
        In Domain; Jacobian Vol; Integration I1; }
      Galerkin { [ epsilon[] * Dt[{d v0}] , {d v} ];
        In Domain; Jacobian Vol; Integration I1; }
    }
  }

  { Name FullWave_av_3D; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_3D_FullWave; }
      { Name v; Type Local; NameOfSpace Hregion_u_3D; }
      { Name U; Type Global; NameOfSpace Hregion_u_3D [U]; }
      { Name I; Type Global; NameOfSpace Hregion_u_3D [I]; }
    }

    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ];
        In Domain; Jacobian Vol; Integration I1; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ];
        In DomainC; Jacobian Vol; Integration I1; }
      Galerkin { [ sigma[] * Dof{d v} , {a} ];
        In DomainC; Jacobian Vol; Integration I1; }
      Galerkin { DtDof[ sigma[] * Dof{a} , {d v} ];
        In DomainC; Jacobian Vol; Integration I1; }
      Galerkin { [ sigma[] * Dof{d v} , {d v} ];
        In DomainC; Jacobian Vol; Integration I1; }

      Galerkin { DtDtDof[ epsilon[] * Dof{a} , {a} ];
        In Domain; Jacobian Vol; Integration I1; }
      Galerkin { DtDof[ epsilon[] * Dof{d v} , {a} ];
        In Domain; Jacobian Vol; Integration I1; }
      Galerkin { DtDtDof[ epsilon[] * Dof{a} , {d v} ];
        In Domain; Jacobian Vol; Integration I1; }
      Galerkin { DtDof[ epsilon[] * Dof{d v} , {d v} ];
        In Domain; Jacobian Vol; Integration I1; }

      GlobalTerm { [ Dof{I} , {U} ]; In SurfaceElecWithI; }

      // Silver-Muller ABC
      Galerkin { DtDtDof[ nu[] * ( Normal[] /\ Dof{a} ) /\ Normal[]   , {a} ];
        In SurfaceInf; Integration I1; Jacobian Sur;  }
      /* no contribution:
      Galerkin {   DtDof[ nu[] * ( Normal[] /\ Dof{d v} ) /\ Normal[] , {a} ];
        In SurfaceInf; Integration I1; Jacobian Sur;  }
      Galerkin { DtDtDof[ nu[] * ( Normal[] /\ Dof{a} ) /\ Normal[]   , {d v} ];
        In SurfaceInf; Integration I1; Jacobian Sur;  }
      Galerkin {   DtDof[ nu[] * ( Normal[] /\ Dof{d v} ) /\ Normal[] , {d v} ];
        In SurfaceInf; Integration I1; Jacobian Sur;  }
      */
    }
  }

}

Resolution {

  { Name EleKin;
    System {
      { Name SEle; NameOfFormulation Electrokinetics_v0; }
    }
    Operation {
      Generate[SEle]; Solve[SEle]; SaveSolution[SEle];
    }
  }

  { Name EleKin_EleSta;
    System {
      { Name SEleC; NameOfFormulation Electrokinetics_v0; }
      { Name SEleCC; NameOfFormulation Electrostatics_v0_v;
        Type ComplexValue; Frequency Freq; }
    }
    Operation {
      Generate[SEleC]; Solve[SEleC]; SaveSolution[SEleC];
      Generate[SEleCC]; Solve[SEleCC]; SaveSolution[SEleCC];
    }
  }

  { Name EleKin_MagSta;
    System {
      { Name SEleC; NameOfFormulation Electrokinetics_v0; }
      { Name SMag; NameOfFormulation Magnetostatics_v0_a_3D; }
    }
    Operation {
      Generate[SEleC]; Solve[SEleC]; SaveSolution[SEleC];
      Generate[SMag]; Solve[SMag]; SaveSolution[SMag];
    }
  }

  { Name MagDyn;
    System {
      { Name SMag; NameOfFormulation Magnetodynamics_av_3D;
        Type ComplexValue; Frequency Freq; }
    }
    Operation {
      Generate[SMag]; Solve[SMag]; SaveSolution[SMag];
    }
  }

  { Name MagDyn_EleSta;
    System {
      { Name SMag; NameOfFormulation Magnetodynamics_av_3D;
        Type ComplexValue; Frequency Freq; }
      { Name SEle; NameOfFormulation Electrostatics_a0_v;
        Type ComplexValue; Frequency Freq; }
    }
    Operation {
      Generate[SMag]; Solve[SMag]; SaveSolution[SMag];
      Generate[SEle]; Solve[SEle]; SaveSolution[SEle];
    }
  }

 { Name FullWave;
    System {
      { Name S; NameOfFormulation FullWave_av_3D;
        Type ComplexValue; Frequency Freq; }
    }
    Operation {
      Generate[S]; Solve[S]; SaveSolution[S];
    }
  }

}

PostProcessing {

  { Name EleKin; NameOfFormulation Electrokinetics_v0;
    PostQuantity {
      { Name v0; Value { Term { [ {v0} ]; In DomainC; Jacobian Vol; } } }
      { Name e; Value { Term { [ -{d v0} ]; In DomainC; Jacobian Vol; } } }
      { Name V; Value { Term { [ {V} ]; In SurfaceElec; } } }
      { Name I; Value { Term { [ {I} ]; In SurfaceElec; } } }
      { Name R; Value { Term { [ -({V}*Conj[{I}])/SquNorm[{I}] ]; In SurfaceElec; } } }
    }
  }

  { Name EleKin_EleSta; NameOfFormulation Electrostatics_v0_v;
    PostQuantity {
      { Name v; Value { Term { [ {v}+{v0} ]; In DomainCC; Jacobian Vol; } } }
      { Name v0; Value { Term { [ {v0} ]; In DomainC; Jacobian Vol; } } }
      { Name v1; Value { Term { [ {v} ]; In DomainCC; Jacobian Vol; } } }
      { Name e; Value { Term { [ -{d v}-{d v0} ]; In DomainCC; Jacobian Vol; } } }
      { Name e0; Value { Term { [ -{d v0} ]; In DomainCC; Jacobian Vol; } } }
      { Name e1; Value { Term { [ -{d v} ]; In DomainCC; Jacobian Vol; } } }
      { Name We; Value { Integral {
            Type Global;
            [ SquNorm[(-{d v}-{d v0})]*epsilon[] ];
            In DomainCC; Jacobian Vol; Integration I1;
          }
	}
      }
    }
  }

  { Name EleKin_MagSta; NameOfFormulation Magnetostatics_v0_a_3D;
    PostQuantity {
      { Name v0; Value { Term { [ {v0} ]; In DomainC; Jacobian Vol; } } }
      { Name e; Value { Term { [ -{d v0} ]; In DomainC; Jacobian Vol; } } }
      { Name a; Value { Term { [ {a} ]; In Domain; Jacobian Vol; } } }
      { Name b; Value { Term { [ {d a} ]; In Domain; Jacobian Vol; } } }
      { Name h; Value { Term { [ nu[] * {d a} ]; In Domain; Jacobian Vol; } } }
      { Name js0; Value { Term { [ -sigma[]*({d v0}) ]; In DomainC; Jacobian Vol; } } }
      { Name I; Value { Term { [ {I} ]; In SurfaceElec; } } }
      { Name Flux;
        Value {
          Integral { [ -sigma[]*({d v0}) * {a} /$CurrentOfCoil ];
            In DomainC; Jacobian Vol; Integration I1; }
        } }
      { Name L_from_Flux; Value { Term { Type Global; [ $FluxOfCoil/$CurrentOfCoil ]; In DomainDummy; } } }
    }
  }

  { Name MagDyn; NameOfFormulation Magnetodynamics_av_3D;
    PostQuantity {
      { Name a; Value { Term { [ {a} ]; In Domain; Jacobian Vol; } } }
      { Name b; Value { Term { [ {d a} ]; In Domain; Jacobian Vol; } } }
      { Name h; Value { Term { [ nu[] * {d a} ]; In Domain; Jacobian Vol; } } }
      { Name v; Value { Term { [ {v} ]; In DomainC; Jacobian Vol; } } }
      { Name e; Value { Term { [ -Dt[{a}]-{d v} ]; In DomainC;Jacobian Vol; } } }
      { Name j; Value { Term { [ sigma[]*(-Dt[{a}]-{d v}) ]; In DomainC; Jacobian Vol; } } }
      { Name U; Value { Term { [ {U} ]; In SurfaceElec; } } }
      { Name I; Value { Term { [ {I} ]; In SurfaceElec; } } }
      { Name S; Value { Term { [  {U}*Conj[{I}] ]; In SurfaceElec; } } }            // Power
      { Name Z; Value { Term { [ -{U}*Conj[{I}]/SquNorm[{I}] ]; In SurfaceElec; } } } // Impedance
      { Name L; Value { Term { [ -Im[{U}/{I}]/(2*Pi*Freq) ]; In SurfaceElec; } } }    // Inductance
      { Name Ipos; Value { Integral {
            Type Global;
	    [ -sigma[] * (Dt[{a}] + {d v}) * BF{d v} ];
            In DomainC; Jacobian Vol; Integration I1;
	  }
	}
      }

    }
  }

  { Name MagDyn_EleSta; NameOfFormulation Electrostatics_a0_v;
    PostQuantity {
      { Name v; Value { Term { [ {v}+{v0} ]; In DomainCC; } } }
      { Name v0; Value { Term { [ {v0} ]; In DomainCC; } } } // potential from av-formulation
      { Name v1; Value { Term { [ {v} ]; In DomainCC; } } } // new potential in Domain CC
      { Name e; Value { Term { [ -{d v}-{d v0}-Dt[{a}] ]; In DomainCC; }
                          Term { [ -Dt[{a}]-{d v0} ]; In DomainC; } } }
      { Name d; Value { Term { [ -epsilon[] * {d v} ]; In DomainCC; } } }
      { Name Ipos_RL; Value { Integral { //Results from magnetodynamics ==> Z = R + jwL
            Type Global;
	    [ -sigma[] * (Dt[{a}] + {d v0}) * BF{d v0} ];
            In DomainC; Jacobian Vol; Integration I1;
	  }
	}
      }
      { Name Ipos_RLC; // I with both inductive (Zl=jwL) and capacitive effects (Zc = 1/(jwC))
        Value {
	  Integral { Type Global;
	    [ -sigma[] * (Dt[{a}] + {d v0}) * BF{d v0} ];
            In DomainC; Jacobian Vol; Integration I1;
	  }
          Integral { Type Global;
	    [ -epsilon[] * Dt[Dt[{a}]+{d v0}+{d v} ] * BF{d v0} ];
            In Domain; Jacobian Vol; Integration I1;
	  }
	}
      }
      { Name Z; Value { Term { [ voltageCoil/$CurrentOfCoil ]; In SurfaceElec; } } }
      { Name Ipos_incapa; // I with only capacitive effects
        Value {
	  Integral { Type Global;
	    [ -epsilon[] * Dt[ Dt[{a}]+{d v}+{d v0} ] * BF{d v0} ];
            In Domain; Jacobian Vol; Integration I1;
	  }
          /*
          Integral { Type Global;
          [ -epsilon[] * (Dt[Dt[{a}]] * BF{d v0}) ]; In Domain; Jacobian Vol; Integration I1; }
          Integral { Type Global;
          [ -epsilon[] * ((Dt[{d v}+{d v0}]) * BF{d v0}) ]; In DomainCC; Jacobian Vol; Integration I1; }
          Integral { Type Global;
          [ -epsilon[] * ((Dt[{d v0}]) * BF{d v0}) ]; In DomainC; Jacobian Vol; Integration I1; }
          */
        }
      }

      { Name Cpos_incapa;
        Value {
	  Integral { Type Global;
	    [ -epsilon[] * Dt[{a}] * BF{d v0} ];        In Domain; Jacobian Vol; Integration I1; }
	  Integral { Type Global;
	    [ -epsilon[] * ({d v}+{d v0}) * BF{d v0} ]; In DomainCC; Jacobian Vol; Integration I1; }
	  Integral { Type Global;
	    [ -epsilon[] * {d v0} * BF{d v0} ];         In DomainC; Jacobian Vol; Integration I1; }

	  Integral { Type Global;
	    [ -epsilon[] * Dt[{a}] * Dt[{a}] ];         In Domain;   Jacobian Vol; Integration I1; }
	  Integral { Type Global;
	    [ -epsilon[] * ({d v}+{d v0}) * Dt[{a}] ];  In DomainCC; Jacobian Vol; Integration I1; }
	  Integral { Type Global;
	    [ -epsilon[] * {d v0} * Dt[{a}] ];          In DomainC; Jacobian Vol; Integration I1; }
	  /*
	  Integral { Type Global;
	    [ -epsilon[] * 2 * Dt[{a}] *({d v0}+{d v}) ];     In Domain; Jacobian Vol; Integration I1; }
	  Integral { Type Global;
	    [ -epsilon[] * Dt[{a}] * Dt[{a}] ];               In Domain; Jacobian Vol; Integration I1; }
	  Integral { Type Global;
	    [ -epsilon[] * ({d v}+{d v0}) * ({d v0}+{d v}) ]; In Domain; Jacobian Vol; Integration I1; }
	  */
        }
      }
      { Name Cpos_fromEnergy; // == exactly the same as Cpos_incapa
        Value {
          Integral { Type Global;
            [ epsilon[] * SquNorm[ -Dt[{a}]-{d v0}-{d v}] ]; In Domain; Jacobian Vol; Integration I1; }
          /*
          Integral { Type Global;
             [ epsilon[] * SquNorm[ - Dt[{a}] - {d v0} ] ];  In DomainC; Jacobian Vol; Integration I1; }
          */
        }
      }
    }
  }

 { Name FullWave; NameOfFormulation FullWave_av_3D;
    PostQuantity {
      { Name a; Value { Term { [ {a} ]; In Domain; Jacobian Vol; } } }
      { Name b; Value { Term { [ {d a} ]; In Domain; Jacobian Vol; } } }
      { Name h; Value { Term { [ nu[] * {d a} ]; In Domain; Jacobian Vol; } } }
      { Name v; Value { Term { [ {v} ]; In DomainC; Jacobian Vol; } } }
      { Name e; Value { Term { [ -Dt[{a}]-{d v} ]; In Domain; Jacobian Vol; } } }
      { Name s; Value { Term { [ (-Dt[{a}]-{d v}) /\ (nu[] * {d a}) ]; In Domain; Jacobian Vol; } } }
      { Name j; Value {
          Term { [ sigma[]  *(-I[]*Omega*{a}-{d v}) ]; In Domain; Jacobian Vol; }
          Term { [ epsilon[]*(Omega^2*{a}-I[]*Omega*{d v}) ]; In Domain; Jacobian Vol; }
        }
      }
      { Name d; Value { Term { [ epsilon[]*(-Dt[{a}]-{d v}) ]; In Domain; Jacobian Vol; } } }
      { Name I; Value { Term { [ {I} ]; In SurfaceElec; } } }
      { Name U; Value { Term { [ {U} ]; In SurfaceElec; } } }
      { Name Z; Value { Term { [ -{U}/{I} ]; In SurfaceElec; } } }
      { Name Ipos;
        Value {
          Integral { Type Global;
            [ -sigma[]   * (Dt[{a}] + {d v}) * BF{d v} ]; In DomainC; Jacobian Vol; Integration I1; }
          Integral { Type Global;
	    [ -epsilon[] * (Dt[{a}] + {d v}) * BF{d v} ]; In Domain; Jacobian Vol; Integration I1; }
	}
      }
      { Name Cpos_fromEnergy;
        Value {
	  Integral { Type Global;
	    [ epsilon[] * SquNorm[-Dt[{a}]-{d v}] ]; In Domain; Jacobian Vol; Integration I1; }
        }
      }
    }
  }

}
