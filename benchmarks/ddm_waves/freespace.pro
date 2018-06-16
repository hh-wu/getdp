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
  For ii In {0:N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
  
    D() += i;
    
    Omega~{i} = Region[((i+1)*1000+200)];
    GammaD0~{i} = Region[{}];
    
    If (!DELTA_SOURCE)
      GammaD~{i} = Region[ 1 ]; // Point source
    EndIf
    If (DELTA_SOURCE)
      GammaD~{i} = Region[{}]; // Point source
      GammaPoint~{i} = Region[ 1 ]; // Point source
    EndIf
    // GammaInf~{i} = Region[{}];
    GammaInf~{i} = Region[ ((i+1)*1000+202) ]; // lower boundary
    GammaN~{i} = Region[{}];

    If (ii == 0)
      D~{i} = {right};
      
      Pml~{i}~{right} = Region[{}];
      PmlD0~{i}~{right} = Region[{}];
      PmlInf~{i}~{right} = Region[{}];
      
      Sigma~{i}~{right} = Region[ ((i+1)*1000+20) ];
      Sigma~{i} = Region[{Sigma~{i}~{right}}] ;
      
      Pml~{i}~{right} += Region[ ((i+1)*1000+300) ];
      PmlInf~{i}~{right} += Region[ ((i+1)*1000+4) ];
      PmlInf~{i}~{right} += Region[ ((i+1)*1000+302) ]; // bottom boundary
      
      GammaInf~{i} += Region[ ((i+1)*1000+10) ]; // left boundary
      If (!N_ON_TOP)
        GammaInf~{i} += Region[ ((i+1)*1000+203) ]; // top boundary
        PmlInf~{i}~{1} += Region[{((i+1)*1000+303)}]; // top boundary
      EndIf
      If (N_ON_TOP)
        GammaN~{i} += Region[{((i+1)*1000+203)}]; // top boundary
        PmlN~{i}~{right} += Region[{((i+1)*1000+303)}]; // top boundary
      EndIf
      Tau~{i}~{right} = Region[{((i+1)*1000+21)}];
      Tau~{i} = Region[{Tau~{i}~{right}}] ;
      
      BndGammaInf~{i}~{right} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{right}}] ;
    EndIf
    If (ii == N_DOM-1)
      D~{i} = {left};
    
      Pml~{i}~{left} = Region[{}];
      PmlD0~{i}~{left} = Region[{}];
      PmlInf~{i}~{left} = Region[{}];
    
      Sigma~{i}~{left} = Region[ ((i+1)*1000+10) ];
      Sigma~{i} = Region[{Sigma~{i}~{left}}] ;
      
      GammaD~{i} = Region[{}];
      
      Pml~{i}~{left} += Region[ ((i+1)*1000+100) ];
      PmlInf~{i}~{left} += Region[ ((i+1)*1000+1) ];
      PmlInf~{i}~{left} += Region[ ((i+1)*1000+102) ];
      
      GammaInf~{i} += Region[ ((i+1)*1000+20) ]; // right boundary
      If (!N_ON_TOP)
        GammaInf~{i} += Region[ ((i+1)*1000+203) ]; // top boundary
        PmlInf~{i}~{left} += Region[{((i+1)*1000+103)}];
      EndIf
      If (N_ON_TOP)
        GammaN~{i} += Region[{((i+1)*1000+203)}];
        PmlN~{i}~{left} += Region[{((i+1)*1000+103)}];
      EndIf
      Tau~{i}~{left} = Region[{((i+1)*1000+11)}];
      Tau~{i} = Region[{Tau~{i}~{left}}] ;
      
      BndGammaInf~{i}~{left} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}}] ;
    EndIf
    If (ii >= 1 && ii < N_DOM-1)
      D~{i} = {left, right};
    
      Pml~{i}~{left} = Region[{}];
      Pml~{i}~{right} = Region[{}];
      PmlD0~{i}~{left} = Region[{}];
      PmlD0~{i}~{right} = Region[{}];
      PmlInf~{i}~{left} = Region[{}];
      PmlInf~{i}~{right} = Region[{}];
    
      Sigma~{i}~{left} = Region[ ((i+1)*1000+10) ];
      Sigma~{i}~{right} = Region[ ((i+1)*1000+20) ];
      Sigma~{i} = Region[{Sigma~{i}~{left}, Sigma~{i}~{right}}] ;
      
      Pml~{i}~{left} += Region[ ((i+1)*1000+100) ];
      Pml~{i}~{right} += Region[ ((i+1)*1000+300) ];
      PmlInf~{i}~{left} += Region[ ((i+1)*1000+1) ];
      PmlInf~{i}~{left} += Region[ ((i+1)*1000+102) ];
      PmlInf~{i}~{right} += Region[ ((i+1)*1000+4) ];
      PmlInf~{i}~{right} += Region[ ((i+1)*1000+302) ];
      
      If (!N_ON_TOP)
        GammaInf~{i} += Region[ ((i+1)*1000+203) ]; // top boundary
        PmlInf~{i}~{left} += Region[{((i+1)*1000+103)}];
        PmlInf~{i}~{right} += Region[{((i+1)*1000+303)}];
      EndIf
      If (N_ON_TOP)
        GammaN~{i} += Region[{((i+1)*1000+203)}];
        PmlN~{i}~{left} += Region[{((i+1)*1000+103)}];
        PmlN~{i}~{right} += Region[{((i+1)*1000+303)}];
      EndIf
      Tau~{i}~{left} = Region[{((i+1)*1000+11)}];
      Tau~{i}~{right} = Region[{((i+1)*1000+21)}];
      Tau~{i} = Region[{Tau~{i}~{left}, Tau~{i}~{right}}] ;
      
      BndGammaInf~{i}~{left} = Region[{}];
      BndGammaInf~{i}~{right} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}, BndGammaInf~{i}~{right}}] ;
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
  For ii In {0:N_DOM}
    xSigmaList += ii*dDom+shiftX;
  EndFor
  For ii In {0: N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    xSigma~{i}~{left} = xSigmaList(ii);
    xSigma~{i}~{right} = xSigmaList(ii+1);
  EndFor
  For ii In {0:N_DOM}
    distSigma~{ii}[] = X[] - xSigmaList(i);
  EndFor
  For ii In {0: N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    
    If (ii == 0)
      cPml~{i}~{right}[] = velocityField[ xSigma~{i}~{right}, Y[]];
      kPml~{i}~{right}[] = om[]/cPml~{i}~{right}[];
      // Bermudez damping functions
      // SigmaX[Omega~{i}] = 0. ;
      SigmaX[#{Omega~{i}, Sigma~{i}~{right}}] = distX[] > DGeo/2.-tPml ? c[]/(DGeo/2.-distX[]) : 0. ;
      // SigmaX[#{Omega~{i}, Sigma~{i}~{right}}] = distX[] > DGeo/2.-tPml ? 50. : 0. ; // constant coefficient
      SigmaX[Pml~{i}~{right}] = distSigma~{i+1}[] > dTr ? cPml~{i}~{right}[]/(dBb-distSigma~{i+1}[]) : 0. ;
    EndIf
    If (ii == N_DOM-1)
      cPml~{i}~{left}[] = velocityField[ xSigma~{i}~{left}, Y[]];
      kPml~{i}~{left}[] = om[]/cPml~{i}~{left}[];
      // Bermudez damping functions
      // SigmaX[Omega~{i}] = 0. ;
      SigmaX[#{Omega~{i}, Sigma~{i}~{left}}] = distX[] > DGeo/2.-tPml ? c[]/(DGeo/2.-distX[]) : 0. ;
      // SigmaX[#{Omega~{i}, Sigma~{i}~{left}}] = distX[] > DGeo/2.-tPml ? 50. : 0. ; // constant coefficient
      SigmaX[Pml~{i}~{left}] = -distSigma~{i}[] > dTr ? cPml~{i}~{left}[]/Fabs[(dBb+distSigma~{i}[])] : 0. ;
    EndIf
    If (ii >= 1 && ii < N_DOM-1)
      cPml~{i}~{left}[] = velocityField[ xSigma~{i}~{left}, Y[]];
      cPml~{i}~{right}[] = velocityField[ xSigma~{i}~{right}, Y[]];
      kPml~{i}~{left}[] = om[]/cPml~{i}~{left}[];
      kPml~{i}~{right}[] = om[]/cPml~{i}~{right}[];
      // Bermudez damping functions
      // SigmaX[Omega~{i}] = 0. ;
      SigmaX[#{Omega~{i}, Sigma~{i}~{left}, Sigma~{i}~{right}}] = distX[] > DGeo/2.-tPml ? c[]/(DGeo/2.-distX[]) : 0. ;
      // SigmaX[#{Omega~{i}, Sigma~{i}~{left}, Sigma~{i}~{right}}] = distX[] > DGeo/2.-tPml ? 50. : 0. ; // constant coefficient
      SigmaX[Pml~{i}~{right}] = distSigma~{i+1}[] > dTr ? cPml~{i}~{right}[]/(dBb-distSigma~{i+1}[]) : 0. ;
      SigmaX[Pml~{i}~{left}] = -distSigma~{i}[] > dTr ? cPml~{i}~{left}[]/Fabs[(dBb+distSigma~{i}[])] : 0. ;
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
  For ii In{0:N_DOM-1}
    ProcOwnsDomain += {(ii%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

If (ANALYSIS == 0)
  Include "Helmholtz.pro";
EndIf

Include "Schwarz.pro";
