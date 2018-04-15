// Lib_Electrostatics_v.pro
//
// Template library for electrostatics using a scalar electric potential (v)
// formulation, with floating potentials.

// Default definitions of constants, groups and functions that can/should be
// redefined from outside the template:

DefineConstant[
  modelPath = "", // default path of the model
  resPath = StrCat[modelPath, "res/"], // path for post-operation files
  eps0 = 8.854187818e-12, // permittivity of vacuum
  Flag_Axi = 0, // axisymmetric model?
  Val_Rint = 0, // internal radius of Vol_Inf_Ele annulus
  Val_Rext = 0, // external radius of Vol_Inf_Ele annulus
  Val_Cx = 0, // x-coordinate of center of Vol_Inf_Ele
  Val_Cy = 0, // y-coordinate of center of Vol_Inf_Ele
  Val_Cz = 0 // z-coordinate of center of Vol_Inf_Ele
];

Group {
  DefineGroup[
    // Full dielectric domain:
    Vol_Ele,

    // Subsets of Vol_Ele:
    Vol_Q_Ele, // region with imposed free charge density rho[]
    Vol_Inf_Ele, // annulus where a infinite shell transformation is applied

    // Boundaries:
    Sur_Neu_Ele, // surfaces with Neumann boundary conditions (n . d = dn[])
    Sur_C_Ele // boundary of conductors (constant v)
  ];
  Dom_Ele = Region[ {Vol_Ele, Sur_Neu_Ele} ];
}

Function{
  DefineFunction[
    epsr, // relative permittivity (in Vol_Ele)
    rho, // free charge density (in Vol_Q_Ele)
    dn // normal displacement (on Sur_Neu_Ele)
  ];
}

// End of definitions.

Jacobian {
  { Name Vol;
    Case {
      If(Flag_Axi && modelDim < 3)
        { Region Vol_Inf_Ele;
          Jacobian VolAxiSquSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
        { Region All; Jacobian VolAxiSqu; }
      Else
        { Region Vol_Inf_Ele;
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

FunctionSpace {
  { Name Hgrad_vf_Ele; Type Form0;
    BasisFunction {
      // v = v  s  + v    s
      //      n  n    c,k  c,k
      { Name sn; NameOfCoef vn; Function BF_Node;
        Support Dom_Ele; Entity NodesOf[ All, Not Sur_C_Ele ]; }
      { Name sck; NameOfCoef vck; Function BF_GroupOfNodes;
        Support Vol_Ele; Entity GroupsOfNodesOf[ Sur_C_Ele ]; }
    }
    SubSpace { // only for a PostOperation
      { Name vf; NameOfBasisFunction sck; }
    }
    GlobalQuantity {
      { Name GlobalElectricPotential; Type AliasOf; NameOfCoef vck; }
      { Name GlobalElectricCharge; Type AssociatedWith; NameOfCoef vck; }
    }
    Constraint {
      { NameOfCoef vn;
        EntityType NodesOf; NameOfConstraint ElectricScalarPotential; }

      { NameOfCoef GlobalElectricPotential;
        EntityType GroupsOfNodesOf; NameOfConstraint GlobalElectricPotential; }
      { NameOfCoef GlobalElectricCharge;
        EntityType GroupsOfNodesOf; NameOfConstraint GlobalElectricCharge; }
    }
  }
}

Formulation {
  { Name Electrostatics_vf; Type FemEquation;
    Quantity {
      { Name v; Type Local; NameOfSpace Hgrad_vf_Ele; }
      { Name Q; Type Global;
        NameOfSpace Hgrad_vf_Ele [GlobalElectricCharge]; }
      { Name V; Type Global;
        NameOfSpace Hgrad_vf_Ele [GlobalElectricPotential]; }

      // only for a PostOperation
      { Name vf; Type Local; NameOfSpace Hgrad_vf_Ele [vf]; }
    }
    Equation {
      Integral { [ epsr[] * eps0 * Dof{d v} , {d v} ];
        In Vol_Ele; Jacobian Vol; Integration Int; }

      Integral { [ - rho[], {v} ];
        In Vol_Q_Ele; Jacobian Vol; Integration Int; }

      Integral { [ dn[] , {v} ];
        In Sur_Neu_Ele; Jacobian Sur; Integration Int; }

      GlobalTerm { [ - Dof{Q}, {V} ]; In Sur_C_Ele; }
    }
  }
}

Resolution {
  { Name Electrostatics_v;
    System {
      { Name A; NameOfFormulation Electrostatics_vf; }
    }
    Operation {
      Generate[A]; Solve[A]; SaveSolution[A];
    }
  }
}

PostProcessing {
  { Name Electrostatics_v; NameOfFormulation Electrostatics_vf;
    PostQuantity {
      { Name v; Value {
          Term { [ {v} ]; In Vol_Ele; Jacobian Vol; }
        }
      }
      { Name e; Value {
          Term { [ -{d v} ]; In Vol_Ele; Jacobian Vol; }
        }
      }
      { Name d; Value {
          Term { [ -eps0*epsr[] * {d v} ]; In Vol_Ele; Jacobian Vol; }
        }
      }
      { Name Q; Value {
          Term { [ {Q} ]; In Sur_C_Ele; }
        }
      }
      { Name V; Value {
          Term { [ {V} ]; In Sur_C_Ele; }
        }
      }
      { Name C; Value {
          Term { [ {Q}/{V} ]; In Sur_C_Ele; }
        }
      }
      { Name vf; Value {
          Term { [ {vf} ]; In Vol_Ele; Jacobian Vol; }
        }
      }
      { Name force; Value {
          Integral { [ eps0*epsr[] / 2. * VirtualWork[{d v}] ];
            //In Vol_Ele; // restrict support to speed-up search
            In ElementsOf[Vol_Ele, OnOneSideOf Sur_C_Ele];
            Jacobian Vol; Integration Int;
	  }
	}
      }
      { Name energy; Value {
          Integral {  [ eps0*epsr[] / 2. * SquNorm[{d v}] ];
	    In Vol_Ele; Jacobian Vol; Integration Int;
          }
        }
      }
    }
  }
}

PostOperation {
  { Name Electrostatics_v; NameOfPostProcessing Electrostatics_v;
    Operation {
      CreateDir[resPath];
      Print[ e, OnElementsOf Vol_Ele, File StrCat[resPath, "e.pos"] ];
      Print[ v, OnElementsOf Vol_Ele, File StrCat[resPath, "v.pos"] ];
      If(NbrRegions[Sur_C_Ele])
        Print[ Q, OnRegion Sur_C_Ele, File StrCat[resPath, "q.txt"],
          Format Table, SendToServer "}Output/Floating charge [C]" ];
        Print[ V, OnRegion Sur_C_Ele, File StrCat[resPath, "q.txt"],
          Format Table, SendToServer "}Output/Floating potential [V]" ];
      EndIf
    }
  }
}
