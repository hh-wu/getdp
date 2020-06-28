// Lib_Elasticity_u.pro
//
// Template library for elastostatics, elastodynamics and modal analysis using a
// displacement (u) formulation, in both 2D (plane stress or plain strain) and
// 3D.

// Default definitions of constants, groups and functions that can/should be
// redefined from outside the template:

DefineConstant[
  modelPath = "", // default path of the model
  resPath = StrCat[modelPath, "res/"], // path for post-operation files
  modelDim = 2, // default model dimension (2D)
  Flag_PlaneStress = 0, // plain stress in 2D?
  Flag_Regime = 0, // static (0), harmonic (1), time-domain (2), modal (3)
  Freq = 1, // frequency (for harmonic simulations)
  Freq_Target = 1, // frequency target (for modal simulations)
  Num_Modes = 10, // number of modes (for modal simulations)
  TimeInit = 0, // intial time (for time-domain simulations)
  TimeFinal = 1/50, // final time (for time-domain simulations)
  DeltaTime = 1/500, // time step (for time-domain simulations)
  Flag_Axi = 0, // axisymmetric model?
  FE_Order = 1 // finite element order
];

Group {
  DefineGroup[
    // Full elastic domain:
    Vol_Mec,

    // Subsets of Vol_Mec:
    Vol_F_Mec, // region with imposed force

    // Boundaries:
    Sur_Neu_Mec // surfaces with Neumann boundary conditions (pressure)
  ];
  Dom_Mec = Region[ {Vol_Mec, Sur_Neu_Mec} ];
}

Function{
  DefineFunction[
    E, // Young modulus (in Vol_Mec)
    nu, // Poisson coefficient (in Vol_Mec)
    rho, // mass density (in Vol_Mec)
    f, // force per unit volume (in Vol_Force_Mec)
    sigman // traction (on Sur_Neu_Mec)
  ];
}

// End of definitions.

Jacobian {
  { Name Vol;
    Case {
      If(Flag_Axi && modelDim < 3)
        { Region All; Jacobian VolAxiSqu; }
      Else
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
          { GeoElement Point; NumberOfPoints 1; }
          { GeoElement Line; NumberOfPoints 3; }
          { GeoElement Triangle; NumberOfPoints 3; }
          { GeoElement Quadrangle; NumberOfPoints 4; }
          { GeoElement Tetrahedron; NumberOfPoints 4; }
          { GeoElement Hexahedron; NumberOfPoints 6; }
          { GeoElement Prism; NumberOfPoints 9; }
          { GeoElement Pyramid; NumberOfPoints 8; }
	}
      }
    }
  }
}

Function {
  If(Flag_PlaneStress) // plane stress (EPC)
    a[] = E[]/(1.-nu[]^2);
    c[] = E[]*nu[]/(1.-nu[]^2);
  Else // plane strain (EPD) or 3D
    a[] = E[]*(1.-nu[])/(1.+nu[])/(1.-2.*nu[]);
    c[] = E[]*nu[]/(1.+nu[])/(1.-2.*nu[]);
  EndIf
  b[] = E[]/2./(1.+nu[]); // = mu = G

  C_xx[] = Tensor[ a[],0  ,0  ,    0  ,b[],0  ,    0  ,0  ,b[] ];
  C_xy[] = Tensor[ 0  ,c[],0  ,    b[],0  ,0  ,    0  ,0  ,0   ];
  C_xz[] = Tensor[ 0  ,0  ,c[],    0  ,0  ,0  ,    b[],0  ,0   ];

  C_yx[] = Tensor[ 0  ,b[],0  ,    c[],0  ,0  ,    0  ,0  ,0   ];
  C_yy[] = Tensor[ b[],0  ,0  ,    0  ,a[],0  ,    0  ,0  ,b[] ];
  C_yz[] = Tensor[ 0  ,0  ,0  ,    0  ,0  ,c[],    0  ,b[],0   ];

  C_zx[] = Tensor[ 0  ,0  ,b[],    0  ,0  ,0  ,    c[],0  ,0   ];
  C_zy[] = Tensor[ 0  ,0  ,0  ,    0  ,0  ,b[],    0  ,c[],0   ];
  C_zz[] = Tensor[ b[],0  ,0  ,    0  ,b[],0  ,    0  ,0  ,a[] ];
}

