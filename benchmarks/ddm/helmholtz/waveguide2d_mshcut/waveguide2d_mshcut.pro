Include "params.geo";
Include "../main/ddmDefines.pro";

If (!PML)
Include "groups_waveguide2d_mshcut.pro";
EndIf
If (PML)
Include "groups_waveguide2d_mshcut_PML.pro";
EndIf

Function {
  I[] = Complex[0, 1];

  // k1 = WAVENUMBER*.69;
  // k2 = WAVENUMBER*1.5;
  // k3 = WAVENUMBER*.77;
  // k4 = WAVENUMBER*.27;
  // k5 = WAVENUMBER*1.7;
  // k6 = WAVENUMBER*1.27;
  // k7 = WAVENUMBER*.769;

  // x1 = D+2.07;//.17;
  // x2 = D+1.;//.37;
  // x3 = 1.7;
  // x4 = 2.17;
  // x5 = 3.;
  // x6 = 3.37;

  // // k[] = WAVENUMBER;
  // // k[] = X[] < 2.77 ? k1 : k2 ;
  // // k[] = X[] < x1 ?
  // // 	      k1 : (X[] < x2 ?
  // // 		    k2 : (X[] < x3 ?
  // // 			  k3 : (X[] < x4 ?
  // // 				k4 : (X[] < x5 ?
  // // 				      k5 : (X[] < x6 ?
  // // 					    k6 : k7))))) ;


  // om[] = WAVENUMBER ;
  // c[] = 1.;//1.25*(1.-.4*Exp[-32*(Y[]-.5)^2]) ;
  // // k[] = om/c[] ;
  // k[] = Complex[om[]/c[], 0*.25*om[]/c[] ];

  om[] = OM;
  c[] = 1.25*(1.-.4*Exp[-32*(Y[]-.5)^2]) ;
  k[] = om[]/c[] ;


  // BETA_M[] = k[];//Sqrt[k[]^2-(m*Pi/d)^2];//X[] < 2.77 ? Sqrt[k[]^2-(m*Pi/d)^2] : Sqrt[k[]^2-(m*Pi/d)^2];//Sqrt[k[]^2-(m*Pi/d)^2] ;
  BETA_M[] = Sqrt[k[]^2-(m*Pi/d)^2];//X[] < 2.77 ? Sqrt[k[]^2-(m*Pi/d)^2] : Sqrt[k[]^2-(m*Pi/d)^2];//Sqrt[k[]^2-(m*Pi/d)^2] ;

}

Function {
  V_SOURCE[] = 0.;//nv*Exp[-10*nv*((X[]-xv)^2+(Y[]-yv)^2)] ;

}


Function {

  // EMDA
  // beta[] = -I[] * BETA_M[] + BETA_EMDA;
  // BETA_EMDA[] = 0.; //kDtn[]/2.;
  // beta[] = -I[] * kDtn[] + BETA_EMDA[];

  // Coefs for Bayliss-Turkel ABC (as a correction to the Sommerfeld
  // ABC) 
  // FIXME: BGT does not work when partition boundary touches the
  // surface--reverting to Sommerfeld for now!
  alphaBT[] = 0;
  betaBT[] = 0;

  theta = Pi/8;
  alpha[] = -Vector[Cos[theta], 0, Sin[theta]]; 

  // uinc[] = Complex[ Cos[k*alpha[]*XYZ[]], Sin[k*alpha[]*XYZ[]] ];
  uinc[] = Complex[ Sin[Pi*m/d*Y[]]+0*Sin[Pi*1/d*Y[]], 0. ];
  kDtn[] = k[];
  kInf[] = k[];//BETA_M[];
}

Include "../main/tcDefaults.pro";

If (PML)
xSigmaList = {};
For i In {0:nDoms}
  xSigmaList += i*dDom;
EndFor

For ii In {0: N_DOM-1}
idom = ii;
// If (idom > 0)
xSigma~{idom}~{0} = xSigmaList(idom);
// EndIf
// If (idom < N-1)
xSigma~{idom}~{1} = xSigmaList(idom+1);
// EndIf
EndFor
EndIf


Include "../main/topology/inline.pro";


// ListOfCuts = {0, N_DOM-1};
// ListOfCuts = {0, 5, 10, N_DOM-1};
// ListOfCuts = {0, 7, N_DOM-1};

If (PRECOND_SWEEP)
  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

Include "../main/Helmholtz.pro";
// Include "../main/ddmPrecond.pro";

