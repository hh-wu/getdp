// A cylinder decomposed in N slices, with caps at both ends,
// inside a rectangular box. For N=2, the cylinder reduces to a
// sphere.

Include "params.geo";
NDOM = NUM_SLICES;

d = 4; // length of the edges of the box
r = 1; // radius of the caps

lShell[] = {};
lCyl[] = {};
lInterf[] = {};
lVol[] = {};

Point(1) = {-d/2, -d/2, 0, LC}; // corners of the first shell
Point(2) = {-d/2, d/2, 0, LC};
Point(3) = {d/2, d/2, 0, LC};
Point(4) = {d/2, -d/2, 0, LC};
Point(5) = {0,0,0, lc}; // center of the first cap
Point(6) = {0,r,0, lc};
Point(7) = {r,0,0, lc};
Point(8) = {0,-r,0, lc};
Point(9) = {-r,0,0, lc};
Point(10) = {0,0,-r, lc}; // top of the first cap
Point(11) = {-d/2, -d/2, -d/2, LC};
Point(12) = {-d/2, d/2, -d/2, LC};
Point(13) = {d/2, d/2, -d/2, LC};
Point(14) = {d/2, -d/2, -d/2, LC};

Line(10) = {1,2}; // edges of the first shell (top)
Line(11) = {2,3};
Line(12) = {3,4};
Line(13) = {4,1};

Line(30) = {11,12}; // edges of the first shell (sides)
Line(31) = {12,13};
Line(32) = {13,14};
Line(33) = {14,11};

Line(40) = {1,11};
Line(41) = {2,12};
Line(42) = {3,13};
Line(43) = {4,14};

Circle(15) = {6,5,7}; // support of the first cap
Circle(16) = {7,5,8};
Circle(17) = {8,5,9};
Circle(18) = {9,5,6};
Circle(19) = {10,5,6};
Circle(20) = {10,5,8};
Circle(21) = {10,5,7};
Circle(22) = {10,5,9};

Line Loop(15) = {18, -19, 22};
Line Loop(16) = {22, -17, -20};
Line Loop(17) = {20, -16, -21};
Line Loop(18) = {21, -15, -19};
Ruled Surface(100) = {-15};
Ruled Surface(101) = {16};
Ruled Surface(102) = {17};
Ruled Surface(103) = {18};

Line Loop(30) = {42, -31, -41, 11};
Line Loop(31) = {41, -30, -40, 10};
Line Loop(32) = {40, -33, -43, 13};
Line Loop(33) = {43, -32, -42, 12};
Line Loop(34) = {32, 33, 30, 31};

Plane Surface(30) = {30};
Plane Surface(31) = {31};
Plane Surface(32) = {32};
Plane Surface(33) = {33};
Plane Surface(34) = {34};

Line Loop(20) = {10,11,12,13};
Line Loop(21) = {15,16,17,18};
Plane Surface(21) = {21,20}; // first interface

Surface Loop(100) = {30, 31, 32, 33, 34, 21, 100:103};
Volume(1) = {100};

lCyl[] += {100:103};
lShell[] += {30:34};
lInterf[] += {21};
lVol[] += {1};


extDist = d/4;
// extDist = d/NDOM;

// middle part
For i In{2:NDOM-1}
  extr[] = Extrude {0,0,extDist}{Surface{lInterf[i-2]};};
  lCyl[] += {extr[{2:5}]};
  lShell[] += {extr[{6:9}]};
  lInterf[] += {extr[0]};
  lVol[] += {extr[1]};
EndFor

