Include "marmousi_data.geo";

DefineConstant[ // allows to set these from outside
  // type of walls
  // WALLS = {1, Name "Input/05Walls",
  //   Choices {0="Transparent", 1="Metallic"}},
  // excitation mode
  // MODE_M = {2, Name "Input/05m"}, // y
  // MODE_N = {1, Name "Input/05n"}, // z
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    // Choices {0="Order 0", 1="PML"}},
    Choices {0="Order 0", 3="PML"}},
  NP_OSRC = 4,
  // parameters for the DDM iterative solver
  SOLVER = "gmres", // bcgs, gmsh_pcleft, ...
  TOL = 1e-4,
  MAXIT = 100,
  RESTART = MAXIT
  // sweeping preconditioner
  PRECOND_SWEEP = {0, Name "Input/01Sweeping preconditioner",
		   Choices{0,1}},
  SGS = 1,
  N_ON_TOP = {1, Name "Input/01Neumann condition on top",
	      Choices{0,1}},
  EXTERNAL_VELOCITY_FIELD = {1, Name "Input/01Velocity Field",
			     Choices {0="Homogeneous", 1="Marmousi"}}
];

VELOCITY_FNAME = "marmousi.pos";

If (1)
  xSigmaList = {};
  thetaList = {};
  For i In {0:nDoms}
    xSigmaList += i*dDom;
    thetaList += 0;
  EndFor

  For ii In {0: N_DOM-1}
    idom = ii;
    xSigma~{idom}~{0} = xSigmaList(idom);
    xSigma~{idom}~{1} = xSigmaList(idom+1);
  EndFor
EndIf

Function {
  I[] = Complex[0,1];
  If (EXTERNAL_VELOCITY_FIELD)
    velocityField[] = ScalarField[ $1 ]{7*N_DOM};
  EndIf
  If (!EXTERNAL_VELOCITY_FIELD)
    // velocityField[] = cAvg; //use a mean value
    // velocityField[] = cMin + (cMax-cMin)/(D^2+d^2)*(D*CompX[ $1 ]-d*CompY[ $1 ]); // 'oblique' speed gradient
    // velocityField[] = cMin + (cMax-cMin)/(d^2)*(-d*CompY[ $1 ]); // speed gradient along Y
    velocityField[] = cMin + (cMax-cMin)/(D^2)*(D*CompX[ $1 ]); // speed gradient along X
  EndIf
  c[] = velocityField[ XYZ[] ];

  om[] = om;

  k[] = om[]/c[] ;
  kInf[] = k[];
  kDtN[] = k[];

  uinc[] = 1.;

  V_SOURCE[] = 0.;
  fGrad[] = 0.;

  alphaBT[] = 0;
  betaBT[] = 0;
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
    GammaD~{idom} = Region[ 1 ]; // Point source

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
  // parameters for PML TC
  xSigmaList = {};
  For i In {0:N_DOM}
    xSigmaList += i*dDom;
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
      cPml~{idom}~{jdom}[] = velocityField[Vector[xSigma~{idom}~{jdom},Y[],Z[]]];
      kPml~{idom}~{jdom}[] = om[]/cPml~{idom}~{jdom}[];
    EndFor
    // Bermudez damping functions
    SigmaX[Omega~{idom}] = 0. ;
    SigmaX[Pml~{idom}~{1}] = distSigma~{idom+1}[] > dTr ? cPml~{idom}~{1}[]/(dBb-distSigma~{idom+1}[]) : 0. ;
    SigmaX[Pml~{idom}~{0}] = -distSigma~{idom}[] > dTr ? cPml~{idom}~{0}[]/Fabs[(dBb+distSigma~{idom}[])] : 0. ;
  EndFor
  SigmaY[] = 0.;
  SigmaZ[] = 0.;
  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];
  D[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];
}

If (PRECOND_SWEEP)
  ListOfCuts = {0, N_DOM-1};
  // ListOfCuts = {0, 7, N_DOM-1}; //16/1
  // ListOfCuts = {0, 5, 10, N_DOM-1}; //16/2

  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

If (ANALYSIS == 0)
  Include "Helmholtz.pro"; // formulations, function spaces and other definitions
EndIf
If (ANALYSIS == 1)
  Include "Maxwell.pro"; // formulations, function spaces and other definitions
EndIf

Include "Schwarz.pro";
