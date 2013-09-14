Include "mem3D_data.geo";

Mesh.Algorithm3D = 4 ;
Mesh.Optimize = 1;

// Characteriscic lengths
p0   = Lc/25;  // electrode up
pb   = Lb/10;  // beams
ph   = w/4;    // holes
p_IN = Lin/25; // electrode dwn
pa   = p0;     // air layer around electrode up

lcs1 = R1/10; // shell
lcs2 = R2/10;

nl  = 2 ; // layers electrode up
nl2 = 1 ; // layers electrode dwn

// Building the geometry
Point(1) = { bc/2, Lc/2, 0, p0};
Point(2) = { bc/2,-Lc/2, 0, p0};
Point(3) = {-bc/2,-Lc/2, 0, p0};
Point(4) = {-bc/2, Lc/2, 0, p0};


k = newp ;
i = 0;
kl = 1 ;
//Beams
For(1:4)
  Point(k)   = { bc/2, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+1) = { bc/2, Lc/2-3*w-bb-i*(da+bb), 0, pb};
  Point(k+2) = { -bc/2, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+3) = { -bc/2, Lc/2-3*w-bb-i*(da+bb), 0, pb};

  Point(k+4)   = { bc/2+Lb, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+5) = { bc/2+Lb, Lc/2-3*w-bb-i*(da+bb), 0, pb};
  Point(k+6) = { -bc/2-Lb, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+7) = { -bc/2-Lb, Lc/2-3*w-bb-i*(da+bb), 0, pb};

  Line(kl) = {k,k+4};
  Line(kl+1) = {k+1,k+5};
  Line(kl+2) = {k+2,k+6};
  Line(kl+3) = {k+3,k+7};

  Line(kl+4) = {k,k+1};
  Line(kl+5) = {k+4,k+5};
  Line(kl+6) = {k+2,k+3};
  Line(kl+7) = {k+6,k+7};

  k += 8; i+=1; kl +=8 ;
EndFor

Line(33) = {4,1};
Line(34) = {4,7};
Line(35) = {8,15};
Line(36) = {16,23};
Line(37) = {24,31};
Line(38) = {32,3};
Line(39) = {3,2};
Line(40) = {2,30};
Line(41) = {29,22};
Line(42) = {21,14};
Line(43) = {13,6};
Line(44) = {5,1};


nbHolesX = Floor[bc/pitch];
nbHolesY = Floor[Lc/pitch];

// Centering the holes...
xx = (bc-nbHolesX*pitch-w)/2 ;
yy = (Lc-nbHolesY*pitch-w)/2 ;

//Holes in INT
i = 1 ; j = 1 ;
For(1:nbHolesY)
  For(1:nbHolesX)
    pth[0] =newp ; Point(newp) = { bc/2-xx-i*w,   Lc/2-yy-j*w,   0, ph};
    pth[1] =newp ; Point(newp) = { bc/2-xx-i*w,   Lc/2-yy-j*w-w, 0, ph};
    pth[2] =newp ; Point(newp) = { bc/2-xx-i*w-w, Lc/2-yy-j*w-w, 0, ph};
    pth[3] =newp ; Point(newp) = { bc/2-xx-i*w-w, Lc/2-yy-j*w,   0, ph};

    For k In {0:2}
      lnh[k] = newl; Line(newl) = {pth[k],pth[k+1]};
    EndFor
    lnh[3] =newl; Line(newl) = {pth[3],pth[0]};

    llholes[]+= newll; Line Loop(newll) = lnh[];
    i +=2;
  EndFor
  j +=2; i = 1;
EndFor


Line Loop(newll) = {-40,-39,-38,-31,-37,-23,-36,-15,-35,-7,-34,33,-44,5,-43,13,-42,21,-41,29};
surPlateInt_dwn = news ; Plane Surface(news) = {newll-1, llholes[]};

// Beams on the right
Line Loop(newll) = {4,-8,-3,7};
surBeams[]+= news ;Plane Surface(news) = {newll-1};
Line Loop(newll) = {12,-16,-11,15};
surBeams[]+= news ;Plane Surface(news) = {newll-1};
Line Loop(newll) = {20,-24,-19,23};
surBeams[]+= news ;Plane Surface(news) = {newll-1};
Line Loop(newll) = {28,-32,-27,31};
surBeams[]+= news ;Plane Surface(news) = {newll-1};

