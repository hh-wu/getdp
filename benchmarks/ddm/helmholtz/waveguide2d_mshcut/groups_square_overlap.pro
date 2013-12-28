Problem = Str["square"];
Dir = "../square_overlap/";
MshName=StrCat[Dir,Problem];

Group{
//FULL
  Sigma = Region[ {} ]; 
  Omega = Region[{6}];
  // GammaD = Region[{1}];
  // GammaN = Region[{2}];
  GammaD = Region[{1,2}];
  GammaN = Region[{}];
  BndSigma = Region[{}];

//DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(6001 + idom)];
    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];
    BndSigma~{idom} = Region[{}];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      SigmaIn~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[(5000 + 1000*idom)];
      SigmaIn~{idom}~{1} = Region[(5100 + 1000*idom)];
      // GammaN~{idom} = Region[{2001}];
      // GammaD~{idom} = Region[{1001}];
      GammaN~{idom} = Region[{}];
      GammaD~{idom} = Region[{1001, 2001}];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[(5000 + 1000*(idom-1))];
      SigmaIn~{idom}~{0} = Region[(5100 + 1000*(idom-1))];
      Sigma~{idom}~{1} = Region[{}];
      SigmaIn~{idom}~{1} = Region[{}];
      // GammaN~{idom} = Region[{(2001+idom)}];
      // GammaD~{idom} = Region[{(1001+idom)}];
      GammaN~{idom} = Region[{}];
      GammaD~{idom} = Region[{(1001+idom), (2001+idom)}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(5000 + 1000*(idom-1))}];
      SigmaIn~{idom}~{0} = Region[{(5100 + 1000*(idom-1))}];
      Sigma~{idom}~{1} = Region[{(5000 + 1000*idom)}];
      SigmaIn~{idom}~{1} = Region[{(5100 + 1000*idom)}];
      // GammaN~{idom} = Region[{(2001+idom)}];
      // GammaD~{idom} = Region[{(1001+idom)}];
      GammaN~{idom} = Region[{}];
      GammaD~{idom} = Region[{(1001+idom),(2001+idom)}];
    EndIf
      Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];
      SigmaIn~{idom} = Region[{SigmaIn~{idom}~{0}, SigmaIn~{idom}~{1}}];
  EndFor

}
