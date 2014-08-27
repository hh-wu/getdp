Include "powerline2d_param.geo";

attractors = {};

Function ligne
  p = newp;
  Point(p+1) = {cx,cy,cz};
  Point(p+2) = {cx+r,cy,cz};
  Point(p+3) = {cx,cy+r,cz};
  Point(p+4) = {cx-r,cy,cz};
  Point(p+5) = {cx,cy-r,cz};
  l = newl;
  Circle(l+1) = {p+2, p+1, p+3};
  Circle(l+2) = {p+3, p+1, p+4};
  Circle(l+3) = {p+4, p+1, p+5};
  Circle(l+4) = {p+5, p+1, p+2};
  ll = newll;
  Line Loop(ll) = {l+1, l+2, l+3, l+4};
  hole[] += ll;
  s = news;
  Plane Surface(s) = {ll};
  Physical Surface(phys) = s;
  phys++;
  attractors += (p+1);
Return

r = 5.e-2;
lc = 3;
ht2 = 0;

Point(1) = {0, ht2, 0, lc};
Point(2) = {rair, ht2, 0, lc};
Point(3) = {0, ht2+rair, 0, lc};
Point(4) = {-rair, ht2, 0, lc};
Point(5) = {0, ht2-rair, 0, lc};
Point(6) = {rair+dair, ht2, 0, lc};
Point(7) = {0, ht2+rair+dair, 0, lc};
Point(8) = {-rair-dair, ht2, 0, lc};
Point(9) = {0, ht2-rair-dair, 0, lc};
Circle(1) = {2, 1, 3};
Circle(2) = {3, 1, 4};
Circle(3) = {4, 1, 5};
Circle(4) = {5, 1, 2};
Circle(5) = {6, 1, 7};
Circle(6) = {7, 1, 8};
Circle(7) = {8, 1, 9};
Circle(8) = {9, 1, 6};
Line Loop(1) = {1,2,3,4};
Line Loop(2) = {5,6,7,8};
Plane Surface(1) = {1, 2};
Physical Surface(101) = 1;

phys = 1;
hole[] = {};
cx = -dx; cy = h; cz = 0; Call ligne;
cx = -dx; cy = h+dy; cz = 0; Call ligne;
cx = -dx; cy = h+2*dy; cz = 0; Call ligne;
cx = dx; cy = h; cz = 0; Call ligne;
cx = dx; cy = h+dy; cz = 0; Call ligne;
cx = dx; cy = h+2*dy; cz = 0; Call ligne;
cx = 0; cy = h+3*dy+2; cz = 0; Call ligne;

s  = news;
Plane Surface(s) = {1, hole[]};
Physical Surface(100) = s;
Physical Line(102) = {5,6,7,8};

Field[1] = Attractor;
Field[1].NodesList = {attractors[]};
Field[2] = Threshold;
Field[2].IField = 1;
Field[2].LcMin = r;
Field[2].LcMax = lc;
Field[2].DistMin = 5*r;
Field[2].DistMax = 100*r;

Field[6] = Box;
Field[6].VIn = lc / 4;
Field[6].VOut = lc;
Field[6].XMin = -2*dx;
Field[6].XMax = 2*dx;
Field[6].YMin = 0;
Field[6].YMax = h+5*dy;

Field[7] = Min;
Field[7].FieldsList = {2, 6};
Background Field = 7;

Mesh.Algorithm = 6;
Mesh.CharacteristicLengthExtendFromBoundary = 0;

//Geometry.SurfaceNumbers = 1;
Geometry.LabelType = 2;

Solver.AutoShowLastStep = 0;
//Solver.AutoShowViews = 1;
