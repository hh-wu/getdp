Include "params.geo";
Include "groups_waveguide2d_mshcut.pro";

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


  om = WAVENUMBER ;
  c[] = 1.;//1.25*(1.-.4*Exp[-32*(Y[]-.5)^2]) ;
  k[] = om/c[] ;

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
  uinc[] = Complex[ Sin[Pi*m/d*Y[]], 0. ];
  kDtn[] = k[];
  kInf[] = BETA_M[];
}

Include "../main/tcDefaults.pro";

// G_IN
Function{
  //Parallel
  ListOfField = {}; //My fields
  ListOfNeighborField = {}; //My neighbors
  ListOfDom = {} ;// My domains that I'm in charge of
  For idom In {0:N_DOM-1}
    //Index of the field (used in the DDM.pro file)
    If(idom ==0)
      myfield_left = {};
      myfield_right = {0}; // my data
      voisin_right = {1}; // data to exchange with
      voisin_left = {};
      nb_voisin = 1 ;
    EndIf
    If(idom == N_DOM-1)
      myfield_left = {2*idom-1};
      myfield_right = {};
      voisin_right = {};
      voisin_left = {2*(idom-1)};
      nb_voisin = 1 ;
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      myfield_left = {2*idom-1};
      myfield_right = {2*idom};
      voisin_left = {2*(idom-1)};
      voisin_right = {2*idom+1};
      nb_voisin = 2 ;
    EndIf

    // list_voisin = {voisin_right{}, voisin_left{}};
    If (idom % MPI_Size == MPI_Rank)
      list_voisin = {voisin_left{}, voisin_right{}};

      ListOfField += myfield_left{};
      ListOfField += myfield_right{};
      ListOfDom += idom;
      //who are my neighbor ?
      // ListOfNeighborField += nb_voisin;
      // ListOfNeighborField += list_voisin{};
      // ListOfNeighborField += nb_voisin;

      g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexScalarField[XYZ[]]{voisin_left{}};
      g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexScalarField[XYZ[]]{voisin_right{}};

    EndIf
  EndFor
  If(MPI_Size <2) // No neighbors
    NeighborField = {};
  EndIf
}


Include "../main/Helmholtz.pro";
