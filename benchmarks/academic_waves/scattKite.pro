//========================================================
// Benchmark "scattering of a scalar wave"
// File: GetDP simulation
//========================================================

Include "scattKite.dat" ;

Group {
  Omega = Region[{DOMAIN}] ;
  GammaD = Region[{GAMMA_OBS1, GAMMA_OBS2}] ;
  
  If(Flag_DomTruncMethod==1)
    GammaR = Region[{GAMMA_DOM}] ;
  EndIf
  If(Flag_DomTruncMethod==2)
    GammaBT = Region[{GAMMA_DOM}] ;
  EndIf
  If(Flag_DomTruncMethod==9)
    OmegaPml = Region[{LAYER}] ;
    GammaD += Region[{GAMMA_LAY}] ;
  EndIf
}

Function {
  
  I[] = Complex[0, 1] ;
  
  Freq = 1./lambda;
  kVec[] = Vector[ k*Cos[theta], k*Sin[theta], 0] ;
  pInc[] = Complex[ Cos[kVec[]*XYZ[]], Sin[kVec[]*XYZ[]] ] ;
  uInc[] = -pInc[] * kVec[]/k ;
  
  // BC: Bayliss-Turkel
  If(Flag_DomTruncMethod==2)
    alphaBT[] = 1/(2*Ldom) - I[]/(8*k*Ldom^2*(1+I[]/(k*Ldom))) ;
    betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*Ldom))) ;
  EndIf
  
  // PML
  If(Flag_DomTruncMethod==9)
    xLoc[] = Fabs[X[]]-Ldom/2;
    yLoc[] = Fabs[Y[]]-Ldom/2;
    absFuncX[] = (xLoc[]>=0) ? 1/(Lpml-xLoc[]) : 0 ;
    absFuncY[] = (yLoc[]>=0) ? 1/(Lpml-yLoc[]) : 0 ;
    hx[] = Complex[1, absFuncX[]/k];
    hy[] = Complex[1, absFuncY[]/k];
    layerScal[OmegaPml] = 1/(hx[]*hy[]);
    layerTens[OmegaPml] = TensorDiag[hy[]/hx[], hx[]/hy[], 1.];
  EndIf
  
}

Constraint {
  { Name pConstraint ;
    Case {
      { Region Region[{GAMMA_OBS1, GAMMA_OBS2}] ; Value -pInc[] ; }
      If(Flag_DomTruncMethod==9)
        { Region Region[{GAMMA_LAY}] ; Value 0. ; }
      EndIf
    }
  }
  { Name uConstraint ;
    Case {
      { }
    }
  }
}

Include "formulations_scalarWaves.pro" ;

PostProcessing {
  If (Flag_ModelEquations==1)
  { Name PostPro ; NameOfFormulation WaveEquation_Form ;
    Quantity {
      { Name pSct ; Value{ Local{ [ {p} ] ; In VolAll ; Jacobian JVol ; } } }
      { Name pInc ; Value{ Local{ [ pInc[] ] ; In VolAll ; Jacobian JVol ; } } }
      { Name pTot ; Value{ Local{ [ pInc[]+{p} ] ; In VolAll ; Jacobian JVol ; } } }
    }
  }
  EndIf
  If (Flag_ModelEquations==2)
  { Name PostPro ; NameOfFormulation EulerEquations_Form ;
    Quantity {
      { Name pSct ; Value{ Local{ [ {p} ] ; In VolAll ; Jacobian JVol ; } } }
      { Name pInc ; Value{ Local{ [ pInc[] ] ; In VolAll ; Jacobian JVol ; } } }
      { Name pTot ; Value{ Local{ [ pInc[]+{p} ] ; In VolAll ; Jacobian JVol ; } } }
      { Name uSct ; Value{ Local{ [ {u} ] ; In VolAll ; Jacobian JVol ; } } }
      { Name uInc ; Value{ Local{ [ uInc[] ] ; In VolAll ; Jacobian JVol ; } } }
      { Name uTot ; Value{ Local{ [ uInc[]+{u} ] ; In VolAll ; Jacobian JVol ; } } }
    }
  }
  EndIf
}

PostOperation {
  { Name Get_Fields ; NameOfPostProcessing PostPro ;
    Operation {
      Print[ pSct, OnElementsOf VolAll, File "res/pSct.pos"] ;
      //Print[ pInc, OnElementsOf VolAll, File "res/pInc.pos"] ;
      //Print[ pTot, OnElementsOf VolAll, File "res/pTot.pos"] ;
      If (Flag_ModelEquations==2)
        //Print[ uSct, OnElementsOf VolAll, File "res/uSct.pos"] ;
        //Print[ uInc, OnElementsOf VolAll, File "res/uInc.pos"] ;
        //Print[ uTot, OnElementsOf VolAll, File "res/uTot.pos"] ;
      EndIf
    }
  }
}

DefineConstant[
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"Get_Fields", Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
];


