Include "inductor_data.geo";

If(Flag_3Dmodel==0)
  Include "inductor2d.geo";
EndIf
If(Flag_3Dmodel==1)
  Include "inductor3d.geo";
EndIf
