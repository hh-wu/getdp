Group {
  // generic (mathematical) groups needed by the model
  DefineGroup[ Domain_M, Domain_S, Domain_Inf, Domain_NL, Domain_Mag];

  // interactive model setup if Domain_Mag is empty
  interactive = !NbrRegions[Domain_Mag];

  // interactive construction of groups with Gmsh physical entities
  If(interactive)
    modelDim = GetNumber["Gmsh/Model dimension"];
    numPhysicals = GetNumber["Gmsh/Number of physical groups"];
    For i In {1:numPhysicals}
      dim~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Dimension", i]];
      name~{i} = GetString[Sprintf["Gmsh/Physical group %g/Name", i]];
      tag~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Number", i]];
      // TODO: we could add some intelligence, and preset some values depending
      // on the names :-)
      If(dim~{i} < modelDim)
        DefineConstant[
          bc~{i} = {0, Choices{
              0="Neumann",
              1="Dirichlet"
            },
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/0Type"]}
          bc_val~{i} = {0.,
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/1Value"]}
        ];
      Else
        DefineConstant[
          material~{i} = {2, Choices{
              0="Magnet",
              1="Current source",
              2="Linear material (constant)",
              3="Linear material (function)",
              4="Nonlinear material (preset)"
            },
            Name StrCat["Parameters/Materials/", name~{i}, "/0Type"]}
        ];
        If(material~{i} == 0)
          Domain_M += Region[tag~{i}];
        ElseIf(material~{i} == 1)
          Domain_S += Region[tag~{i}];
        ElseIf(material~{i} == 2 || material~{i} == 3)
          Domain_Mag += Region[tag~{i}];
        ElseIf(material~{i} == 4)
          Domain_NL += Region[tag~{i}];
        EndIf
      EndIf
    EndFor
  EndIf

  Domain = Region[{Domain_Mag, Domain_NL, Domain_M, Domain_S, Domain_Inf}];
}

If(interactive)
  Include "BH.pro"
EndIf

Function{
  // Model materials
  DefineFunction[ mu, nu, hc, js, dhdb_NL, dbdh_NL ];

  // interactive construction of material properties
  If(interactive)
    For i In {1:numPhysicals}
      If(dim~{i} < modelDim)
        // nothing
      Else
        DefineConstant[
          hcx~{i} = {1000, Visible (material~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/Coercive field Hx"]},
          hcy~{i} = {0, Visible (material~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/Coercive field Hy"]},
          jsz~{i} = {0, Visible (material~{i} == 1),
            Name StrCat["Parameters/Materials/", name~{i}, "/Current density Jz"]},
          mur~{i} = {1, Visible (material~{i} == 2),
            Name StrCat["Parameters/Materials/", name~{i}, "/Relative permeability"]}
          mu_fct~{i} = {"1 * 4*Pi*1e-7", Visible (material~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/Permeability"]}
          // this list should be constructed automatically in BH.pro
          mat~{i} = {1, Visible (material~{i} == 4),
            Choices{ 1:#materials() = materials() },
            Name StrCat["Parameters/Materials/", name~{i}, "/B-H curve"]}
        ];
        If(material~{i} == 0) // magnet
          hc[ Region[tag~{i}] ] = Vector[hcx~{i}, hcy~{i}, 0];
          mu[ Region[tag~{i}] ] = 4*Pi*1e-7;
          nu[ Region[tag~{i}] ] = 1/(4*Pi*1e-7);
        ElseIf(material~{i} == 1) // current source
          js[ Region[tag~{i}] ] = Vector[0, 0, jsz~{i}];
          mu[ Region[tag~{i}] ] = 4*Pi*1e-7;
          nu[ Region[tag~{i}] ] = 1/(4*Pi*1e-7);
        ElseIf(material~{i} == 2) // linear, constant
          mu[ Region[tag~{i}] ] = mur~{i}*4*Pi*1e-7;
          nu[ Region[tag~{i}] ] = 1/(mur~{i}*4*Pi*1e-7);
        ElseIf(material~{i} == 3) // linear, user-defined
          Parse[ StrCat["mu[ Region[tag~{i}] ] = ", mu_fct~{i}, ";"] ];
          Parse[ StrCat["nu[ Region[tag~{i}] ] = 1/", mu_fct~{i}, ";"] ];
        ElseIf(material~{i} == 4) // preset
          mu[ Region[tag~{i}] ] =
            S2N[StrCat[materials(mat~{i}-1), "_mu"]][$1];
          dbdh_NL[ Region[tag~{i}] ] =
            S2N[StrCat[materials(mat~{i}-1), "_dbdh_NL"]][$1];
          nu[ Region[tag~{i}] ] =
            S2N[StrCat[materials(mat~{i}-1), "_nu"]][$1];
          dhdb_NL[ Region[tag~{i}] ] =
            S2N[StrCat[materials(mat~{i}-1), "_dhdb_NL"]][$1];
        EndIf
      EndIf
    EndFor
  EndIf

  // Constant parameters
  DefineConstant[
    Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz,
    Nb_max_iter = 30, relaxation_factor = 1, stop_criterion = 1e-5,
    Flag_AnalysisType = {1, Choices{0="Scalar potential", 1="Vector potential"},
      Name "GetDP/Analysis"}
  ];
}

Jacobian {
  { Name JVol;
    Case {
      { Region Domain_Inf;
        Jacobian VolSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
      { Region All; Jacobian Vol; }
    }
  }
}

Integration {
  { Name I1;
    Case {
      { Type Gauss;
        Case {
	  { GeoElement Triangle; NumberOfPoints 4; }
	  { GeoElement Quadrangle; NumberOfPoints 4; }
	}
      }
    }
  }
}


If(interactive)
Constraint {
  { Name phi; // scalar magnetic potential
    Case {
      For i In {1:numPhysicals}
        If(dim~{i} < modelDim)
          If(bc~{i} == 1)
            { Region Region[tag~{i}]; Value bc_val~{i}; }
          EndIf
        EndIf
      EndFor
    }
  }
  { Name a; // vector magnetic potential
    Case {
      For i In {1:numPhysicals}
        If(dim~{i} < modelDim)
          If(bc~{i} == 1)
            { Region Region[tag~{i}]; Value bc_val~{i}; }
          EndIf
        EndIf
      EndFor
    }
  }
}
EndIf

FunctionSpace {
  { Name Hgrad_phi; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef phin; Function BF_Node;
        Support Domain; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef phin; EntityType NodesOf; NameOfConstraint phi; }
    }
  }
  { Name Hcurl_a; Type Form1P;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_PerpendicularEdge;
        Support Domain; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef ae; EntityType NodesOf; NameOfConstraint a; }
    }
  }
}

Formulation {
  { Name MagSta_phi; Type FemEquation;
    Quantity {
      { Name phi; Type Local; NameOfSpace Hgrad_phi; }
    }
    Equation {
      Galerkin { [ - mu[-{d phi}] * Dof{d phi} , {d phi} ];
        In Domain; Jacobian JVol; Integration I1; }
      Galerkin { JacNL [ - dbdh_NL[-{d phi}] * Dof{d phi} , {d phi} ];
        In Domain_NL; Jacobian JVol; Integration I1; }
      Galerkin { [ - mu[] * hc[] , {d phi} ];
        In Domain_M; Jacobian JVol; Integration I1; }
    }
  }
  { Name MagSta_a; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ];
                 In Domain; Jacobian JVol; Integration I1; }
      Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ];
                 In Domain_NL; Jacobian JVol; Integration I1; }
      Galerkin { [ hc[] , {d a} ];
                 In Domain_M; Jacobian JVol; Integration I1; }
      Galerkin { [ -js[] , {a} ];
                 In Domain_S; Jacobian JVol; Integration I1; }
    }
  }
}

Resolution {
  { Name MagSta_phi;
    System {
      { Name A; NameOfFormulation MagSta_phi; }
    }
    Operation {
      If(!NbrRegions[Domain_NL])
        Generate[A]; Solve[A];
      Else
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A]; SolveJac[A];
        }
      EndIf
      SaveSolution[A];
    }
  }
  { Name MagSta_a;
    System {
      { Name A; NameOfFormulation MagSta_a; }
    }
    Operation {
      If(!NbrRegions[Domain_NL])
        Generate[A]; Solve[A];
      Else
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A]; SolveJac[A];
        }
      EndIf
      SaveSolution[A];
    }
  }
  { Name Analysis;
    System {
      If(Flag_AnalysisType == 0)
        { Name A; NameOfFormulation MagSta_phi; }
      Else
        { Name A; NameOfFormulation MagSta_a; }
      EndIf
    }
    Operation {
      If(!NbrRegions[Domain_NL])
        Generate[A]; Solve[A];
      Else
        //IterativeLoopN[ Nb_max_iter, relaxation_factor,
        //                System { {A, reltol, abstol, Solution MeanL2Norm} } ]{
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A]; SolveJac[A];
        }
      EndIf
      SaveSolution[A];
      If(Flag_AnalysisType == 0)
        PostOperation[MagSta_phi];
      Else
        PostOperation[MagSta_a];
      EndIf
    }
  }
}

