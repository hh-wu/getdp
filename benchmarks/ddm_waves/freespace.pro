Include "freespace_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    Choices {0="Order 0", 3="PML"}},
  NP_OSRC = 4,
  // sweeping preconditioner
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner",
		   Choices{0="Unpreconditioned",
		     1="Double sweep",
		     2="SGS"}},
  ListOfCuts() = { {0, N_DOM-1} },
  N_ON_TOP = 0
];

DELTA_SOURCE = 1; // 1 ? delta function : dirichlet

Function {
  I[] = Complex[0,1];
  velocityField[] = cAvg; //use a mean value

  k = om/cAvg;

  c[] = velocityField[ X[], Y[] ];

  om[] = om;

  k[] = om[]/c[] ;
  kInf[] = k[];
  // kIBC[] = k[]; // MODIFIED DEFINITION: see below PML functions

  uinc[] = 1.;

  V_SOURCE[] = 0.;
  fGrad[] = 0.;

  alphaBT[] = 0;
  betaBT[] = 0;

  // parameters for 2nd order TC
  // OO2 Gander 2002, pp. 46-47
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi / Norm[XYZ[]];
  alphastar[] = I[] * ((k^2 - xsimin^2) * (k^2 - (k-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k^2) * ((k+deltak[])^2 - k^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // parameters for Pade-type TC
  keps[] = Complex[ k, 0.4 * k^(1/3) * Norm[XYZ[]]^(-2/3) ];
  theta_branch = Pi/4;
}

Group{
  D() = {};
  For idom In {0:N_DOM-1}
    left = (idom-1)%N_DOM; // left boundary
    right = (idom+1)%N_DOM; // right boundary
  
    D() += idom;
    
    Omega~{idom} = Region[((idom+1)*1000+200)];
    GammaD0~{idom} = Region[{}];
    
    If (!DELTA_SOURCE)
      GammaD~{idom} = Region[ 1 ]; // Point source
    EndIf
    If (DELTA_SOURCE)
      GammaD~{idom} = Region[{}]; // Point source
      GammaPoint~{idom} = Region[ 1 ]; // Point source
    EndIf
    // GammaInf~{idom} = Region[{}];
    GammaInf~{idom} = Region[ ((idom+1)*1000+202) ]; // lower boundary
    GammaN~{idom} = Region[{}];

    If (idom == 0)
      D~{idom} = {right};
      
      Pml~{idom}~{right} = Region[{}];
      PmlD0~{idom}~{right} = Region[{}];
      PmlInf~{idom}~{right} = Region[{}];
      
      Sigma~{idom}~{right} = Region[ ((idom+1)*1000+20) ];
      Sigma~{idom} = Region[{Sigma~{idom}~{right}}] ;
      
      Pml~{idom}~{right} += Region[ ((idom+1)*1000+300) ];
      PmlInf~{idom}~{right} += Region[ ((idom+1)*1000+4) ];
      PmlInf~{idom}~{right} += Region[ ((idom+1)*1000+302) ]; // bottom boundary
      
      GammaInf~{idom} += Region[ ((idom+1)*1000+10) ]; // left boundary
      If (!N_ON_TOP)
        GammaInf~{idom} += Region[ ((idom+1)*1000+203) ]; // top boundary
        PmlInf~{idom}~{1} += Region[{((idom+1)*1000+303)}]; // top boundary
      EndIf
      If (N_ON_TOP)
        GammaN~{idom} += Region[{((idom+1)*1000+203)}]; // top boundary
        PmlN~{idom}~{right} += Region[{((idom+1)*1000+303)}]; // top boundary
      EndIf
      BndSigma~{idom}~{right} = Region[{((idom+1)*1000+21)}];
      BndSigma~{idom} = Region[{BndSigma~{idom}~{right}}] ;
      
      BndGammaInf~{idom}~{right} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{right}}] ;
    EndIf
    If (idom == N_DOM-1)
      D~{idom} = {left};
    
      Pml~{idom}~{left} = Region[{}];
      PmlD0~{idom}~{left} = Region[{}];
      PmlInf~{idom}~{left} = Region[{}];
    
      Sigma~{idom}~{left} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom} = Region[{Sigma~{idom}~{left}}] ;
      
      GammaD~{idom} = Region[{}];
      
      Pml~{idom}~{left} += Region[ ((idom+1)*1000+100) ];
      PmlInf~{idom}~{left} += Region[ ((idom+1)*1000+1) ];
      PmlInf~{idom}~{left} += Region[ ((idom+1)*1000+102) ];
      
      GammaInf~{idom} += Region[ ((idom+1)*1000+20) ]; // right boundary
      If (!N_ON_TOP)
        GammaInf~{idom} += Region[ ((idom+1)*1000+203) ]; // top boundary
        PmlInf~{idom}~{left} += Region[{((idom+1)*1000+103)}];
      EndIf
      If (N_ON_TOP)
        GammaN~{idom} += Region[{((idom+1)*1000+203)}];
        PmlN~{idom}~{left} += Region[{((idom+1)*1000+103)}];
      EndIf
      BndSigma~{idom}~{left} = Region[{((idom+1)*1000+11)}];
      BndSigma~{idom} = Region[{BndSigma~{idom}~{left}}] ;
      
      BndGammaInf~{idom}~{left} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{left}}] ;
    EndIf
    If (idom >= 1 && idom < N_DOM-1)
      D~{idom} = {left, right};
    
      Pml~{idom}~{left} = Region[{}];
      Pml~{idom}~{right} = Region[{}];
      PmlD0~{idom}~{left} = Region[{}];
      PmlD0~{idom}~{right} = Region[{}];
      PmlInf~{idom}~{left} = Region[{}];
      PmlInf~{idom}~{right} = Region[{}];
    
      Sigma~{idom}~{left} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom}~{right} = Region[ ((idom+1)*1000+20) ];
      Sigma~{idom} = Region[{Sigma~{idom}~{left}, Sigma~{idom}~{right}}] ;
      
      Pml~{idom}~{left} += Region[ ((idom+1)*1000+100) ];
      Pml~{idom}~{right} += Region[ ((idom+1)*1000+300) ];
      PmlInf~{idom}~{left} += Region[ ((idom+1)*1000+1) ];
      PmlInf~{idom}~{left} += Region[ ((idom+1)*1000+102) ];
      PmlInf~{idom}~{right} += Region[ ((idom+1)*1000+4) ];
      PmlInf~{idom}~{right} += Region[ ((idom+1)*1000+302) ];
      
      If (!N_ON_TOP)
        GammaInf~{idom} += Region[ ((idom+1)*1000+203) ]; // top boundary
        PmlInf~{idom}~{left} += Region[{((idom+1)*1000+103)}];
        PmlInf~{idom}~{right} += Region[{((idom+1)*1000+303)}];
      EndIf
      If (N_ON_TOP)
        GammaN~{idom} += Region[{((idom+1)*1000+203)}];
        PmlN~{idom}~{left} += Region[{((idom+1)*1000+103)}];
        PmlN~{idom}~{right} += Region[{((idom+1)*1000+303)}];
      EndIf
      BndSigma~{idom}~{left} = Region[{((idom+1)*1000+11)}];
      BndSigma~{idom}~{right} = Region[{((idom+1)*1000+21)}];
      BndSigma~{idom} = Region[{BndSigma~{idom}~{left}, BndSigma~{idom}~{right}}] ;
      
      BndGammaInf~{idom}~{left} = Region[{}];
      BndGammaInf~{idom}~{right} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{left}, BndGammaInf~{idom}~{right}}] ;
    EndIf
  EndFor
}

