
Function{
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  // du_1~{idom}[] = ComplexScalarField[ Vector[xPml_0~{idom},Y[],Z[]] ]{2*(idom-1)}; // normal derivative from the black box
  // du_0~{idom}[] = ComplexScalarField[ Vector[xPml_1~{idom},Y[],Z[]] ]{2*idom+1}; // normal derivative from the black box
  // If (idom == 1)
  //   H_0_1[] = (X[] > xPml_0_1 ? .5*2*I[]*beta_m[]*uInc[] : -.5*2*I[]*beta_m[]*uInc[]) ; // used as source for the problem
  // H_1_1[] = X[] > xPml_1~{idom} ? .5*2 : -.5*2 ;
  // EndIf
  If (1)//idom != 1)
    H~{idom}~{0}[] = X[] > xSigma~{idom}~{0} ? .5 : -.5 ;
    H~{idom}~{1}[] = X[] > xSigma~{idom}~{1} ? .5 : -.5 ;
  EndIf

  EndFor
}

Function {
  // Damping functions of the PML: equal to 0 inside the propagation domain
  // and on the intern boundary of the PML (Boundary in common with the Propagation domain).
  // Sigma is (here) linear.

  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);

    If (!EXTERNAL_VELOCITY_FIELD)
      SigmaX[OmegaPml~{idom}~{1}] = X[] > xSigma~{idom}~{1}+dTr ? c[Vector[xSigma~{idom}~{1},Y[],Z[]]]/(xSigma~{idom}~{1}+dBb-X[]) : 0;
      SigmaX[OmegaPml~{idom}~{0}] = X[] < xSigma~{idom}~{0}-dTr ? c[Vector[xSigma~{idom}~{0},Y[],Z[]]]/Fabs[(xSigma~{idom}~{0}-dBb-X[])] : 0 ;
    EndIf
    If (EXTERNAL_VELOCITY_FIELD)
      SigmaX[OmegaPml~{idom}~{1}] = X[] > xSigma~{idom}~{1}+dTr ? (ScalarField[ Vector[xSigma~{idom}~{1},Y[],Z[]] ]{999})/(xSigma~{idom}~{1}+dBb-X[]) : 0;
      SigmaX[OmegaPml~{idom}~{0}] = X[] < xSigma~{idom}~{0}-dTr ? (ScalarField[ Vector[xSigma~{idom}~{0},Y[],Z[]] ]{999})/Fabs[(xSigma~{idom}~{0}-dBb-X[])] : 0 ;
    EndIf

    For jdom In {0:1}
    If (EXTERNAL_VELOCITY_FIELD)
      kPml~{idom}~{jdom}[#{OmegaPml~{idom}~{jdom}, GamaPmlAll~{idom}~{jdom}}] = om[]/(ScalarField[ Vector[xSigma~{idom}~{jdom},Y[],Z[]] ]{999});
    EndIf
    If (!EXTERNAL_VELOCITY_FIELD)
      kPml~{idom}~{jdom}[] = om[]/c[ Vector[xSigma~{idom}~{jdom},Y[],Z[]] ] ;
    EndIf
    EndFor

  EndFor
  SigmaY[] = 0.;//Y[] <= yPml ? 0. : sigmaPml*((Y[]-yPml)/dPml)^2 ;
  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  D[] = TensorDiag[Ky[]/Kx[], Kx[]/Ky[], 0.];
}
