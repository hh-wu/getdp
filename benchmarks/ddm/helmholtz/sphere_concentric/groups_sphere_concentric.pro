Problem = Str["sphere_concentric"];
// Dir= StrCat["../",StrCat[Problem,"/"]];
// MshName=StrCat[Dir,"zeppelin_mshcut"];
MshName="sphere_concentric_mshcut";

Group{
  //FULL
  Sigma = Region[ {} ]; 
  Gamma3 = Region[ {} ]; 
  BndGamma1 = Region[{}];
  // Omega = Region[(4001:4001+N_DOM-1)];
  // GammaD = Region[(1001:1001+N_DOM-1)];
  // GammaInf = Region[(2001:2001+N_DOM-1)];
  Omega = Region[(6)];
  GammaD = Region[(1)];
  GammaInf = Region[(2)];
  BndGammaInf = Region[{}];
  BndSigma = Region[{}];

  //DDM
  // GammaC = Region[{}];
  // GammaTang = Region[{}];
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(6001 + idom)];
    GammaD~{idom} = Region[(1001 + idom)];	
    GammaInf~{idom} = Region[(2001 + idom)];
    // GammaSym~{idom} = Region[(3001 + idom)];

    BndGammaInf~{idom} = Region[{}];
    BndSigma~{idom} = Region[{}];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[((5+idom)*1000)];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[((4+idom)*1000)];
      Sigma~{idom}~{1} = Region[{}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{((4+idom)*1000)}];
      Sigma~{idom}~{1} = Region[{((5+idom)*1000)}];
    EndIf
    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;
  EndFor
}
