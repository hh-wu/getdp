Include "params.geo";

lc = .05;
LC = 2*lc;

d = L_CUB;
D = 4;
shiftX = -1;


If (geo2d && geo3d)
  Printf("Choose between 2D and 3D (params.geo)");
EndIf

If (geo3d)

Point(1) = {-shiftX-d/2, -d/2, -d/2, lc}; // small cube
Point(2) = {-shiftX+d/2, -d/2, -d/2, lc};
Point(3) = {-shiftX+d/2, d/2, -d/2, lc};
Point(4) = {-shiftX-d/2, d/2, -d/2, lc};
Point(5) = {-shiftX-d/2, -d/2, d/2, lc};
Point(6) = {-shiftX+d/2, -d/2, d/2, lc};
Point(7) = {-shiftX+d/2, d/2, d/2, lc};
Point(8) = {-shiftX-d/2, d/2, d/2, lc};

Line(1) = {1,2};
Line(2) = {2,3};
Line(3) = {3,4};
Line(4) = {4,1};
Line(5) = {5,6};
Line(6) = {6,7};
Line(7) = {7,8};
Line(8) = {8,5};
Line(9) = {1,5};
Line(10) = {2,6};
Line(11) = {3,7};
Line(12) = {4,8};

Line Loop(1) = {1,2,3,4};
Line Loop(2) = {5,6,7,8};
Line Loop(3) = {3,12,-7,-11};
Line Loop(4) = {9, -8, -12, 4};
Line Loop(5) = {5, -10, -1, 9};
Line Loop(6) = {2, 11, -6, -10};

Plane Surface(1) = {-1};
Plane Surface(2) = {2};
Plane Surface(3) = {3};
Plane Surface(4) = {4};
Plane Surface(5) = {-5};
Plane Surface(6) = {6};

Surface Loop(1) = {1:6}; //small cube

Point(51) = {-D/2, -D/2, -D/2, LC};
Point(52) = {0, -D/2, -D/2, LC};
Point(53) = {0, D/2, -D/2, LC};
Point(54) = {-D/2, D/2, -D/2, LC};
Point(55) = {-D/2, -D/2, D/2, LC};
Point(56) = {0, -D/2, D/2, LC};
Point(57) = {0, D/2, D/2, LC};
Point(58) = {-D/2, D/2, D/2, LC};

Point(60) = {D/2, -D/2, -D/2, LC};
Point(61) = {D/2, D/2, -D/2, LC};
Point(62) = {D/2, D/2, D/2, LC};
Point(63) = {D/2, -D/2, D/2, LC};

Line(51) = {51,52};
Line(52) = {52,53};
Line(53) = {53,54};
Line(54) = {54,51};
Line(55) = {55,56};
Line(56) = {56,57};
Line(57) = {57,58};
Line(58) = {58,55};
Line(59) = {51,55};
Line(60) = {54,58};
Line(61) = {53,57};
Line(62) = {52,56};

// left shell
Line Loop(51) = {51,52,53,54};
Line Loop(52) = {55,56,57,58};
Line Loop(53) = {52,61,-56,-62}; // interface
Line Loop(54) = {53, 60, -57, -61};
Line Loop(55) = {54, 59, -58, -60};
Line Loop(56) = {59, 55, -62, -51};

Plane Surface(51) = {-51};
Plane Surface(52) = {52};
Plane Surface(53) = {53}; // interface
Plane Surface(54) = {54};
Plane Surface(55) = {55};
Plane Surface(56) = {-56};

Surface Loop(2) = {51:56}; // left outer shell

Volume(1) = {2}; // left volume


// right shell
Line(71) = {53,61};
Line(72) = {61,62};
Line(73) = {62,57};
Line(74) = {52,60};
Line(75) = {60,63};
Line(76) = {63,56};
Line(77) = {61,60};
Line(78) = {62,63};

