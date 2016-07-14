Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Group {
  DefineGroup[ SkinDomainC_SurImp~{iP} ];
  DomainCWithSurf~{iP} += Region[ {SkinDomainC_SurImp~{iP}} ];
  DomainWithSurf~{iP} += Region[ {SkinDomainC_SurImp~{iP}} ];

  DefineGroup[ Surface_SkinC_BFs~{iP} ];
  Surface_SkinC_BFs~{iP} += Region[{SkinDomainC_SurImp~{iP}}];
}

Function {
  DefineFunction[ Ysur~{iP} ];

  DefineConstant[ CoefGeo~{iP} = 1. ];
  CoefGeos~{iP}[All] = CoefGeo~{iP};
}

Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Equation {
      Galerkin { DtDof [ Ysur~{iP}[] * Dof{a} , {a} ];
                 In SkinDomainC_SurImp~{iP};
                 Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { [ Ysur~{iP}[] * Dof{ur} / CoefGeos~{iP}[] , {a} ];
                 In SkinDomainC_SurImp~{iP};
                 Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }

      Galerkin { DtDof [ Ysur~{iP}[] * Dof{a} , {ur} ]; In SkinDomainC_SurImp~{iP};
                 Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }
      Galerkin { [ Ysur~{iP}[] * Dof{ur} / CoefGeos~{iP}[] , {ur} ];
                 In SkinDomainC_SurImp~{iP};
                 Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }
      GlobalTerm { [ Dof{I} *(CoefGeos~{iP}[]/Fabs[CoefGeos~{iP}[]]) , {U} ];
                   In SkinDomainC_SurImp~{iP}; }
    }
  }
}

PostProcessing {
  {
    Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {

    }
  }
}

Return
