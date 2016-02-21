// Magnetostatics.pro
//
// Magnetostatics - magnetic scalar potential (phi) and magnetic vector (a)
// formulations

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
        If(bc~{i} == 1)
          Domain_Dirichlet += Region[tag~{i}];
        EndIf
      Else
        DefineConstant[
          material~{i} = {2, Choices{
              0="Magnet",
              1="Current source",
              2="Linear material (constant)",
              3="Linear material (function)",
              4="Linear material (preset)",
              5="Nonlinear material (analytic)",
              6="Nonlinear material (data points)",
              7="Nonlinear material (preset)"
            },
            Name StrCat["Parameters/Materials/", name~{i}, "/0Type"]}
        ];
        If(material~{i} == 0)
          Domain_M += Region[tag~{i}];
        ElseIf(material~{i} == 1)
          Domain_S += Region[tag~{i}];
        ElseIf(material~{i} == 2 || material~{i} == 3 || material~{i} == 4)
          Domain_Mag += Region[tag~{i}];
        ElseIf(material~{i} == 5 || material~{i} == 6 || material~{i} == 7)
          Domain_NL += Region[tag~{i}];
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
          jsz~{i} = {0, Visible (material~{i} == 1),
            Name StrCat["Parameters/Materials/", name~{i}, "/jz value"],
            Label "j_sz [A/m²]", Help "Current density along z-axis"},
          mur~{i} = {1, Visible (material~{i} == 2),
            Name StrCat["Parameters/Materials/", name~{i}, "/mur value"],
            Label "μ_r", Help "Relative magnetic permeability"},
          mur_fct~{i} = {"1 * 1", Visible (material~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/mur function"],
            Label "μ_r", Help "Relative magnetic permeability"},
          mur_preset~{i} = {1, Visible (material~{i} == 4),
            Choices{ 1:#linearMagneticMaterials() = linearMagneticMaterials() },
            Name StrCat["Parameters/Materials/", name~{i}, "/mur preset"],
            Label "Name"}
          nu_fct~{i} = {"100. + 10. * Exp[1.8*SquNorm[$1]]", Visible (material~{i} == 5),
            Name StrCat["Parameters/Materials/", name~{i}, "/2nu function"],
            Label "ν(b) [m/H]", Help "Magnetic reluctivity"},
          dnudb2_fct~{i} = {"18. * Exp[1.8*SquNorm[$1]]", Visible (material~{i} == 5),
            Name StrCat["Parameters/Materials/", name~{i}, "/3dnudb2 function"],
            Label "dν/db²"},
          mu_fct~{i} = {"***", Visible (material~{i} == 5),
            Name StrCat["Parameters/Materials/", name~{i}, "/4mu function"],
            Label "μ(h) [H/m]", Help "Magnetic permeability"},
          dmudh2_fct~{i} = {"***", Visible (material~{i} == 5),
            Name StrCat["Parameters/Materials/", name~{i}, "/5dmudh2 function"],
            Label "dμ/dh²"},
          b_list~{i} = {"{0,0.3,0.7,1,1.4,1.7,2.2}", Visible (material~{i} == 6),
            Name StrCat["Parameters/Materials/", name~{i}, "/3b values"]},
          h_list~{i} = {"{0,30,90,2e2,6e2,4e3,7e5}", Visible (material~{i} == 6),
            Name StrCat["Parameters/Materials/", name~{i}, "/2h values"]},
          bh_preset~{i} = {1, Visible (material~{i} == 7),
            Choices{ 1:#nonlinearMagneticMaterials() = nonlinearMagneticMaterials() },
            Name StrCat["Parameters/Materials/", name~{i}, "/bh preset"],
            Label "Name"}
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
        ElseIf(material~{i} == 3) // linear, function
          Parse[ StrCat["mu[ Region[tag~{i}] ] = (", mur_fct~{i}, ")*4*Pi*1e-7;"] ];
          Parse[ StrCat["nu[ Region[tag~{i}] ] = 1/((", mur_fct~{i}, ")*4*Pi*1e-7);"] ];
        ElseIf(material~{i} == 4) // linear, preset
          _MaterialName_ = Str[ linearMagneticMaterials(mur_preset~{i} - 1) ];
          Parse[ StrCat["mu[ Region[tag~{i}] ] = ", _MaterialName_, "_mur*4*Pi*1e-7;"] ];
          Parse[ StrCat["nu[ Region[tag~{i}] ] = 1/(", _MaterialName_, "_mur*4*Pi*1e-7);"] ];
        ElseIf(material~{i} >= 5 && material~{i} <= 7) // nonlinear materials
          If(material~{i} == 5) // function
            _MaterialName_ = Sprintf["UserMaterialFct_%g", i];
            Parse[ StrCat[_MaterialName_, "_nu[] = ", nu_fct~{i}, ";"] ];
            Parse[ StrCat[_MaterialName_, "_dnudb2[] = ", dnudb2_fct~{i}, ";"] ];
            Parse[ StrCat[_MaterialName_, "_mu[] = ", nu_fct~{i}, ";"] ];
            Parse[ StrCat[_MaterialName_, "_dmudh2[] = ", dnudb2_fct~{i}, ";"] ];
            Call DefineMaterialFunctions;
          ElseIf(material~{i} == 6) // data points
            _MaterialName_ = Sprintf["UserMaterialPts_%g", i];
            Parse[ StrCat[_MaterialName_, "_b_list() = ", b_list~{i}, ";"] ];
            Parse[ StrCat[_MaterialName_, "_h_list() = ", h_list~{i}, ";"] ];
            Call DefineMaterialFunctions;
          Else // preset
            _MaterialName_ = Str[ nonlinearMagneticMaterials(bh_preset~{i}-1) ];
          EndIf
          Parse[ StrCat["mu[ Region[tag~{i}] ] = ", _MaterialName_, "_mu[$1];"] ];
          Parse[ StrCat["dbdh_NL[ Region[tag~{i}] ] = ", _MaterialName_, "_dbdh_NL[$1];"] ];
          Parse[ StrCat["nu[ Region[tag~{i}] ] = ", _MaterialName_, "_nu[$1];"] ];
          Parse[ StrCat["dhdb_NL[ Region[tag~{i}] ] =", _MaterialName_, "_dhdb_NL[$1];"] ];
        EndIf
      EndIf
    EndFor
  EndIf

  // constant parameters needed by the model
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
