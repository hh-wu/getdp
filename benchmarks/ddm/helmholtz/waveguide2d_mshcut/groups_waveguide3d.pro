Problem = Str["waveguide3d"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MeshName = StrCat[Dir,Problem];

Group{
  //FULL
  Omega = Region[ {6} ];
  GammaD = Region[{1}];
  GammaInf = Region[{2}];
  Sigma = Region[ {} ];
  GammaD0 = Region[ {3} ]; // Conducting region -- 0 tangential component
  GammaTang = Region[{}]; // GammaTang is the part of the boundary with natural boundary condition (=> does not appear in the formulation if homogeneous)

  BndGammaInf = Region[{}];
  //DDM
  // GammaC = Region[{}];
  // myList = {};
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[( 6000 + idom + 1 )];
    // If (TEM) // TEM mode does not exist in rectangular waveguide
    //   GammaScat~{idom} = Region[{(11000 + idom + 1)}];
    //   GammaC += Region[{(40000 + idom + 1)}];
    // EndIf

    GammaD0~{idom} = Region[{(3001+idom)}];

    If (idom == 0)
      GammaD~{idom} = Region[{1001}];
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{}];
      GammaInf~{idom} = Region[{(2000 + idom +1)}];
      GammaD~{idom} = Region[{}];
    EndIf
    If (idom >=1 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
      GammaInf~{idom} = Region[{}];
      GammaD~{idom} = Region[{}];
    EndIf

    // If (!PRECOND_SWEEP)
      Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;
    // EndIf

    BndGammaInf~{idom} = Region[{}];
    BndSigma~{idom} = Region[{}];
  EndFor
}
