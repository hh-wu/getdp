Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Group {
  DefineGroup[ SkinDomainC~{iP} ]; // Not required in 2D

  DefineGroup[ Surface_SkinC_BFs~{iP} ];
  Surface_SkinC_BFs~{iP} += Region[{SkinDomainC~{iP}}];
}

Function {
  DefineConstant[ CoefGeo~{iP} = 1. ];

  DefineConstant[ CoefGeo~{iP} = 1., CoefGeo_L~{iP} = 1., CoefGeos_L_Corrected~{iP} = 1. ];
  CoefGeos~{iP}[All] = CoefGeo~{iP};
  CoefGeos_L~{iP}[All] = CoefGeo_L~{iP}; //+++ TODO: to be used in the Formulation
  CoefGeos_L_Corrected~{iP}[All] = CoefGeos_L_Corrected~{iP};
}

Constraint{
  { Append; Name Voltage~{iP}; }
  { Append; Name Current~{iP}; }
}

FunctionSpace {
  // Gradient of Electric scalar potential (2D)
  { Name Hregion_u_2D~{iP}; Type Form1P;
    BasisFunction {
      { Name sr; NameOfCoef ur; Function BF_RegionZ;
        Support DomainCWithSurf~{iP}; Entity DomainCWithSurf~{iP}; }
    }
    GlobalQuantity {
      { Name U; Type AliasOf       ; NameOfCoef ur; }
      { Name I; Type AssociatedWith; NameOfCoef ur; }
    }
    Constraint {
      { NameOfCoef U;
        EntityType Auto; NameOfConstraint Voltage~{iP}; }
      { NameOfCoef I;
        EntityType Auto; NameOfConstraint Current~{iP}; }
    }
  }
}

Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Quantity {
      { Name ur; Type Local; NameOfSpace Hregion_u_2D~{iP}; }
      { Name I; Type Global; NameOfSpace Hregion_u_2D~{iP} [I]; }
      { Name U; Type Global; NameOfSpace Hregion_u_2D~{iP} [U]; }
    }

    Equation {
      // Electric field e = -Dt[{a}]-{ur},
      // with {ur} = Grad v constant in each region of DomainC~{iP}
      Galerkin { [ sigma~{iP}[] * Dof{ur} / CoefGeos~{iP}[] , {a} ]; In DomainC~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      // When {ur} act as a test function, one obtains the circuits relations,
      // relating the voltage and the current of each region in DomainC~{iP}
      Galerkin { DtDof [ sigma~{iP}[] * Dof{a} , {ur} ]; In DomainC~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      Galerkin { [ sigma~{iP}[] * Dof{ur} / CoefGeos~{iP}[] , {ur} ]; In DomainC~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      GlobalTerm { [ Dof{I} *(CoefGeos~{iP}[]/Fabs[CoefGeos~{iP}[]]) , {U} ]; In DomainC~{iP}; }
    }

  }
}

PostProcessing {
  {
    Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name j;
        // Only correct in MagDyn
        Value {
          Term { [ -sigma~{iP}[] * {ur}/CoefGeos~{iP}[] ]; In DomainC~{iP}; Jacobian Vol~{iP}; }
        }
      }

      //+++
      { Name Emag ;
        Value {
	  Integral {
            Type Global;
            [ nu~{iP}[] * SquNorm[{d a}] * CoefGeos_L~{iP}[] * CoefGeos~{iP}[] ];
            In Domain~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
	}
      }

      { Append -1; Name JouleLosses;
        Value {
          // Replace the less general prior definition! (Append -1 deletes the last (-1) Integral)
          Integral { [ Coef_JouleLosses~{iP} * sigma~{iP}[]*SquNorm[Dt[{a}]+{ur}/CoefGeos~{iP}[]] ];
                     In DomainC~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
	}
      }

      { Name U; Value { Term { [ {U} ]; In DomainC~{iP}; } } }
      { Name I; Value { Term { [ {I} ]; In DomainC~{iP}; } } }
      { Name Z; Value { Term { [ ({I}!=0)? -{U}/{I} : 0. ]; In DomainC~{iP}; } } }
      { Name Um; Value { Term { [ Norm[{U}] ]; In DomainC~{iP}; } } }
      { Name Im; Value { Term { [ Norm[{I}] ]; In DomainC~{iP}; } } }
    }
  }
}

Return


// Modules
for_lib = "";
If (Exists(Lib_MagDyn_av_CircuitCoupling))
  for_lib = N2S[for~{Lib_MagDyn_av_CircuitCoupling}];
EndIf

//
Macro StrCat[BaseFileName, "_FO_GE_", for_lib]
  { Node {I}; Loop {U}; Equation {I}; In DomainCWithSurf~{iP}; }
Return
