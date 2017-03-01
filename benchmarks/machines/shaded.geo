Include "shaded_data.geo";

Solver.AutoShowLastStep = 1;
Mesh.Algorithm = 1;
Mesh.Smoothing = 5;

//==============================================================================
// characteristic lengths
lc = 2*Pi*Rg/4/30*2/4 ;
lw = w1/10 ;
lyoke  = lc   ; // lw/6 ; //yoke curvature
lyoke2 = lw*2 ; // corners of yoke

lout  = xm/5 ; // outer boundary
//==============================================================================

angRot = 0. ; //In rad
//angRot = dth ; //In rad

cen = newp ; Point(cen) = {0,0,0,7*lc} ;
// rotor
For k In {0:3}
 pntRotor[]+=newp; Point(newp) = { Rg*Cos(angRot+k*Pi/2),  Rg*Sin(angRot+k*Pi/2), 0.,lc};
EndFor
For k1 In {0:3}
  k2 = (k1==3)? 0:k1+1;
  crotor[]+=newl ; Circle(newl)={pntRotor[k1],cen,pntRotor[k2]};
EndFor
llrotor = newll; Line Loop (llrotor) = crotor[];
srotor = news ; Plane Surface(srotor) = llrotor ;
Point {cen} In Surface {srotor} ;

// upper yoke curvature
pntY[]+=newp; Point(newp) = { x2, y2, 0.,lyoke};
pntY[]+=newp; Point(newp) = { x3, y3, 0.,lyoke};
pntY[]+=newp; Point(newp) = {-x3, y3, 0.,lyoke};
pntY[]+=newp; Point(newp) = {-x2, y2, 0.,lyoke};

lY[]+=newl ; Circle(newl)={pntY[0],cen,pntY[1]};
lY[]+=newl ; Circle(newl)={pntY[1],cen,pntY[2]};
lY[]+=newl ; Circle(newl)={pntY[2],cen,pntY[3]};

// lower yoke curvature
pntY_[]+=newp; Point(newp) = { x2, -y2, 0.,lyoke};
pntY_[]+=newp; Point(newp) = { x3, -y3, 0.,lyoke};
pntY_[]+=newp; Point(newp) = {-x3, -y3, 0.,lyoke};
pntY_[]+=newp; Point(newp) = {-x2, -y2, 0.,lyoke};

lY_[]+=newl ; Circle(newl)={pntY_[0],cen,pntY_[1]};
lY_[]+=newl ; Circle(newl)={pntY_[1],cen,pntY_[2]};
lY_[]+=newl ; Circle(newl)={pntY_[2],cen,pntY_[3]};

// upper ring, left side and right side
surf[] = Extrude {0,h2,0}{ Line {lY[1]}; };
sring[] += surf[1] ;
pnts[]=Boundary{Line{surf[0]};}; Characteristic Length {pnts[]} = lyoke*2;
surf[] = Translate{(w1+w2)/2, 0, 0}{ Duplicata{Surface{sring[0]};}} ;
sring[] += surf[0] ;

// lower ring, left side and right side
surf[] = Extrude {0,-h2,0}{ Line {lY_[1]}; };
sring[] += surf[1] ;
pnts[]=Boundary{Line{surf[0]};}; Characteristic Length {pnts[]} = lyoke*2;
surf[] = Translate{-(w1+w2)/2, 0, 0}{ Duplicata{Surface{sring[2]};}} ;
sring[] += surf[0] ;

// inner upper right corner of yoke
pntY[]+=newp; Point(newp) = {-x2, h1, 0.,lw};

// upper corners of inner coil side
pntY[]+=newp; Point(newp) = {-x2-w3, h1, 0.,lw};
pntY[]+=newp; Point(newp) = {-x2-w3-w4, h1, 0.,lw};

// inner coil side
Line(newl) = {pntY[5],pntY[6]};
surf[] = Extrude {0,-2*h1,0}{ Line {newl-1}; };
scoil[] += surf[1] ;

// outer coil side
surf[] = Translate{-w1-w4, 0, 0}{ Duplicata{Surface{scoil[0]};}} ;
scoil[] += surf[0] ;

// outer corners of yoke
pntY[]+=newp; Point(newp) = { x2, h1+w1, 0.,lyoke2};
pntY[]+=newp; Point(newp) = {-x2-w3-w4-w1, h1+w1, 0.,lyoke2};
pntY[]+=newp; Point(newp) = { x2, -h1-w1, 0.,lw};
pntY[]+=newp; Point(newp) = {-x2-w3-w4-w1, -h1-w1, 0.,lyoke2};

//inner lower right corner
pntY[]+=newp; Point(newp) = {-x2, -h1, 0.,lw};


