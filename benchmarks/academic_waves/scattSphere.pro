//========================================================
// Benchmark "scattering of an EM wave by a sphere"
// File: GetDP simulation
//========================================================

Include "scattSphere.dat" ;

Group {
  
  // Case with Radiation BC
  If (Flag_DomTruncMethod==1)
    Omega_Dom = Region[{DOMAIN,LAYERS}] ;
    Omega = Region[{Omega_Dom}] ;
    
    GammaD_Sct = Region[{SCATTERER}] ;
    GammaD = Region[{GammaD_Sct}] ;
    GammaS = Region[{BOUNDARY_X,BOUNDARY_Y,BOUNDARY_Z}] ;
  EndIf
  
  // Case with PML
  If (Flag_DomTruncMethod==9)
    Omega_Dom = Region[{DOMAIN}] ;
    Omega_Pml = Region[{LAYERS}] ;
    Omega = Region[{Omega_Dom,Omega_Pml}] ;
    
    GammaD_Sct = Region[{SCATTERER}] ;
    GammaD_Pml = Region[{BOUNDARY_X,BOUNDARY_Y,BOUNDARY_Z}] ;
    GammaD = Region[{GammaD_Sct,GammaD_Pml}] ;
    GammaS = Region[{}] ;
  EndIf
  
}

Function {
  
  I[] = Complex[0.,1.] ;
  
  // Normal vector
  
  extNormal[Region[{BOUNDARY_X}]] = (X[]>0) ? Vector[1.,0.,0.] : Vector[-1.,0.,0.] ;
  extNormal[Region[{BOUNDARY_Y}]] = (Y[]>0) ? Vector[0.,1.,0.] : Vector[0.,-1.,0.] ;
  extNormal[Region[{BOUNDARY_Z}]] = (Z[]>0) ? Vector[0.,0.,1.] : Vector[0.,0.,-1.] ;
  
  // Physical parameters
  
  epsilon[Omega_Dom] = ep0 * TensorDiag[1.,1.,1.] ;
  epsilon[GammaD] = ep0 * TensorDiag[1.,1.,1.] ;
  epsilon[GammaS] = ep0 * TensorDiag[1.,1.,1.] ;
  nu[Omega_Dom] = nu0 * TensorDiag[1.,1.,1.] ;
  nu[GammaD] = nu0 * TensorDiag[1.,1.,1.] ;
  nu[GammaS] = nu0 * TensorDiag[1.,1.,1.] ;
  
  // Incident signal
  
  eInc[] = Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ] * Vector[1.,0.,0.] ;
  fDirichlet[GammaD_Sct] = -eInc[] ;
  
  // PML parameters
  
  If (Flag_DomTruncMethod==9)
    
    DampingProfileX[] = (Fabs[X[]]>=ax) ? c0 * 1/(lpml-(Fabs[X[]]-ax)) : 0 ;
    DampingProfileY[] = (Fabs[Y[]]>=ay) ? c0 * 1/(lpml-(Fabs[Y[]]-ay)) : 0 ;
    DampingProfileZ[] = (Fabs[Z[]]>=az) ? c0 * 1/(lpml-(Fabs[Z[]]-az)) : 0 ;
    
    cX[] = Complex[1, -1/(2*Pi*Freq) * DampingProfileX[]] ;
    cY[] = Complex[1, -1/(2*Pi*Freq) * DampingProfileY[]] ;
    cZ[] = Complex[1, -1/(2*Pi*Freq) * DampingProfileZ[]] ;
    
    epsilon[Omega_Pml] = ep0 * TensorDiag[(cY[]*cZ[])/cX[], (cX[]*cZ[])/cY[], (cX[]*cY[])/cZ[]] ;
    nu[Omega_Pml] = nu0 * TensorDiag[cX[]/(cY[]*cZ[]), cY[]/(cX[]*cZ[]), cZ[]/(cX[]*cY[])] ;
    
    fDirichlet[GammaD_Pml] = Vector[0.,0.,0.] ;
    
  EndIf
 
}

Include "form_vectorWaveEqn_frequency.pro" ;

PostProcessing {
  { Name PostPro ; NameOfFormulation Form ;
    Quantity {
      { Name eSct ; Value{ Local{ [ {e} ] ; In Omega ; Jacobian JVol ; } } }
      { Name eInc ; Value{ Local{ [ eInc[] ] ; In Omega ; Jacobian JVol ; } } }
      { Name eTot ; Value{ Local{ [ {e}+eInc[] ] ; In Omega ; Jacobian JVol ; } } }
      /*
      { Name eSct_Sur; Value{ Local{ [ {e} ]; In GammaD_Sct; Jacobian JSur; } } }
      { Name eInc_Sur; Value{ Local{ [ eInc[] ]; In GammaD_Sct; Jacobian JSur; } } }
      { Name eTot_Sur; Value{ Local{ [ {e}+eInc[] ]; In GammaD_Sct; Jacobian JSur; } } }
      */
    }
  }
}

PostOperation {
  { Name PostOp ; NameOfPostProcessing PostPro ;
    Operation {
      Print[ eSct, OnElementsOf Omega, File "res/eSct.pos" ] ;
      Print[ eInc, OnElementsOf Omega, File "res/eInc.pos" ] ;
      Print[ eTot, OnElementsOf Omega, File "res/eTot.pos" ] ;
      /*
      Print[ eSct_Sur, OnElementsOf GammaD_Sct, File "res/eSct_Sur.pos" ] ;
      Print[ eInc_Sur, OnElementsOf GammaD_Sct, File "res/eInc_Sur.pos" ] ;
      Print[ eTot_Sur, OnElementsOf GammaD_Sct, File "res/eTot_Sur.pos" ] ;
      */
    }
  }
}
