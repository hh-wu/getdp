Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Group {
  DefineGroup[ DomainS~{iP} ];
}

Function {
  DefineFunction[ Ns~{iP}, Sc~{iP} ];

  DefineConstant[ CoefGeo~{iP} = 1., CoefGeo_L~{iP} = 1., CoefGeos_L_Corrected~{iP} = 1. ];
  CoefGeos~{iP}[All] = CoefGeo~{iP};
  CoefGeos_L~{iP}[All] = CoefGeo_L~{iP};
  CoefGeos_L_Corrected~{iP}[All] = CoefGeos_L_Corrected~{iP};
}

FunctionSpace {
  // Current in stranded coil (2D)
  { Name Hregion_i_2D~{iP}; Type Vector;
    BasisFunction {
      { Name sr; NameOfCoef ir; Function BF_RegionZ;
        Support DomainS~{iP}; Entity DomainS~{iP}; }
    }
    GlobalQuantity {
      { Name Is; Type AliasOf       ; NameOfCoef ir; }
      { Name Us; Type AssociatedWith; NameOfCoef ir; }
    }
    Constraint {
      //+++
      { NameOfCoef ir;
        EntityType Auto; NameOfConstraint Current~{iP}; }
      { NameOfCoef Us;
        EntityType Auto; NameOfConstraint Voltage~{iP}; }
      { NameOfCoef Is;
        EntityType Auto; NameOfConstraint Current~{iP}; }
    }
  }
}

Formulation {
  {
    Append;
    Name MagSta_a~{iP}; Type FemEquation;

    Quantity {
      { Name ir; Type Local ; NameOfSpace Hregion_i_2D~{iP}; }
      { Name Is; Type Global; NameOfSpace Hregion_i_2D~{iP} [Is]; }
    }

    Equation {
      // js[0] should be of the form: Ns[]/Sc[] * Vector[0,0,1]
      Galerkin { [ - (js0~{iP}[]*Vector[0,0,1]) /CoefGeos_L~{iP}[] * Dof{ir} , {a} ];
                 In DomainS~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
    }
  }
}

Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Quantity {
      { Name ir; Type Local; NameOfSpace Hregion_i_2D~{iP}; }
      { Name Us; Type Global; NameOfSpace Hregion_i_2D~{iP} [Us]; }
      { Name Is; Type Global; NameOfSpace Hregion_i_2D~{iP} [Is]; }
    }

    Equation {
      // js[0] should be of the form: Ns[]/Sc[] * Vector[0,0,1]
      Galerkin { [ - (js0~{iP}[]*Vector[0,0,1]) /CoefGeos_L~{iP}[] * Dof{ir} , {a} ];
                 In DomainS~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { DtDof [ Ns~{iP}[]/Sc~{iP}[] * Dof{a} , {ir} ]; In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      Galerkin { [ Ns~{iP}[]/Sc~{iP}[] /CoefGeos_L_Corrected~{iP}[] / sigma~{iP}[] * (js0~{iP}[]*Vector[0,0,1]) * Dof{ir} , {ir} ];
                 In DomainS~{iP};
                 Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      GlobalTerm { [ Dof{Us} / CoefGeos~{iP}[] , {Is} ];
                   In DomainS~{iP}; } // for Us in direction of Is
      // Attention: CoefGeos~{iP}[.] = 2*Pi for Axi
    }
  }
}

PostProcessing {
  {
    Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name js;
        Value {
          Term { [(js0~{iP}[]*Vector[0,0,1]) /CoefGeos_L_Corrected~{iP}[] *{ir}];
                 In DomainS~{iP}; Jacobian Vol~{iP}; }
        }
      }
      { Name j;
        // Only correct in MagDyn
        Value {
          Term { [(js0~{iP}[]*Vector[0,0,1]) /CoefGeos_L_Corrected~{iP}[] *{ir}];
                 In DomainS~{iP}; Jacobian Vol~{iP}; }
        }
      }

      { Name U; Value { Term { [ {Us} ]; In DomainS~{iP}; } } }
      { Name I; Value { Term { [ {Is} ]; In DomainS~{iP}; } } }
      { Name Z; Value { Term { [ ({Is}!=0)? -{Us}/{Is} : 0. ]; In DomainS~{iP}; } } }
      { Name Um; Value { Term { [ Norm[{Us}] ]; In DomainS~{iP}; } } }
      { Name Im; Value { Term { [ Norm[{Is}] ]; In DomainS~{iP}; } } }

      //+++
      { Name U_Pos;
        Value {
	  Integral {
            Type Global;
            [ -CoefGeos~{iP}[] * Ns~{iP}[]/Sc~{iP}[] * Dt[{a}] * BF{ir} ];
            In DomainS~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
	  Integral {
            Type Global;
            [ -CoefGeos~{iP}[] * Ns~{iP}[]/Sc~{iP}[] /CoefGeos_L_Corrected~{iP}[] / sigma~{iP}[] * (js0~{iP}[]*Vector[0,0,1]) * {ir} * BF{ir} ];
            In DomainS~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
	}
      }

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
  { Node {Is}; Loop {Us}; Equation {Us}; In DomainS~{iP}; }
Return
