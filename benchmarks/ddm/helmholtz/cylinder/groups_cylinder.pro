Problem = Str["cylinder"];
// Dir= StrCat["../",StrCat[Problem,"/"]];
// MshName=StrCat[Dir,"zeppelin_mshcut"];
MshName="cylinder_mshcut";

Group{
  //FULL
  Sigma = Region[ {} ]; 
  Gamma3 = Region[ {} ]; 
  BndGamma1 = Region[{}];
  // Omega = Region[(4001:4001+N_DOM-1)];
  // GammaD = Region[(1001:1001+N_DOM-1)];
  // GammaInf = Region[(2001:2001+N_DOM-1)];
  Omega = Region[(4)];
  GammaD = Region[(1)];
  GammaD0 = Region[{}];
  GammaInf = Region[(2)];
  BndGammaInf = Region[{}];
  BndSigma = Region[{}];

  //DDM
  // GammaC = Region[{}];
  // GammaTang = Region[{}];
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(4001 + idom)];
    GammaD~{idom} = Region[(1001 + idom)];	
    GammaN~{idom} = Region[{}];
    GammaD0~{idom} = Region[{}];
    GammaInf~{idom} = Region[(2001 + idom)];

    BndGammaInf~{idom} = Region[{}];
    BndSigma~{idom} = Region[{}];
    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[((4+idom)*1000)];
      BndSigma~{idom}~{0} += Region[{}];
      BndSigma~{idom}~{1} += Region[((4+idom)*10000)];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[((3+idom)*1000)];
      Sigma~{idom}~{1} = Region[{}];
      BndSigma~{idom}~{0} += Region[((3+idom)*10000)];
      BndSigma~{idom}~{1} += Region[{}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{((3+idom)*1000)}];
      Sigma~{idom}~{1} = Region[{((4+idom)*1000)}];
      BndSigma~{idom}~{0} += Region[((3+idom)*10000)];
      BndSigma~{idom}~{1} += Region[((4+idom)*10000)];
    EndIf
    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0}, BndSigma~{idom}~{1}}] ;
  EndFor
}
