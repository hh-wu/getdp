/*
  EleSta_vf
    Electrostatics - Electric scalar potential v formulation,
    with floating potential
*/

/* I N P U T
   ---------

  GlobalGroup :  (Extension '_Ele' is for Electric problem)
  -----------
    Domain_Ele               Whole electric domain
    DomainCC_Ele             Nonconducting regions
    DomainC_Ele              Conducting regions (not used)
    SkinDomainC_Ele          Skin of conducting regions (surfaces)

  Function :
  --------
    epsr[]                   Relative permittivity

  Constraint :
  ----------
    ElectricScalarPotential  Fixed electric scalar potential
                             (classical boundary condition)
    GlobalElectricPotential  Fixed global electric scalar potential
                             (for perfect conductors)
    GlobalElectricCharge     Fixed global electric charge

  Constants :
  ---------
    Length                   Length (in z-direction) for 2D structure (default: 1.)

  Parameters :
  ----------
    Freq                     Frequency (Hz)

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
   d : Electric flux density
   V : Voltage
   Q : Electric charge
   C : Capacitance

   Vmod : Modulus Voltage
   Qmod : Modulus Electric charge
   Vphase : Phase Voltage (deg)
   Qphase : Phase Electric charge (deg)

*/


/* --------------------------------------------------------------------------*/

Group {
  DefineGroup[ Domain_Ele, DomainCC_Ele, DomainC_Ele, SkinDomainC_Ele ] ;
}

Function {
  DefineFunction[ epsr ] ;
  DefineConstant[ Length = 1. ] ;
  DefineConstant[ Freq ] ;
}


/* --------------------------------------------------------------------------*/

FunctionSpace {
  { Name Hgrad_vf_Ele ; Type Form0 ;
    BasisFunction {
      // v = v  s  + v    s
      //      n  n    c,k  c,k
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support DomainCC_Ele ; Entity NodesOf[ All, Not SkinDomainC_Ele ] ; }
      { Name sck ;NameOfCoef vck ; Function BF_GroupOfNodes ;
        Support DomainCC_Ele ; Entity GroupsOfNodesOf[ SkinDomainC_Ele ] ; }

      { Name sn2 ; NameOfCoef vn2 ; Function BF_Node_2E ;
        Support DomainCC_Ele ; Entity EdgesOf[ All ] ; }
    }
    SubSpace { // only for a PostOperation
      { Name vf ; NameOfBasisFunction sck ; }
    }
    GlobalQuantity {
      { Name GlobalElectricPotential ; Type AliasOf        ; NameOfCoef vck ; }
      { Name GlobalElectricCharge    ; Type AssociatedWith ; NameOfCoef vck ; }
    }
    Constraint {
      { NameOfCoef vn ;
        EntityType NodesOf ; NameOfConstraint ElectricScalarPotential ; }
      { NameOfCoef vn2 ;
        EntityType EdgesOf ; NameOfConstraint ElectricScalarPotential_d2 ; }

      { NameOfCoef GlobalElectricPotential ;
        EntityType GroupsOfNodesOf ; NameOfConstraint GlobalElectricPotential ; }
      { NameOfCoef GlobalElectricCharge ;
        EntityType GroupsOfNodesOf ; NameOfConstraint GlobalElectricCharge ; }
    }
  }
}


Formulation {
  { Name Electrostatics_vf ; Type FemEquation ;
    Quantity {
      { Name v ; Type Local  ; NameOfSpace Hgrad_vf_Ele ; }
      { Name Q ; Type Global ;
        NameOfSpace Hgrad_vf_Ele [GlobalElectricCharge] ; }
      { Name V ; Type Global ;
        NameOfSpace Hgrad_vf_Ele [GlobalElectricPotential] ; }
      { Name vf ; Type Local ; NameOfSpace Hgrad_vf_Ele [vf] ; }
    }
    Equation {
      Galerkin { [ epsr[] * Dof{d v} , {d v} ] ;
                 In DomainCC_Ele ;
                 Jacobian Vol ; Integration GradGrad ; }

      GlobalTerm { [ -Dof{Q}/eps0 / Length , {V} ] ; In SkinDomainC_Ele ; }
    }
  }
}


Resolution {
  { Name EleSta_vf ;
    System {
      { Name Sys_Ele ; NameOfFormulation Electrostatics_vf ; }
    }
    Operation { Generate Sys_Ele ; Solve Sys_Ele ; SaveSolution Sys_Ele ; }
  }
  { Name EleSta_vf_cplx ;
    System {
      { Name Sys_Ele ; NameOfFormulation Electrostatics_vf ;
        Type ComplexValue ; Frequency Freq ;}
    }
    Operation { Generate Sys_Ele ; Solve Sys_Ele ; SaveSolution Sys_Ele ; }
  }
}


PostProcessing {
  { Name EleSta_vf ; NameOfFormulation Electrostatics_vf ;
    PostQuantity {
      { Name v ; Value { Term { [ {v} ]                  ; In DomainCC_Ele ; } } }
      { Name e ; Value { Term { [ -{d v} ]               ; In DomainCC_Ele ; } } }
      { Name d ; Value { Term { [ -eps0*epsr[] * {d v} ] ; In DomainCC_Ele ; } } }

      { Name em ; Value { Term { [ Norm[{d v}] ]         ; In DomainCC_Ele ; } } }

      { Name Q ; Value { Term { [ {Q} ] ; In SkinDomainC_Ele ; } } }
      { Name V ; Value { Term { [ {V} ] ; In SkinDomainC_Ele ; } } }
      { Name C ; Value { Term { [ {Q}/{V} ] ; In SkinDomainC_Ele ; } } }

      { Name Vmod ; Value { Term { [ Norm[{V}] ] ; In SkinDomainC_Ele ; } } }
      { Name Qmod ; Value { Term { [ Norm[{Q}] ] ; In SkinDomainC_Ele ; } } }

      { Name Vphase ; Value { Term { [ Atan2[Im[{V}],Re[{V}]]/Pi*180. ] ; In SkinDomainC_Ele ; } } }
      { Name Qphase ; Value { Term { [ Atan2[Im[{Q}],Re[{Q}]]/Pi*180. ] ; In SkinDomainC_Ele ; } } }

    }
  }
}


/* --------------------------------------------------------------------------*/
/* --------------------------------------------------------------------------*/