Include "Decomposition.pro";

Function{
  // for enclosing (truncation) PMLS
  yCenter = -dGeo/2.+shiftY;
  distY[] = Fabs[Y[]-yCenter];
  xCenter = DGeo/2.+shiftX;
  distX[] = Fabs[X[]-xCenter];

  // parameters for PML TC
  xSigmaList = {};
  For i In {0:N_DOM}
    xSigmaList += i*dDom+shiftX;
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    left = (idom-1)%N_DOM; // left boundary
    right = (idom+1)%N_DOM; // right boundary
    xSigma~{idom}~{left} = xSigmaList(idom);
    xSigma~{idom}~{right} = xSigmaList(idom+1);
  EndFor
  For i In {0:N_DOM}
    distSigma~{i}[] = X[] - xSigmaList(i);
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    left = (idom-1)%N_DOM; // left boundary
    right = (idom+1)%N_DOM; // right boundary
    
    If (idom == 0)
      cPml~{idom}~{right}[] = velocityField[ xSigma~{idom}~{right}, Y[]];
      kPml~{idom}~{right}[] = om[]/cPml~{idom}~{right}[];
      // Bermudez damping functions
      // SigmaX[Omega~{idom}] = 0. ;
      SigmaX[#{Omega~{idom}, Sigma~{idom}~{right}}] = distX[] > DGeo/2.-tPml ? c[]/(DGeo/2.-distX[]) : 0. ;
      // SigmaX[#{Omega~{idom}, Sigma~{idom}~{right}}] = distX[] > DGeo/2.-tPml ? 50. : 0. ; // constant coefficient
      SigmaX[Pml~{idom}~{right}] = distSigma~{idom+1}[] > dTr ? cPml~{idom}~{right}[]/(dBb-distSigma~{idom+1}[]) : 0. ;
    EndIf
    If (idom == N_DOM-1)
      cPml~{idom}~{left}[] = velocityField[ xSigma~{idom}~{left}, Y[]];
      kPml~{idom}~{left}[] = om[]/cPml~{idom}~{left}[];
      // Bermudez damping functions
      // SigmaX[Omega~{idom}] = 0. ;
      SigmaX[#{Omega~{idom}, Sigma~{idom}~{left}}] = distX[] > DGeo/2.-tPml ? c[]/(DGeo/2.-distX[]) : 0. ;
      // SigmaX[#{Omega~{idom}, Sigma~{idom}~{left}}] = distX[] > DGeo/2.-tPml ? 50. : 0. ; // constant coefficient
      SigmaX[Pml~{idom}~{left}] = -distSigma~{idom}[] > dTr ? cPml~{idom}~{left}[]/Fabs[(dBb+distSigma~{idom}[])] : 0. ;
    EndIf
    If (idom >= 1 && idom < N_DOM-1)
      cPml~{idom}~{left}[] = velocityField[ xSigma~{idom}~{left}, Y[]];
      cPml~{idom}~{right}[] = velocityField[ xSigma~{idom}~{right}, Y[]];
      kPml~{idom}~{left}[] = om[]/cPml~{idom}~{left}[];
      kPml~{idom}~{right}[] = om[]/cPml~{idom}~{right}[];
      // Bermudez damping functions
      // SigmaX[Omega~{idom}] = 0. ;
      SigmaX[#{Omega~{idom}, Sigma~{idom}~{left}, Sigma~{idom}~{right}}] = distX[] > DGeo/2.-tPml ? c[]/(DGeo/2.-distX[]) : 0. ;
      // SigmaX[#{Omega~{idom}, Sigma~{idom}~{left}, Sigma~{idom}~{right}}] = distX[] > DGeo/2.-tPml ? 50. : 0. ; // constant coefficient
      SigmaX[Pml~{idom}~{right}] = distSigma~{idom+1}[] > dTr ? cPml~{idom}~{right}[]/(dBb-distSigma~{idom+1}[]) : 0. ;
      SigmaX[Pml~{idom}~{left}] = -distSigma~{idom}[] > dTr ? cPml~{idom}~{left}[]/Fabs[(dBb+distSigma~{idom}[])] : 0. ;
    EndIf
  EndFor

  // SigmaY[] = 0.;
  SigmaY[] = distY[] > dGeo/2.-tPml ? c[]/(dGeo/2.-distY[]) : 0. ;
  // SigmaY[] = distY[] > d/2.-tPml ? 50. : 0. ; // constant coefficient
  SigmaZ[] = 0.;
  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];
  D[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];
  E[] = Kx[]*Ky[]*Kz[];

  kIBC[] = k[]*Kx[]*Ky[]*Kz[]*(1+.0*I[]);
}

If (PRECONDITIONER)
  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

If (ANALYSIS == 0)
  Include "Helmholtz.pro";
EndIf

Include "Schwarz.pro";
