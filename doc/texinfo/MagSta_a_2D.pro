/* -------------------------------------------------------------------
   File "MagSta_a_2D.pro"

    Magnetostatics - Magnetic vector potential a formulation (2D)
   ------------------------------------------------------------------- 

   I N P U T
   ---------

   GlobalGroup :  (Extension '_Mag' is for Magnetic problem)
   -----------
   Domain_Mag               Whole magnetic domain
   DomainS_Mag              Inductor regions (Source)

   Function :
   --------
   nu[]                     Magnetic reluctivity

   Constraint :
   ----------
   MagneticVectorPotential_2D
                            Fixed magnetic vector potential (2D)
                            (classical boundary condition)
   SourceCurrentDensityZ    Fixed source current density (in Z direction)
*/

Group {
  DefineGroup[ Domain_Mag, DomainS_Mag ];
}

Function {
  DefineFunction[ nu ];
}

FunctionSpace {

  // Magnetic vector potential a (b = curl a)
  { Name Hcurl_a_Mag_2D; Type Form1P;
    BasisFunction {
      // a = a  s
      //      e  e
      { Name se; NameOfCoef ae; Function BF_PerpendicularEdge;
        Support Domain_Mag; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef ae; EntityType NodesOf;
        NameOfConstraint MagneticVectorPotential_2D; }
    }
  }

  // Source current density js (fully fixed space)
  { Name Hregion_j_Mag_2D; Type Vector;
    BasisFunction {
      { Name sr; NameOfCoef jsr; Function BF_RegionZ;
        Support DomainS_Mag; Entity DomainS_Mag; }
    }
    Constraint {
      { NameOfCoef jsr; EntityType Region;
        NameOfConstraint SourceCurrentDensityZ; }
    }
  }

}

Formulation {
  { Name Magnetostatics_a_2D; Type FemEquation;
    Quantity {
      { Name a ; Type Local; NameOfSpace Hcurl_a_Mag_2D; }
      { Name js; Type Local; NameOfSpace Hregion_j_Mag_2D; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ]; In Domain_Mag;
                 Jacobian Vol; Integration CurlCurl; }
      Galerkin { [ - Dof{js} , {a} ]; In DomainS_Mag;
                 Jacobian Vol; Integration CurlCurl; }
    }
  }
}

Resolution {
  { Name MagSta_a_2D;
    System {
      { Name Sys_Mag; NameOfFormulation Magnetostatics_a_2D; }
    }
    Operation {
      Generate[Sys_Mag]; Solve[Sys_Mag]; SaveSolution[Sys_Mag];
    }
  }
}

PostProcessing {
  { Name MagSta_a_2D; NameOfFormulation Magnetostatics_a_2D;
    Quantity {
      { Name a; 
        Value { 
          Local { [ {a} ]; In Domain_Mag; Jacobian Vol; } 
        }
      }
      { Name az; 
        Value { 
          Local { [ CompZ[{a}] ]; In Domain_Mag; Jacobian Vol; }
        }
      }
      { Name b; 
        Value { 
          Local { [ {d a} ]; In Domain_Mag; Jacobian Vol; }
        }
      }
      { Name h; 
        Value { 
          Local { [ nu[] * {d a} ]; In Domain_Mag; Jacobian Vol; }
        }
      }
    }
  }
}

