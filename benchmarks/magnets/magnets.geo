// include parameters common to geometry and solver
Include "magnets_data.pro";

// define geometry-specific parameters
DefineConstant[
  lc1 = {TotalMemory <= 2048 ? 10*mm : 5*mm, Name "Parameters/2Mesh size on magnets [m]"}
  lc2 = {TotalMemory <= 2048 ? 40*mm : 20*mm, Name "Parameters/2Mesh size at infinity [m]"}
  inf = {100*mm, Name "Parameters/1Air box distance [m]"}
];

// change global Gmsh options
Mesh.Optimize = 1; // optimize quality of tetrahedra
Mesh.VolumeEdges = 0; // hide volume edges
Geometry.ExactExtrusion = 0; // to allow rotation of extruded shapes
Solver.AutoMesh = 2; // always remesh if necessary (don't reuse mesh on disk)

// create magnets
For i In {1:NumMagnets}
  If(M~{i} == 0) // cylinder
    p1 = newp; Point(p1) = {X~{i}, Y~{i}-L~{i}/2, Z~{i}, lc1};
    p2 = newp; Point(p2) = {X~{i}+R~{i}, Y~{i}-L~{i}/2, Z~{i}, lc1};
    p3 = newp; Point(p3) = {X~{i}, Y~{i}+L~{i}/2, Z~{i}, lc1};
    p4 = newp; Point(p4) = {X~{i}+R~{i}, Y~{i}+L~{i}/2, Z~{i}, lc1};
    l1 = newl; Line(l1) = {p1,p2}; l2 = newl; Line(l2) = {p2,p4};
    l3 = newl; Line(l3) = {p4,p3}; l4 = newl; Line(l4) = {p3,p1};
    ll1 = newll; Line Loop(ll1) = {l1,l2,l3,l4};
    s1 = news; Plane Surface(s1) = {ll1};
    e1[] = Extrude {{0, 1, 0}, {X~{i}, Y~{i}, Z~{i}}, Pi/2} { Surface{s1}; };
    e2[] = Extrude {{0, 1, 0}, {X~{i}, Y~{i}, Z~{i}}, Pi/2} { Surface{e1[0]}; };
    e3[] = Extrude {{0, 1, 0}, {X~{i}, Y~{i}, Z~{i}}, Pi/2} { Surface{e2[0]}; };
    e4[] = Extrude {{0, 1, 0}, {X~{i}, Y~{i}, Z~{i}}, Pi/2} { Surface{e3[0]}; };
    Magnet~{i}[] = {e1[1], e2[1], e3[1], e4[1]};
  EndIf
  If(M~{i} == 1) // parallelepiped
    p1 = newp; Point(p1) = {X~{i}-Lx~{i}/2, Y~{i}-Ly~{i}/2, Z~{i}-Lz~{i}/2, lc1};
    p2 = newp; Point(p2) = {X~{i}+Lx~{i}/2, Y~{i}-Ly~{i}/2, Z~{i}-Lz~{i}/2, lc1};
    p3 = newp; Point(p3) = {X~{i}+Lx~{i}/2, Y~{i}+Ly~{i}/2, Z~{i}-Lz~{i}/2, lc1};
    p4 = newp; Point(p4) = {X~{i}-Lx~{i}/2, Y~{i}+Ly~{i}/2, Z~{i}-Lz~{i}/2, lc1};
    l1 = newl; Line(l1) = {p1,p2}; l2 = newl; Line(l2) = {p2,p3};
    l3 = newl; Line(l3) = {p3,p4}; l4 = newl; Line(l4) = {p4,p1};
    ll1 = newll; Line Loop(ll1) = {l1,l2,l3,l4};
    s1 = news; Plane Surface(s1) = {ll1};
    e1[] = Extrude {0, 0, Lz~{i}} { Surface{s1}; };
    Magnet~{i}[] = {e1[1]};
  EndIf
  Rotate { {0,0,1}, {X~{i},Y~{i},Z~{i}}, Rz~{i} } { Volume{Magnet~{i}[]}; }
  Rotate { {0,1,0}, {X~{i},Y~{i},Z~{i}}, Ry~{i} } { Volume{Magnet~{i}[]}; }
  Rotate { {1,0,0}, {X~{i},Y~{i},Z~{i}}, Rx~{i} } { Volume{Magnet~{i}[]}; }

  Physical Volume(i) = Magnet~{i}[]; // magnet volume
  skin~{i}[] = CombinedBoundary{ Volume{Magnet~{i}[]}; };
  Physical Surface(100+i) = skin~{i}[]; // magnet skin
EndFor

// create air box around magnets
BoundingBox; // recompute model bounding box
cx = (General.MinX + General.MaxX) / 2;
cy = (General.MinY + General.MaxY) / 2;
cz = (General.MinZ + General.MaxZ) / 2;
lx = 2*inf + General.MaxX - General.MinX;
ly = 2*inf + General.MaxY - General.MinZ;
lz = 2*inf + General.MaxZ - General.MinZ;
p1 = newp; Point (p1) = {cx-lx/2, cy-ly/2, cz-lz/2, lc2};
p2 = newp; Point (p2) = {cx+lx/2, cy-ly/2, cz-lz/2, lc2};
l1 = newl; Line(l1) = {p1, p2};
e1[] = Extrude {0, ly, 0} { Line{l1}; };
e2[] = Extrude {0, 0, lz} { Surface{e1[1]}; };
Delete { Volume{e2[1]}; }
ss[] = {e1[1],e2[0],e2[2],e2[3],e2[4],e2[5]};
sl1 = newsl; Surface Loop(sl1) = {ss[]};
vv[] = {sl1};
For i In {1:NumMagnets}
  sl~{i} = newsl; Surface Loop(sl~{i}) = skin~{i}[];
  vv[] += sl~{i};
EndFor
v1 = newv; Volume(v1) = {vv[]};

Physical Volume(NumMagnets+1) = v1; // air
Physical Surface(NumMagnets+2) = ss[]; // infinity
