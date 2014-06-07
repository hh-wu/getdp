//========================================================
// Benchmark "circular scalar waves generated by an initial pulse"
// File: GetDP simulation
//========================================================

Include "gaussInSquare.dat" ;

Group {
  GammaD = Region[{}] ;
  GammaN = Region[{BOUNDARY}] ;
  GammaS = Region[{}] ;
  Omega = Region[{DOMAIN}] ;
}

Function {
  InitValue[] = Exp[- ((X[])^2 + (Y[])^2) / (r*r)] ;
  fNeumann[] = 0.;
}

Constraint {
  { Name pConstraint ;
    Case {
      { Region Omega ; Type Init ; Value InitValue[] ; }
    }
  }
  { Name uConstraint ;
    Case {
      { Region GammaD ; Type Assign ; Value 0. ; }
      { Region Omega ; Type Init ; Value 0. ; }
    }
  }
}

//Include "form_scalarWaveSyst_time2D.pro" ;
//Include "form_scalarWaveSyst_time2D_membrane.pro" ;
Include "form_scalarWaveEqn_time.pro" ;

PostProcessing {
  { Name PostPro ; NameOfFormulation Form ; NameOfSystem A ;
    Quantity {
      { Name p ; Value{ Local{ [ {p} ] ; In VolAll ; } } }
      { Name u ; Value{ Local{ [ {u} ] ; In VolAll ; } } }
    }
  }
}

PostOperation {
  { Name PostOp ; NameOfPostProcessing PostPro ;
    Operation {
      Print[ p, OnElementsOf VolAll, File "res/p.pos"] ;
      Print[ u, OnElementsOf VolAll, File "res/u.pos"] ;
    }
  }
}