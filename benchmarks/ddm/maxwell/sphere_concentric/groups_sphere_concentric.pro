Problem = Str["sphere_concentric"];
Dir= StrCat["../",StrCat[Problem,"/"]];
// MshName = StrCat[Dir,Problem];
MshName = StrCat[StrCat[Dir,Problem], "_mshcut"];

Group{
  //FULL
  Sigma = Region[ {} ];
  GammaScat = Region[{1}];
  GammaInf = Region[{2}];
  BndGammaInf = Region[{}];
  Omega = Region[ (6) ];
  GammaC = Region[{}];

  //DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[( 6001 + idom )];
    BndGammaInf~{idom} = Region[{}];
    BndGammaScat~{idom} = Region[{}];

    If(idom == 0)
      GammaScat~{idom} = Region[{1001}];
      GammaInf~{idom} = Region[{}];
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{5000}];
    EndIf
    If(idom == N_DOM-1)
      GammaScat~{idom} = Region[{}];
      GammaInf~{idom} = Region[{(2000+N_DOM)}];
      Sigma~{idom}~{0} = Region[{(1000*(4+idom))}];
      Sigma~{idom}~{1} = Region[{}];
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      GammaScat~{idom} = Region[{}];
      GammaInf~{idom} = Region[{}];
    Sigma~{idom}~{0} = Region[{(1000*(4+idom))}];
    Sigma~{idom}~{1} = Region[{(1000*(5+idom))}];
    EndIf
    
    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];

  EndFor
}
