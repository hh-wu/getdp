Include "freeSpacePml_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    Choices {0="Order 0", 3="PML"}},
  NP_OSRC = 4,
  // parameters for the DDM iterative solver
  SOLVER = "gmres", // bcgs, gmsh_pcleft, ...
  TOL = 1e-7,
  MAXIT = 200,
  RESTART = MAXIT
  // sweeping preconditioner
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner",
		   Choices{0="Unpreconditioned",
		     1="Double sweep",
		     2="SGS"}},
  ListOfCuts = { {0, N_DOM-1} },
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
  // kDtN[] = k[]; // MODIFIED DEFINITION: see below PML functions

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
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[((idom+1)*1000+200)];
    GammaD0~{idom} = Region[{}];
    Pml~{idom}~{0} = Region[{}];
    Pml~{idom}~{1} = Region[{}];
    PmlD0~{idom}~{0} = Region[{}];
    PmlD0~{idom}~{1} = Region[{}];
    PmlInf~{idom}~{0} = Region[{}];
    PmlInf~{idom}~{1} = Region[{}];
    PmlN~{idom}~{0} = Region[{}];
    PmlN~{idom}~{1} = Region[{}];
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
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[ ((idom+1)*1000+20) ];
      Pml~{idom}~{1} += Region[ ((idom+1)*1000+300) ];
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+4) ];
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+302) ]; // bottom boundary
      GammaInf~{idom} += Region[ ((idom+1)*1000+10) ]; // left boundary
      If (!N_ON_TOP)
        GammaInf~{idom} += Region[ ((idom+1)*1000+203) ]; // top boundary
	PmlInf~{idom}~{1} += Region[{((idom+1)*1000+303)}]; // top boundary
      EndIf
      If (N_ON_TOP)
	GammaN~{idom} += Region[{((idom+1)*1000+203)}]; // top boundary
        PmlN~{idom}~{1} += Region[{((idom+1)*1000+303)}]; // top boundary
      EndIf
      BndSigma~{idom}~{0} = Region[{}];
      BndSigma~{idom}~{1} = Region[{((idom+1)*1000+21)}];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom}~{1} = Region[{}];
      GammaD~{idom} = Region[{}];
      Pml~{idom}~{0} += Region[ ((idom+1)*1000+100) ];
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+1) ];
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
      GammaInf~{idom} += Region[ ((idom+1)*1000+20) ]; // right boundary
      If (!N_ON_TOP)
        GammaInf~{idom} += Region[ ((idom+1)*1000+203) ]; // top boundary
	PmlInf~{idom}~{0} += Region[{((idom+1)*1000+103)}];
      EndIf
      If (N_ON_TOP)
	GammaN~{idom} += Region[{((idom+1)*1000+203)}];
        PmlN~{idom}~{0} += Region[{((idom+1)*1000+103)}];
      EndIf
      BndSigma~{idom}~{0} = Region[{((idom+1)*1000+11)}];
      BndSigma~{idom}~{1} = Region[{}];
    EndIf
    If (idom >= 1 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom}~{1} = Region[ ((idom+1)*1000+20) ];
      Pml~{idom}~{0} += Region[ ((idom+1)*1000+100) ];
      Pml~{idom}~{1} += Region[ ((idom+1)*1000+300) ];
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+1) ];
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+4) ];
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      If (!N_ON_TOP)
        GammaInf~{idom} += Region[ ((idom+1)*1000+203) ]; // top boundary
	PmlInf~{idom}~{0} += Region[{((idom+1)*1000+103)}];
	PmlInf~{idom}~{1} += Region[{((idom+1)*1000+303)}];
      EndIf
      If (N_ON_TOP)
	GammaN~{idom} += Region[{((idom+1)*1000+203)}];
        PmlN~{idom}~{0} += Region[{((idom+1)*1000+103)}];
        PmlN~{idom}~{1} += Region[{((idom+1)*1000+303)}];
      EndIf
      BndSigma~{idom}~{0} = Region[{((idom+1)*1000+11)}];
      BndSigma~{idom}~{1} = Region[{((idom+1)*1000+21)}];
    EndIf

    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0}, BndSigma~{idom}~{1}}] ;

    BndGammaInf~{idom}~{0} = Region[{}];
    BndGammaInf~{idom}~{1} = Region[{}];
    BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{0}, BndGammaInf~{idom}~{1}}] ;
  EndFor
}

Include "Decomposition.pro";

Function{
  // for enclosing (truncation) PMLS
  yCenter = -d/2.+shiftY;
  distY[] = Fabs[Y[]-yCenter];
  xCenter = D/2.+shiftX;
  distX[] = Fabs[X[]-xCenter];

  // parameters for PML TC
  xSigmaList = {};
  For i In {0:N_DOM}
    xSigmaList += i*dDom+shiftX;
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    xSigma~{idom}~{0} = xSigmaList(idom);
    xSigma~{idom}~{1} = xSigmaList(idom+1);
  EndFor
  For i In {0:N_DOM}
    distSigma~{i}[] = X[] - xSigmaList(i);
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    For jdom In {0:1}
      cPml~{idom}~{jdom}[] = velocityField[ xSigma~{idom}~{jdom}, Y[]];
      kPml~{idom}~{jdom}[] = om[]/cPml~{idom}~{jdom}[];
    EndFor
    // Bermudez damping functions
    // SigmaX[Omega~{idom}] = 0. ;
    SigmaX[#{Omega~{idom}, Sigma~{idom}~{0}, Sigma~{idom}~{1}}] = distX[] > D/2.-tPml ? c[]/(D/2.-distX[]) : 0. ;
    // SigmaX[#{Omega~{idom}, Sigma~{idom}~{0}, Sigma~{idom}~{1}}] = distX[] > D/2.-tPml ? 50. : 0. ; // constant coefficient
    SigmaX[Pml~{idom}~{1}] = distSigma~{idom+1}[] > dTr ? cPml~{idom}~{1}[]/(dBb-distSigma~{idom+1}[]) : 0. ;
    SigmaX[Pml~{idom}~{0}] = -distSigma~{idom}[] > dTr ? cPml~{idom}~{0}[]/Fabs[(dBb+distSigma~{idom}[])] : 0. ;
  EndFor

  // SigmaY[] = 0.;
  SigmaY[] = distY[] > d/2.-tPml ? c[]/(d/2.-distY[]) : 0. ;
  // SigmaY[] = distY[] > d/2.-tPml ? 50. : 0. ; // constant coefficient
  SigmaZ[] = 0.;
  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];
  D[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];
  E[] = Kx[]*Ky[]*Kz[];

  kDtN[] = k[]*Kx[]*Ky[]*Kz[]*(1+.0*I[]);
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
