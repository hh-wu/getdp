Problem = Str["falcon"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MshName=StrCat[Dir,"falcon_mshcut"];

Group{
  //FULL
  Sigma = Region[ {} ];
  Gamma3 = Region[ {} ];
  BndGamma1 = Region[{}];
  // Omega = Region[(4001:4001+N_DOM-1)];
  // GammaScat = Region[(1001:1001+N_DOM-1)];
  // GammaInf = Region[(2001:2001+N_DOM-1)];
  Omega = Region[(4)];
  GammaScat = Region[(1)];
  GammaInf = Region[(2)];
  BndGammaInf = Region[{}];
  BndSigma = Region[{}];
  GammaC = Region[{}];

  //DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[( 4001 + idom )];
    GammaC~{idom} = Region[{}];
    BndGammaInf~{idom} = Region[{}];
    BndGammaScat~{idom} = Region[{}];

    If(idom == 0)
      GammaScat~{idom} = Region[{1001}];
      GammaInf~{idom} = Region[{(2001+idom)}];
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{4000}];
    EndIf
    If(idom == N_DOM-1)
      GammaScat~{idom} = Region[{(1001+idom)}];
      GammaInf~{idom} = Region[{(2000+N_DOM)}];
      Sigma~{idom}~{0} = Region[{(1000*(3+idom))}];
      Sigma~{idom}~{1} = Region[{}];
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      GammaScat~{idom} = Region[{(1001+idom)}];
      GammaInf~{idom} = Region[{(2001+idom)}];
      Sigma~{idom}~{0} = Region[{(1000*(3+idom))}];
      Sigma~{idom}~{1} = Region[{(1000*(4+idom))}];
    EndIf

    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];

  EndFor
}
