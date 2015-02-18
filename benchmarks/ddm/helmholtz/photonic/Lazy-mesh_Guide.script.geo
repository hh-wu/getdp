Include "params.pro";
Include "params.geo";

If (DIM == 2)
  Include "geo/guide-2D_start.script.geo";
  Delete Model ; Delete Physicals ;
  Include "geo/guide-2D_empty.script.geo";
  Delete Model ; Delete Physicals ;
  Include "geo/guide-2D_slice.script.geo";
  Delete Model ; Delete Physicals ;
  Include "geo/guide-2D_end.script.geo";
  Delete Model ; Delete Physicals ;
EndIf

If (DIM == 3)
  Include "geo/guide-3D_start.script.geo";
  Delete Model ; Delete Physicals ;
  Include "geo/guide-3D_empty.script.geo";
  Delete Model ; Delete Physicals ;
  Include "geo/guide-3D_slice.script.geo";
  Delete Model ; Delete Physicals ;
  Include "geo/guide-3D_end.script.geo";
  Delete Model ; Delete Physicals ;
EndIf

Include "Guide_DDM.script.geo";
