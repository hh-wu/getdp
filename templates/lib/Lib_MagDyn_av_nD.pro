
DefineConstant[ type_Dimension = 2 ];

If (type_Dimension <= 2)
  Include "Lib_MagDyn_av.pro";
ElseIf (type_Dimension == 3)
  Include "Lib_MagDyn_av_3D.pro";
EndIf
