Include "params.geo";

eps0 = 8.854e-12;
mu0 = 4*Pi*1e-7;
Z0 = 1;//Sqrt[mu0/eps0];
c = 1/Sqrt[mu0*eps0];

k = WAVENUMBER ;

TEM = 0 ;
TM = 1 ;
TE = 0 ;
SOURCE_DIRICHLET = 1 ; // If false, sources are imposed as impedance conditions

Function{
  I[] = Complex[0, 1] ;
  N[] = Normal[] ;
  k[] = WAVENUMBER ;
  omega[] = c*k[] ;
}

Include "../main/tcDefaults.pro"; // parameters for the transmission conditions

Function{
  mu[] = mu0 ;
  hinc[] = 0 ;

  kc = m*Pi/d ;
  beta[] =  ( -kc^2 + k[]^2 >=0 ? Sqrt[-kc^2 + k[]^2] : -I[]*Sqrt[kc^2 - k[]^2] ) ;

  If (TEM)
    kInf[] = (k[]^2)/beta[];
    kDtN[] = kInf[] ;
    einc[] = Vector[0,1,0] * Complex[ 1, 0] ; // TEM
  EndIf
  If (TM)
    einc[] = X[] == 0 ? Vector[ Sin[kc*Y[]], -I[]*beta[]/kc*Cos[kc*Y[]], 0] : Vector[ Sin[kc*Y[]], -I[]*beta[]/kc*Cos[kc*Y[]], 0]; // TM
  EndIf
  If (TE)
    einc[] = Vector[ Cos[kc*Y[]], I[]*beta[]/kc*Sin[kc*Y[]], 0] ; // TE -- !! here e is the magnetic field !!
  EndIf

  myExp[] = Complex[Cos[beta[]*X[]], -Sin[beta[]*X[]]] ; // Replaces Exp[-I[]*beta*X[]], because getdp does not support complex exponentials
  If (TM)
    kInf[] = (k[]^2)/beta[];
    kDtN[] = kInf[] ;
    If (WAVENUMBER >= kc) // propagative
      eRef[] = Vector[ Sin[kc*Y[]], -I[]*beta[]/kc*Cos[kc*Y[]], 0 ] * myExp[] ; // TM
    EndIf
    If (WAVENUMBER < kc) // evanescent
      eRef[] = Vector[ Sin[kc*Y[]], -I[]*beta[]/kc*Cos[kc*Y[]], 0 ] * Exp[-I[]*beta[]*X[]] ;
    EndIf
  EndIf
  If (TE)
    kInf[] = (k[]^2)/beta[];
    kDtN[] = kInf[] ;
    If (WAVENUMBER >= kc) // propagative
      eRef[] = Vector[ Cos[kc*Y[]], I[]*beta[]/kc*Sin[kc*Y[]], 0 ] * myExp[] ; // TE -- !! here e is the magnetic field !!
    EndIf
    If (WAVENUMBER < kc) // evanescent
      eRef[] = Vector[ Cos[kc*Y[]], I[]*beta[]/kc*Sin[kc*Y[]], 0 ] * Exp[-I[]*beta[]*X[]] ; // TE -- !! here e is the magnetic field !!      
    EndIf
  EndIf
  If (TEM)
    eRef[] = Vector[0, 1, 0 ] * myExp[] ; // TEM
  EndIf

  // sources as impedance conditions
  If (TM)
    // gIn[] = Vector[ 0, -2.*(beta[]^2+kc^2)/kc*Cos[kc*Y[]], 0 ] * myExp[] ;
    gIn[] = Vector[ 0, -2.*I[]*(k[]^2)/kc*Cos[kc*Y[]], 0 ] ;//* myExp[] ;
  EndIf
  If (TE)
    gIn[] = Vector[ 0, 2.*(beta[]^2+kc^2)/kc*Sin[kc*Y[]], 0 ] * myExp[] ;
  EndIf

  gOut[] = Vector[ 0, 0, 0 ] ;
}

Include "groups_waveguide2d.pro";

Function{
  //Parallel
  ListOfField = {}; //My fields
  ListOfNeighborField = {}; //My neighbors
  ListOfDom = {} ;
  For idom In {0:N_DOM-1}
    If(idom ==0)
      myFieldLeft = {};
      myFieldRight = {0};
      exchangeFieldLeft = {};
      exchangeFieldRight = {1};
      n_neighb = 1;
    EndIf
    If(idom == N_DOM-1)
      myFieldLeft = {2*idom-1};
      myFieldRight = {};
      exchangeFieldLeft = {2*(idom-1)};
      exchangeFieldRight = {};
      n_neighb = 1;
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      myFieldLeft = {2*idom-1};
      myFieldRight = {2*idom};
      exchangeFieldLeft = {2*(idom-1)};
      exchangeFieldRight = {2*idom+1};
      n_neighb = 2;
    EndIf

    If (idom % MPI_Size == MPI_Rank)
      ListOfDom += {idom};
      ListOfField += {myFieldLeft{}, myFieldRight{}};
      //who are my neighbor ?
      ListOfNeighborField += n_neighb;
      ListOfNeighborField += exchangeFieldRight{};
      ListOfNeighborField += exchangeFieldLeft{};
      g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexVectorField[XYZ[]]{exchangeFieldLeft{}};
      g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexVectorField[XYZ[]]{exchangeFieldRight{}};

    EndIf
  EndFor
}

Include "../main/Maxwell.pro" ;
