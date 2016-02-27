// Magnetostatics.pro
//
// Magnetostatics - magnetic scalar potential (phi) and magnetic vector (a)
// formulations
//
// You can either merge this file in an other problem description file (see
// e.g. getdp/demos/magnet.pro), or open the file with Gmsh along with a
// geometry: you will then be prompted to setup your materials and boundary
// conditions for each physical group, interactively.

DefineConstant[
  Flag_AnalysisType = {1, Choices{0="Scalar potential", 1="Vector potential"},
    Name "GetDP/Analysis"}
];

Group {
  // generic groups needed by the model
  DefineGroup[ Domain_M, Domain_S, Domain_Inf, Domain_NL, Domain_Mag,
    Domain_Dirichlet ];

  // interactive model setup if no region currently defined
  interactive = !NbrRegions[];
  modelDim = GetNumber["Gmsh/Model dimension"];
  numPhysicals = GetNumber["Gmsh/Number of physical groups"];

  // interactive construction of groups with Gmsh
  If(interactive)
    For i In {1:numPhysicals}
      dim~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Dimension", i]];
      name~{i} = GetString[Sprintf["Gmsh/Physical group %g/Name", i]];
      tag~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Number", i]];
      If(dim~{i} < modelDim)
        DefineConstant[
          bc~{i} = {0, ReadOnlyRange 1, Choices{
              0=StrCat["Neumann: zero ", StrChoice[Flag_AnalysisType, "h.t", "b.n"]],
              1=StrCat["Dirichlet: fixed ", StrChoice[Flag_AnalysisType, "b.n", "h.t"]]
            },
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/0Type"]}
          bc_val~{i} = {0., Visible bc~{i},
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/1Value"]}
        ];
        If(bc~{i} == 1)
          Domain_Dirichlet += Region[tag~{i}];
        EndIf
      Else
        DefineConstant[
          material~{i} = {2, Choices{
              0="Magnet (constant)",
              1="Magnet (function)",
              2="Current source (constant)",
              3="Current source (function)",
              4="Linear material (constant)",
              5="Linear material (function)",
              6="Linear material (preset)",
              7="Nonlinear material (analytic)",
              8="Nonlinear material (data points)",
              9="Nonlinear material (preset)",
              10="Infinite region (shell)"
            },
            Name StrCat["Parameters/Materials/", name~{i}, "/0Type"]}
        ];
        If(material~{i} == 0 || material~{i} == 1)
          Domain_M += Region[tag~{i}];
        ElseIf(material~{i} == 2 || material~{i} == 3)
          Domain_S += Region[tag~{i}];
        ElseIf(material~{i} == 4 || material~{i} == 5 || material~{i} == 6)
          Domain_Mag += Region[tag~{i}];
        ElseIf(material~{i} == 7 || material~{i} == 8 || material~{i} == 9)
          Domain_NL += Region[tag~{i}];
        ElseIf(material~{i} == 10)
          Domain_Inf += Region[tag~{i}];
        EndIf
      EndIf
    EndFor
  EndIf

  Domain = Region[{Domain_Mag, Domain_NL, Domain_M, Domain_S, Domain_Inf}];
}

If(interactive)
  Include "MaterialDatabase.pro"
EndIf

Function{
  DefineConstant[ mu0 = 4*Pi*1e-7 ];

  // generic functions needed by the model
  DefineFunction[ mu, nu, hc, js, dhdb_NL, dbdh_NL ];

  // interactive construction of material properties
  If(interactive)
    For i In {1:numPhysicals}
      If(dim~{i} < modelDim)
        // nothing
      Else
        DefineConstant[
          hcx~{i} = {920000, Visible (material~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/hcx value"],
            Label "h_cx [A/m]", Help "Coercive magnetic field along x-axis"},
          hcy~{i} = {0, Visible (material~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/hcy value"],
            Label "h_cy [A/m]", Help "Coercive magnetic field along y-axis"},
          hcz~{i} = {0, Visible (material~{i} == 0 && dim~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/hcz value"],
            Label "h_cz [A/m]", Help "Coercive magnetic field along z-axis"},
          hc_fct~{i} = {"Vector[92000, 0, 0]", Visible (material~{i} == 1),
            Name StrCat["Parameters/Materials/", name~{i}, "/hc function"],
            Label "h_c [A/m]", Help "Coercive magnetic field"},
          jsx~{i} = {0, Visible (material~{i} == 2 && dim~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/jx value"],
            Label "j_sx [A/m²]", Help "Current density along x-axis"},
          jsy~{i} = {0, Visible (material~{i} == 2 && dim~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/jy value"],
            Label "j_sy [A/m²]", Help "Current density along y-axis"},
          jsz~{i} = {1, Visible (material~{i} == 2),
            Name StrCat["Parameters/Materials/", name~{i}, "/jz value"],
            Label "j_sz [A/m²]", Help "Current density along z-axis"},
          js_fct~{i} = {"Vector[0, 0, 1]", Visible (material~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/js function"],
            Label "j_s [A/m²]", Help "Current density"},
          mur~{i} = {1, Visible (material~{i} == 4),
            Name StrCat["Parameters/Materials/", name~{i}, "/mur value"],
            Label "μ_r", Help "Relative magnetic permeability"},
          mur_fct~{i} = {"1", Visible (material~{i} == 5),
            Name StrCat["Parameters/Materials/", name~{i}, "/mur function"],
            Label "μ_r", Help "Relative magnetic permeability"},
          mur_preset~{i} = {1, Visible (material~{i} == 6), ReadOnlyRange 1,
            Choices{ 1:#linearMagneticMaterials() = linearMagneticMaterials() },
            Name StrCat["Parameters/Materials/", name~{i}, "/mur preset"],
            Label "Name"}
          nu_fct~{i} = {"100. + 10. * Exp[1.8*SquNorm[$1]]", Visible (material~{i} == 7),
            Name StrCat["Parameters/Materials/", name~{i}, "/2nu function"],
            Label "ν(b) [m/H]", Help "Magnetic reluctivity"},
          dnudb2_fct~{i} = {"18. * Exp[1.8*SquNorm[$1]]", Visible (material~{i} == 7),
            Name StrCat["Parameters/Materials/", name~{i}, "/3dnudb2 function"],
            Label "dν/db²"},
          mu_fct~{i} = {"***", Visible (material~{i} == 7),
            Name StrCat["Parameters/Materials/", name~{i}, "/4mu function"],
            Label "μ(h) [H/m]", Help "Magnetic permeability"},
          dmudh2_fct~{i} = {"***", Visible (material~{i} == 7),
            Name StrCat["Parameters/Materials/", name~{i}, "/5dmudh2 function"],
            Label "dμ/dh²"},
          b_list~{i} = {"{0,0.3,0.7,1,1.4,1.7,2.2}", Visible (material~{i} == 8),
            Name StrCat["Parameters/Materials/", name~{i}, "/3b values"]},
          h_list~{i} = {"{0,30,90,2e2,6e2,4e3,7e5}", Visible (material~{i} == 8),
            Name StrCat["Parameters/Materials/", name~{i}, "/2h values"]},
          bh_preset~{i} = {1, Visible (material~{i} == 9), ReadOnlyRange 1,
            Choices{ 1:#nonlinearMagneticMaterials() = nonlinearMagneticMaterials() },
            Name StrCat["Parameters/Materials/", name~{i}, "/bh preset"],
            Label "Name"}
        ];
        If(material~{i} == 0) // magnet, constant
          hc[ Region[tag~{i}] ] = Vector[hcx~{i}, hcy~{i}, hcz~{i}];
          mu[ Region[tag~{i}] ] = mu0;
          nu[ Region[tag~{i}] ] = 1/mu0;
        ElseIf(material~{i} == 1) // magnet, function
          Parse[ StrCat["hc[ Region[tag~{i}] ] = ", hc_fct~{i}, ";"] ];
          mu[ Region[tag~{i}] ] = mu0;
          nu[ Region[tag~{i}] ] = 1/mu0;
        ElseIf(material~{i} == 2) // current source, constant
          js[ Region[tag~{i}] ] = Vector[jsx~{i}, jsy~{i}, jsz~{i}];
          mu[ Region[tag~{i}] ] = mu0;
          nu[ Region[tag~{i}] ] = 1/mu0;
        ElseIf(material~{i} == 3) // current source, function
          Parse[ StrCat["js[ Region[tag~{i}] ] = ", js_fct~{i}, ";"] ];
          mu[ Region[tag~{i}] ] = mu0;
          nu[ Region[tag~{i}] ] = 1/mu0;
        ElseIf(material~{i} == 4) // linear, constant
          mu[ Region[tag~{i}] ] = mur~{i}*mu0;
          nu[ Region[tag~{i}] ] = 1/(mur~{i}*mu0);
        ElseIf(material~{i} == 5) // linear, function
          Parse[ StrCat[
            "mu[ Region[tag~{i}] ] = (", mur_fct~{i}, ")*mu0;",
            "nu[ Region[tag~{i}] ] = 1/((", mur_fct~{i}, ")*mu0);"
          ] ];
        ElseIf(material~{i} == 6) // linear, preset
          _MaterialName_ = Str[ linearMagneticMaterials(mur_preset~{i} - 1) ];
          Parse[ StrCat[
            "mu[ Region[tag~{i}] ] = ", _MaterialName_, "_mur*mu0;",
            "nu[ Region[tag~{i}] ] = 1/(", _MaterialName_, "_mur*mu0);"
          ] ];
        ElseIf(material~{i} >= 7 && material~{i} <= 9) // nonlinear materials
          If(material~{i} == 7) // function
            _MaterialName_ = Sprintf["UserMaterialFct_%g", i];
            Parse[ StrCat[
              _MaterialName_, "_nu[] = ", nu_fct~{i}, ";",
              _MaterialName_, "_dnudb2[] = ", dnudb2_fct~{i}, ";",
              _MaterialName_, "_mu[] = ", nu_fct~{i}, ";",
              _MaterialName_, "_dmudh2[] = ", dnudb2_fct~{i}, ";"
            ] ];
            Call DefineMaterialFunctions;
          ElseIf(material~{i} == 8) // data points
            _MaterialName_ = Sprintf["UserMaterialPts_%g", i];
            Parse[ StrCat[
              _MaterialName_, "_b_list() = ", b_list~{i}, ";",
              _MaterialName_, "_h_list() = ", h_list~{i}, ";"
            ] ];
            Call DefineMaterialFunctions;
          Else // preset
            _MaterialName_ = Str[ nonlinearMagneticMaterials(bh_preset~{i}-1) ];
          EndIf
          Parse[ StrCat[
            "mu[ Region[tag~{i}] ] = ", _MaterialName_, "_mu[$1];",
            "dbdh_NL[ Region[tag~{i}] ] = ", _MaterialName_, "_dbdh_NL[$1];",
            "nu[ Region[tag~{i}] ] = ", _MaterialName_, "_nu[$1];",
            "dhdb_NL[ Region[tag~{i}] ] =", _MaterialName_, "_dhdb_NL[$1];"
          ] ];
        ElseIf(material~{i} == 10) // infinite regions
          mu[ Region[tag~{i}] ] = mu0;
          nu[ Region[tag~{i}] ] = 1/mu0;
        EndIf
      EndIf
    EndFor
  EndIf

  // constant parameters needed by the model
  DefineConstant[
    Val_Rint = {1, Visible NbrRegions[Domain_Inf],
      Name "Parameters/Geometry/1Internal shell radius"},
    Val_Rext = {2, Visible NbrRegions[Domain_Inf],
      Name "Parameters/Geometry/2External shell radius"},
    Val_Cx, Val_Cy, Val_Cz,
    Nb_max_iter = {30, Visible NbrRegions[Domain_NL],
      Name "Parameters/Nonlinear solver/Maximum number of iterations"},
    relaxation_factor = 1,
    stop_criterion = {1e-5, Visible NbrRegions[Domain_NL],
      Name "Parameters/Nonlinear solver/Tolerance"}
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
          { GeoElement Tetrahedron  ; NumberOfPoints 4 ; }
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

Constraint {
  { Name GaugeCondition_a ; Type Assign ;
    Case {
      { Region Domain ; SubRegion Domain_Dirichlet ; Value 0. ; }
    }
  }
}

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
  If(modelDim == 3)
    { Name Hcurl_a; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ae; Function BF_Edge; Support Domain ;
          Entity EdgesOf[ All ]; }
      }
      Constraint {
        { NameOfCoef ae;  EntityType EdgesOf; NameOfConstraint a; }
        { NameOfCoef ae;  EntityType EdgesOfTreeIn; EntitySubType StartingOn;
          NameOfConstraint GaugeCondition_a ; }
      }
    }
  Else
    { Name Hcurl_a; Type Form1P;
      BasisFunction {
        { Name se; NameOfCoef ae; Function BF_PerpendicularEdge;
          Support Domain; Entity NodesOf[ All ]; }
      }
      Constraint {
        { NameOfCoef ae; EntityType NodesOf; NameOfConstraint a; }
      }
    }
  EndIf
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
