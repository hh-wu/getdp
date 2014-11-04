Include "params.geo";
Include "params_part2.geo";

If (SPLIT_V)
If (!PML)
  Include "marmousi_splitV.geo";
EndIf
If (PML)
  Include "marmousi_splitV_PML.geo";
EndIf
EndIf
If (SPLIT_H)
If (PML)
  Include "marmousi_splitH.geo";
EndIf
If (PML)
  Printf("PML mesh not implemented for splitH");
EndIf
EndIf
