Include "params.pro";
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
  deltak[] = Pi / Norm[XYZ[]];
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


Function{
  //Parallel
  ListOfField = {}; //My fields
  ListOfNeighborField = {}; //My neighbors
  ListOfDom = {} ;// My domains that I'm in charge of
  ListOfFacto = {} ;
  For idom In {0:N_DOM-1}
    //Index of the field (used in the DDM.pro file)
    If(idom ==0)
      myfield_left = {};
      myfield_right = {0};
      voisin_right = {1};
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
    list_voisin = {voisin_right{}, voisin_left{}};
    g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexScalarField[XYZ[]]{voisin_left{}};
    g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexScalarField[XYZ[]]{voisin_right{}};
    If (idom % MPI_Size == MPI_Rank)
      ListOfField += myfield_left{};
      ListOfField += myfield_right{};
      ListOfDom += idom;
      //who are my neighbor ?
      ListOfNeighborField += list_voisin{};
      ListOfNeighborField += nb_voisin;
    EndIf
    
    // reuse factorisation of the same meshes
    If (idom == 0 || idom == 1 || idom == N_DOM-1)
      ListOfFacto += idom ;        
    EndIf
    If(idom > 1 && idom < N_DOM-1)
      ListOfFacto += 1 ;
    EndIf

  EndFor
  If(MPI_Size <2) // No neighbors
    NeighborField = {};
  EndIf
}



Include "../../main/Helmholtz.pro";
