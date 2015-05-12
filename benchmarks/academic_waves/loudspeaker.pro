//========================================================
// Benchmark "acoustic wave produced by a loudspeaker"
// File: GetDP simulation
//========================================================

Include "loudspeaker.dat" ;

Group {
  Omega = Region[{DOMAIN}] ;
  If (Flag_ModelEquations==1)
    GammaD = Region[{GAMMA_SOURCE}] ;
    GammaN = Region[{GAMMA_WALL}] ;
  EndIf
  If (Flag_ModelEquations==2)
    GammaD_p = Region[{GAMMA_SOURCE}] ;
    GammaD_u = Region[{GAMMA_WALL}] ;
    GammaD = Region[{GammaD_p,GammaD_u}] ;
  EndIf
  GammaR = Region[{GAMMA_DOM}] ;
}

Function {
  I[] = Complex[0, 1] ;
  
  // Incident signal
  kVec[] = Vector[ k*Cos[theta], k*Sin[theta], 0] ;
  pInc[] = Complex[ Cos[kVec[]*XYZ[]], Sin[kVec[]*XYZ[]] ] ;
  
  // BC: Neumann
  If (Flag_ModelEquations==2)
    fNeumann[] = 0. ;
  EndIf
}

Constraint {
  { Name pConstraint ;
    Case {
      { Region Region[{GAMMA_SOURCE}] ; Value pInc[] ; }
    }
  }
  If(Flag_SecondOrder)
  { Name pConstraint2 ;
    Case {
      { Region Region[{GAMMA_SOURCE}] ; Value 0. ; }
    }
  }
  EndIf
  { Name uConstraint ;
    Case {
      { Region Region[{GAMMA_WALL}] ; Value 0. ; }
    }
  }
  If(Flag_SecondOrder)
  { Name uConstraint2;
    Case {
      { Region Region[{GAMMA_WALL}] ; Value 0. ; }
    }
  }
  EndIf
}

Include "formulations_scalarWaves.pro" ;

PostProcessing {
  If (Flag_ModelEquations==1)
  { Name PostPro ; NameOfFormulation WaveEquation_Form ;
    Quantity {
      { Name p ; Value{ Local{ [ {p} ] ; In VolAll ; Jacobian JVol ; } } }
    }
  }
  EndIf
  If (Flag_ModelEquations==2)
  { Name PostPro ; NameOfFormulation EulerEquations_Form ;
    Quantity {
      { Name p ; Value{ Local{ [ {p} ] ; In VolAll ; Jacobian JVol ; } } }
    }
  }
  EndIf
}

PostOperation {
  { Name Get_Fields ; NameOfPostProcessing PostPro ;
    Operation {
      Print[ p, OnElementsOf VolAll, File "res/p.pos"] ;
    }
  }
}

DefineConstant[
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"Get_Fields", Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
];


