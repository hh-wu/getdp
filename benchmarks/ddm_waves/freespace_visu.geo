Include "freespace_data.geo";

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
General.RotationX = -45 ;
General.RotationY = 0 ;
General.RotationZ = 15 ;

View[0].NormalRaise += View[0].Max*D ; // helpful to detect discontinuities
