/*
  EleKin_vf
    Electrokinetics - Electric scalar potential v formulation,
    with floating potential
*/

/* I N P U T
   ---------

  GlobalGroup :  (Extension '_Ele' is for Electric problem)
  -----------
    Domain_Ele               Whole electric domain
    DomainC_Ele              Conducting regions
    Electrode_Ele            Electrodes (surfaces)

  Function :
  --------
    sigma[]                  Electric conductivity

  Constraint :
  ----------
    ElectricScalarPotential  Fixed electric scalar potential
                             (classical boundary condition)
    GlobalElectricPotential  Fixed global electric scalar potential
                             (for perfect electrodes)
    GlobalElectricCurrent    Fixed global electric current
                             (for perfect electrodes)

  Constants :
  ---------
    Length                   Length (in z-direction) for 2D structure (default: 1.)

  Physical constants :
  ------------------
*/

    eps0 = 8.854187818e-12 ;

/* O U T P U T
   -----------

  PostQuantities :
  --------------
   v : Electric scalar potential
   e : Electric field
   j : Electric current density
   V : Voltage
   I : Current
   R : Resistance

*/

/* --------------------------------------------------------------------------*/

Group {
  DefineGroup[ Domain_Ele, DomainC_Ele, Electrode_Ele ] ;
}

Function {
  DefineFunction[ sigma ] ;
  DefineConstant[ Length = 1. ] ;
}


/* --------------------------------------------------------------------------*/

FunctionSpace {
  { Name Hgrad_vf_EleKin ; Type Form0 ;
    BasisFunction {
      // v = v  s  + v    s
      //      n  n    c,k  c,k
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support DomainC_Ele ; Entity NodesOf[ All, Not Electrode_Ele ] ; }
      { Name sck ;NameOfCoef vck ; Function BF_GroupOfNodes ;
        Support DomainC_Ele ; Entity GroupsOfNodesOf[ Electrode_Ele ] ; }
    }
    SubSpace { // only for a PostOperation
      { Name vf ; NameOfBasisFunction sck ; }
    }
    GlobalQuantity {
      { Name V ; Type AliasOf        ; NameOfCoef vck ; }
      { Name I ; Type AssociatedWith ; NameOfCoef vck ; }
    }
    Constraint {
      { NameOfCoef vn ;
        EntityType NodesOf ; NameOfConstraint ElectricScalarPotential ; }

      { NameOfCoef V ;
        EntityType GroupsOfNodesOf ; NameOfConstraint GlobalElectricPotential ; }
      { NameOfCoef I ;
        EntityType GroupsOfNodesOf ; NameOfConstraint GlobalElectricCurrent ; }
    }
  }
}


Formulation {
  { Name Electrokinetics_vf ; Type FemEquation ;
    Quantity {
      { Name v ; Type Local  ; NameOfSpace Hgrad_vf_EleKin ; }
      { Name I ; Type Global ; NameOfSpace Hgrad_vf_EleKin [I] ; }
      { Name V ; Type Global ; NameOfSpace Hgrad_vf_EleKin [V] ; }
      { Name vf; Type Local  ; NameOfSpace Hgrad_vf_EleKin [vf] ; }
    }
    Equation {
      Galerkin { [ sigma[] * Dof{d v} , {d v} ] ;
                 In DomainC_Ele ;
                 Jacobian Vol ; Integration GradGrad ; }

      GlobalTerm { [ Dof{I} / Length , {V} ] ; In Electrode_Ele ; }
    }
  }
}


Resolution {
  { Name EleKin_vf ;
    System {
      { Name Sys_EleKin ; NameOfFormulation Electrokinetics_vf ; }
    }
    Operation {
      Generate Sys_EleKin ; Solve Sys_EleKin ; SaveSolution Sys_EleKin ;
    }
  }
}


PostProcessing {
  { Name EleKin_vf ; NameOfFormulation Electrokinetics_vf ;
    PostQuantity {
      { Name v ; Value { Term { [ {v} ]              ; In DomainC_Ele ; } } }
      { Name e ; Value { Term { [ -{d v} ]           ; In DomainC_Ele ; } } }
      { Name j ; Value { Term { [ -sigma[] * {d v} ] ; In DomainC_Ele ; } } }
      { Name V ; Value { Term { [ {V} ] ; In Electrode_Ele ; } } }
      { Name I ; Value { Term { [ {I} ] ; In Electrode_Ele ; } } }
      { Name R ; Value { Term { [ -{V}/{I} ] ; In Electrode_Ele ; } } }

      {
	Name Ipos ;
        Value {
	  Integral {
	    [ - sigma[] * {d v} * BF{d vf} * Length ] ;
	    In DomainC_Ele ; Jacobian Vol ; Integration GradGrad ;
	  }
	}
      }

    }
  }
}


/* --------------------------------------------------------------------------*/
/* --------------------------------------------------------------------------*/
