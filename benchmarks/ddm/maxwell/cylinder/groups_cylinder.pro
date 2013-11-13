Problem = Str["cylinder"];
Dir= StrCat["../",StrCat[Problem,"/"]];
// MshName = StrCat[Dir,Problem];
MshName = StrCat[StrCat[Dir,Problem], "_mshcut"];

Group{
  //FULL
  Sigma = Region[ {} ];
  GammaScat = Region[{1}];
  GammaInf = Region[{2}];
  BndGammaInf = Region[{}];
  Omega = Region[ (4) ];
  GammaC = Region[{}];

  //DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[( 4001 + idom )];
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
