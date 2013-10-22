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

If(Flag_Model==2)
  Include "cavity2d.geo";
EndIf
If(Flag_Model==3)
  Include "cavity3d.geo";
EndIf