FunctionSpace {
  { Name H_ux_Mec; Type Form0;
    BasisFunction {
      { Name sxn; NameOfCoef uxn; Function BF_Node;
        Support Dom_Mec; Entity NodesOf[ All ]; }
      If(FE_Order == 2)
        { Name sxn2; NameOfCoef uxn2; Function BF_Node_2E;
          Support Dom_Mec; Entity EdgesOf[ All ]; }
      EndIf
    }
    Constraint {
      { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint Displacement_x; }
      If(FE_Order == 2)
        { NameOfCoef uxn2; EntityType EdgesOf; NameOfConstraint Displacement_x; }
      EndIf
    }
  }
  { Name H_uy_Mec; Type Form0;
    BasisFunction {
      { Name syn; NameOfCoef uyn; Function BF_Node;
        Support Dom_Mec; Entity NodesOf[ All ]; }
      If(FE_Order == 2)
        { Name syn2; NameOfCoef uyn2; Function BF_Node_2E;
          Support Dom_Mec; Entity EdgesOf[ All ]; }
      EndIf
    }
    Constraint {
      { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint Displacement_y; }
      If(FE_Order == 2)
        { NameOfCoef uyn2; EntityType EdgesOf; NameOfConstraint Displacement_y; }
      EndIf
    }
  }
  { Name H_uz_Mec; Type Form0;
    BasisFunction {
      { Name syn; NameOfCoef uzn; Function BF_Node;
        Support Dom_Mec; Entity NodesOf[ All ]; }
      If(FE_Order == 2)
        { Name szn2; NameOfCoef uzn2; Function BF_Node_2E;
          Support Dom_Mec; Entity EdgesOf[ All ]; }
      EndIf
    }
    Constraint {
      { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint Displacement_z; }
      If(FE_Order == 2)
        { NameOfCoef uzn2; EntityType EdgesOf; NameOfConstraint Displacement_z; }
      EndIf
    }
  }
}

Formulation {
  { Name Elasticity_u; Type FemEquation;
    Quantity {
      { Name ux; Type Local; NameOfSpace H_ux_Mec; }
      { Name uy; Type Local; NameOfSpace H_uy_Mec; }
      If(modelDim == 3)
        { Name uz; Type Local; NameOfSpace H_uz_Mec; }
      EndIf
    }
    Equation {
      Integral { [ -C_xx[] * Dof{d ux}, {d ux} ];
        In Vol_Mec; Jacobian Vol; Integration Int; }
      Integral { [ -C_xy[] * Dof{d uy}, {d ux} ];
        In Vol_Mec; Jacobian Vol; Integration Int; }
      If(modelDim == 3)
        Integral { [ -C_xz[] * Dof{d uz}, {d ux} ];
          In Vol_Mec; Jacobian Vol; Integration Int; }
      EndIf

      Integral { [ -C_yx[] * Dof{d ux}, {d uy} ];
        In Vol_Mec; Jacobian Vol; Integration Int; }
      Integral { [ -C_yy[] * Dof{d uy}, {d uy} ];
        In Vol_Mec; Jacobian Vol; Integration Int; }
      If(modelDim == 3)
        Integral { [ -C_yz[] * Dof{d uz}, {d uy} ];
          In Vol_Mec; Jacobian Vol; Integration Int; }
      EndIf

      If(modelDim == 3)
        Integral { [ -C_zx[] * Dof{d ux}, {d uz} ];
          In Vol_Mec; Jacobian Vol; Integration Int; }
        Integral { [ -C_zy[] * Dof{d uy}, {d uz} ];
          In Vol_Mec; Jacobian Vol; Integration Int; }
        Integral { [ -C_zz[] * Dof{d uz}, {d uz} ];
          In Vol_Mec; Jacobian Vol; Integration Int; }
      EndIf

      If(Flag_Regime)
        Integral { DtDtDof [ -rho[] * Dof{ux} , {ux} ];
          In Vol_Mec ; Jacobian Vol ; Integration Int ; }
        Integral { DtDtDof [ -rho[] * Dof{uy} , {uy} ];
          In Vol_Mec ; Jacobian Vol ; Integration Int ; }
        If(modelDim == 3)
          Integral { DtDtDof [ -rho[] * Dof{uz} , {uz} ];
            In Vol_Mec ; Jacobian Vol ; Integration Int ; }
        EndIf
      EndIf

      If(Flag_Regime != 3)
        Integral { [ CompX[f[]] , {ux} ];
          In Vol_F_Mec; Jacobian Vol; Integration Int; }
        Integral { [ CompY[f[]] , {uy} ];
          In Vol_F_Mec; Jacobian Vol; Integration Int; }
        If(modelDim == 3)
          Integral { [ CompZ[f[]] , {uy} ];
            In Vol_F_Mec; Jacobian Vol; Integration Int; }
        EndIf

        Integral { [ CompX[sigman[]] , {ux} ];
          In Sur_Neu_Mec; Jacobian Sur; Integration Int; }
        Integral { [ CompY[sigman[]] , {uy} ];
          In Sur_Neu_Mec; Jacobian Sur; Integration Int; }
        If(modelDim == 3)
          Integral { [ CompZ[sigman[]] , {uz} ];
            In Sur_Neu_Mec; Jacobian Sur; Integration Int; }
        EndIf
      EndIf
    }
  }
}

