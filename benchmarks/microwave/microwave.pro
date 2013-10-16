ExtGnuplot = ".dat";
ExtGmsh = ".pos";
myDir = "output/";


Group{
  DefineGroup[ Domain, DomAir, DomCond, DomPml, DomainTot ] ;
  DefineGroup[ Surface, SurBC, SurPEC, SurSM ] ;
}

Function{
  DefineFunction[ epsilon, sigma, nu ];
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


// -------------------------------------------------------------------------
//   Microwave formulations
//   2D and 3D
//--------------------------------------------------------------------------


Constraint {
  { Name ElectricField ;
    Case {
      { Region SurBC ; Type AssignFromResolution ; NameOfResolution Microwave_e_BC ; }
      { Region SurPEC ; Type Assign ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_e; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ee; Function BF_Edge;
        Support DomainTot ; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint ElectricField; }
    }
  }
}

Formulation {
  // Imposing the source: circulation of e on edges
  { Name Microwave_e_BC ;
    Quantity {
      { Name e; Type Local; NameOfSpace Hcurl_e; }
    }
    Equation {
      Galerkin { [ Dof{e} , {e} ];
        In SurBC; Integration I2; Jacobian JSur;  }
      Galerkin { [ eInc[] , {e} ];
        In SurBC; Integration I2; Jacobian JSur;  }
    }
  }

  // Electric field formulation
  { Name Microwave_e ; Type FemEquation;
    Quantity {
      { Name e; Type Local; NameOfSpace Hcurl_e; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d e} , {d e} ];
        In Domain; Integration I1; Jacobian JVol;  }
      Galerkin { DtDof [ sigma[] * Dof{e} , {e} ];
        In DomCond; Integration I1; Jacobian JVol;  }
      Galerkin { DtDtDof [ epsilon[] * Dof{e} , {e} ];
        In Domain; Integration I1; Jacobian JVol;  }
      
      If(Flag_SilverMuller)
        Galerkin { [ I[] * k0 * nu[] * ( Normal[] /\ Dof{e} ) /\ Normal[] , {e} ];
          In SurSM; Integration I1; Jacobian JSur;  }
      EndIf
    }
  }
}


Resolution {
  { Name Microwave_e_BC;
    System {
      { Name B; NameOfFormulation Microwave_e_BC; DestinationSystem A; }
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
      PostOperation[Microwave_e];
    }
  }
}


PostProcessing {
  { Name Microwave_e ; NameOfFormulation Microwave_e ;
    Quantity {
      { Name eScatt; Value{ Local{ [{e}]; In DomainTot; Jacobian JVol;} } }
      { Name eTot; Value{ Local{ [{e}+eInc[]]; In DomainTot; Jacobian JVol;} } }
      { Name eInc; Value{ Local{ [eInc[]]; In DomainTot; Jacobian JVol;} } }
      { Name SE; Value{ Local{ [20*Log10[Norm[eInc[]]/Norm[{e}+eInc[]]]]; In DomainTot; Jacobian JVol;} } }
    }
  }
}

PostOperation {
  { Name Microwave_e ; NameOfPostProcessing Microwave_e ;
    Operation {
      Print[ eScatt, OnElementsOf Region[{Domain}], File StrCat[myDir, "eScatt.pos"] ] ;
      Print[ eTot, OnElementsOf Region[{Domain}], File StrCat[myDir, "eTot.pos"] ] ;
      Print[ eInc, OnElementsOf Region[{Domain}], File StrCat[myDir, "eInc.pos"] ] ;
      Print[ SE, OnPoint {0,0,0}, File StrCat[myDir, "SE.pos"] ] ;
    }
  }
}

/*
PostOperation Get_ShieldingEffectiveness UsingPost Microwave_e {
  Print[ SE, OnPoint {0,0,0}, File StrCat[myDir, "SE.pos"] ] ;
}

PostOperation Get_Fields UsingPost Microwave_e {
  Print[ eScatt, OnElementsOf Region[{Domain}], File StrCat[myDir, "eScatt.pos"] ] ;
  Print[ eTot, OnElementsOf Region[{Domain}], File StrCat[myDir, "eTot.pos"] ] ;
  Print[ eInc, OnElementsOf Region[{Domain}], File StrCat[myDir, "eInc.pos"] ] ;
}
*/

DefineConstant[
  ResolutionChoices    = {"Analysis", Path "GetDP/1", Visible 0},
  ComputeCommand       = {"-solve -v 3 -v2", Path "GetDP/9", Visible 0},
  PostOperationChoices = {"", Path "GetDP/2", Visible 0}
];
