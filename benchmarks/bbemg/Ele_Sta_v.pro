/* -------------------------------------------------------------------
   File "EleSta_v.pro"

   Electrostatics - Electric scalar potential v formulation
   -------------------------------------------------------------------

   I N P U T
   ---------

   Global Groups :  (Extension '_Ele' is for Electric problem)
   -------------
   Domain_Ele               Whole electric domain (not used)
   DomainCC_Ele             Nonconducting regions
   DomainC_Ele              Conducting regions (not used)

   Function :
   --------
   epsr[]                   Relative permittivity

   Constraint :
   ----------
   ElectricScalarPotential  Fixed electric scalar potential
                            (classical boundary condition)

   Physical constants :
   ------------------                                               */

   eps0 = 8.854187818e-12;

Group {
  DefineGroup[ Domain_Ele, DomainCC_Ele, DomainC_Ele ];
}

Function {
  DefineFunction[ epsr ];
  DefineVariable[ Flag_Degree_v = 1 ] ;
}

FunctionSpace {
  { Name Hgrad_v_Ele; Type Form0;
    BasisFunction {
      // v = v  s   ,  for all nodes
      //      n  n
      { Name sn; NameOfCoef vn; Function BF_Node;
        Support DomainCC_Ele; Entity NodesOf[ All ]; }
      If (Flag_Degree_v == 2)
        { Name sn2 ; NameOfCoef vn2 ; Function BF_Node_2E ;
          Support DomainCC_Ele ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef vn; EntityType NodesOf;
        NameOfConstraint ElectricScalarPotential; }
      If (Flag_Degree_v == 2)
	{ NameOfCoef vn2 ;
          EntityType EdgesOf ; NameOfConstraint ZeroElectricScalarPotential ; }
      EndIf
    }
  }
}


Formulation {
  { Name Electrostatics_v; Type FemEquation;
    Quantity {
      { Name v; Type Local; NameOfSpace Hgrad_v_Ele; }
    }
    Equation {
      Galerkin { [ epsr[] * Dof{d v} , {d v} ]; In DomainCC_Ele;
                 Jacobian Vol; Integration Gauss_dv_dv; }
    }
  }
}


Resolution {
  { Name EleSta_v;
    System {
      { Name Sys_Ele; NameOfFormulation Electrostatics_v; Type Complex; }
    }
    Operation {
      Generate[Sys_Ele]; Solve[Sys_Ele]; SaveSolution[Sys_Ele];
    }
  }
}


PostProcessing {
  { Name EleSta_v; NameOfFormulation Electrostatics_v;
    Quantity {
      { Name v;
        Value {
          Local { [ {v} ]; In DomainCC_Ele; Jacobian Vol; }
        }
      }
      { Name e;
        Value {
          Local { [ -{d v} ]; In DomainCC_Ele; Jacobian Vol; }
        }
      }
      { Name em;
        Value {
          Local { [ Norm[-{d v}] ]; In DomainCC_Ele; Jacobian Vol; }
        }
      }
      { Name d;
        Value {
          Local { [ -eps0*epsr[] * {d v} ]; In DomainCC_Ele;
                                             Jacobian Vol; }
        }
      }
    }
  }
}