Line Loop(71) = {78, -75, -77, 72};
Line Loop(72) = {77, -74, 52, 71};
Line Loop(73) = {71, 72, 73, -61};
Line Loop(74) = {56, -73, 78, 76};
Line Loop(75) = {74, 75, 76, -62};

Plane Surface(71) = {71};
Plane Surface(72) = {72};
Plane Surface(73) = {-73};
Plane Surface(74) = {-74};
Plane Surface(75) = {75};

Surface Loop(3) = {71:75, -53};
Volume(2) = {1,3}; // right volume  (with small cube)

Mesh.Optimize = 1;
Mesh 3;

// // Save left part
// Physical Surface(1001) = {1:6};
Physical Surface(1001) = {};
Physical Surface(2001) = {51, 56, 52, 54, 55};
Physical Surface(4000) = {53};
Physical Volume(4001) = {1};

Bnd[] = Boundary{Surface{53};};
Physical Line(40001) = {Bnd[]};
Save "cube0.msh";

// Save right part
Delete Physicals;
// Physical Surface(1002) = {};
Physical Surface(-1002) = {1:6};
Physical Surface(2002) = {71:75};
Physical Surface(-4000) = {53};
Physical Volume(4002) = {2};

Bnd[] = Boundary{Surface{53};};
Physical Line(-40001) = {Bnd[]};
Save "cube1.msh";

// Save full
Delete Physicals;
Physical Surface(-1) = {1:6}; // small
Physical Surface(2) = {51, 56, 52, 54, 55, 71:75}; // outer
Physical Volume(6) = {1,2};
Save "cube.msh";
/**/

EndIf

If (geo2d)

Point(1) = {-shiftX-d/2, -d/2, 0, lc};
Point(2) = {-shiftX+d/2, -d/2, 0, lc};
Point(3) = {-shiftX+d/2, d/2, 0, lc};
Point(4) = {-shiftX-d/2, d/2, 0, lc};

Line(1) = {1,2};
Line(2) = {2,3};
Line(3) = {3,4};
Line(4) = {4,1};

Line Loop(1) = {1:4};

Point(51) = {-D/2, -D/2, 0, LC};
Point(52) = {0, -D/2, 0, LC};
Point(53) = {0, D/2, 0, LC};
Point(54) = {-D/2, D/2, 0, LC};

Point(60) = {D/2, -D/2, 0, LC};
Point(61) = {D/2, D/2, 0, LC};

Line(51) = {51,52};
Line(52) = {52,53};
Line(53) = {53,54};
Line(54) = {54,51};

// left shell
Line Loop(51) = {51,52,53,54};
Plane Surface(51) = {51};

// right shell
Line(71) = {61, 53};
Line(72) = {52,60};
Line(73) = {60,61};
// Line(74) = {53,52};

Line Loop(71) = {71:73, -52};
Plane Surface(71) = {71, 1};

// Periodic Line 52 {52,53} = 74 {52,53};

Mesh.Optimize = 1;
Mesh 2;

// // Save left part
// Physical Surface(1001) = {1:6};
Physical Line(1001) = {};
Physical Line(2001) = {51, 54, 53};
Physical Line(4000) = {52};
Physical Surface(4001) = {51};
Bnd[] = Boundary{Line{52};};
Physical Point(40001) = {Bnd[]};

Save "cube0.msh";

// Save right part
Delete Physicals;
// Physical Surface(1002) = {};
Physical Line(-1002) = {1:4};
Physical Line(2002) = {71:73};
Physical Line(-4000) = {52};
Physical Surface(4002) = {71};
Bnd[] = Boundary{Line{52};};
Physical Point(40001) = {Bnd[]};
Save "cube1.msh";

// Save full
Delete Physicals;
Physical Line(-1) = {1:4}; // small
Physical Line(2) = {51, 53, 54, 71:73}; // outer
Physical Surface(6) = {51,71};
Save "cube.msh";

EndIf
