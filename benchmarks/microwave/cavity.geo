Include "cavity_data.geo";

If(Flag_SizeMeshCell==0)
  lc = lcValue;
EndIf
If(Flag_SizeMeshCell==1)
  lc = lambda/lambdaOnlc;
  If(lc>lcMax)
    lc = lcMax;
  EndIf
EndIf

If(Flag_Geometry==0)
  Include "cavity2d.geo";
EndIf
If(Flag_Geometry==1)
  Include "cavity2dwall.geo";
EndIf
If(Flag_Geometry==2)
  Include "cavity3d.geo";
EndIf
