Include "params.geo";

xSigmaList[] = {};
For i In {0:nDoms}
xSigmaList += i*dDom;
EndFor


For iDom In {1:nDoms}

Delete Model;

xLeft = xSigmaList[iDom-1];
xRight = xSigmaList[iDom];

Point(1) = {xLeft,0,0,lc};
Point(2) = {xRight,0,0,lc};
Point(3) = {xRight,d,0,lc};
Point(4) = {xLeft,d,0,lc};

Point(5) = {xRight+dBb,0,0,lc};
Point(6) = {xRight+dBb,d,0,lc};

Point(7) = {xLeft-dBb,0,0,lc};
Point(8) = {xLeft-dBb,d,0,lc};

Line(10) = {1, 2};
Line(11) = {2, 3};
Line(12) = {3, 4};
Line(13) = {4, 1};
Line(14) = {2, 5};
Line(15) = {5, 6};
Line(16) = {6, 3};

Line(17) = {4, 8};
Line(18) = {8, 7};
Line(19) = {7, 1};


Line Loop(101) = {10, 11, 12, 13};
Plane Surface(101) = {101};

Line Loop(201) = {14, 15, 16, -11};
Plane Surface(201) = {201};

Line Loop(301) = {19,-13,17,18};
Plane Surface(301) = {301};

Transfinite Line {10,12} = dDom/lc+1 Using Progression 1;
Transfinite Line {11,13,15,18} = d/lc+1 Using Progression 1;
Transfinite Line {14,16,17,19} = dBb/lc+1 Using Progression 1;

Transfinite Surface {101};
Recombine Surface {101};
Transfinite Surface {201};
Recombine Surface {201};
Transfinite Surface {301};
Recombine Surface {301};

Physical Line((iDom*1000+2)) = {10,14,19}; // bottom
Physical Line((iDom*1000+3)) = {12,16,17}; // top
Physical Line((iDom*1000+1)) = {18}; // left
Physical Line((iDom*1000+4)) = {15}; // right

Physical Line((iDom*1000+10)) = {13}; // interface with left PML
Physical Line((iDom*1000+20)) = {11}; // interface with right PML


Physical Surface((iDom*1000+200)) = {101};
Physical Surface((iDom*1000+300)) = {201};
Physical Surface((iDom*1000+100)) = {301};

Mesh 2;
Save Sprintf("waveguide2d_mshcut%g.msh", iDom-1);

EndFor
