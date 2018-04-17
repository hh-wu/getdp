// Lib_Magnetostatics_a_phi.pro
//
// Template library for magnetostatics using a scalar (phi) or a vector (a)
// potential formulation.

// Default definitions of constants, groups and functions that can/should be
// redefined from outside the template:

DefineConstant[
  modelPath = "", // default path of the model
  resPath = StrCat[modelPath, "res/"], // path for post-operation files
  modelDim = 2, // default model dimension (2D)
  Flag_Axi = 0, // axisymmetric model?
  Flag_NewtonRaphson = 1, // Newton-Raphson or Picard method for nonlinear iterations
  Val_Rint = 0, // internal radius of Vol_Inf_Ele annulus
  Val_Rext = 0, // external radius of Vol_Inf_Ele annulus
  Val_Cx = 0, // x-coordinate of center of Vol_Inf_Mag
  Val_Cy = 0, // y-coordinate of center of Vol_Inf_Mag
  Val_Cz = 0, // z-coordinate of center of Vol_Inf_Mag
  NL_tol_abs = 1e-6, // absolute tolerance on residual for noninear iterations
  NL_tol_rel = 1e-6, // relative tolerance on residual for noninear iterations
  NL_iter_max = 20 // maximum number of noninear iterations
];

Group {
  DefineGroup[
    // The full magnetic domain:
    Vol_Mag,

    // Subsets of Vol_Mag:
    Vol_NL_Mag, // nonlinear magnetic materials
    Vol_M_Mag, // permanent magnets
    Vol_S0_Mag, // imposed current density
    Vol_Inf_Mag, // infinite domains

    // Boundaries:
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
    dhdb, // Jacobian for Newton-Raphson method a formulation
    dbdh, // Jacobian for Newton-Raphson method phi formulation
    bn, // normal magnetic flux density on Sur_Neu_Mag for phi formulation
    nxh // tangential magnetic field on Sur_Neu_Mag for a formulation
  ];
}

// End of default definitions.

Group {
  // linear materials
  Vol_L_Mag = Region[{Vol_Mag, -Vol_NL_Mag}];
  // all volumes + surfaces on which integrals must be computed
  Dom_Mag = Region[{Vol_Mag, Sur_Neu_Mag}];
}

Jacobian {
  { Name Vol;
    Case {
      If(Flag_Axi && modelDim < 3)
        { Region Vol_Inf_Mag;
          Jacobian VolAxiSquSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
        { Region All; Jacobian VolAxiSqu; }
      Else
        { Region Vol_Inf_Mag;
          Jacobian VolSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
        { Region All; Jacobian Vol; }
      EndIf
    }
  }
  { Name Sur;
    Case {
      If(Flag_Axi && modelDim < 3)
        { Region All; Jacobian SurAxi; }
      Else
        { Region All; Jacobian Sur; }
      EndIf
    }
  }
}

Integration {
  { Name Int;
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
        Support Dom_Mag; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef phin; EntityType NodesOf; NameOfConstraint phi; }
    }
  }
  If(modelDim == 3)
    { Name Hcurl_a; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ae; Function BF_Edge;
          Support Dom_Mag ; Entity EdgesOf[ All ]; }
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
          Support Dom_Mag; Entity NodesOf[ All ]; }
      }
      Constraint {
        { NameOfCoef ae; EntityType NodesOf; NameOfConstraint a; }
      }
    }
  EndIf
}

