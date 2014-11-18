
Function{

  For i In {0:nDoms}
    distSigma~{i}[] = X[]*Cos[theta] + Y[]*Sin[theta] - xSigmaList(i);
  EndFor


  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  // du_1~{idom}[] = ComplexScalarField[ Vector[xPml_0~{idom},Y[],Z[]] ]{2*(idom-1)}; // normal derivative from the black box
  // du_0~{idom}[] = ComplexScalarField[ Vector[xPml_1~{idom},Y[],Z[]] ]{2*idom+1}; // normal derivative from the black box
  // If (idom == 1)
  //   H_0_1[] = (X[] > xPml_0_1 ? .5*2*I[]*beta_m[]*uInc[] : -.5*2*I[]*beta_m[]*uInc[]) ; // used as source for the problem
  // H_1_1[] = X[] > xPml_1~{idom} ? .5*2 : -.5*2 ;
  // EndIf
  If (1)//idom != 1)
    // H~{idom}~{0}[] = X[] > xSigma~{idom}~{0} ? .5 : -.5 ;
    // H~{idom}~{1}[] = X[] > xSigma~{idom}~{1} ? .5 : -.5 ;
    H~{idom}~{0}[] = distSigma~{idom}[] > 0. ? .5 : -.5 ;
    H~{idom}~{1}[] = distSigma~{idom+1}[] > 0. ? .5 : -.5 ;
  EndIf

  EndFor
}

Function {
  // Damping functions of the PML: equal to 0 inside the propagation domain
  // and on the intern boundary of the PML (Boundary in common with the Propagation domain).
  // Sigma is (here) linear.
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);

  For jdom In {0:1}
  kPml~{idom}~{jdom}[] = k[ Vector[xSigma~{idom}~{jdom},Y[],Z[]] ] ;
  // kPml~{idom}~{jdom}[] = k[ Rotate[Vector[xSigma~{idom}~{jdom},Y[],Z[]], 0., 0., -theta] ] ;
  EndFor

  EndFor



  // For ii In {0: #ListOfDom()-1}
  // idom = ListOfDom(ii);
  //   // SigmaX[OmegaPml~{idom}~{1}] = X[] > xSigma~{idom}~{1}+dTr ? c[]/(xSigma~{idom}~{1}+dBb-X[]) : 0;
  //   SigmaX[OmegaPml~{idom}~{1}] = distSigma~{idom+1}[] > dTr ? c[]/(dBb-distSigma~{idom+1}[]) : 0;


  //   // SigmaX[OmegaPml~{idom}~{0}] = X[] < xSigma~{idom}~{0}-dTr ? c[]/Fabs[(xSigma~{idom}~{0}-dBb-X[])] : 0 ;
  //   SigmaX[OmegaPml~{idom}~{0}] = -distSigma~{idom}[] > dTr ? c[]/Fabs[(dBb+distSigma~{idom}[])] : 0 ;
  // EndFor
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
    // SigmaX[OmegaPml~{idom}~{1}] = X[] > xSigma~{idom}~{1}+dTr ? c[]/(xSigma~{idom}~{1}+dBb-X[]) : 0;
    // SigmaX[OmegaPml~{idom}~{0}] = X[] < xSigma~{idom}~{0}-dTr ? c[]/Fabs[(xSigma~{idom}~{0}-dBb-X[])] : 0 ;
    SigmaX[OmegaPml~{idom}~{1}] = distSigma~{idom+1}[] > dTr ? c[]/(dBb-distSigma~{idom+1}[]) : 0;
    SigmaX[OmegaPml~{idom}~{0}] = -distSigma~{idom}[] > dTr ? c[]/Fabs[(dBb+distSigma~{idom}[])] : 0 ;
  EndFor
  SigmaY[] = 0.;//Y[] <= yPml ? 0. : sigmaPml*((Y[]-yPml)/dPml)^2 ;
  SigmaZ[] = 0.;//Y[] <= yPml ? 0. : sigmaPml*((Y[]-yPml)/dPml)^2 ;

  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];
  D[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]]; 
}
