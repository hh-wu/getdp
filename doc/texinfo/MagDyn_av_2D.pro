/* -------------------------------------------------------------------
   File "MagDyn_av_2D.pro"

    Magnetodynamics - Magnetic vector potential and electric scalar 
                      potential a-v formulation (2D)
   ------------------------------------------------------------------- 

   I N P U T
   ---------

   GlobalGroup :  (Extension '_Mag' is for Magnetic problem)
   -----------
   Domain_Mag               Whole magnetic domain
   DomainCC_Mag             Nonconducting regions (not used)
   DomainC_Mag              Conducting regions
   DomainS_Mag              Inductor regions (Source)
   DomainV_Mag              All regions in movement (for speed term)

   Function :
   --------
   nu[]                     Magnetic reluctivity
   sigma[]                  Electric conductivity

   Velocity[]               Velocity of regions

   Constraint :
   ----------
   MagneticVectorPotential_2D
                            Fixed magnetic vector potential (2D)
                            (classical boundary condition)
   SourceCurrentDensityZ    Fixed source current density (in Z direction)

   Voltage_2D               Fixed voltage
   Current_2D               Fixed Current

   Parameters :
   ----------

   Freq                     Frequency (Hz)

   Parameters for time loop with theta scheme :
   Mag_Time0, Mag_TimeMax, Mag_DTime
                            Initial time, Maximum time, Time step  (s)
   Mag_Theta                Theta  (e.g. 1.  : Implicit Euler,
                                         0.5 : Cranck Nicholson)
*/

Group {
  DefineGroup[ Domain_Mag, DomainCC_Mag, DomainC_Mag,
               DomainS_Mag, DomainV_Mag ];
}

Function {
  DefineFunction[ nu, sigma ];
  DefineFunction[ Velocity ];
  DefineVariable[ Freq ];
  DefineVariable[ Mag_Time0, Mag_TimeMax, Mag_DTime, Mag_Theta ];
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

  // Gradient of Electric scalar potential (2D)
  { Name Hregion_u_Mag_2D; Type Form1P;
    BasisFunction {
      { Name sr; NameOfCoef ur; Function BF_RegionZ;
        Support DomainC_Mag; Entity DomainC_Mag; }
    }
    GlobalQuantity {
      { Name U; Type AliasOf       ; NameOfCoef ur; }
      { Name I; Type AssociatedWith; NameOfCoef ur; }
    }
    Constraint {
      { NameOfCoef U; EntityType Region;
        NameOfConstraint Voltage_2D; }
      { NameOfCoef I; EntityType Region;
        NameOfConstraint Current_2D; }
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
  { Name Magnetodynamics_av_2D; Type FemEquation;
    Quantity {
      { Name a ; Type Local ; NameOfSpace Hcurl_a_Mag_2D; }
      { Name ur; Type Local ; NameOfSpace Hregion_u_Mag_2D; }
      { Name I ; Type Global; NameOfSpace Hregion_u_Mag_2D [I]; }
      { Name U ; Type Global; NameOfSpace Hregion_u_Mag_2D [U]; }
      { Name js; Type Local ; NameOfSpace Hregion_j_Mag_2D; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ]; In Domain_Mag;
                 Jacobian Vol; Integration CurlCurl; }

      Galerkin { DtDof [ sigma[] * Dof{a} , {a} ]; In DomainC_Mag;
                 Jacobian Vol; Integration CurlCurl; }
      Galerkin { [ sigma[] * Dof{ur} , {a} ]; In DomainC_Mag;
                 Jacobian Vol; Integration CurlCurl; }

      Galerkin { [ - sigma[] * (Velocity[] *^ Dof{d a}) , {a} ];
                 In DomainV_Mag;
                 Jacobian Vol; Integration CurlCurl; }

      Galerkin { [ - Dof{js} , {a} ]; In DomainS_Mag;
                 Jacobian Vol;
                 Integration CurlCurl; }

      Galerkin { DtDof [ sigma[] * Dof{a} , {ur} ]; In DomainC_Mag;
                 Jacobian Vol; Integration CurlCurl; }
      Galerkin { [ sigma[] * Dof{ur} , {ur} ]; In DomainC_Mag;
                 Jacobian Vol; Integration CurlCurl; }
      GlobalTerm { [ Dof{I} , {U} ]; In DomainC_Mag; }
    }
  }
}


Resolution {
  { Name MagDyn_av_2D;
    System {
      { Name Sys_Mag; NameOfFormulation Magnetodynamics_av_2D;
        Type ComplexValue; Frequency Freq; }
    }
    Operation {
      Generate[Sys_Mag]; Solve[Sys_Mag]; SaveSolution[Sys_Mag];
    }
  }

  { Name MagDyn_t_av_2D;
    System {
      { Name Sys_Mag; NameOfFormulation Magnetodynamics_av_2D; }
    }
    Operation {
      InitSolution[Sys_Mag]; SaveSolution[Sys_Mag];
      TimeLoopTheta[Mag_Time0, Mag_TimeMax, Mag_DTime, Mag_Theta] {
        Generate[Sys_Mag]; Solve[Sys_Mag]; SaveSolution[Sys_Mag]; 
      }
    }
  }

}


PostProcessing {
  { Name MagDyn_av_2D; NameOfFormulation Magnetodynamics_av_2D;
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
      { Name j; 
        Value { 
          Local { [ - sigma[]*(Dt[{a}]+{ur}) ]; In DomainC_Mag; 
                  Jacobian Vol; } 
        } 
      }
      { Name jz; 
        Value { 
          Local { [ - sigma[]*CompZ[Dt[{a}]+{ur}] ]; In DomainC_Mag; 
                  Jacobian Vol; } 
        } 
      }
      { Name roj2;
        Value { 
          Local { [ sigma[]*SquNorm[Dt[{a}]+{ur}] ]; In DomainC_Mag; 
                  Jacobian Vol; } 
        } 
      }
      { Name U; Value { Local { [ {U} ]; In DomainC_Mag; } } }
      { Name I; Value { Local { [ {I} ]; In DomainC_Mag; } } }
    }
  }
}