PostProcessing {
  { Name MagSta_phi; NameOfFormulation MagSta_phi;
    Quantity {
      { Name b; Value { Local { [ - mu[-{d phi}] * {d phi} ]; In Domain; Jacobian JVol; }
                        Local { [ - mu[] * hc[] ]; In Domain_M; Jacobian JVol; } } }
      { Name h; Value { Local { [ - {d phi} ]; In Domain; Jacobian JVol; } } }
      { Name hc; Value { Local { [ hc[] ]; In Domain_M; Jacobian JVol; } } }
      { Name phi; Value { Local { [ {phi} ]; In Domain; Jacobian JVol; } } }
    }
  }
  { Name MagSta_a; NameOfFormulation MagSta_a;
    Quantity {
      { Name az; Value { Local { [ CompZ[{a}] ]; In Domain; Jacobian JVol; } } }
      { Name b; Value { Local { [ {d a} ]; In Domain; Jacobian JVol; } } }
      { Name a; Value { Local { [ {a} ]; In Domain; Jacobian JVol; } } }
      { Name h; Value { Local { [ nu[{d a}] * {d a} ]; In Domain; Jacobian JVol; }
                        Local { [ hc[] ]; In Domain_M; Jacobian JVol; } } }
      { Name hc; Value { Local { [ hc[] ]; In Domain_M; Jacobian JVol; } } }
    }
  }
}

PostOperation {
  { Name MagSta_phi; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ b, OnElementsOf Domain, File "MagSta_phi_b.pos" ];
      Print[ h, OnElementsOf Domain, File "MagSta_phi_h.pos" ];
      Print[ hc, OnElementsOf Domain, File "MagSta_a_hc.pos" ];
      Print[ phi, OnElementsOf Domain, File "MagSta_phi_phi.pos" ];
    }
  }
  { Name MagSta_a; NameOfPostProcessing MagSta_a;
    Operation {
      Print[ b, OnElementsOf Domain, File "MagSta_a_b.pos" ];
      Print[ h, OnElementsOf Domain, File "MagSta_a_h.pos" ];
      Print[ hc, OnElementsOf Domain, File "MagSta_a_hc.pos" ];
      Print[ az, OnElementsOf Domain, File "MagSta_az_a.pos" ];
    }
  }
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