Line(41) = {6, 19};
Line(42) = {23, 59};
Line(43) = {59, 60};
Line(44) = {60, 49};
Line(45) = {58, 62};
Line(46) = {62, 61};
Line(47) = {61, 10};
Line(48) = {13, 32};
Line(49) = {43, 63};
Line(50) = {63, 47};
Line(51) = {9, 44};
Line(52) = {44, 45};

// yoke
Line Loop(newll) = {42, 43, 44, -40, 45, 46, 47, 10, 23, 22, -24, 12, 48, -30, 49, 50, 32, -34, -31, -52, -51, -9, 15, -13, -14, -7, 41, 19};
syoke = news; Plane Surface(syoke) = {newll-1};


// outer boundary
pntB[]+=newp; Point(newp) = { xm+w1/2, ym, 0.,lout};
pntB[]+=newp; Point(newp) = {-xm-w1/2-w3-w4-w1-w4, ym, 0.,lout};
pntB[]+=newp; Point(newp) = {-xm-w1/2-w3-w4-w1-w4, -ym, 0.,lout};
pntB[]+=newp; Point(newp) = { xm+w1/2, -ym, 0.,lout};

For k1 In {0:3}
k2 = (k1<3)?k1+1:0. ;
bndair[]+=newl; Line(newl) = {pntB[k1],pntB[k2]};
EndFor

llbndair = newll; Line Loop(llbndair) = bndair[];

alllines[]= Line '*'; // No moving band...yet

// moving band
For k In {0:3}
  pntRotor1[]+=newp; Point(newp) = { Rg1*Cos(angRot+k*Pi/2),  Rg1*Sin(angRot+k*Pi/2), 0.,lc}; // close to rotor
  pntRotor2[]+=newp; Point(newp) = { Rg2*Cos(k*Pi/2),  Rg2*Sin(k*Pi/2), 0.,lc}; // close to yoke
EndFor
For k In {0:3}
k2 = (k==3)? 0:k+1;
cmb0[]+=newl ; Circle(newl)={pntRotor1[k],cen,pntRotor1[k2]};
cmb1[]+=newl ; Circle(newl)={pntRotor2[k],cen,pntRotor2[k2]};
EndFor

llmb[]+= newll; Line Loop (llmb[0]) = cmb0[];
llmb[]+= newll; Line Loop (llmb[1]) = cmb1[];

// circles for third layer of elements around rotor
cmb2[]+=lY[];
cmb2[]+=newl; Circle(newl) = {pntY_[0],cen,pntY[0]};
cmb2[]+={-lY_[2],-lY_[1],-lY_[0]};
cmb2[]+=newl; Circle(newl) = {pntY[3],cen,pntY_[3]};

llmb[]+= newll; Line Loop (llmb[2]) = cmb2[];

smb0 = news ; Plane Surface(smb0) = {llmb[0],llrotor} ; // layer touching rotor (inner)
//smb1 = news ; Plane Surface(smb1) = {llmb[1],llmb[0]} ; // air layer 1 (closest to rotor)
smb2 = news ; Plane Surface(smb2) = {llmb[2],llmb[1]} ; // air layer 2 (outer)

//air
Line Loop(newll) = {51, 52, 33, -50, -49, -29, -28, -27, -48, -cmb2[7]};
sair[]+=news ; Plane Surface(news) = {newll-1};

Line Loop(newll) = {58, 55, 56, 57};
Line Loop(newll) = {47, cmb2[3], 41, -18, -21, -20, 42, 43, 44, 37, 38, 39, 45, 46};
sair[]+=news ; Plane Surface(news) = {newll-2,newll-1};

//-------------------------------------------------------------------------
// Physical Regions
//-------------------------------------------------------------------------
Physical Surface(STATOR_AIR)   = {sair[]} ;
Physical Surface(ROTOR_AIRGAP)  = smb0 ;
Physical Surface(STATOR_AIRGAP)  = smb2 ;

Physical Line(ROTOR_BND_MOVING_BAND)  = cmb0[] ;
Physical Line(STATOR_BND_MOVING_BAND) = cmb1[] ;

Physical Line(SURF_EXT)  = bndair[] ;

Physical Surface(ROTOR_FE) = srotor ;
Physical Surface(STATOR_FE)  = syoke;

Physical Surface(STATOR_IND_AP) = scoil[0] ;
Physical Surface(STATOR_IND_AM) = scoil[1] ;

Physical Surface(STATOR_RING) = sring[0] ;
Physical Surface(STATOR_RING+1) = sring[1] ;
Physical Surface(STATOR_RING+2) = sring[3] ;
Physical Surface(STATOR_RING+3) = sring[2] ;

//Physical Line(DUMMY) = alllines[];


// For better control of the mesh
XX[] = Dilate {{0, 0, 0}, 0.8} { Duplicata { Line{crotor[]}; } } ;
Line {XX[]} In Surface {srotor} ;
PP[] = Boundary{Line{XX[]};}; Characteristic Length {PP[]} = lc*2;
