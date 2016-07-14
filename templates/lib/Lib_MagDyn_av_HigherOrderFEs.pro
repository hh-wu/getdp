Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Group {
  DefineGroup[ Surface_Global_BFs~{iP} ];
  Surface_Specific_FE_Degree~{iP} = Region[{Surface_Global_BFs~{iP}}];
  //+++ TODO: define Surface_Fixed_Primal_Quantity also in 2D and then:
  //Surface_Specific_FE_Degree~{iP} = Region[{Surface_Fixed_Primal_Quantity~{iP}}];
  // to avoid explicit Constraint with zero BCs
}

FunctionSpace {
  {
    Append;
    Name Hcurl_a~{iP}; Type Form1P;

    BasisFunction {
      {
        Name s_e; NameOfCoef a_e; Function BF_PerpendicularEdge_2E;
        Support DomainWithSurf~{iP};
        Entity EdgesOf[All, Not {Surface_Specific_FE_Degree~{iP}}];
      }
    }
    Constraint {
      { NameOfCoef a_e;
        EntityType EdgesOf; NameOfConstraint MagneticVectorPotential~{0}~{iP}; }
    }
  }
}

Return
