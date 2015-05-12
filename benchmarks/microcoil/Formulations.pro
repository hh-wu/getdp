/*
  GlobalGroup :
  -----------
    Domain               Whole domain
    DomainCC             Nonconducting regions
    DomainC              Conducting regions
    SkinDomainC          Skin of conducting regions (surfaces)
    DomainS              Source Inductor regions

    SurfaceElec          Surfaces of sources in inductors

    nu[]                     Magnetic reluctivity
    sigma[]                  Electric conductivity
    epsilon[]                Electric permittivity
*/

/* --------------------------------------------------------------------------*/

Group {
  DefineGroup[ Domain, DomainCC, DomainC, SkinDomainC,
               DomainS,
               SurfaceElec,
               Surface_FixedMagneticVectorPotential3D ] ;
}

Function {
  DefineFunction[ nu, sigma, js0, epsr ] ;
  DefineConstant[ Freq ] ;
  DefineConstant[ Flag_PostInResolution = { 1, Choices{0,1},
      Name "Input/0Perform PostOperation in Resolution"} ] ;
}

/* --------------------------------------------------------------------------*/

Group {
  Surface_a_3D_NoGauge =
    Region [ {Surface_FixedMagneticVectorPotential3D, SkinDomainC} ] ;
}

Constraint {
  { Name GaugeCondition_a_3D ; Type Assign ;
    Case {
      { Region DomainCC ; SubRegion Surface_a_3D_NoGauge ;
        Value 0. ; }
    }
  }
}

FunctionSpace {


  // For electrokinetic formulation
  { Name Hgrad_v_EleKin ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support DomainTot ; Entity NodesOf[ DomainC, Not SurfaceElec ] ; }
      { Name sgn ;NameOfCoef vgn ; Function BF_GroupOfNodes ;
        Support DomainTot ; Entity GroupsOfNodesOf[ SurfaceElec ] ; }
    }
    GlobalQuantity {
      { Name V ; Type AliasOf        ; NameOfCoef vgn ; }
      { Name I ; Type AssociatedWith ; NameOfCoef vgn ; }
    }
    Constraint {
      { NameOfCoef vn ;
        EntityType NodesOf ; NameOfConstraint ElectricScalarPotential ; }

      { NameOfCoef V ;
        EntityType GroupsOfNodesOf ; NameOfConstraint Voltage_3D ; }
      { NameOfCoef I ;
        EntityType GroupsOfNodesOf ; NameOfConstraint Current_3D ; }
    }
  }

  // Magnetic vector potential a (b = curl a)
  { Name Hcurl_a_3D ; Type Form1 ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_Edge ;
        Support DomainTot ; Entity EdgesOf[ All, Not SkinDomainC ] ; }
      { Name se2 ; NameOfCoef ae2 ; Function BF_Edge ;
        Support DomainTot ; Entity EdgesOf[ SkinDomainC ] ; }
    }
    Constraint {
      { NameOfCoef ae ;
        EntityType EdgesOf ; NameOfConstraint MagneticVectorPotential_3D ; }
      { NameOfCoef ae2 ;
        EntityType EdgesOf ; NameOfConstraint MagneticVectorPotential_3D ; }

      { NameOfCoef ae ;
        EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
	NameOfConstraint GaugeCondition_a_3D ; }
    }
  }

  { Name Hcurl_a_3D_nogauge ; Type Form1 ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_Edge ;
        Support DomainTot ; Entity EdgesOf[ Domain ] ; }
    }
    Constraint {
      { NameOfCoef ae ;
        EntityType EdgesOf ; NameOfConstraint MagneticVectorPotential_3D ; }
    }
  }

  // Electric scalar potential (3D)
  { Name Hregion_u_3D ; Type Form0 ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_GroupOfNodes ;
        Support Region[{DomainU}] ; Entity GroupsOfNodesOf[ SurfaceElec ] ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ;
        EntityType GroupsOfNodesOf ; NameOfConstraint Voltage_3D ; }
      { NameOfCoef I ;
        EntityType GroupsOfNodesOf ; NameOfConstraint Current_3D ; }
    }
  }

  // Electric formulation, in coupled systems
  { Name Hgrad_v_Ele ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support DomainCC ; Entity NodesOf[ All, Not SkinDomainC ] ; }
    }
    Constraint {
      { NameOfCoef vn ; EntityType NodesOf ; NameOfConstraint ElectricScalarPotential ; }
    }
  }

}

