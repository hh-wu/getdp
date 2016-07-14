Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Group {
  DefineGroup[ SkinDomainC_Perfect~{iP}, Surface_Global_BFs~{iP} ];
  Surface_Global_BFs~{iP} += Region[{SkinDomainC_Perfect~{iP}}];
  /* TODO: unify with Flux Tubes
  DefineGroup[ Sur_FluxTube~{iP}, CutLine_FluxTube~{iP}, Surface_Global_BFs~{iP} ];
  Sur_FluxTube~{iP} += SkinDomainC_Perfect~{iP}; // Only correct with dynamic Group
  CutLine_FluxTube~{iP} += SkinElectrode~{iP}; // in 3D...
  */
}

FunctionSpace {
  {
    Append;
    Name Hcurl_a~{iP}; Type Form1P;
    BasisFunction {
      {
        Name s_skin_perfect; NameOfCoef a_skin_perfect;
        Function BF_GroupOfPerpendicularEdges ;
        Support DomainWithSurf~{iP}; Entity GroupsOfNodesOf[SkinDomainC_Perfect~{iP}];
      }
    }
    GlobalQuantity {
      { Name Flux_perfect; Type AliasOf       ; NameOfCoef a_skin_perfect ; }
      { Name MMF_perfect ; Type AssociatedWith; NameOfCoef a_skin_perfect ; }
    }
    Constraint {
      { NameOfCoef a_skin_perfect;
        EntityType Auto; NameOfConstraint MagneticFlux~{iP}; }
      { NameOfCoef Flux_perfect;
        EntityType Auto; NameOfConstraint MagneticFlux~{iP}; }
      { NameOfCoef MMF_perfect;
        EntityType Auto; NameOfConstraint MMF~{iP}; }
    }
  }
}

Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Quantity {
      { Name Flux_perfect; Type Global; NameOfSpace Hcurl_a~{iP} [Flux_perfect]; }
      { Name MMF_perfect   ; Type Global; NameOfSpace Hcurl_a~{iP} [MMF_perfect]; }
    }

    Equation {
      GlobalTerm { [ -Dof{MMF_perfect} , {Flux_perfect} ]; In SkinDomainC_Perfect~{iP}; }
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
