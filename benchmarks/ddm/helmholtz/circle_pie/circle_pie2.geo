// hack for the special case of 2 domains.

// Principle: repeatedly extrude a line to create the circle segments
Point(1) = {0, 0, 0};
Point(2) = {0, R_INT, 0, lc};
Point(3) = {0, R_EXT, 0, LC};
Line(1) = {2, 3};

sigmaList[] = {1};
scatList[] = {};
inftyList[] = {};
omegaList[] = {};
For i In{0:3}
  extList[] = Extrude{{0,0,1}, {0,0,0}, -Pi/2}{Line{sigmaList[i]};};
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

  Physical Surface(6001+i) = omegaList[{2*i:2*i+1}];
  Physical Line(1001+i) = scatList[{2*i:2*i+1}];
  Physical Line(2001+i) = inftyList[{2*i:2*i+1}];
Physical Line(((lIdx)*1000)) = sigmaList[(2*i)];
Physical Line(-((rIdx)*1000)) = sigmaList[(2*(1-i))]; // reverse this line
  Physical Point(((lIdx)*10000+1)) = Boundary{Line{sigmaList[(2*i)]};};
  Physical Point(((rIdx)*10000+1)) = Boundary{Line{sigmaList[(2*(1-i))]};};
Save Sprintf("circle_pie%g.msh", i); // Split meshes
EndFor

Exit;
