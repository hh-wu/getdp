Include "params.geo";

lc=LC;

Point(1) = {0,-d,0,lc};
Point(2) = {D,-d,0,lc};
Point(3) = {D,0,0,lc};
Point(4) = {0,0,0,lc};

Point(5) = {xSource,ySource,0,lc};

Point(6) = {xSource,-d,0,lc};
Point(7) = {D,ySource,0,lc};
Point(8) = {xSource,0,0,lc};
Point(9) = {0,ySource,0,lc};

Line(10) = {1,6};
Line(11) = {6,2};
Line(12) = {2,7};
Line(13) = {7,3};
Line(14) = {3,8};
Line(15) = {8,4};
Line(16) = {4,9};
Line(17) = {9,1};
Line(18) = {6,5};
Line(19) = {7,5};
Line(20) = {8,5};
Line(21) = {9,5};

Line Loop(40) = {10,18,-21,17};
Plane Surface(100) = {40};
Line Loop(50) = {11,12,19,-18};
Plane Surface(101) = {50};
Line Loop(60) = {-19,13,14,20};
Plane Surface(102) = {60};
Line Loop(70) = {21,-20,15,16};
Plane Surface(103) = {70};

Transfinite Line{10,15,21} = (xSource)/lc+1 Using Progression 1;
Transfinite Line{11,14,19} = (D-xSource)/lc+1 Using Progression 1;
Transfinite Line{12,17,18} = (d+ySource)/lc+1 Using Progression 1;
Transfinite Line{13,16,20} = (-ySource)/lc+1 Using Progression 1;
Transfinite Surface{100:103};
Recombine Surface{100:103};

Mesh 2;

Physical Point(999) = {5};
// Physical Line(10) = {10:17};
Physical Line(1) = {10:11};
Physical Line(2) = {12:13};
Physical Line(3) = {14:15};
Physical Line(4) = {16:17};
Physical Surface(6) = {100:103};

Save "marmousi.msh";
