Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Group {
  DefineGroup[ Sur_FluxTube~{iP}, CutLine_FluxTube~{iP}, Surface_Global_BFs~{iP} ];
  Surface_Global_BFs~{iP} += Region[{Sur_FluxTube~{iP}}];
  // In 2D: Sur_FluxTube is equivalent to CutLine_FluxTube

  //+++ Provisory
  DefineGroup[ Domain_A~{iP}, Domain_B~{iP}, Domain_C~{iP} ];
}

Function {
  DefineConstant[ CoefGeo~{iP} = 1., CoefGeo_L~{iP} = 1., CoefGeos_L_Corrected~{iP} = 1. ];

  CoefGeos~{iP}[All] = CoefGeo~{iP};
  CoefGeos_L~{iP}[All] = CoefGeo_L~{iP};
  CoefGeos_L_Corrected~{iP}[All] = CoefGeos_L_Corrected~{iP};
}

Constraint{
  { Append; Name MagneticFlux~{iP}; }
  { Append; Name MMF~{iP}; }
}

FunctionSpace {
  {
    Append;
    Name Hcurl_a~{iP}; Type Form1P;
    BasisFunction {
      { Name s_ft; NameOfCoef a_ft; Function BF_GroupOfPerpendicularEdges;
        Support DomainWithSurf~{iP}; Entity GroupsOfNodesOf[CutLine_FluxTube~{iP}];
      }
    }
    SubSpace {
      { Name a_ft; NameOfBasisFunction {s_ft}; }
    }
    GlobalQuantity {
      { Name Flux; Type AliasOf       ; NameOfCoef a_ft; }
      { Name MMF ; Type AssociatedWith; NameOfCoef a_ft; }
    }
    Constraint {
      { NameOfCoef a_ft;
        EntityType Auto; NameOfConstraint MagneticFlux~{iP}; }
      { NameOfCoef Flux;
        EntityType Auto; NameOfConstraint MagneticFlux~{iP}; }
      { NameOfCoef MMF;
        EntityType Auto; NameOfConstraint MMF~{iP}; }
    }
  }
}

Formulation {
  {
    Append;
    Name MagSta_a~{iP}; Type FemEquation;

    Quantity {
      { Name Flux; Type Global; NameOfSpace Hcurl_a~{iP} [Flux]; }
      { Name MMF ; Type Global; NameOfSpace Hcurl_a~{iP} [MMF]; }
      { Name a_ft; Type Local; NameOfSpace Hcurl_a~{iP} [a_ft]; }
    }
    Equation {
      GlobalTerm { [ -Dof{MMF}/CoefGeos_L~{iP}[] , {Flux} ]; In CutLine_FluxTube~{iP}; }
    }
  }
}

Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Quantity {
      { Name Flux; Type Global; NameOfSpace Hcurl_a~{iP} [Flux]; }
      { Name MMF ; Type Global; NameOfSpace Hcurl_a~{iP} [MMF]; }
      { Name a_ft; Type Local; NameOfSpace Hcurl_a~{iP} [a_ft]; }
    }

    Equation {
      GlobalTerm { [ -Dof{MMF}/CoefGeos_L~{iP}[] , {Flux} ]; In CutLine_FluxTube~{iP}; }
    }
  }
}

PostProcessing {
  {
    Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};
    PostQuantity {
      { Name az_ft; Value { Term { [ CompZ[{a_ft}] ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }

      { Name Flux; Value { Term { [ {Flux}*CoefGeos~{iP}[] ]; In CutLine_FluxTube~{iP}; } } }
      { Name MMF ; Value { Term { [ {MMF}  ]; In CutLine_FluxTube~{iP}; } } }
      { Name MMF_Corrected ; Value { Term { [ {MMF}/CoefGeos_L~{iP}[]*CoefGeos_L_Corrected~{iP}[]  ]; In CutLine_FluxTube~{iP}; } } }

      //+++
      { Name MMF_Pos;
        Value {
	  Integral {
            Type Global;
            [ nu~{iP}[] * {d a} * BF{d a_ft} ];
            In Domain~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
	}
      }

      { Name MMF_Pos_From1D;
        Value {
	  Integral { 
            Type Global;
            [ nu~{iP}[] * 
              //              {d a_proj~{IP}}
              Vector[0,-1,0]
              * BF{d a_ft} ];
            In Domain_A~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
	  Integral { 
            Type Global;
            [ nu~{iP}[] * 
              //              {d a_proj~{IP}}
              Vector[-1,0,0]
              * BF{d a_ft} ];
            In Domain_B~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
	  Integral { 
            Type Global;
            [ nu~{iP}[] * 
              //              {d a_proj~{IP}}
              Vector[0,1,0]
              * BF{d a_ft} ];
            In Domain_C~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
	}
      }

      { Name Reluctance;
        Value { Term { [ ({Flux})? {MMF}/({Flux}*CoefGeos~{iP}[]) : 0. ];
                In CutLine_FluxTube~{iP}; } } }

      { Name Flux_Dt; Value { Term { [ Dt[{Flux}*CoefGeos~{iP}[]] ]; In CutLine_FluxTube~{iP}; } } }
    }
  }
}

Return
