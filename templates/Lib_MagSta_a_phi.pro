// Lib_MagSta_a_phi.pro
//
// Template library for magnetostatics using a scalar (phi) or a vector (a)
// potential formulation

DefineConstant[
  modelPath = GetString["Gmsh/Model absolute path"],
  resPath = StrCat[modelPath, "res/"],
  exportFile = StrCat[modelPath, "export.pro"],
  mu0 = 4*Pi*1e-7,
  modelDim = 2,
  interactive = 0
];

Group {
  DefineGroup[
    Vol_M_Mag, // magnets
    Vol_S0_Mag, // imposed current density
    Vol_Inf_Mag, // infinite domains
    Vol_NL_Mag, // nonlinear magnetic materials
    Vol_L_Mag, // linear magnetic materials
    Sur_Dir_Mag // Dirichlet boundary conditions
    Sur_Neu_Mag // Non-homogeneous Neumann boundary conditions
  ];
}

Function{
  DefineFunction[
    mu, // magnetic permeability
    nu, // magnetic reluctivity (= 1/nu)
    hc, // coercive magnetic field (in magnets)
    js, // source current density
    dhdb_NL, dbdh_NL // nonlinear parts of the Jacobian
  ];
}

CallTest(interactive) Lib_MagSta_a_phi_interactive;

DefineConstant[
  Val_Rint = {1, Visible NbrRegions[Vol_Inf_Mag],
    Name "Parameters/Geometry/1Internal shell radius"},
  Val_Rext = {2, Visible NbrRegions[Vol_Inf_Mag],
    Name "Parameters/Geometry/2External shell radius"},
  Val_Cx, Val_Cy, Val_Cz,
  Nb_max_iter = {30, Visible NbrRegions[Vol_NL_Mag],
    Name "Parameters/Nonlinear solver/Maximum number of iterations"},
  relaxation_factor = 1,
  stop_criterion = {1e-5, Visible NbrRegions[Vol_NL_Mag],
    Name "Parameters/Nonlinear solver/Tolerance"}
];

Group{
  Vol_Mag = Region[{Vol_L_Mag, Vol_NL_Mag, Vol_M_Mag, Vol_S0_Mag, Vol_Inf_Mag}];
}

Jacobian {
  { Name JVol;
    Case {
      { Region Vol_Inf_Mag;
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
          { GeoElement Point; NumberOfPoints  1; }
          { GeoElement Line; NumberOfPoints  3; }
          { GeoElement Triangle; NumberOfPoints  3; }
          { GeoElement Quadrangle; NumberOfPoints  4; }
          { GeoElement Tetrahedron; NumberOfPoints  4; }
          { GeoElement Hexahedron; NumberOfPoints  6; }
          { GeoElement Prism; NumberOfPoints  9; }
          { GeoElement Pyramid; NumberOfPoints  8; }
	}
      }
    }
  }
}

Constraint {
  { Name GaugeCondition_a ; Type Assign ;
    Case {
      { Region Vol_Mag ; SubRegion Sur_Dir_Mag ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hgrad_phi; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef phin; Function BF_Node;
        Support Vol_Mag; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef phin; EntityType NodesOf; NameOfConstraint phi; }
    }
  }
  If(modelDim == 3)
    { Name Hcurl_a; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ae; Function BF_Edge; Support Vol_Mag ;
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
          Support Vol_Mag; Entity NodesOf[ All ]; }
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
      Integral { [ - mu[-{d phi}] * Dof{d phi} , {d phi} ];
        In Vol_Mag; Jacobian JVol; Integration I1; }
      Integral { JacNL [ - dbdh_NL[-{d phi}] * Dof{d phi} , {d phi} ];
        In Vol_NL_Mag; Jacobian JVol; Integration I1; }
      Integral { [ - mu[] * hc[] , {d phi} ];
        In Vol_M_Mag; Jacobian JVol; Integration I1; }
    }
  }
  { Name MagSta_a; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
      Integral { [ nu[{d a}] * Dof{d a} , {d a} ];
        In Vol_Mag; Jacobian JVol; Integration I1; }
      Integral { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ];
        In Vol_NL_Mag; Jacobian JVol; Integration I1; }
      Integral { [ hc[] , {d a} ];
        In Vol_M_Mag; Jacobian JVol; Integration I1; }
      Integral { [ -js[] , {a} ];
        In Vol_S0_Mag; Jacobian JVol; Integration I1; }
    }
  }
}

Resolution {
  { Name MagSta_phi;
    System {
      { Name A; NameOfFormulation MagSta_phi; }
    }
    Operation {
      If(!NbrRegions[Vol_NL_Mag])
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
      If(!NbrRegions[Vol_NL_Mag])
        Generate[A]; Solve[A];
      Else
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A]; SolveJac[A];
        }
      EndIf
      SaveSolution[A];
    }
  }
}

PostProcessing {
  { Name MagSta_phi; NameOfFormulation MagSta_phi;
    Quantity {
      { Name b; Value {
          Term { [ - mu[-{d phi}] * {d phi} ]; In Vol_Mag; Jacobian JVol; }
          Term { [ - mu[] * hc[] ]; In Vol_M_Mag; Jacobian JVol; }
        }
      }
      { Name h; Value {
          Term { [ - {d phi} ]; In Vol_Mag; Jacobian JVol; }
        }
      }
      { Name hc; Value {
          Term { [ hc[] ]; In Vol_M_Mag; Jacobian JVol; }
        }
      }
      { Name phi; Value {
          Term { [ {phi} ]; In Vol_Mag; Jacobian JVol; }
        }
      }
    }
  }
  { Name MagSta_a; NameOfFormulation MagSta_a;
    Quantity {
      { Name az; Value {
          Local { [ CompZ[{a}] ]; In Vol_Mag; Jacobian JVol; }
        }
      }
      { Name b; Value {
          Term { [ {d a} ]; In Vol_Mag; Jacobian JVol; }
        }
      }
      { Name a; Value {
          Term { [ {a} ]; In Vol_Mag; Jacobian JVol; }
        }
      }
      { Name h; Value {
          Term { [ nu[{d a}] * {d a} ]; In Vol_Mag; Jacobian JVol; }
          Term { [ hc[] ]; In Vol_M_Mag; Jacobian JVol; }
        }
      }
      { Name hc; Value {
          Term { [ hc[] ]; In Vol_M_Mag; Jacobian JVol; }
        }
      }
      { Name js; Value {
          Term { [ js[] ]; In Vol_S0_Mag; Jacobian JVol; }
        }
      }
    }
  }
}

PostOperation {
  { Name MagSta_phi; NameOfPostProcessing MagSta_phi;
    Operation {
      CreateDir[resPath];
      Print[ hc, OnElementsOf Vol_M_Mag, File StrCat[resPath, "MagSta_phi_hc.pos"] ];
      Print[ phi, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_phi_phi.pos"] ];
      Print[ h, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_phi_h.pos"] ];
      Print[ b, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_phi_b.pos"] ];
    }
  }
  { Name MagSta_a; NameOfPostProcessing MagSta_a;
    Operation {
      CreateDir[resPath];
      Print[ hc, OnElementsOf Vol_M_Mag, File StrCat[resPath, "MagSta_a_hc.pos"] ];
      Print[ js, OnElementsOf Vol_S0_Mag, File StrCat[resPath, "MagSta_a_js.pos"] ];
      If(modelDim == 2)
        Print[ az, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_a_az.pos"] ];
      EndIf
      Print[ h, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_a_h.pos"] ];
      Print[ b, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_a_b.pos"] ];
    }
  }
}
