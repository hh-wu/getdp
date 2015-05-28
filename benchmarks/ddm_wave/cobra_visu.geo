Include "cobra_data.geo";

N_DOM = 0;
For i In {0:PARTS-1}
  N_DOM += nDomList[i];
EndFor

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

If (ANALYSIS == 0)
  View.IntervalsType = 1;
EndIf

General.Trackball = 0;
General.RotationX = 15 ;
General.RotationY = 30 ;
General.RotationZ = 0 ;

General.Clip2C = -1.;
General.Clip2D = d2/2.;
View[0].Clip = 4;
