Problem = Str["marmousi"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MshName=StrCat[StrCat[Dir,Problem],"_mshcut"];

If(SPLIT_V)
Group{
//FULL
  Sigma = Region[ {} ]; 
  Gamma_l = Region[ {} ];
  Gamma_r = Region[ {} ]; 
  Gamma_D = Region[ {} ]; 
  BndGamma1 = Region[{}];
  Omega = Region[{6}];
  GammaD = Region[{999}];
  GammaN = Region[{3}];
  GammaInf = Region[{1,2,4}];
  BndGammaInf = Region[{}];
  BndSigma = Region[{}];

//DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(6001 + idom)];
    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];

    GammaD~{idom} = Region[{1}];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[(5000 + 1000*idom)];
      // GammaD~{idom} = Region[{}];
      GammaN~{idom} = Region[{(3001 + idom)}];
      GammaInf~{idom} = Region[{(1001 + idom), 4001}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[(5000 + 1000*(idom-1))];
      Sigma~{idom}~{1} = Region[{}];
      // GammaD~{idom} = Region[{}];
      GammaN~{idom} = Region[{(3001 + idom)}];
      GammaInf~{idom} = Region[{(1001 + idom), (2000+N_DOM)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(5000 + 1000*(idom-1))}];
      Sigma~{idom}~{1} = Region[{(5000 + 1000*idom)}];
      // GammaD~{idom} = Region[{}];
      GammaN~{idom} = Region[{(3001 + idom)}];
      GammaInf~{idom} = Region[{(1001 + idom)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
      Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];
  EndFor

}
EndIf

If (SPLIT_H)
Group{
//FULL
  Sigma = Region[ {} ]; 
  Gamma_l = Region[ {} ];
  Gamma_r = Region[ {} ]; 
  Gamma_D = Region[ {} ]; 
  BndGamma1 = Region[{}];
  Omega = Region[{6}];
  GammaD = Region[{999}];
  GammaN = Region[{3}];
  GammaInf = Region[{1,2,4}];
  BndGammaInf = Region[{}];
  BndSigma = Region[{}];

//DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(6001 + idom)];
    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];

    GammaD~{idom} = Region[{1}];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[(5000 + 1000*idom)];
      // GammaD~{idom} = Region[{}];
      GammaN~{idom} = Region[{(4001)}];
      GammaInf~{idom} = Region[{(1001 + idom), (3001 + idom)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[(5000 + 1000*(idom-1))];
      Sigma~{idom}~{1} = Region[{}];
      // GammaD~{idom} = Region[{}];
      GammaN~{idom} = Region[{}];
      GammaInf~{idom} = Region[{(1001 + idom), (3001 + idom), (2001+idom)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(5000 + 1000*(idom-1))}];
      Sigma~{idom}~{1} = Region[{(5000 + 1000*idom)}];
      // GammaD~{idom} = Region[{}];
      GammaN~{idom} = Region[{}];
      GammaInf~{idom} = Region[{(1001 + idom), (3001 + idom)}];
      BndGammaInf~{idom} = Region[{}];
      BndSigma~{idom} = Region[{}];
    EndIf
      Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];
  EndFor

}

EndIf
