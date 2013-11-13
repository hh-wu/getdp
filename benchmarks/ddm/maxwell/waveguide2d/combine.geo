Include "params.geo";

For idom In {0:N_DOM-1}
  Merge Sprintf("e_vol_%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;
