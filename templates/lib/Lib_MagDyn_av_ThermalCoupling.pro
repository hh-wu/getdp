Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

//+++ Not ready yet!
//+++ TODO: Should be defined at 1st position (before basis Formulation)... but not well fixed now
Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Quantity {
      { Name T; Type Local; NameOfSpace Hgrad_T~{iP_The}; }
      //+++ To be generalized for any thermic formulation
    }
    /*
    //+++ Add features in Parser to allow inclusion of argument or not for a function
    //+++ not to duplicate terms like below! E.g.: sigma[] or sigma[{T}]
    // use, e.g., sigma[ sigma_arg ]
    Argument {
      { Name sigma_arg; ArgumentDef [{T}]; }
    }
    */
  }
}

Return


// Modules
for_lib = "";
/*
If (Exists(Lib_TheDyn_T))
  for_lib = N2S[for~{Lib_TheDyn_T}];
EndIf
*/

//
Macro StrCat[BaseFileName, "_FO_", for_lib]

Quantity {
  { Name a; Type Local; NameOfSpace Hcurl_a~{iP_Mag}; }
  { Name ur; Type Local; NameOfSpace Hregion_u_2D~{iP_Mag}; }
  { Name ir; Type Local; NameOfSpace Hregion_i_2D~{iP_Mag}; }
}

Equation {

// Only for sources from DomainC~{iP_Mag}
  Galerkin {
    [ - Coef_JouleLosses~{iP_Mag}*sigma~{iP_Mag}[Re[{T}]]*<a>[SquNorm[Dt[{a}]+{ur}]] , {T} ];
    // Joule source
    In Region[{DomainJoule~{iP}, -DomainS~{iP_Mag}, -DomainS0~{iP_Mag}}];
    Integration Gauss_v~{iP}; Jacobian Vol~{iP};
  }

  // Only for sources from DomainS~{iP_Mag}
  Galerkin {
    [ - Coef_JouleLosses~{iP_Mag}/sigma~{iP_Mag}[Re[{T}]]*<a>[SquNorm[(js0~{iP_Mag}[]*Vector[0,0,1])*{ir}]] , {T} ];
    // Joule source
    In Region[{DomainJoule~{iP}, -DomainC~{iP_Mag}, -DomainS0~{iP_Mag}}];
    Integration Gauss_v~{iP}; Jacobian Vol~{iP};
  }

  // Only for sources from DomainS0~{iP_Mag}
  Galerkin {
    [ - Coef_JouleLosses~{iP_Mag}/sigma~{iP_Mag}[Re[{T}]]*<a>[SquNorm[js0~{iP_Mag}[]]] , {T} ];
    // Joule source
    In Region[{DomainJoule~{iP}, -DomainC~{iP_Mag}, -DomainS~{iP_Mag}}];
    Integration Gauss_v~{iP}; Jacobian Vol~{iP};
  }

}

Return

