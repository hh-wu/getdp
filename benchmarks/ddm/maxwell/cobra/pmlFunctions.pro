
Function{
  For idom In {0:nDoms-1}
    distSigma~{idom}~{0}[] = (X[]-xBaseList(idom))*Cos[-thetaList(idom)] - (Y[]-yBaseList(idom))*Sin[-thetaList(idom)];
    distSigma~{idom}~{1}[] = (X[]-xBaseList(idom+1))*Cos[-thetaList(idom+1)] - (Y[]-yBaseList(idom+1))*Sin[-thetaList(idom+1)];
  EndFor
}

Function {
  // Damping functions of the PML: equal to 0 inside the propagation domain
  // and on the intern boundary of the PML (Boundary in common with the Propagation domain).
  // Sigma is (here) linear.
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);

  For jdom In {0:1}
  // kPml~{idom}~{jdom}[] = k[ Vector[xSigma~{idom}~{jdom},Y[],Z[]] ] ;
  kPml~{idom}~{jdom}[] = k[ XYZ[] ] ; // FIXME: would fail if non-homogeneous
  // kPml~{idom}~{jdom}[] = k[ Rotate[Vector[xSigma~{idom}~{jdom},Y[],Z[]], 0., 0., -theta] ] ;
  EndFor
  EndFor

  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
    SigmaX[OmegaPml~{idom}~{1}] = distSigma~{idom}~{1}[] > dTr ? c[]/(dBb-distSigma~{idom}~{1}[]) : 0;
    SigmaX[OmegaPml~{idom}~{0}] = -distSigma~{idom}~{0}[] > dTr ? c[]/Fabs[(dBb+distSigma~{idom}~{0}[])] : 0 ;
  EndFor
  SigmaY[] = 0.;
  SigmaZ[] = 0.;

  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];

  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);

  D[OmegaPml~{idom}~{0}] = Rotate[TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]], 0., 0., -thetaList(idom) ]; 
  D[OmegaPml~{idom}~{1}] = Rotate[TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]], 0., 0., -thetaList(idom+1) ]; 

  EndFor

  nu[] = 1./D[];
  eps[] = 1.*D[];

}
