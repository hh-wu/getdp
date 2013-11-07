Problem = Str["waveguide2d_mshcut"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MshName=StrCat[Dir,Problem];

Group{
//FULL
  Sigma = Region[ {} ]; 
  Gamma_l = Region[ {4001} ];
  Gamma_r = Region[ (2000+N_DOM) ]; 
  Gamma_D = Region[ {(1001:1000+N_DOM),(3001:3000+N_DOM)} ]; 
  BndGamma1 = Region[{}];
  Omega = Region[(6001:6000+N_DOM)];
  // GammaScat = Region[{Gamma_l, Gamma_D}];
  // GammaInf = Region[{Gamma_r}];
  GammaScat = Region[{Gamma_D, Gamma_l}];
  GammaInf = Region[{Gamma_r}];
  BndGammaInf = Region[{}];
  BndSigma = Region[{}];

//DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(6001 + idom)];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[(5000 + 1000*idom)];
      GammaScat~{idom} = Region[{(1001 + idom), (3001 + idom), 4001}];
      GammaInf~{idom} = Region[{}];
      // GammaScat~{idom} = Region[{(1001 + idom), (3001 + idom)}];
      // GammaInf~{idom} = Region[{4001}];
      // GammaScat~{idom} = Region[{}];
      // GammaInf~{idom} = Region[{4001, (1001 + idom), (3001 + idom)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[(5000 + 1000*(idom-1))];
      Sigma~{idom}~{1} = Region[{}];
      GammaScat~{idom} = Region[{(1001 + idom), (3001 + idom)}];
      GammaInf~{idom} = Region[{(2001+idom)}];
      // GammaScat~{idom} = Region[{}];
      // GammaInf~{idom} = Region[{(2001+idom), (1001 + idom), (3001 + idom)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(5000 + 1000*(idom-1))}];
      Sigma~{idom}~{1} = Region[{(5000 + 1000*idom)}];
      GammaScat~{idom} = Region[{(1001 + idom), (3001 + idom)}];
      GammaInf~{idom} = Region[{}];
      // GammaScat~{idom} = Region[{}];
      // GammaInf~{idom} = Region[{(1001 + idom), (3001 + idom)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
      Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];
  EndFor

}