Resolution {
  { Name Elasticity_u;
    System {
      { Name A; NameOfFormulation Elasticity_u;
        If(Flag_Regime == 1)
          Type Complex; Frequency Freq;
        EndIf
      }
    }
    Operation {
      // uncomment this for faster assembly with high order elements
      // SetGlobalSolverOptions["-petsc_prealloc 400"];

      If(Flag_Regime == 0 || Flag_Regime == 1)
        Generate[A]; Solve[A]; SaveSolution[A];
      ElseIf(Flag_Regime == 2)
        InitSolution[A]; InitSolution[A] ;
        TimeLoopNewmark[TimeInit, TimeFinal, DeltaTime, 1/4, 1/2] {
          Generate[A]; Solve[A]; SaveSolution[A];
        }
      Else
        GenerateSeparate[A]; EigenSolve[A, Num_Modes, (2*Pi*Freq_Target)^2, 0];
        SaveSolutions[A];
      EndIf
    }
  }
}

PostProcessing {
  { Name Elasticity_u; NameOfFormulation Elasticity_u;
    PostQuantity {
      { Name u; Value {
          If(modelDim == 3)
            Term { [ Vector[ {ux}, {uy}, {uz} ]]; In Vol_Mec; Jacobian Vol; }
          Else
            Term { [ Vector[ {ux}, {uy}, 0 ]]; In Vol_Mec; Jacobian Vol; }
          EndIf
        }
      }
      { Name sigma; Value {
          If(modelDim == 3)
            Term { [ TensorV[ C_xx[]*{d ux} + C_xy[]*{d uy} + C_xz[]*{d uz},
                              C_yx[]*{d ux} + C_yy[]*{d uy} + C_yz[]*{d uz},
                              C_zx[]*{d ux} + C_zy[]*{d uy} + C_zz[]*{d uz} ] ];
              In Vol_Mec; Jacobian Vol; }
          Else
            Term { [ TensorV[ C_xx[]*{d ux} + C_xy[]*{d uy},
                              C_yx[]*{d ux} + C_yy[]*{d uy},
                              Vector[0,0,0]] ];
              In Vol_Mec; Jacobian Vol; }
          EndIf
          }
      }
    }
  }
}

PostOperation {
  { Name Elasticity_u; NameOfPostProcessing Elasticity_u;
    Operation {
      CreateDir[resPath];
      Print[ sigma, OnElementsOf Vol_Mec, File StrCat[resPath, "sigma.pos"] ];
      Print[ u, OnElementsOf Vol_Mec, File StrCat[resPath, "u.pos"] ];
    }
  }
}
