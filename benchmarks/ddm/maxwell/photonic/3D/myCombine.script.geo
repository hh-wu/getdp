Include "params.geo" ;

For idom In {0:N_DOM-1}
  Merge Sprintf("e_vol_%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;

View[0].Name = "u_DDM";
Save View[0] Sprintf("e_DDM_merged.pos");