// Beams on the left
Line Loop(newll) = {26,-30,-25,29};
surBeams[]+= news ;Plane Surface(news) = {newll-1};
Line Loop(newll) = {18,-22,-17,21};
surBeams[]+= news ;Plane Surface(news) = {newll-1};
Line Loop(newll) = {10,-14,-9,13};
surBeams[]+= news ;Plane Surface(news) = {newll-1};
Line Loop(newll) = {2,-6,-1,5};
surBeams[]+= news ;Plane Surface(news) = {newll-1};

vol[] = Extrude Surface { surPlateInt_dwn, {0,0,d}} { Layers { {nl}, {1}} ; };;
surPlateInt_up = vol[0];
volPlateInt[]  = vol[1];

// Beams
For k In {0:#surBeams[]-1}
  vol[] = Extrude Surface { surBeams[k], {0,0,d}} { Layers { {nl}, {1}} ; }; ;
  volBeams[] += vol[1];
  surBeams_[]+= vol[0];
  surBeams_Fix[] += vol[3] ;
  //Printf("",vol[]);
EndFor

surPlateInt[] =  CombinedBoundary{Volume{volPlateInt[], volBeams[]};};
slPlateInt=newsl; Surface Loop(newsl) = surPlateInt[] ;

// Electrode down
ptin[]+=newp ; Point(newp) = { bin/2, Lin/2, -gap, p_IN};
ptin[]+=newp ; Point(newp) = { bin/2,-Lin/2, -gap, p_IN};
ptin[]+=newp ; Point(newp) = {-bin/2,-Lin/2, -gap, p_IN};
ptin[]+=newp ; Point(newp) = {-bin/2, Lin/2, -gap, p_IN};

ptin[]+=newp ; Point(newp) = { bin/2-win, Lin/2, -gap, p_IN};
ptin[]+=newp ; Point(newp) = { bin/2-win,-Lin/2, -gap, p_IN};
ptin[]+=newp ; Point(newp) = {-bin/2+win,-Lin/2, -gap, p_IN};
ptin[]+=newp ; Point(newp) = {-bin/2+win, Lin/2, -gap, p_IN};

ptin[]+=newp ; Point(newp) = { bin/2-win, Lin/2+t, -gap, p_IN};
ptin[]+=newp ; Point(newp) = { bin/2-win,-Lin/2-t, -gap, p_IN};
ptin[]+=newp ; Point(newp) = {-bin/2+win,-Lin/2-t, -gap, p_IN};
ptin[]+=newp ; Point(newp) = {-bin/2+win, Lin/2+t, -gap, p_IN};

lin[] += newl; Line(newl) = {ptin[3],ptin[7]};
lin[] += newl; Line(newl) = {ptin[7],ptin[11]};
lin[] += newl; Line(newl) = {ptin[11],ptin[8]};
lin[] += newl; Line(newl) = {ptin[8],ptin[4]};
lin[] += newl; Line(newl) = {ptin[4],ptin[0]};
lin[] += newl; Line(newl) = {ptin[0],ptin[1]};
lin[] += newl; Line(newl) = {ptin[1],ptin[5]};
lin[] += newl; Line(newl) = {ptin[5],ptin[9]};
lin[] += newl; Line(newl) = {ptin[9],ptin[10]};
lin[] += newl; Line(newl) = {ptin[10],ptin[6]};
lin[] += newl; Line(newl) = {ptin[6],ptin[2]};
lin[] += newl; Line(newl) = {ptin[2],ptin[3]};

Line Loop(newll) = lin[];
surDiel_up = news; Plane Surface(news) = {newll-1};

vol[] = Extrude Surface { surDiel_up, {0,0,-td}} { Layers { {nl2}, {1}};};;
surPlateIn_up = vol[0];
volDiel = vol[1];

vol[] = Extrude Surface { surPlateIn_up, {0,0,-tin}} { Layers { {nl2}, {1}};};;
surPlateIn_dwn = vol[0];
volPlateIn = vol[1];

surDiel[]    = Boundary{ Volume{volDiel}; };
surPlateIn[] = Boundary{ Volume{volPlateIn}; };

slDiel = newsl; Surface Loop(newsl) = surDiel[];
slPlateIn = newsl; Surface Loop(newsl) = surPlateIn[];


// Air Layer for computation with FEM

kp = newp;
Point(newp) = { bc/2+Lb+dal, Lc/2+dal, d+dal, pa};
Point(newp) = { bc/2+Lb+dal,-Lc/2-dal, d+dal, pa};
Point(newp) = {-bc/2-Lb-dal,-Lc/2-dal, d+dal, pa};
Point(newp) = {-bc/2-Lb-dal, Lc/2+dal, d+dal, pa};
Point(newp) = { bc/2+Lb+dal, Lc/2+dal, -dal, pa};
Point(newp) = { bc/2+Lb+dal,-Lc/2-dal, -dal, pa};
Point(newp) = {-bc/2-Lb-dal,-Lc/2-dal, -dal, pa};
Point(newp) = {-bc/2-Lb-dal, Lc/2+dal, -dal, pa};

lal[]+= newl; Line(newl) = {kp,kp+1};
lal[]+= newl; Line(newl) = {kp+1,kp+2};
lal[]+= newl; Line(newl) = {kp+2,kp+3};
lal[]+= newl; Line(newl) = {kp+3,kp};
lal[]+= newl; Line(newl) = {kp+4,kp+5};
lal[]+= newl; Line(newl) = {kp+5,kp+6};
lal[]+= newl; Line(newl) = {kp+6,kp+7};
lal[]+= newl; Line(newl) = {kp+7,kp+4};
lal[]+= newl; Line(newl) = {kp,kp+4};
lal[]+= newl; Line(newl) = {kp+1,kp+5};
lal[]+= newl; Line(newl) = {kp+2,kp+6};
lal[]+= newl; Line(newl) = {kp+3,kp+7};

Line Loop(newll) = {lal[{1:3,0}]} ;
sural[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {-lal[{4,8}], lal[{0,9}]} ;
sural[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {-lal[{10,1}], lal[{9,5}]} ;
sural[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {lal[{11}], -lal[{6,10}], lal[{2}] } ;
sural[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {lal[{8}], -lal[{7,11}], lal[{3}] } ;
sural[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {lal[{4:7}]} ;
sural[]+=news; Plane Surface(news) = {newll-1};


slAirlayer=newsl; Surface Loop(newsl) = sural[];
volAirlayer = newv; Volume(newv) = {slAirlayer, slPlateInt};


//Shell
cen0 = newp ; Point(cen0) = {0, 0, 0,lcs1} ;
kp = newp ;
Point(newp) = {R1,0,0,lcs1} ;
Point(newp) = {0,R1,0,lcs1} ;
Point(newp) = {-R1,0,0,lcs1} ;
Point(newp) = {0,-R1,0,lcs1} ;
Point(newp) = {0,0,R1,lcs1} ;
Point(newp) = {0,0,-R1,lcs1} ;

cin[]+=newl; Circle(newl) = {kp,cen0,kp+1};
cin[]+=newl; Circle(newl) = {kp+1,cen0,kp+2};
cin[]+=newl; Circle(newl) = {kp+2,cen0,kp+3};
cin[]+=newl; Circle(newl) = {kp+3,cen0,kp};

cin[]+=newl; Circle(newl) = {kp,cen0,kp+4};
cin[]+=newl; Circle(newl) = {kp+4,cen0,kp+2};
cin[]+=newl; Circle(newl) = {kp+2,cen0,kp+5};
cin[]+=newl; Circle(newl) = {kp+5,cen0,kp};

cin[]+=newl; Circle(newl) = {kp+1,cen0,kp+4};
cin[]+=newl; Circle(newl) = {kp+4,cen0,kp+3};
cin[]+=newl; Circle(newl) = {kp+3,cen0,kp+5};
cin[]+=newl; Circle(newl) = {kp+5,cen0,kp+1};

Line Loop(newll) = {-cin[{8,0}],cin[4]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cin[{5,8}],cin[1]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cin[{2,5}],cin[9]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {cin[{9,3,4}]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cin[{0,7}], cin[{11}]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {cin[{11,1,6}]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cin[{6}], cin[{2,10}]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cin[{3}], cin[{10,7}]};
surshellin[]+=news; Ruled Surface(news) = {newll-1};


kp = newp ;
Point(newp) = {R2,0,0,lcs2} ;
Point(newp) = {0,R2,0,lcs2} ;
Point(newp) = {-R2,0,0,lcs2} ;
Point(newp) = {0,-R2,0,lcs2} ;
Point(newp) = {0,0,R2,lcs2} ;
Point(newp) = {0,0,-R2,lcs2} ;

cout[]+=newl; Circle(newl) = {kp,cen0,kp+1};
cout[]+=newl; Circle(newl) = {kp+1,cen0,kp+2};
cout[]+=newl; Circle(newl) = {kp+2,cen0,kp+3};
cout[]+=newl; Circle(newl) = {kp+3,cen0,kp};

cout[]+=newl; Circle(newl) = {kp,cen0,kp+4};
cout[]+=newl; Circle(newl) = {kp+4,cen0,kp+2};
cout[]+=newl; Circle(newl) = {kp+2,cen0,kp+5};
cout[]+=newl; Circle(newl) = {kp+5,cen0,kp};

cout[]+=newl; Circle(newl) = {kp+1,cen0,kp+4};
cout[]+=newl; Circle(newl) = {kp+4,cen0,kp+3};
cout[]+=newl; Circle(newl) = {kp+3,cen0,kp+5};
cout[]+=newl; Circle(newl) = {kp+5,cen0,kp+1};


Line Loop(newll) = {-cout[{8,0}],cout[4]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cout[{5,8}],cout[1]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cout[{2,5}],cout[9]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {cout[{9,3,4}]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cout[{0,7}], cout[{11}]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {cout[{11,1,6}]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cout[{6}], cout[{2,10}]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};
Line Loop(newll) = {-cout[{3}], cout[{10,7}]};
surshellout[]+=news; Ruled Surface(news) = {newll-1};

slShellOut=newsl; Surface Loop(newsl) = surshellout[];
slShellIn =newsl; Surface Loop(newl) = surshellin[];
volShell = newv ; Volume(newv) = {slShellOut, slShellIn};

slPlateInDiel = newsl ; Surface Loop (newsl) = CombinedBoundary{Volume{volPlateIn,volDiel};};
volAir=newv; Volume(newsl) = {slShellIn, slAirlayer, slPlateInDiel};


//------------------------------------------------------------------------------
// Physical regions
//------------------------------------------------------------------------------

Physical Volume(PLATEINT) = {volPlateInt[], volBeams[]};
Physical Surface(SUR_PLATEINT) = surPlateInt[] ;
Physical Surface(SUR_PLATEINT_DWN) = surPlateInt_dwn ;
Physical Surface(SUR_PLATEINT_UP)  = surPlateInt_up ;

Physical Volume(DIEL) = {volDiel};
Physical Surface(SUR_DIEL) = Boundary{Volume{volDiel};};
Physical Volume (PLATEIN) = {volPlateIn};
Physical Surface (SUR_PLATEIN) = Boundary{Volume{volPlateIn};};

Physical Surface(SUR_BEAM1i) = surBeams_Fix[0] ;
Physical Surface(SUR_BEAM2i) = surBeams_Fix[1] ;
Physical Surface(SUR_BEAM3i) = surBeams_Fix[2] ;
Physical Surface(SUR_BEAM4i) = surBeams_Fix[3] ;

Physical Surface(SUR_BEAM1d) = surBeams_Fix[7] ;
Physical Surface(SUR_BEAM2d) = surBeams_Fix[6] ;
Physical Surface(SUR_BEAM3d) = surBeams_Fix[5] ;
Physical Surface(SUR_BEAM4d) = surBeams_Fix[4] ;


Physical Volume (AIRLAYER) = {volAirlayer};
Physical Volume (SHELL) = {volShell};
Physical Volume (AIR)   = {volAir};
Physical Surface (SUR_INF) = surshellout[];

Recursive Color Cyan {Volume{volAir,volAirlayer, volShell};}
Recursive Color Gold {Volume{volPlateInt};}
Recursive Color NavyBlue {Volume{volDiel};}
Recursive Color Red { Volume{volPlateIn};}


//Hide { Point{ Point '*' }; Line{ Line '*' }; }

nice_mems[] = Boundary{ Surface{surPlateInt[], surPlateIn[], surDiel[]}; };
Show { Line{ nice_mems[] }; }

