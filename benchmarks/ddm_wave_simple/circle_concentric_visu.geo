Include "circle_concentric_data.geo";

If(ANALYSIS == 0)
  name = "u";
EndIf
If(ANALYSIS == 1)
  name = "e";
EndIf

For idom In {0:N_DOM-1}
  Merge StrCat(DIR, StrCat(name, Sprintf("_%g.pos", idom)));
EndFor
Combine ElementsFromVisibleViews;

General.Trackball = 0;
General.RotationX = 0 ;
General.RotationY = 0 ;
General.RotationZ = 0 ;
