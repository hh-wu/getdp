Include "cobra_data.geo";

eps0 = 8.854e-12;
mu0 = 4*Pi*1e-7;
Z0 = 1;//Sqrt[mu0/eps0];
c = 1/Sqrt[mu0*eps0];


DefineConstant[ // allows to set these from outside
  // type of walls
  WALLS = {1, Name "Input/05Walls",
    Choices {0="Transparent", 1="Metallic"}},
  // excitation mode
  MODE_M = {1, Name "Input/05m"}, // y
  MODE_N = {1, Name "Input/05n"}, // z
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)", 3="PML"}},
  NP_OSRC = 2,
  // sweeping preconditioner
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner",
    Choices{0="Unpreconditioned",
      1="Double sweep",
      2="SGS"}},
  ListOfCuts = { {0, N_DOM-1} }
];

xBaseList = {};
yBaseList = {};
thetaList = {};

xBaseList += shiftX;
yBaseList += shiftY;
thetaList += 0;

// Printf["part %g: %g", 0, nDomList(0)];
ic = 0;
For i In {1:nDomList(0)}
  xBaseList += xBaseList(#xBaseList()-1) + D1/nDomList(0);
  yBaseList += yBaseList(#yBaseList()-1);
  thetaList += thetaList(#thetaList()-1);
EndFor
ic += i;
// Printf["part %g: %g", 1, nDomList(1)];
For i In {1:nDomList(1)}
xBaseList += xBaseList((ic)) + (R+d1)*Sin[alpha*i/nDomList(1)];
  yBaseList += yBaseList((ic)) + (R+d1)*(1.-Cos[alpha*(i)/nDomList(1)]);
  thetaList += thetaList(#thetaList()-1) + alpha/nDomList(1);
EndFor
ic += i;
// Printf["part %g: %g", 2, nDomList(2)];
For i In {1:nDomList(2)}
  xBaseList += xBaseList(#xBaseList()-1) + D2*Cos[alpha]/nDomList(2);
  yBaseList += yBaseList(#yBaseList()-1) + D2*Sin[alpha]/nDomList(2);
  thetaList += thetaList(#thetaList()-1);
EndFor
ic += i;
// Printf["part %g: %g", 3, nDomList(3)];
For i In {1:nDomList(3)}
xBaseList += xBaseList((ic)) + ( (R)*Sin[alpha] - (R)*Sin[alpha*(nDomList(3)-i)/nDomList(3)] );
yBaseList += yBaseList((ic)) + ((R)*(1.-Cos[alpha])-(R)*(1.-Cos[alpha*(nDomList(3)-i)/nDomList(3)]));
  thetaList += thetaList(#thetaList()-1) - alpha/nDomList(3);
EndFor
ic += i;
// Printf["part %g: %g", 4, nDomList(4)];
For i In {1:nDomList(4)}
  xBaseList += xBaseList(#xBaseList()-1) + D3/nDomList(4);
  yBaseList += yBaseList(#yBaseList()-1);
  thetaList += thetaList(#thetaList()-1);
EndFor
ic += i;


Function {
  I[] = Complex[0, 1];
  N[] = Normal[];
  om[] = WAVENUMBER;
  c[] = 1.;//1.25*(1.-.4*Exp[-32*(Y[]-.5)^2]) ;
  k[] = om[]/c[] ;
  omega[] = c*k[] ;

  mu[] = mu0 ;

  kIBC[] = k[];
  kInf[] = k[];

  V_SOURCE[] = 0.;

  For idom In {0:N_DOM-1}
    For jdom In {0:1}
      If (idom == 0) // straight part
        P~{idom}~{jdom}[] = Y[]-shiftY;//(R+d1) - Norm[ (Vector[shiftX,R+d1+shiftY,0] - Vector[X[], Y[], 0 ]) ];
        Q~{idom}~{jdom}[] = Z[];
        // R_0~{idom}~{jdom}[] = X[]*Cos[theta]+Y[]*Sin[theta]+dBb;
      EndIf
      If (idom == 1) // bent part
        P~{idom}~{jdom}[] = (R+d1) - Norm[ (Vector[shiftX+D1,R+d1+shiftY,0] - Vector[X[], Y[], 0 ]) ];
        Q~{idom}~{jdom}[] = Z[];
        // R_0~{idom}~{jdom}[] = X[]*Cos[theta]+Y[]*Sin[theta]+dBb;
      EndIf
      If (idom == 2) // straight oblique part
        P~{idom}~{jdom}[] = Sin[-alpha]*(X[]-(shiftX+D1+(R+d1)*Sin[alpha])) + Cos[-alpha]*(Y[]-((R+d1)*(1.-Cos[alpha])+shiftY)) + 0*shiftY;//(R+d1) - Norm[ (Vector[shiftX+D1,R+d1+shiftY,0] - Vector[X[], Y[], 0 ]) ];
        Q~{idom}~{jdom}[] = Z[];
        // R_0~{idom}~{jdom}[] = X[]*Cos[theta]+Y[]*Sin[theta]+dBb;
      EndIf
    EndFor
  EndFor

  ky = MODE_M*Pi/d1 ;
  kz = MODE_N*Pi/d2 ;
  kc = Sqrt[ky^2+kz^2] ;

  uinc[] = Sin[ky*(Y[]-shiftY)]*Sin[kz*Z[]]; // mode in the rotated coordinates

  beta[] = ( -kc^2 + k[]^2 >=0 ? Sqrt[-kc^2 + k[]^2] : -I[]*Sqrt[kc^2 - k[]^2] ) ;
  einc[] = Vector[ Sin[ky*(Y[]-shiftY)]*Sin[kz*Z[]],
		   I[]*beta[]*ky/kc^2*Cos[ky*(Y[]-shiftY)]*Sin[kz*Z[]],
		   I[]*beta[]*kz/kc^2*Cos[kz*Z[]]*Sin[ky*(Y[]-shiftY)] ]; // TM

  alphaBT[] = 0; //1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = 0; // -1/(2*I[]*k); //- 1/(2*I[]*k*(1+I[]/(k*R_EXT)));
  
  // parameters for 2nd order TC
  // OO2 Gander 2002, pp. 46-47
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = xsimax; //Pi / Norm[XYZ[]];
  alphastar[] = I[] * ((k[]^2 - xsimin^2) * (k[]^2 - (k[]-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k[]^2) * ((k[]+deltak[])^2 - k[]^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k[]^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // parameters for Pade-type TC
  keps[] = Complex[ k[], 0.4 * k[] ];
  theta_branch = Pi/4;

}

If (PRECONDITIONER)
  // Hack to build a 'list of lists': generate variables with 'indexed names'
  nCuts = 0;
  For iCut In {0:#ListOfCuts()-2}
    nProcsInCut~{iCut} = 0;
  EndFor
  For iCut In {0:#ListOfCuts()-2}
    For iDom In {ListOfCuts(iCut):ListOfCuts(iCut+1):1}
      ListOfProcsInCut~{iCut}~{nProcsInCut~{iCut}} = iDom;
      nProcsInCut~{iCut} += 1;
    EndFor
    nCuts += 1;
  EndFor

  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    // define your rule here -- must match listOfSubdomains()
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)};
  EndFor
EndIf

Group{
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[((idom+1)*1000+200)];
    GammaD0~{idom} = Region[{}];
    Pml~{idom}~{0} = Region[{}];
    Pml~{idom}~{1} = Region[{}];
    PmlD0~{idom}~{0} = Region[{}];
    PmlD0~{idom}~{1} = Region[{}];
    PmlInf~{idom}~{0} = Region[{}];
    PmlInf~{idom}~{1} = Region[{}];
    If(WALLS == 1)
      GammaD0~{idom} += Region[ ((idom+1)*1000+202) ];
    EndIf
    GammaInf~{idom} = Region[{}];
    If(WALLS == 0)
      GammaInf~{idom} += Region[ ((idom+1)*1000+202) ];
    EndIf
    GammaN~{idom} = Region[{}];

    If (idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[ ((idom+1)*1000+20) ];
      GammaD~{idom} = Region[ ((idom+1)*1000+10) ];
      Pml~{idom}~{1} += Region[ ((idom+1)*1000+300) ];
      If(WALLS == 1)
        PmlD0~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+4) ];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom}~{1} = Region[{}];
      If (OPEN_ENDED)
	GammaInf~{idom} += Region[ ((idom+1)*1000+20) ];
      EndIf
      If (!OPEN_ENDED)
	GammaD0~{idom} += Region[ ((idom+1)*1000+20) ];
      EndIf
      GammaD~{idom} = Region[{}];
      Pml~{idom}~{0} += Region[ ((idom+1)*1000+100) ];
      If(WALLS == 1)
        PmlD0~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
      EndIf
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+1) ];
    EndIf
    If (idom >= 1 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom}~{1} = Region[ ((idom+1)*1000+20) ];
      GammaD~{idom} = Region[{}];
      Pml~{idom}~{0} += Region[ ((idom+1)*1000+100) ];
      Pml~{idom}~{1} += Region[ ((idom+1)*1000+300) ];
      If(WALLS == 1)
        PmlD0~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
        PmlD0~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
        PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+1) ];
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+4) ];
    EndIf

    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;

    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0}, BndSigma~{idom}~{1}}] ;

    BndGammaInf~{idom}~{0} = Region[{}];
    BndGammaInf~{idom}~{1} = Region[{}];
    BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{0}, BndGammaInf~{idom}~{1}}] ;
  EndFor
}

Include "Decomposition.pro";

Function{
  For idom In {0:N_DOM-1}
    distSigma~{idom}~{0}[] = (X[]-xBaseList(idom))*Cos[-thetaList(idom)] - (Y[]-yBaseList(idom))*Sin[-thetaList(idom)];
    distSigma~{idom}~{1}[] = (X[]-xBaseList(idom+1))*Cos[-thetaList(idom+1)] - (Y[]-yBaseList(idom+1))*Sin[-thetaList(idom+1)];
  EndFor
}

Function {
  // Damping functions of the PML: equal to 0 inside the propagation domain
  // and on the intern boundary of the PML (Boundary in common with the Propagation domain).
  // Sigma is (here) linear.
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);

    For jdom In {0:1}
      // kPml~{idom}~{jdom}[] = k[ Vector[xSigma~{idom}~{jdom},Y[],Z[]] ] ;
      kPml~{idom}~{jdom}[] = k[ XYZ[] ] ; // FIXME: would fail if non-homogeneous
      // kPml~{idom}~{jdom}[] = k[ Rotate[Vector[xSigma~{idom}~{jdom},Y[],Z[]], 0., 0., -theta] ] ;
    EndFor
  EndFor

  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    SigmaX[Omega~{idom}] = 0.;
    SigmaX[Pml~{idom}~{1}] = distSigma~{idom}~{1}[] > dTr ? c[]/(dBb-distSigma~{idom}~{1}[]) : 0; // Bermudez
    SigmaX[Pml~{idom}~{0}] = -distSigma~{idom}~{0}[] > dTr ? c[]/Fabs[(dBb+distSigma~{idom}~{0}[])] : 0 ;
    // SigmaX[OmegaPml~{idom}~{1}] = distSigma~{idom}~{1}[] > dTr ? c[]/(dBb-distSigma~{idom}~{1}[])-c[]/(dBb-dTr) : 0; // Bermudez -- no jump
    // SigmaX[OmegaPml~{idom}~{0}] = -distSigma~{idom}~{0}[] > dTr ? c[]/Fabs[(dBb+distSigma~{idom}~{0}[])]-c[]/Fabs[(dBb-dTr)] : 0 ;
    // SigmaX[OmegaPml~{idom}~{1}] = distSigma~{idom}~{1}[] > dTr ? 7000*(distSigma~{idom}~{1}[]-dTr)^2*om[] : 0; // Quadratic
    // SigmaX[OmegaPml~{idom}~{0}] = -distSigma~{idom}~{0}[] > dTr ? 7000*Fabs[(distSigma~{idom}~{0}[]+dTr)]^2*om[] : 0 ;
    // SigmaX[OmegaPml~{idom}~{1}] = distSigma~{idom}~{1}[] > dTr ? c[]/dPml : 0; // Constant
    // SigmaX[OmegaPml~{idom}~{0}] = -distSigma~{idom}~{0}[] > dTr ? c[]/dPml : 0 ;
  EndFor
  SigmaY[] = 0.;
  SigmaZ[] = 0.;

  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];

  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);

    D[Pml~{idom}~{0}] = Rotate[TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]], 0., 0., -thetaList(idom) ];
    D[Pml~{idom}~{1}] = Rotate[TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]], 0., 0., -thetaList(idom+1) ];
    D[Omega~{idom}] = 1.;
    E[Pml~{idom}~{0}] = Kx[]*Ky[]*Kz[];
    E[Pml~{idom}~{1}] = Kx[]*Ky[]*Kz[];
    E[Omega~{idom}] = 1.;
  EndFor

  nu[] = 1./D[];
  eps[] = 1.*D[];
}


If(ANALYSIS == 0)
  Include "Helmholtz.pro" ;
EndIf
If(ANALYSIS == 1)
  Include "Maxwell.pro" ;
EndIf

Include "Schwarz.pro" ;
