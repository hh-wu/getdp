//========================================================
// Benchmark "Academic eigenvalues problems"
// File: GMSH geometry (choice of the cavity)
//========================================================

Include "eigenvalues.dat" ;

If (FLAG_GEOM==1)
  Include "geomLine.geo";
EndIf
If (FLAG_GEOM==2)
  Include "geomSquare.geo";
EndIf
If (FLAG_GEOM==3)
  Include "geomCuboid.geo";
EndIf
