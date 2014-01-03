Problem = Str["circle_pie"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MshName = StrCat[Dir,Problem];

Group{
  //FULL (useless but avoid error)
  Omega = Region[ {6} ];
  GammaD = Region[ 1 ]; 
  GammaN = Region[ {} ]; 
  GammaInf = Region[ 2 ];
  Sigma = Region[ {} ]; 
  BndGammaInf = Region[ {} ];
  
  //DDM
  For idom In {0:N_DOM-1}
    lIdx = 4+idom; rIdx = 5+idom;
    If (idom == N_DOM-1)
      rIdx = 4; // physical tags for the boundary between first and last domains must match
    EndIf

    Omega~{idom} = Region[ (6001 + idom) ];
    GammaInf~{idom} = Region[ (2001 + idom) ];
    GammaD~{idom} = Region[ (1001 + idom) ];
    GammaN~{idom} = Region[ {} ];
    BndGammaInf~{idom} = Region[ {} ];
    Sigma~{idom}~{0} = Region[ ((lIdx)*1000) ];    
    Sigma~{idom}~{1} = Region[ ((rIdx)*1000) ];    
    BndSigma~{idom}~{0} = Region[ ((lIdx)*10000+1) ];
    BndSigma~{idom}~{1} = Region[ ((rIdx)*10000+1) ];

    Sigma~{idom} = Region[ {Sigma~{idom}~{0}, Sigma~{idom}~{1}} ];    
    BndSigma~{idom} = Region[ {BndSigma~{idom}~{0}, BndSigma~{idom}~{1}} ];    
  EndFor

}

