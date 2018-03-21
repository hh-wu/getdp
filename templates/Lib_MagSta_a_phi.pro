// Lib_MagSta_a_phi.pro
//
// Template library for magnetostatics using a scalar (phi) or a vector (a)
// potential formulation

// Default definitions of constants, groups and functions that can/should be
// redefined from outside the template:

DefineConstant[
  modelPath = "", // default path of the model
  resPath = StrCat[modelPath, "res/"], // path for post-operation files
  mu0 = 4*Pi*1e-7, // magnetic permeability of vacuum
  modelDim = 2, // default model dimension (2D)
  Val_Rint = 0, // internal radius of Vol_Inf_Ele annulus
  Val_Rext = 0, // external radius of Vol_Inf_Ele annulus
  Val_Cx = 0, // x-coordinate of center of Vol_Inf_Ele
  Val_Cy = 0, // y-coordinate of center of Vol_Inf_Ele
  Val_Cz = 0, // z-coordinate of center of Vol_Inf_Ele
  NL_max_iter = 20, // max number of nonlinear iterations
  NL_relax = 1, // nonlinear iteration relexation
  NL_tol = 1e-5 // stopping criterion for nonlinear iterations
];

Group {
  DefineGroup[
    Vol_L_Mag, // linear magnetic materials
    Vol_NL_Mag, // nonlinear magnetic materials
    Vol_M_Mag, // permenent magnets
    Vol_S0_Mag, // imposed current density
    Vol_Inf_Mag, // infinite domains
    Sur_Dir_Mag // Dirichlet boundary conditions
    Sur_Neu_Mag // Non-homogeneous Neumann boundary conditions
  ];
  Vol_Mag = Region[{Vol_L_Mag, Vol_NL_Mag, Vol_M_Mag, Vol_S0_Mag, Vol_Inf_Mag}];
  Dom_Mag = Region[{Vol_Mag, Sur_Neu_Mag}];
}

Function{
  DefineFunction[
    mu, // magnetic permeability
    nu, // magnetic reluctivity (= 1/nu)
    hc, // coercive magnetic field (in magnets)
    js, // source current density
    dhdb_NL, // nonlinar part of Jacobian for phi formulation
    dbdh_NL, // nonlinear part of Jacobian for a formulation
    bn, // normal magnetic flux density on Sur_Neu_Mag for phi formulation
    nxh // tangential magnetic field on Sur_Neu_Mag for a formulation
  ];
}

// End of default definitions.

Jacobian {
  { Name Vol;
    Case {
      { Region Vol_Inf_Mag;
        Jacobian VolSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
      { Region All; Jacobian Vol; }
    }
  }
  { Name Sur;
    Case {
      { Region All; Jacobian Sur; }
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
  { Name MagSta_phi; Type FemEquation;
    Quantity {
      { Name phi; Type Local; NameOfSpace Hgrad_phi; }
    }
    Equation {
      Integral { [ - mu[-{d phi}] * Dof{d phi} , {d phi} ];
        In Vol_Mag; Jacobian Vol; Integration I1; }
      Integral { JacNL [ - dbdh_NL[-{d phi}] * Dof{d phi} , {d phi} ];
        In Vol_NL_Mag; Jacobian Vol; Integration I1; }
      Integral { [ - mu[] * hc[] , {d phi} ];
        In Vol_M_Mag; Jacobian Vol; Integration I1; }
      Integral { [ bn[] , {phi} ];
        In Sur_Neu_Mag; Jacobian Sur; Integration I1; }
    }
  }
  { Name MagSta_a; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
      Integral { [ nu[{d a}] * Dof{d a} , {d a} ];
        In Vol_Mag; Jacobian Vol; Integration I1; }
      Integral { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ];
        In Vol_NL_Mag; Jacobian Vol; Integration I1; }
      Integral { [ hc[] , {d a} ];
        In Vol_M_Mag; Jacobian Vol; Integration I1; }
      Integral { [ -js[] , {a} ];
        In Vol_S0_Mag; Jacobian Vol; Integration I1; }
      Integral { [ nxh[] , {a} ];
        In Sur_Neu_Mag; Jacobian Sur; Integration I1; }
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
        IterativeLoop[NL_max_iter, NL_tol, NL_relax]{
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
        IterativeLoop[NL_max_iter, NL_tol, NL_relax]{
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
  { Name MagSta_a; NameOfFormulation MagSta_a;
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
  { Name MagSta_phi; NameOfPostProcessing MagSta_phi;
    Operation {
      CreateDir[resPath];
      If(NbrRegions[Vol_M_Mag])
        Print[ hc, OnElementsOf Vol_M_Mag, File StrCat[resPath, "MagSta_phi_hc.pos"] ];
      EndIf
      Print[ phi, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_phi_phi.pos"] ];
      Print[ h, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_phi_h.pos"] ];
      Print[ b, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_phi_b.pos"] ];
    }
  }
  { Name MagSta_a; NameOfPostProcessing MagSta_a;
    Operation {
      CreateDir[resPath];
      If(NbrRegions[Vol_M_Mag])
        Print[ hc, OnElementsOf Vol_M_Mag, File StrCat[resPath, "MagSta_a_hc.pos"] ];
      EndIf
      If(NbrRegions[Vol_S0_Mag])
        Print[ js, OnElementsOf Vol_S0_Mag, File StrCat[resPath, "MagSta_a_js.pos"] ];
      EndIf
      If(modelDim == 2)
        Print[ az, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_a_az.pos"] ];
      EndIf
      Print[ h, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_a_h.pos"] ];
      Print[ b, OnElementsOf Vol_Mag, File StrCat[resPath, "MagSta_a_b.pos"] ];
    }
  }
}
