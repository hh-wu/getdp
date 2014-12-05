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

  c[] = 1.; // FIXME
  om[] = k[];
}

Include "../main/ddmDefines.pro"; // default values
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

If (!PML)
Include "groups_waveguide2d.pro";
EndIf
If (PML)
Include "groups_waveguide2d_PML.pro";
EndIf

If (PML)
xSigmaList = {};
thetaList = {};
For i In {0:nDoms}
  xSigmaList += i*dDom;
  thetaList += 0;
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

If (PML)
Include "pmlFunctions.pro";
EndIf


If (PRECOND_SWEEP)
  // Hack to build a 'list of lists': generate variables with 'indexed names'
  nCuts = 0;
  For iCut In {0:#ListOfCuts()-2}
    nProcsInCut~{iCut} = 0;
  EndFor
  For iCut In {0:#ListOfCuts()-2}
    For iDom In {ListOfCuts(iCut):ListOfCuts(iCut+1):1}
      ListOfProcsInCut~{iCut}~{nProcsInCut~{iCut}} = iDom;
      nProcsInCut~{iCut} += 1;
    EndFor
    nCuts += 1;
  EndFor

  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf


Include "../main/Maxwell.pro" ;
