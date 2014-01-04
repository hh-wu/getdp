Problem = Str["cobra"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MshName=StrCat[Dir,Problem];

Group{
//FULL
  // Sigma = Region[ {} ]; 
  Gamma_l = Region[ {1000} ];
  Gamma_r = Region[ (2000) ]; 
  Gamma_D = Region[ {} ]; 
  Omega = Region[(6000)];
  GammaScat = Region[{Gamma_r, Gamma_D}];
  // GammaC = Region[ {3000, Gamma_l} ]; 
  GammaC = Region[ {3000} ]; 
  GammaInf = Region[ {Gamma_l} ]; 

//DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(6001 + idom)];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[(5000 + 1000*idom)];
      // GammaC~{idom} = Region[{(3001 + idom), (1001+idom)}];
      GammaC~{idom} = Region[{(3001 + idom)}];
      GammaInf~{idom} = Region[{(1001+idom)}];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[(5000 + 1000*(idom-1))];
      Sigma~{idom}~{1} = Region[{}];
      GammaScat~{idom} = Region[{(2001+idom)}];
      GammaC~{idom} = Region[{(3001 + idom)}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(5000 + 1000*(idom-1))}];
      Sigma~{idom}~{1} = Region[{(5000 + 1000*idom)}];
      GammaScat~{idom} = Region[{}];
      GammaC~{idom} = Region[{(3001 + idom)}];
    EndIf
    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];
  EndFor
}
