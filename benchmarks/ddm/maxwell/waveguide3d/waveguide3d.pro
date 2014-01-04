Include "params.geo";

eps0 = 8.854e-12;
mu0 = 4*Pi*1e-7;
Z0 = 1;//Sqrt[mu0/eps0];
c = 1/Sqrt[mu0*eps0];

k = WAVENUMBER ;

SOURCE_DIRICHLET = 1 ; // If false, sources are imposed as impedance conditions
SOURCE_ON_LEFT = 1 ;

Function {
  I[] = Complex[0, 1] ;
  N[] = Normal[] ;
  k[] = k ;
  kepsI = 0;//Complex[ k, 0.4 * k^(1/3) * kappa[]^(-2/3) ];
  omega[] = c*k[] ;
}

Include "../main/tcDefaults.pro"; // default parameters for the transmission conditions

Function{
  mu[] = mu0 ;
  hinc[] = 0 ;

  ky = m*Pi/dy ;
  kz = n*Pi/dz ;

  kc = Sqrt[ky^2+kz^2] ;
  beta[] = ( -kc^2 + k[]^2 >=0 ? Sqrt[-kc^2 + k[]^2] : -I[]*Sqrt[kc^2 - k[]^2] ) ;

  If (TM)
    einc[] = Vector[ Sin[ky*Y[]]*Sin[kz*Z[]], I[]*beta[]*ky/kc^2*Cos[ky*Y[]]*Sin[kz*Z[]], I[]*beta[]*kz/kc^2*Cos[kz*Z[]]*Sin[ky*Y[]] ]; // TM
  EndIf
  If (TE)
    einc[] = Vector[ Cos[ky*Y[]]*Cos[kz*Z[]], I[]*beta[]*ky/kc^2*Sin[ky*Y[]]*Cos[kz*Z[]], I[]*beta[]*kz/kc^2*Sin[kz*Z[]]*Cos[ky*Y[] ] ] ; // TE -- !! here e is the magnetic field !!
  EndIf

  myExp[] = Complex[Cos[beta[]*X[]], -Sin[beta[]*X[]]] ; // Replaces Exp[-I[]*beta*X[]], because getdp does not support complex exponentials
  If (TM)
    kDtN[] = (k[]^2)/beta[] ; // used in S-M transmission condition (NOT for domain truncation)
    kInf[] = (k[]^2)/beta[] ;
    If (WAVENUMBER >= kc) // propagative
      eRef[] = Vector[ Sin[kc*Y[]], -I[]*beta[]/kc*Cos[kc*Y[]], 0 ] * myExp[] ; // TM
    EndIf
    If (WAVENUMBER < kc) // evanescent
      eRef[] = Vector[ Sin[kc*Y[]], -I[]*beta[]/kc*Cos[kc*Y[]], 0 ] * Exp[-I[]*beta[]*X[]] ;
    EndIf
  EndIf
  If (TE)
      kDtN[] = k[];//(k[]^2)/beta[] ;
    kInf[] = (k[]^2)/beta[] ;
    If (WAVENUMBER >= kc) // propagative
      eRef[] = Vector[ Cos[ky*Y[]]*Cos[kz*Z[]], I[]*beta[]*ky/kc^2*Sin[ky*Y[]]*Cos[kz*Z[]], I[]*beta[]*kz/kc^2*Sin[kz*Z[]]*Cos[ky*Y[] ] ] * myExp[] ; // TE -- !! here e is the magnetic field !!
    EndIf
    If (WAVENUMBER < kc) // evanescent
      eRef[] = Vector[ Cos[ky*Y[]]*Cos[kz*Z[]], I[]*beta[]*ky/kc^2*Sin[ky*Y[]]*Cos[kz*Z[]], I[]*beta[]*kz/kc^2*Sin[kz*Z[]]*Cos[ky*Y[] ] ] * Exp[-I[]*beta[]*X[]] ; // TE -- !! here e is the magnetic field !!      
    EndIf
  EndIf

  // sources as impedance conditions
  If (TM)
    gIn[] = Vector[ 0, -2.*(beta[]^2+kc^2)/kc*Cos[kc*Y[]], 0 ] * myExp[] ;
  EndIf
  // If (TE)
  //   gIn[] = Vector[ 0, 2.*(beta[]^2+kc^2)/kc*Sin[kc*Y[]], 0 ] * myExp[] ;
  // EndIf

  gOut[] = Vector[ 0, 0, 0 ] ;
}


Include "groups_waveguide3d.pro";

// Function{
//   //Parallel
//   ListOfField = {}; //My fields
//   ListOfNeighborField = {}; //My neighbors
//   ListOfDom = {} ;
//   For idom In {0:N_DOM-1}
//     If(idom ==0)
//       myFieldLeft = {};
//     hasNeighbLeft = 0;
//       myFieldRight = {0};
//     hasNeighbRight = 1;
//       exchangeFieldLeft = {};
//       exchangeFieldRight = {1};
//       n_neighb = 1;
//     EndIf
//     If(idom == N_DOM-1)
//       myFieldLeft = {2*idom-1};
//     hasNeighbLeft = 1;
//       myFieldRight = {};
//     hasNeighbRight = 0;
//       exchangeFieldLeft = {2*(idom-1)};
//       exchangeFieldRight = {};
//       n_neighb = 1;
//     EndIf
//     If(idom > 0 && idom < N_DOM-1)
//       myFieldLeft = {2*idom-1};
//     hasNeighbLeft = 1;
//       myFieldRight = {2*idom};
//     hasNeighbRight = 1;
//       exchangeFieldLeft = {2*(idom-1)};
//       exchangeFieldRight = {2*idom+1};
//       n_neighb = 2;
//     EndIf

//     If (idom % MPI_Size == MPI_Rank) // FIXME: This way of dispatching the domains is not necessarily optimal for the double sweep strategy !?
//       ListOfDom += {idom};
//       ListOfField += {myFieldLeft{}, myFieldRight{}};
//       //who are my neighbor ?
//       // // ListOfNeighborField += n_neighb;
//       // // ListOfNeighborField += exchangeFieldLeft{};
//       // // ListOfNeighborField += exchangeFieldRight{};

//       // If(hasNeighbLeft) // FIXME: replace this by evaluating the list size
//         ListOfNeighborField += 1;
//         ListOfNeighborField += exchangeFieldLeft{};
//       // EndIf

//       // If(hasNeighbRight)
//         ListOfNeighborField += 1;
//         ListOfNeighborField += exchangeFieldRight{};
//       // EndIf

//       g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexVectorField[XYZ[]]{exchangeFieldLeft{}};
//       g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexVectorField[XYZ[]]{exchangeFieldRight{}};

//     EndIf




//   EndFor

//       // For i In {0:N_DOM-2}
//       // // attempt to define exchange fields for the double sweep
//       // commonFieldForward = {3*N_DOM+i+1};
//       // commonFieldBackward = {4*N_DOM+i};

//       // g_common~{i}~{0}[Sigma~{i+1}~{0}] = ComplexVectorField[XYZ[]]{commonFieldForward};
//       // g_common~{i}~{1}[Sigma~{i}~{1}] = ComplexVectorField[XYZ[]]{commonFieldBackward};

//       // EndFor
// }

Include "../main/topology/inline.pro";
Include "../main/Maxwell.pro" ;
