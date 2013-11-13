Problem = Str["waveguide2d"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MeshName = StrCat[Dir,Problem];

Group{
  //FULL
  Omega = Region[ (6) ];
  GammaScat = Region[{1,3,4}];
  GammaInf = Region[{2}];
  Sigma = Region[ {} ];
  Gamma3 = Region[ {} ]; 
  BndGammaInf = Region[{}];
  //DDM
  GammaC = Region[{}];
  GammaTang = Region[{}];
  myList = {};
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[( 6000 + idom + 1 )];
    If (TEM)
      GammaScat~{idom} = Region[{(4000 + idom + 1)}];
      GammaC += Region[{(1000 + idom + 1), (3000 + idom + 1)}];
    EndIf
    If (TM)
      GammaScat~{idom} = Region[{(4000 + idom + 1)}];
      GammaC += Region[{(1000 + idom + 1), (3000 + idom + 1)}];
    EndIf
    If (TE)
      GammaScat~{idom} = Region[{(4000 + idom + 1)}];
    EndIf

    If (idom == 0)
      GammaInf~{idom} = Region[{}];
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{}];
      GammaInf~{idom} = Region[{(2000 + idom +1)}];
    EndIf
    If (idom >=1 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
      GammaInf~{idom} = Region[{}];
    EndIf

    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;

    BndGammaInf~{idom} = Region[{}];
    BndSigma~{idom} = Region[{}];
  EndFor
}
