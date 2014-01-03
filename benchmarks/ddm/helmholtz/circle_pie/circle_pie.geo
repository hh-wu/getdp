Include "params.geo";

If (N_DOM==2)
  Include "circle_pie2.geo";
EndIf

// Principle: repeatedly extrude a line to create the circle segments
Point(1) = {0, 0, 0};
Point(2) = {0, R_INT, 0, lc};
Point(3) = {0, R_EXT, 0, LC};
Line(1) = {2, 3};

sigmaList[] = {1};
scatList[] = {};
inftyList[] = {};
omegaList[] = {};
For i In{0:N_DOM-1}
  extList[] = Extrude{{0,0,1}, {0,0,0}, -2*Pi/N_DOM}{Line{sigmaList[i]};};
  sigmaList[] += {extList[0]};
  omegaList[] += {extList[1]};
  inftyList[] += {extList[2]};
  scatList[]+= {extList[3]};
EndFor

Mesh.Optimize = 1;
Mesh 2;

Physical Surface(6) = omegaList[];
Physical Line(1) = scatList[];
Physical Line(2) = inftyList[];
Save "circle_pie.msh"; // Full mesh

For i In {0:N_DOM-1}
  Delete Physicals;
  lIdx = 4+i; rIdx = 5+i;
  If (i == N_DOM-1)
    rIdx = 4; // physical tags for the boundary between first and last domains must match
  EndIf

  Physical Surface(6001+i) = omegaList[i];
  Physical Line(1001+i) = scatList[i];
  Physical Line(2001+i) = inftyList[i];
  Physical Line(((lIdx)*1000)) = sigmaList[i];
  Physical Line(-((rIdx)*1000)) = sigmaList[i+1]; // reverse this line
  Physical Point(((lIdx)*10000+1)) = Boundary{Line{sigmaList[i]};};
  Physical Point(((rIdx)*10000+1)) = Boundary{Line{sigmaList[i+1]};};
Save Sprintf("circle_pie%g.msh", i); // Split meshes
EndFor
