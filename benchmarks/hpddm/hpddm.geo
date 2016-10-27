Include "hpddm_data.geo";

lc = 0.05;
Point(1) = {0.0,0.0,0.0,lc};
Point(2) = {1,0.0,0.0,lc};
Point(3) = {1,1,0.0,lc};
Point(4) = {0,1,0.0,lc};
Point(5) = {0.25,0.25, (DIM > 2) ? 0.25 : 0,lc};
Line(1) = {4,3};
Line(2) = {3,2};
Line(3) = {2,1};
Line(4) = {1,4};
Line Loop(5) = {2,3,4,1};
Plane Surface(6) = {5};

If(DIM > 2)
  tmp[] = Extrude {0,0.0,1} {
    Surface{6};
  };
  Point{5} In Volume{tmp[1]};
  Physical Volume(1) = tmp[1];
Else
  Point{5} In Surface{6};
  Physical Surface(1) = 6;
EndIf

Physical Point(2) = 5;

Mesh 3;
If(N > 1)
  Mesh.MshFilePartitioned = 2;
  PartitionMesh 2;
EndIf
Save "hpddm.msh";
