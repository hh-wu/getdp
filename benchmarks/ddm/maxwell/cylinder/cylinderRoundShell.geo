// A cylinder decomposed in N slices, with caps at both ends,
// inside a larger copy of itself. For N=2, the cylinder reduces
// to a sphere.

Include "params.geo";
NDOM = NUM_SLICES;

d = 4; // length of the edges of the box
r = 1; // radius of the caps
R = 2;

lShell[] = {};
lCyl[] = {};
lInterf[] = {};
lVol[] = {};

Point(5) = {0,0,0, lc}; // center of the first cap
Point(6) = {0,r,0, lc};
Point(7) = {r,0,0, lc};
Point(8) = {0,-r,0, lc};
Point(9) = {-r,0,0, lc};
Point(10) = {0,0,-r, lc}; // top of the first cap

Point(16) = {0,R,0, LC};
Point(17) = {R,0,0, LC};
Point(18) = {0,-R,0, LC};
Point(19) = {-R,0,0, LC};
Point(20) = {0,0, -R, LC};

Circle(15) = {6,5,7}; // support of the first cap
Circle(16) = {7,5,8};
Circle(17) = {8,5,9};
Circle(18) = {9,5,6};
Circle(19) = {10,5,6};
Circle(20) = {10,5,8};
Circle(21) = {10,5,7};
Circle(22) = {10,5,9};

Circle(25) = {16,5,17}; // support of cap of outer shell
Circle(26) = {17,5,18};
Circle(27) = {18,5,19};
Circle(28) = {19,5,16};
Circle(29) = {20,5,16};
Circle(30) = {20,5,18};
Circle(31) = {20,5,17};
Circle(32) = {20,5,19};

Line Loop(15) = {18, -19, 22};
Line Loop(16) = {22, -17, -20};
Line Loop(17) = {20, -16, -21};
Line Loop(18) = {21, -15, -19};
Ruled Surface(100) = {-15};
Ruled Surface(101) = {16};
Ruled Surface(102) = {17};
Ruled Surface(103) = {18};

Line Loop(25) = {28, -29, 32};
Line Loop(26) = {32, -27, -30};
Line Loop(27) = {30, -26, -31};
Line Loop(28) = {31, -25, -29};
Ruled Surface(200) = {-25};
Ruled Surface(201) = {26};
Ruled Surface(202) = {27};
Ruled Surface(203) = {28};

Line Loop(20) = {25,26,27,28};
Line Loop(21) = {15,16,17,18};
Plane Surface(21) = {21,20}; // first interface

Surface Loop(100) = {21, 100:103, 200:203};
Volume(1) = {100};