// second end
// recover indices of the elementary entities of current top face
// myList[] = Boundary{Surface{extr[0]};};// list of 4 lines that support the second cap + 4 lines that support the top face of the shell
myList[] = Boundary{Surface{lInterf[(#lInterf[]-1)]};};// list of 4 lines that support the second cap + 4 lines that support the top face of the shell
For ii In{0:(#myList[]-1)/2}
  myListTempInner[] = Boundary{Line{myList[ii]};}; 
  myListTempOuter[] = Boundary{Line{myList[ii+4]};};

  myListIn[] += myListTempInner[0]; // list with the four 'corners' of the circle
  myListExt[] += myListTempOuter[0]; // list with the four corners of the top face of the shell
EndFor

p = newp; pl[] += p; Point(p) = {0, 0, (NDOM-2)*extDist+r, lc}; // top of the half-sphere
p = newp; pl[] += p; Point(p) = {-d/2, -d/2, (NDOM-2)*extDist+d/2, LC}; // corners of the box (top face)
p = newp; pl[] += p; Point(p) = {d/2, -d/2, (NDOM-2)*extDist+d/2, LC};
p = newp; pl[] += p; Point(p) = {d/2, d/2, (NDOM-2)*extDist+d/2, LC};
p = newp; pl[] += p; Point(p) = {-d/2, d/2, (NDOM-2)*extDist+d/2, LC};
p = newp; pl[] += p; Point(p) = {0,0,(NDOM-2)*extDist, lc}; // center of the second cap

l = newl; ll[] += l; Line(l) = {pl[1], pl[2]}; // edges of the box (top face)
l = newl; ll[] += l; Line(l) = {pl[2], pl[3]};
l = newl; ll[] += l; Line(l) = {pl[3], pl[4]};
l = newl; ll[] += l; Line(l) = {pl[4], pl[1]};

l = newl; ll[] += l; Line(l) = {myListExt[0], pl[1]}; // edges of the box (side faces)
l = newl; ll[] += l; Line(l) = {myListExt[1], pl[2]};
l = newl; ll[] += l; Line(l) = {myListExt[2], pl[3]};
l = newl; ll[] += l; Line(l) = {myListExt[3], pl[4]};

llo = newll; lloo[] += llo; Line Loop(llo) = {ll[0]:ll[3]}; // top face
llo = newll; lloo[] += llo; Line Loop(llo) = {-ll[1], -ll[5], myList[5], ll[6]}; // side faces
llo = newll; lloo[] += llo; Line Loop(llo) = {myList[4], ll[5], -ll[0], -ll[4]};
llo = newll; lloo[] += llo; Line Loop(llo) = {-ll[3], -ll[7], myList[7], ll[4]};
llo = newll; lloo[] += llo; Line Loop(llo) = {ll[7], -ll[2], -ll[6], myList[6]};

s = news; sl[] += s; Plane Surface(s) = {lloo[0]};
s = news; sl[] += s; Plane Surface(s) = {lloo[1]};
s = news; sl[] += s; Plane Surface(s) = {lloo[2]};
s = news; sl[] += s; Plane Surface(s) = {lloo[3]};
s = news; sl[] += s; Plane Surface(s) = {lloo[4]};

l = newl; cl[] += l; Circle(l) = {pl[0],pl[5],myListIn[0]}; // support of the second cap
l = newl; cl[] += l; Circle(l) = {pl[0],pl[5],myListIn[1]};
l = newl; cl[] += l; Circle(l) = {pl[0],pl[5],myListIn[2]};
l = newl; cl[] += l; Circle(l) = {pl[0],pl[5],myListIn[3]};

llo = newll; lloo[] += llo; Line Loop(llo) = {cl[0], myList[0], -cl[1]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[1], myList[1], -cl[2]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[2], myList[2], -cl[3]};
llo = newll; lloo[] += llo; Line Loop(llo) = {cl[3], myList[3], -cl[0]};

s = news; sl[] += s; Ruled Surface(s) = {lloo[5]}; // parts of half-sphere
s = news; sl[] += s; Ruled Surface(s) = {lloo[6]};
s = news; sl[] += s; Ruled Surface(s) = {lloo[7]};
s = news; sl[] += s; Ruled Surface(s) = {lloo[8]};

sll = newsl; Surface Loop(sll) = {sl[0]:sl[4], lInterf[NDOM-2], sl[5]:sl[8]};
Volume(NDOM) = {sll};

lCyl[] += {sl[5]:sl[8]};
lShell[] += {sl[0]:sl[4]};
lInterf[] += {};
lVol[] += {NDOM};

//*
Mesh.Optimize = 1;
Mesh 3;

For i In{1:NDOM}
Delete Physicals;
If (i==1)
Physical Surface(1001) = {lCyl[{0:3}]}; // first end cap
Physical Surface(2001) = lShell[{0:4}]; // first end outer shell
Physical Volume(4001)=lVol[0];
Physical Surface(4000) = lInterf[0]; // first interface
EndIf

If (i!=1 && i!=NDOM)
  Physical Surface(1000+i) = lCyl[{4+4*(i-2):7+4*(i-2)}]; // middle cylinder
  Physical Surface(2000+i) = lShell[{5+4*(i-2):8+4*(i-2)}]; // middle outer shell
  Physical Volume(4000+i) = lVol[i-1];
  Physical Surface((-(2+i)*1000)) = lInterf[i-2]; // first interface
  Physical Surface(((3+i)*1000)) = lInterf[i-1]; // 2nd interface
EndIf

If (i==NDOM)
  Physical Surface(1000+i) = lCyl[{4+4*(i-2):7+4*(i-2)}]; // second end cap
  Physical Surface(2000+i) = lShell[{5+4*(i-2):9+4*(i-2)}]; // 2nd end outer shell
  Physical Volume(4000+i)= lVol[i-1];
  Physical Surface((-(2+i)*1000)) = lInterf[i-2]; // 2nd interface
EndIf

Save Sprintf("cylinder_mshcut%g.msh", i-1);

EndFor

Delete Physicals;
Physical Surface(1) = {lCyl[]};
Physical Surface(2) = {lShell[]};
Physical Volume(4) = {lVol[]};

Save "cylinder.msh";
/**/
