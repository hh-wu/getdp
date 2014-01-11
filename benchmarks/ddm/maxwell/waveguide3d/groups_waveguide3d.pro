Problem = Str["waveguide3d"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MeshName = StrCat[Dir,Problem];

Group{
  //FULL
  Omega = Region[ (6) ];
  GammaScat = Region[{1}];
  GammaInf = Region[{2}];
  Sigma = Region[ {} ];
  GammaC = Region[ {} ]; // Conducting region -- 0 tangential component
  GammaTang = Region[{}]; // GammaTang is the part of the boundary with natural boundary condition (=> does not appear in the formulation if homogeneous)
  If (TM)
    GammaC += Region[ {3} ];
    // GammaTang += Region[ {40} ];
  EndIf

  If (TE)
    // GammaC += Region[ {40} ];
    GammaTang += Region[ {40} ];
  EndIf

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
    If (TM)
	GammaC~{idom} = Region[{(3000 + idom + 1)}];
    EndIf
    If (TE)
      GammaScat~{idom} = Region[{(3000 + idom + 1)}];
      // GammaTang += Region[{(4000 + idom + 1)}];
    EndIf

    If (idom == 0)
      If(SOURCE_ON_LEFT)
        GammaInf~{idom} = Region[{}];
        GammaScat~{idom} = Region[{(1000 + idom + 1)}];
      EndIf
      If(!SOURCE_ON_LEFT)
	GammaInf~{idom} = Region[{(1000 + idom + 1)}];
        GammaScat~{idom} = Region[{}];
      EndIf
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{}];
      If(SOURCE_ON_LEFT)
        GammaInf~{idom} = Region[{(2000 + idom +1)}];
        GammaScat~{idom} = Region[{}];
      EndIf
      If(!SOURCE_ON_LEFT)
	GammaInf~{idom} = Region[{}];
        GammaScat~{idom} = Region[{(2000 + idom + 1)}];
      EndIf
    EndIf
    If (idom >=1 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
      GammaInf~{idom} = Region[{}];
      GammaScat~{idom} = Region[{}];
    EndIf

    // If (!PRECOND_SWEEP)
      Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;
    // EndIf

    BndGammaInf~{idom} = Region[{}];
    BndSigma~{idom} = Region[{}];
  EndFor
}
