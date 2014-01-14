Include "params.pro";
Include "../../main/ddmDefines.pro";

Include "groups.pro";


Function {
  I[] = Complex[0, 1];

  k[] = WAVENUMBER;
  k = WAVENUMBER;
  kDtn[] = k[] ;
  kInf[] = k[] ;

  V_SOURCE[] = 0.;

  eps0 = 8.854e-12;
  mu0 = 4*Pi*1e-7;
  Z0 = 1;//Sqrt[mu0/eps0];

  epsilon[] = eps0;
  mu[] = mu0;
  omega[] = k / Sqrt[eps0*mu0];

  // EMDA
   beta[] = -I[] * k + BETA_EMDA;


  // OO2
  //TAKEN FROM CIRCLE_PIE !!
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi ; /// Norm[XYZ[]];
  alphastar[] = I[] * ((k^2 - xsimin^2) * (k^2 - (k-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k^2) * ((k+deltak[])^2 - k^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // OSRCs
  N = NP_OSRC;
  keps[] = Complex[ k, k/4 ];
  theta_branch = THETA_BRANCH_OSRC;

  // Coefs for Bayliss-Turkel ABC (as a correction to the Sommerfeld
  // ABC)
  // FIXME: BGT does not work when partition boundary touches the
  // surface--reverting to Sommerfeld for now!
  alphaBT[] = 0;
  betaBT[] = 0;

  theta = THETA_INC;
  alpha[] = -Vector[Cos[theta], Sin[theta], 0];

  uinc[] = Complex[ Cos[k*alpha[]*XYZ[]], Sin[k*alpha[]*XYZ[]] ];
  //uinc[] = 1;
  //uinc[] = -Complex[ Sin[Pi*MODE/d*Y[]] , 0. ] ; // minus sign (u=-uinc)

  BETA_M[] = k[] ;// Sqrt[k^2 - (MODE*Pi/d)^2] ;

  // EXACT
  // beta[] = -I[] * BETA_M[] ;

}


Include "../../main/topology/inline.pro";

Function{
  ListOfFacto = {} ;
  For idom In {0:N_DOM-1}
    // reuse factorisation of the same meshes
    If (idom == 0 || idom == 1 || idom == N_DOM-1)
      ListOfFacto += idom ;
    EndIf
    If(idom > 1 && idom < N_DOM-1)
      ListOfFacto += 1 ;
    EndIf   
  EndFor

  If (PRECOND_SWEEP)
    ProcOwnsDomain = {} ;
    // what domains am I in charge of ? Implemented with a list
    For idom In{0:N_DOM-1}
      ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
    EndFor
  EndIf
}


Include "../../main/Helmholtz.pro";