Formulation {

  { Name Electrokinetics_v ; Type FemEquation ;
    Quantity {
      { Name v ; Type Local  ; NameOfSpace Hgrad_v_EleKin ; }
      { Name I ; Type Global ; NameOfSpace Hgrad_v_EleKin [I] ; }
      { Name V ; Type Global ; NameOfSpace Hgrad_v_EleKin [V] ; }
    }

    Equation {
      Galerkin { [ sigma[] * Dof{d v}, {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      GlobalTerm { [ Dof{I}, {V} ] ; In SurfaceElec ; }
    }
  }

  { Name Electrostatics_v0_v ; Type FemEquation ;
    Quantity {
      { Name v  ; Type Local ; NameOfSpace Hgrad_v_Ele ; } // only in DomainCC

      // v0 (I0, V0) is a source coming from the resolution of Electrokinetics_v
      { Name v0 ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
      { Name I0 ; Type Global ; NameOfSpace Hgrad_v_EleKin [I] ; }
      { Name V0 ; Type Global ; NameOfSpace Hgrad_v_EleKin [V] ; }
    }

    Equation {
      Galerkin { [ sigma[] * {d v0}  , {d v} ] ; // no contribution (v only in DomainCC)
                 In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ epsr[] * eps0 * Dof{d v} , {d v} ] ;
                 In DomainCC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ epsr[] * eps0 * Dt[{d v0}] , {d v} ] ; // Only non-zero on the elements touching SurfaceElec
                 In DomainCC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ epsr[] * eps0 * Dt[{d v0}] , {d v} ] ; // no contribution  (v only in DomainCC)
                 In DomainC ; Jacobian Vol ; Integration I1 ; }
    }
  }


  { Name Magnetodynamics_av_3D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a_3D ; }

      { Name v  ; Type Local  ; NameOfSpace Hregion_u_3D ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_3D [U] ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_3D [I] ; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{d v} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{d v} , {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      GlobalTerm { [ Dof{I} , {U} ] ; In SurfaceElecWithI ; }

      Galerkin { [ - js0[] , {a} ] ; In DomainS ;
        Jacobian Vol ; Integration I1 ; }
    }
  }


  { Name Electrostatics_a0v0_v ; Type FemEquation ;
    Quantity {
      { Name v ; Type Local ; NameOfSpace Hgrad_v_Ele ; } // only in DomainCC

      //a, v0 are sources coming from the resolution of Magnetodynamics_av_3
      { Name a  ; Type Local ; NameOfSpace Hcurl_a_3D ; }
      { Name v0 ; Type Local ; NameOfSpace Hregion_u_3D ; }
    }

    Equation {
      Galerkin { [ sigma[] * Dt[{a}] , {d v} ] ; // no contribution (v only in DomainCC)
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * {d v0}  , {d v} ] ; // no contribution (v only in DomainCC)
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ epsr[] * eps0 * Dt[Dt[{a}]] , {d v} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ epsr[] * eps0 * Dof{d v} , {d v} ] ;
        In DomainCC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ epsr[] * eps0 * Dt[{d v0}] , {d v} ] ; // non-zero only on elements touching SurfaceElec
        In DomainCC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ epsr[] * eps0 * Dt[{d v0}] , {d v} ] ; // no contribution  (v only in DomainCC)
        In DomainC ; Jacobian Vol ; Integration I1 ; }
    }
  }


  { Name FullWave_av_3D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a_3D_nogauge ; }
      { Name v  ; Type Local  ; NameOfSpace Hregion_u_3D ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_3D [U] ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_3D [I] ; }
    }

    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{d v} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof[ sigma[] * Dof{a} , {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{d v} , {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDtDof[ epsilon[] * Dof{a} , {a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof[ epsilon[] * Dof{d v} , {a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDtDof[ epsilon[] * Dof{a} , {d v} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof[ epsilon[] * Dof{d v} , {d v} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ - js0[] , {a} ] ;
        In DomainS ; Jacobian Vol ; Integration I1 ; }

      GlobalTerm { [ Dof{I} , {U} ] ; In SurfaceElecWithI ; }

      // Silver-Muller ABC
      Galerkin { DtDtDof[ nu[] * ( Normal[] /\ Dof{a} ) /\ Normal[]   , {a} ];
        In SilverMullerBoundary; Integration I1; Jacobian Sur;  }

      Galerkin {   DtDof[ nu[] * ( Normal[] /\ Dof{d v} ) /\ Normal[] , {a} ];
        In SilverMullerBoundary; Integration I1; Jacobian Sur;  }
      Galerkin { DtDtDof[ nu[] * ( Normal[] /\ Dof{a} ) /\ Normal[]   , {d v} ];
        In SilverMullerBoundary; Integration I1; Jacobian Sur;  }
      Galerkin {   DtDof[ nu[] * ( Normal[] /\ Dof{d v} ) /\ Normal[] , {d v} ];
        In SilverMullerBoundary; Integration I1; Jacobian Sur;  }
    }
  }

}


Resolution {

  { Name ElectroKin ;
    System {
      { Name S0 ; NameOfFormulation Electrokinetics_v ; }
    }
    Operation {
      Generate[S0] ; Solve[S0] ; SaveSolution[S0] ;
      If(Flag_PostInResolution)
        PostOperation[Post_EleKin] ;
      EndIf
    }
  }

  { Name ElectroKinSta_coupled ;
    System {
      { Name S0  ; NameOfFormulation Electrokinetics_v ; }
      { Name S1 ; NameOfFormulation Electrostatics_v0_v ;
        Type ComplexValue ; Frequency Freq ;}
    }
    Operation {
      Generate[S0] ; Solve[S0] ; SaveSolution[S0] ;
      Generate[S1] ; Solve[S1] ; SaveSolution[S1] ;
      If(Flag_PostInResolution)
        PostOperation[PostOp~{0}] ;
      EndIf
    }
  }

  { Name MagDyn_av ;
    System {
      { Name S0 ; NameOfFormulation Magnetodynamics_av_3D ;
        Type ComplexValue ; Frequency Freq ; }
    }
    Operation {
      Generate[S0] ; Solve[S0] ; SaveSolution[S0] ;
      If(Flag_PostInResolution)
        PostOperation[PostOp~{1}] ;
      EndIf
    }
  }

  { Name MagDyn_av_Elec_coupled ;
    System {
      { Name S0 ; NameOfFormulation Magnetodynamics_av_3D ;
        Type ComplexValue ; Frequency Freq ; }
      { Name S1 ; NameOfFormulation Electrostatics_a0v0_v ;
        Type ComplexValue ; Frequency Freq ; }
    }
    Operation {
      Generate[S0] ; Solve[S0] ; SaveSolution[S0] ;
      Generate[S1] ; Solve[S1] ; SaveSolution[S1] ;
      If(Flag_PostInResolution)
        PostOperation[PostOp~{1}] ;
        PostOperation[PostOp~{2}] ;
      EndIf

    }
  }

 { Name FullWave ;
    System {
      { Name S0 ; NameOfFormulation FullWave_av_3D ;
        Type ComplexValue ; Frequency Freq ; }
    }
    Operation {
      Generate[S0] ; Solve[S0] ; SaveSolution[S0] ;
      If(Flag_PostInResolution)
        PostOperation[PostOp~{3}] ;
      EndIf
    }
  }

  { Name Analysis ;
    System {
      If(Flag_AnalysisType == 0) // electrikinetics + electrostatics
        { Name S0 ; NameOfFormulation Electrokinetics_v ; }
        { Name S1 ; NameOfFormulation Electrostatics_v0_v ;
          Type ComplexValue ; Frequency Freq ;}
      EndIf
      If(Flag_AnalysisType == 1) // magnetodynamics
        { Name S0 ; NameOfFormulation Magnetodynamics_av_3D ;
          Type ComplexValue ; Frequency Freq ; }
      EndIf
      If(Flag_AnalysisType == 2) // magnetodynamics + electrostatics
        { Name S0 ; NameOfFormulation Magnetodynamics_av_3D ;
          Type ComplexValue ; Frequency Freq ; }
        { Name S1 ; NameOfFormulation Electrostatics_a0v0_v ;
          Type ComplexValue ; Frequency Freq ; }
      EndIf
      If(Flag_AnalysisType == 3) // full wave
        { Name S0 ; NameOfFormulation FullWave_av_3D ;
          Type ComplexValue ; Frequency Freq ; }
      EndIf
    }
    Operation {
      CreateDir[Str[Dir]];
      Generate[S0] ; Solve[S0] ; SaveSolution[S0] ;

      If(Flag_AnalysisType==0 || Flag_AnalysisType==2)
        Generate[S1] ; Solve[S1] ; SaveSolution[S1] ;
      EndIf

      If(Flag_PostInResolution)
        If(Flag_AnalysisType == 2)
          PostOperation[PostOp~{1}] ;
        EndIf
        PostOperation[PostOp~{Flag_AnalysisType}] ;
      EndIf
    }
  }





}


PostProcessing {

  { Name EleKin ; NameOfFormulation Electrokinetics_v ;
    PostQuantity {
      { Name v ; Value { Term { [ {v} ]          ; In DomainC ; Jacobian Vol ; } } }
      { Name e ; Value { Term { [ -{d v} ]       ; In DomainC ; Jacobian Vol ; } } }
    }
  }

  { Name EleKinSta ; NameOfFormulation Electrostatics_v0_v ;
    PostQuantity {
      { Name v  ; Value { Term { [ {v}+{v0} ]  ; In DomainCC ; Jacobian Vol ; } } }
      { Name v0 ; Value { Term { [ {v0} ]      ; In DomainCC ; Jacobian Vol ; } } }
      { Name v1 ; Value { Term { [ {v} ]       ; In DomainCC ; Jacobian Vol ; } } }
      { Name e  ; Value { Term { [ -{d v}-{d v0} ] ; In DomainCC ; Jacobian Vol ; } } }
      { Name e0 ; Value { Term { [ -{d v0} ]      ; In DomainCC ; Jacobian Vol ; } } }
      { Name e1 ; Value { Term { [ -{d v} ]       ; In DomainCC ; Jacobian Vol ; } } }

      { Name Ipos ; // Includes only capacitive effects (Zc = 1/(jwC))
        Value {
          Integral { Type Global ;
            [ -epsilon[] * Dt[{d v}+{d v0}] * BF{d v0} ] ; In DomainCC ; Jacobian Vol ; Integration I1 ; }
        }
      }
    }
  }

  //------------------------------------------------------------------------------------

  { Name MagDyn_av_3D ; NameOfFormulation Magnetodynamics_av_3D ;
    PostQuantity {
      { Name a ; Value { Term { [ {a} ]          ; In Domain ; Jacobian Vol ; } } }
      { Name b ; Value { Term { [ {d a} ]        ; In Domain ; Jacobian Vol ; } } }
      { Name h ; Value { Term { [ nu[] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name v ; Value { Term { [ {v} ]          ; In DomainC ; Jacobian Vol ; } } }

      { Name e ; Value { Term { [ -Dt[{a}]-{d v} ] ; In DomainC ;Jacobian Vol ; } } }
      { Name j ; Value { Term { [ sigma[]*(-Dt[{a}]-{d v}) ] ; In DomainC ; Jacobian Vol ; } } }

      { Name U ; Value { Term { [ {U} ]   ; In SurfaceElec ; } } }
      { Name I ; Value { Term { [ {I} ]   ; In SurfaceElec ; } } }

      { Name S ; Value { Term { [  {U}*Conj[{I}] ]   ; In SurfaceElec ; } } }            // Power
      { Name Z ; Value { Term { [ -{U}*Conj[{I}]/SquNorm[{I}] ] ; In SurfaceElec ; } } } // Impedance
      { Name L ; Value { Term { [ -Im[{U}/{I}]/(2*Pi*Freq) ] ; In SurfaceElec ; } } }    // Inductance

      { Name Ipos ; Value {
          Integral { Type Global ;
            [ -sigma[] * (Dt[{a}] + {d v}) * BF{d v} ] ;
            In DomainC ; Jacobian Vol ; Integration I1 ;
	  }
	}
      }

    }
  }

  //------------------------------------------------------------------------------------

  { Name Electrostatics_a0v0_v ; NameOfFormulation Electrostatics_a0v0_v ;
    PostQuantity {
      { Name v  ; Value { Term { [ {v}+{v0} ] ; In DomainCC ; Jacobian Vol ;} } }
      { Name v0 ; Value { Term { [ {v0} ]     ; In DomainCC ; Jacobian Vol ;} } } // potential from av-formulation
      { Name v1 ; Value { Term { [ {v} ]      ; In DomainCC ; Jacobian Vol ;} } } // new potential in Domain CC
      { Name e  ; Value { Term { [ -{d v}-{d v0}-Dt[{a}] ] ; In DomainCC ; Jacobian Vol ;}
                          Term { [ -Dt[{a}]-{d v0} ]       ; In DomainC ; Jacobian Vol ;} } }
      { Name d  ; Value { Term { [ -epsilon[] * {d v} ]  ; In DomainCC ; Jacobian Vol ;} } }

      { Name Ipos_RL ; Value { Integral { //Results from magnetodynamics ==> Z = R + jwL
            Type Global ;
	    [ -sigma[] * (Dt[{a}] + {d v0}) * BF{d v0} ] ;
            In DomainC ; Jacobian Vol ; Integration I1 ;
	  }
	}
      }

      { Name Ipos_RLC ; // I with both inductive (Zl=jwL) and capacitive effects (Zc = 1/(jwC))
        Value {
	  Integral { Type Global ;
	    [ -sigma[] * (Dt[{a}] + {d v0}) * BF{d v0} ] ;
            In DomainC ; Jacobian Vol ; Integration I1 ;
	  }
          Integral { Type Global ;
	    [ -epsilon[] * Dt[Dt[{a}]+{d v0}+{d v}] * BF{d v0} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ;
	  }
	}
      }

      { Name Ipos_incapa ; // I with only capacitive effects
        Value {
	  Integral { Type Global ;
	    [ -epsilon[] * Dt[ Dt[{a}]+{d v}+{d v0} ] * BF{d v0} ] ;
            In Domain ; Jacobian Vol ; Integration I1 ;
	  }
        }
        /*
          Integral { Type Global ;
          [ -epsr[]*eps0 * (Dt[Dt[{a}]] * BF{d v0}) ] ; In Domain ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
          [ -epsr[]*eps0 * ((Dt[{d v}+{d v0}]) * BF{d v0}) ] ; In DomainCC ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
          [ -epsr[]*eps0 * ((Dt[{d v0}]) * BF{d v0}) ] ; In DomainC ; Jacobian Vol ; Integration I1 ; }
          }
        */
      }

      { Name Cpos_incapa ;
        Value {
	  Integral { Type Global ;
	    [ -epsilon[] * Dt[{a}] * BF{d v0} ] ;        In Domain   ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
	    [ -epsilon[] * ({d v}+{d v0}) * BF{d v0} ] ; In DomainCC ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
	    [ -epsilon[] * {d v0} * BF{d v0} ] ;         In DomainC  ; Jacobian Vol ; Integration I1 ; }

	  Integral { Type Global ;
	    [ -epsilon[] * Dt[{a}] * Dt[{a}] ] ;         In Domain ;   Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
	    [ -epsilon[] * ({d v}+{d v0}) * Dt[{a}] ] ;  In DomainCC ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
	    [ -epsilon[] * {d v0} * Dt[{a}] ] ;          In DomainC ; Jacobian Vol  ; Integration I1 ; }

	  /*
	  Integral { Type Global ;
	    [ -epsilon[] * 2 * Dt[{a}] *({d v0}+{d v}) ] ;     In Domain ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
	    [ -epsilon[] * Dt[{a}] * Dt[{a}] ] ;               In Domain ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
	    [ -epsilon[] * ({d v}+{d v0}) * ({d v0}+{d v}) ] ; In Domain ; Jacobian Vol ; Integration I1 ; }
	  */
	}
      }
      { Name Cpos_fromEnergy ; // == exactly the same as Cpos_incapa
        Value {
	  Integral { Type Global ;
	    [ epsilon[] * SquNorm[ -Dt[{a}]-{d v0}-{d v}] ] ; In Domain ; Jacobian Vol ; Integration I1 ; }
          /*
            Integral { Type Global ;
            [ epsilon[] * SquNorm[ - Dt[{a}] - {d v0} ] ] ;  In DomainC ; Jacobian Vol ; Integration I1 ; }
          */
	}
      }
    }

  }

  //------------------------------------------------------------------
 { Name FullWave_av_3D ; NameOfFormulation FullWave_av_3D ;
    PostQuantity {
      { Name a ; Value { Term { [ {a} ]          ; In Domain ; Jacobian Vol ; } } }
      { Name b ; Value { Term { [ {d a} ]        ; In Domain ; Jacobian Vol ; } } }
      { Name h ; Value { Term { [ nu[] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name v ; Value { Term { [ {v} ]          ; In DomainC ; Jacobian Vol ; } } }

      { Name e ; Value { Term { [ -Dt[{a}]-{d v} ] ; In Domain ; Jacobian Vol ; } } }
      { Name j ; Value {
          Term { [ sigma[]  *(-Dt[{a}]-{d v}) ] ; In DomainC ; Jacobian Vol ; }
          Term { [ epsilon[]*(-Dt[{a}]-{d v}) ] ; In DomainC ; Jacobian Vol ; }
        }
      }
      { Name d ; Value { Term { [ epsilon[]*(-Dt[{a}]-{d v}) ] ; In Domain ; Jacobian Vol ; } } }

      { Name I ; Value { Term { [ {I} ]   ; In SurfaceElec ; } } }
      { Name U ; Value { Term { [ {U} ]   ; In SurfaceElec ; } } }

      { Name Ipos ;
        Value {
	  Integral { Type Global ;
	    [ -sigma[]   * (Dt[{a}] + {d v}) * BF{d v} ] ; In DomainC ; Jacobian Vol ; Integration I1 ; }
	  Integral { Type Global ;
	    [ -epsilon[] * (Dt[{a}] + {d v}) * BF{d v} ] ; In Domain ; Jacobian Vol ; Integration I1 ; }
	}
      }

      { Name Cpos_fromEnergy ;
        Value {
	  Integral { Type Global ;
	    [ epsilon[] * SquNorm[-Dt[{a}]-{d v}] ] ; In Domain ; Jacobian Vol ; Integration I1 ; }
	}
      }

    }
  }

}


DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible !Flag_PostInResolution}
];