Formulation {
  { Name Magnetostatics_phi; Type FemEquation;
    Quantity {
      { Name phi; Type Local; NameOfSpace Hgrad_phi; }
    }
    Equation {
      Integral { [ - mu[] * Dof{d phi} , {d phi} ];
        In Vol_L_Mag; Jacobian Vol; Integration Int; }

      If(Flag_NewtonRaphson)
        Integral { [ - mu[-{d phi}] * {d phi} , {d phi} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
        Integral { [ - dbdh[-{d phi}] * Dof{d phi} , {d phi}];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
        Integral { [ dbdh[-{d phi}] * {d phi} , {d phi}];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
      Else
        Integral { [ - mu[-{d phi}] * Dof{d phi} , {d phi} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
      EndIf

      Integral { [ - mu[] * hc[] , {d phi} ];
        In Vol_M_Mag; Jacobian Vol; Integration Int; }

      Integral { [ bn[] , {phi} ];
        In Sur_Neu_Mag; Jacobian Sur; Integration Int; }
    }
  }
  { Name Magnetostatics_a; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
      Integral { [ nu[] * Dof{d a} , {d a} ];
        In Vol_L_Mag; Jacobian Vol; Integration Int; }

      If(Flag_NewtonRaphson)
        Integral { [ nu[{d a}] * {d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
        Integral { [ dhdb[{d a}] * Dof{d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
        Integral { [ - dhdb[{d a}] * {d a} , {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
      Else
        Integral { [ nu[{d a}] * Dof{d a}, {d a} ];
          In Vol_NL_Mag; Jacobian Vol; Integration Int; }
      EndIf

      Integral { [ hc[] , {d a} ];
        In Vol_M_Mag; Jacobian Vol; Integration Int; }

      Integral { [ - js[] , {a} ];
        In Vol_S0_Mag; Jacobian Vol; Integration Int; }

      Integral { [ nxh[] , {a} ];
        In Sur_Neu_Mag; Jacobian Sur; Integration Int; }
    }
  }
}

Resolution {
  { Name Magnetostatics_phi;
    System {
      { Name A; NameOfFormulation Magnetostatics_phi; }
    }
    Operation {
      InitSolution[A];
      Generate[A]; Solve[A];
      If(NbrRegions[Vol_NL_Mag])
        Generate[A]; GetResidual[A, $res0];
        Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0},
          Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > NL_tol_abs && $res / $res0 > NL_tol_rel &&
              $res / $res0 <= 1 && $iter < NL_iter_max]{
          Solve[A]; Generate[A]; GetResidual[A, $res];
          Evaluate[ $iter = $iter + 1 ];
          Print[{$iter, $res, $res / $res0},
            Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
      EndIf
      SaveSolution[A];
    }
  }
  { Name Magnetostatics_a;
    System {
      { Name A; NameOfFormulation Magnetostatics_a; }
    }
    Operation {
      InitSolution[A];
      Generate[A]; Solve[A];
      If(NbrRegions[Vol_NL_Mag])
        Generate[A]; GetResidual[A, $res0];
        Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0},
          Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > NL_tol_abs && $res / $res0 > NL_tol_rel &&
              $res / $res0 <= 1 && $iter < NL_iter_max]{
          Solve[A]; Generate[A]; GetResidual[A, $res];
          Evaluate[ $iter = $iter + 1 ];
          Print[{$iter, $res, $res / $res0},
            Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
      EndIf
      SaveSolution[A];
    }
  }
}

PostProcessing {
  { Name Magnetostatics_phi; NameOfFormulation Magnetostatics_phi;
    Quantity {
      { Name b; Value {
          Term { [ - mu[-{d phi}] * {d phi} ]; In Vol_Mag; Jacobian Vol; }
          Term { [ - mu[] * hc[] ]; In Vol_M_Mag; Jacobian Vol; }
        }
      }
      { Name h; Value {
          Term { [ - {d phi} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name hc; Value {
          Term { [ hc[] ]; In Vol_M_Mag; Jacobian Vol; }
        }
      }
      { Name phi; Value {
          Term { [ {phi} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
    }
  }
  { Name Magnetostatics_a; NameOfFormulation Magnetostatics_a;
    Quantity {
      { Name az; Value {
          Local { [ CompZ[{a}] ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name b; Value {
          Term { [ {d a} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name a; Value {
          Term { [ {a} ]; In Vol_Mag; Jacobian Vol; }
        }
      }
      { Name h; Value {
          Term { [ nu[{d a}] * {d a} ]; In Vol_Mag; Jacobian Vol; }
          Term { [ hc[] ]; In Vol_M_Mag; Jacobian Vol; }
        }
      }
      { Name hc; Value {
          Term { [ hc[] ]; In Vol_M_Mag; Jacobian Vol; }
        }
      }
      { Name js; Value {
          Term { [ js[] ]; In Vol_S0_Mag; Jacobian Vol; }
        }
      }
    }
  }
}

PostOperation {
  { Name Magnetostatics_phi; NameOfPostProcessing Magnetostatics_phi;
    Operation {
      CreateDir[resPath];
      If(NbrRegions[Vol_M_Mag])
        Print[ hc, OnElementsOf Vol_M_Mag, File StrCat[resPath, "hc.pos"] ];
      EndIf
      Print[ phi, OnElementsOf Vol_Mag, File StrCat[resPath, "phi.pos"] ];
      Print[ h, OnElementsOf Vol_Mag, File StrCat[resPath, "h.pos"] ];
      Print[ b, OnElementsOf Vol_Mag, File StrCat[resPath, "b.pos"] ];
    }
  }
  { Name Magnetostatics_a; NameOfPostProcessing Magnetostatics_a;
    Operation {
      CreateDir[resPath];
      If(NbrRegions[Vol_M_Mag])
        Print[ hc, OnElementsOf Vol_M_Mag, File StrCat[resPath, "hc.pos"] ];
      EndIf
      If(NbrRegions[Vol_S0_Mag])
        Print[ js, OnElementsOf Vol_S0_Mag, File StrCat[resPath, "js.pos"] ];
      EndIf
      If(modelDim == 2)
        Print[ az, OnElementsOf Vol_Mag, File StrCat[resPath, "az.pos"] ];
      EndIf
      Print[ h, OnElementsOf Vol_Mag, File StrCat[resPath, "h.pos"] ];
      Print[ b, OnElementsOf Vol_Mag, File StrCat[resPath, "b.pos"] ];
    }
  }
}
