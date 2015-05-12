ExtGnuplot = ".dat";
ExtGmsh = ".pos";
myDir = "output/";
po = "Output/";


// -------------------------------------------------------------------------
//   Microwave formulations
//   2D and 3D
//--------------------------------------------------------------------------

DefineConstant[ Flag_Model = 2, k0, Freq ];

Group {
  DefineGroup[ Domain, DomAir, DomCond, DomPml, DomainTot ] ;
  DefineGroup[ Boundary, BndBC, BndPEC, BndSM ] ;
}

Function {
  DefineFunction[ epsilon, sigma, nu, eInc, I ];
}

Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  3 ; }
	  { GeoElement Triangle    ; NumberOfPoints  4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  6 ; }
	}
      }
    }
  }
  { Name I2 ;
    Case {
      { Type Gauss ;
        Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  4 ; }
	  { GeoElement Triangle    ; NumberOfPoints  7 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  7 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  15 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  34 ; }
	  { GeoElement Prism       ; NumberOfPoints  21 ; }
	}
      }
    }
  }
}

Constraint {
  { Name ElectricField ;
    Case {
      If(Flag_Model==2)
        { Region BndBC ; Type Assign ; Value -CompZ[eInc[]] ; }
      EndIf
      If(Flag_Model==3)
        { Region BndBC ; Type AssignFromResolution ; NameOfResolution Resol_BC ; }
      EndIf
      { Region BndPEC ; Type Assign ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_e_2D; Type Form1P;
    BasisFunction {
      { Name sn; NameOfCoef en; Function BF_PerpendicularEdge; Support DomainTot; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef en; EntityType NodesOf ; NameOfConstraint ElectricField; }
    }
  }
  { Name Hcurl_e_3D; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ee; Function BF_Edge; Support DomainTot ; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint ElectricField; }
    }
  }
}

Formulation {
  // Imposing the source: circulation of e on edges
  { Name Form_BC ;
    Quantity {
      { Name e; Type Local; NameOfSpace Hcurl_e_3D; }
    }
    Equation {
      Galerkin { [ Dof{e} , {e} ];
        In BndBC; Integration I2; Jacobian JSur;  }
      Galerkin { [ eInc[] , {e} ];
        In BndBC; Integration I2; Jacobian JSur;  }
    }
  }
  // Electric field formulation
  { Name Microwave_e ; Type FemEquation;
    Quantity {
      If(Flag_Model==2)
        { Name e; Type Local; NameOfSpace Hcurl_e_2D; }
      EndIf
      If(Flag_Model==3)
        { Name e; Type Local; NameOfSpace Hcurl_e_3D; }
      EndIf
    }
    Equation {
      Galerkin { [ nu[] * Dof{d e} , {d e} ];
        In Domain; Integration I1; Jacobian JVol; }
      Galerkin { DtDof [ sigma[] * Dof{e} , {e} ];
        In DomCond; Integration I1; Jacobian JVol; }
      Galerkin { DtDtDof [ epsilon[] * Dof{e} , {e} ];
        In Domain; Integration I1; Jacobian JVol; }
      Galerkin { [ I[] * k0 * nu[] * ( Normal[] /\ Dof{e} ) /\ Normal[] , {e} ];
        In BndSM; Integration I1; Jacobian JSur; }
    }
  }
}

Resolution {
  { Name Resol_BC;
    System {
      { Name B; NameOfFormulation Form_BC; DestinationSystem A; }
    }
    Operation {
      Generate B; Solve B; TransferSolution B;
    }
  }
  { Name Analysis;
    System {
      { Name A; NameOfFormulation Microwave_e; Type Complex; Frequency Freq; }
    }
    Operation {
      CreateDir[Str[myDir]];
      Generate A; Solve A; SaveSolution A;
    }
  }
}

PostProcessing {
  { Name Microwave_e ; NameOfFormulation Microwave_e ;
    Quantity {
      { Name eScatt; Value{ Local{ [{e}]; In DomainTot; Jacobian JVol;} } }
      { Name eTot; Value{ Local{ [{e}+eInc[]]; In DomainTot; Jacobian JVol;} } }
      { Name eInc; Value{ Local{ [eInc[]]; In DomainTot; Jacobian JVol;} } }
      { Name SE; Value{ Local{ [20*Log10[ Norm[eInc[]] / Norm[{e}+eInc[]] ]]; In DomainTot; Jacobian JVol;} } }
    }
  }
}

PostOperation {
  { Name Get_Fields ; NameOfPostProcessing Microwave_e ;
    Operation {
      Print[ eScatt, OnElementsOf Region[{Domain}], File StrCat[myDir, "eScatt.pos"] ] ;
      Print[ eTot, OnElementsOf Region[{Domain}], File StrCat[myDir, "eTot.pos"] ] ;
      Print[ eInc, OnElementsOf Region[{Domain}], File StrCat[myDir, "eInc.pos"] ] ;
    }
  }
  { Name Get_ShieldingEffectiveness ; NameOfPostProcessing Microwave_e ;
    Operation {
      Print[ SE, OnPoint {0,0,0}, Format Table, File StrCat[myDir,"temp",ExtGnuplot],
        SendToServer StrCat(po,"0Shielding effectiveness [dB]")];
    }
  }
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  MyPostOp = {"Get_ShieldingEffectiveness", Name "Input/1Post-processing",
    Choices{"Get_Fields", "Get_ShieldingEffectiveness"}, MultipleSelection "01"},
  P_ = { Str[MyPostOp], Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
];