lCyl[] += {100:103};
lShell[] += {200:203};
lInterf[] += {21};
lInterfBound[] += Boundary{Surface{lInterf[(#lInterf[]-1)]};};
lVol[] += {1};


extDist = d/4;
// extDist = d/NDOM;

// middle part
For i In{2:NDOM-1}
  extr[] = Extrude {0,0,extDist}{Surface{lInterf[i-2]};};
  lCyl[] += {extr[{2:5}]};
  lShell[] += {extr[{6:9}]};
  lInterf[] += {extr[0]};
  lInterfBound[] += Boundary{Surface{lInterf[(#lInterf[]-1)]};};
  lVol[] += {extr[1]};
EndFor


// second end
// recover indices of the elementary entities of current top face
// myList[] = Boundary{Surface{extr[0]};};// list of 4 lines that support the second cap + 4 lines that support the top face of the shell
myList[] = Boundary{Surface{lInterf[(#lInterf[]-1)]};};

Printf("%g", #myList[]);

For ii In{0:#myList[]-1}
Printf("%g %g", ii, myList[ii]);
EndFor


For ii In{0:#lInterfBound[]-1}
Printf("%g %g", ii, lInterfBound[ii]);
EndFor


For ii In{0:(#myList[]-1)/2}
  myListTempInner[] = Boundary{Line{myList[ii]};}; 
  myListTempOuter[] = Boundary{Line{myList[ii+4]};};

  myListIn[] += myListTempInner[0]; // list with the four 'corners' of the circle
  myListExt[] += myListTempOuter[0]; // list with the four corners of the top face of the shell
EndFor


p = newp; pl[] += p; Point(p) = {0, 0, (NDOM-2)*extDist+r, lc}; // top of the iner half-sphere
p = newp; pl[] += p; Point(p) = {0,0,(NDOM-2)*extDist, lc}; // center of the second cap
p = newp; pl[] += p; Point(p) = {0, 0, (NDOM-2)*extDist+R, LC}; // top of the outer half-sphere

l = newl; cl[] += l; Circle(l) = {pl[0],pl[1],myListIn[0]}; // support of the second inner cap
l = newl; cl[] += l; Circle(l) = {pl[0],pl[1],myListIn[1]};
l = newl; cl[] += l; Circle(l) = {pl[0],pl[1],myListIn[2]};
l = newl; cl[] += l; Circle(l) = {pl[0],pl[1],myListIn[3]};

llo = newll; lloo[] += llo; Line Loop(llo) = {cl[0], myList[0], -cl[1]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[1], myList[1], -cl[2]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[2], myList[2], -cl[3]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[3], myList[3], -cl[0]};

s = news; sl[] += s; Ruled Surface(s) = {lloo[0]}; // parts of half-sphere
s = news; sl[] += s; Ruled Surface(s) = {lloo[1]};
s = news; sl[] += s; Ruled Surface(s) = {lloo[2]};
s = news; sl[] += s; Ruled Surface(s) = {lloo[3]};

l = newl; cl[] += l; Circle(l) = {pl[2],pl[1],myListExt[0]}; // support of the second outer cap
l = newl; cl[] += l; Circle(l) = {pl[2],pl[1],myListExt[1]};
l = newl; cl[] += l; Circle(l) = {pl[2],pl[1],myListExt[2]};
l = newl; cl[] += l; Circle(l) = {pl[2],pl[1],myListExt[3]};

llo = newll; lloo[] += llo; Line Loop(llo) = {cl[4], myList[4], -cl[5]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[5], myList[5], -cl[6]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[6], myList[6], -cl[7]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[7], myList[7], -cl[4]};

s = news; sl[] += s; Ruled Surface(s) = {lloo[4]}; // parts of half-sphere
s = news; sl[] += s; Ruled Surface(s) = {lloo[5]};
s = news; sl[] += s; Ruled Surface(s) = {lloo[6]};
s = news; sl[] += s; Ruled Surface(s) = {lloo[7]};


sll = newsl; Surface Loop(sll) = {sl[0]:sl[3], lInterf[NDOM-2], sl[4]:sl[7]};
Volume(NDOM) = {sll};

lCyl[] += {sl[0]:sl[3]};
lShell[] += {sl[4]:sl[7]};
lInterf[] += {};
lVol[] += {NDOM};

//*
Mesh.Optimize = 1;
Mesh 3;

For i In{1:NDOM}
Delete Physicals;
If (i==1)
  Physical Surface(1001) = {lCyl[{0:3}]}; // first end cap
  Physical Surface(2001) = lShell[{0:3}]; // first end outer shell
  Physical Volume(4001)=lVol[0];
  Physical Surface(4000) = lInterf[0]; // first interface
  Physical Line(40000) = lInterfBound[{0:7}];
EndIf

If (i!=1 && i!=NDOM)
  Physical Surface(1000+i) = lCyl[{4+4*(i-2):7+4*(i-2)}]; // middle cylinder
  Physical Surface(2000+i) = lShell[{4+4*(i-2):7+4*(i-2)}]; // middle outer shell
  Physical Volume(4000+i) = lVol[i-1];
  Physical Surface((-(2+i)*1000)) = lInterf[i-2]; // first interface
  Physical Surface(((3+i)*1000)) = lInterf[i-1]; // 2nd interface
  Physical Line((-(2+i)*10000)) = lInterfBound[{(i-2)*8:(i-2)*8+7}];
  Physical Line(((3+i)*10000)) = lInterfBound[{(i-1)*8:(i-1)*8+7}];
EndIf

If (i==NDOM)
  Physical Surface(1000+i) = lCyl[{4+4*(i-2):7+4*(i-2)}]; // second end cap
  Physical Surface(2000+i) = lShell[{4+4*(i-2):7+4*(i-2)}]; // 2nd end outer shell
  Physical Volume(4000+i)= lVol[i-1];
  Physical Surface((-(2+i)*1000)) = lInterf[i-2]; // 2nd interface
  Physical Line((-(2+i)*10000)) = lInterfBound[{(i-2)*8:(i-2)*8+7}];
EndIf

Save Sprintf("cylinder_mshcut%g.msh", i-1);

EndFor

Delete Physicals;
Physical Surface(1) = {lCyl[]};
Physical Surface(2) = {lShell[]};
Physical Volume(4) = {lVol[]};

Save "cylinder.msh";
/**/
