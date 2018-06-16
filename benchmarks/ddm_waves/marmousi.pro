Include "marmousi_data.geo";

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
  N_ON_TOP = {1, Name "Input/01Neumann condition on top",
	      Choices{0,1}},
  EXTERNAL_VELOCITY_FIELD = {1, Name "Input/01Velocity Field",
			     Choices {0="Homogeneous", 1="Marmousi"}}
];

DELTA_SOURCE = 1; // 1 ? delta function : dirichlet

If (1)
  xSigmaList = {};
  thetaList = {};
  For i In {0:nDoms}
    xSigmaList += i*dDom;
    thetaList += 0;
  EndFor

  For ii In {0: N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    xSigma~{i}~{left} = xSigmaList(ii);
    xSigma~{i}~{right} = xSigmaList(ii+1);
  EndFor
EndIf

Function {
  I[] = Complex[0,1];
  If (EXTERNAL_VELOCITY_FIELD)
    velocityField[] = InterpolationBilinear[ $1, $2 ]{ ListFromFile["marmousi.dat"] };
  EndIf
  If (!EXTERNAL_VELOCITY_FIELD)
    velocityField[] = cAvg; //use a mean value
    // velocityField[] = cMin + (cMax-cMin)/(D^2+d^2)*(D*CompX[ $1 ]-d*CompY[ $1 ]); // 'oblique' speed gradient
    // velocityField[] = cMin + (cMax-cMin)/(d^2)*(-d*CompY[ $1 ]); // speed gradient along Y
    // velocityField[] = cMin + (cMax-cMin)/(D^2)*(D*CompX[ $1 ]); // speed gradient along X
  EndIf
  c[] = velocityField[ X[], Y[] ];

  om[] = om;

  k[] = om[]/c[] ;
  kInf[] = k[];
  kIBC[] = k[];

  uinc[] = 1.;

  V_SOURCE[] = 0.;
  fGrad[] = 0.;

  alphaBT[] = 0;
  betaBT[] = 0;
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
        PmlInf~{i}~{right} += Region[{((i+1)*1000+303)}]; // top boundary
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
        PmlInf~{i}~{right} += Region[{((i+1)*1000+103)}];
        PmlInf~{i}~{left} += Region[{((i+1)*1000+303)}];
      EndIf
      If (N_ON_TOP)
        GammaN~{i} += Region[{((i+1)*1000+203)}];
        PmlN~{i}~{right} += Region[{((i+1)*1000+103)}];
        PmlN~{i}~{left} += Region[{((i+1)*1000+303)}];
      EndIf
      Tau~{i}~{right} = Region[{((i+1)*1000+11)}];
      Tau~{i}~{left} = Region[{((i+1)*1000+21)}];
      Tau~{i} = Region[{Tau~{i}~{right}, Tau~{i}~{left}}] ;
      
      BndGammaInf~{i}~{right} = Region[{}];
      BndGammaInf~{i}~{left} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}, BndGammaInf~{i}~{right}}] ;
    EndIf
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
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    xSigma~{i}~{left} = xSigmaList(ii);
    xSigma~{i}~{right} = xSigmaList(ii+1);
  EndFor
  For i In {0:N_DOM}
    distSigma~{i}[] = X[] - xSigmaList(i);
  EndFor
  For ii In {0: N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    
    If (ii == 0)
      cPml~{i}~{right}[] = velocityField[ xSigma~{i}~{right}, Y[]];
      kPml~{i}~{right}[] = om[]/cPml~{i}~{right}[];
      // Bermudez damping functions
      SigmaX[Omega~{i}] = 0. ;
      SigmaX[Pml~{i}~{right}] = distSigma~{i+1}[] > dTr ? cPml~{i}~{right}[]/(dBb-distSigma~{i+1}[]) : 0. ;
    EndIf
    If (ii == N_DOM-1)
      cPml~{i}~{left}[] = velocityField[ xSigma~{i}~{left}, Y[]];
      kPml~{i}~{left}[] = om[]/cPml~{i}~{left}[];
      // Bermudez damping functions
      SigmaX[Omega~{i}] = 0. ;
      SigmaX[Pml~{i}~{left}] = -distSigma~{i}[] > dTr ? cPml~{i}~{left}[]/Fabs[(dBb+distSigma~{i}[])] : 0. ;
    EndIf
    If (ii >= 1 && ii < N_DOM-1)
      cPml~{i}~{left}[] = velocityField[ xSigma~{i}~{left}, Y[]];
      cPml~{i}~{right}[] = velocityField[ xSigma~{i}~{right}, Y[]];
      kPml~{i}~{left}[] = om[]/cPml~{i}~{left}[];
      kPml~{i}~{right}[] = om[]/cPml~{i}~{right}[];
      // Bermudez damping functions
      SigmaX[Omega~{i}] = 0. ;
      SigmaX[Pml~{i}~{right}] = distSigma~{i+1}[] > dTr ? cPml~{i}~{right}[]/(dBb-distSigma~{i+1}[]) : 0. ;
      SigmaX[Pml~{i}~{left}] = -distSigma~{i}[] > dTr ? cPml~{i}~{left}[]/Fabs[(dBb+distSigma~{i}[])] : 0. ;
    EndIf
  EndFor
  SigmaY[] = 0.;
  SigmaZ[] = 0.;
  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];
  D[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];
  E[] = Kx[]*Ky[]*Kz[];
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
