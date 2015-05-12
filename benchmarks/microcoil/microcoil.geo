Include "microcoil_data.pro";

Geometry.OldNewReg = 1;
Mesh.Algorithm = 1;

//------------------------------------------------------------------------------
hw = wWire/2.;

dx[] = { hw, hw,-hw,-hw};
dy[] = { hw,-hw,-hw, hw};

dxl[] = { 0,-1, 0, 1};
dyl[] = {-1, 0, 1, 0};

iBorder1=-1;
iBorder2=-1;
isCoil=-1;

///////////////
Function geoBranch

If (flagStatus==1 || flagStatus==2)
  dl  = dl + ((iPos%4==1 || iPos%4==3)? wWire+gWire : 0);
  xb1 = xb1 + dxl[iPos%4]*dl;
  yb1 = yb1 + dyl[iPos%4]*dl;
EndIf
If (flagStatus==-1 || flagStatus==3)
  dl  = dl;
  xb1 = xb1 + dxl[iPos%4]*dl;
  yb1 = yb1 + dyl[iPos%4]*dl;
EndIf

iPos++;
If (flagStatus==1)
  pb1=newp; Point(pb1)={xb1-dx[iPos%4], yb1-dy[iPos%4], z0, cCoil};
  pb2=newp; Point(pb2)={xb1+dx[iPos%4], yb1+dy[iPos%4], z0, cCoil};
EndIf
If (flagStatus==2)
  pb1=newp; Point(pb1)={xb1-dx[(iPos-1)%4], yb1-dy[(iPos-1)%4], z0, cCoil};
  pb2=newp; Point(pb2)={xb1+dx[(iPos-1)%4], yb1+dy[(iPos-1)%4], z0, cCoil};
EndIf
If (flagStatus==3 || flagStatus==0 || flagStatus==-1 )
  pb1=newp; Point(pb1)={xb1, yb1-hw, z0, cCoil};
  pb2=newp; Point(pb2)={xb1, yb1+hw, z0, cCoil};
EndIf

ltb=newl; Line(ltb)={pb1,pb2};

Transfinite Line {ltb} = nwWire+1 Using Bump bumpCoil;

If (flagStatus!=0)
l1=newl; Line(l1)={pa1,pb1};
l2=newl; Line(l2)={pa2,pb2};

s1=news; Line Loop(s1) = {lta,l2,-ltb,-l1}; // {1,3,-4,-2};
Plane Surface(s1) = {s1};
isCoil++; sCoil[isCoil]=s1;

Transfinite Line {l1,l2} = (dl/cCoilLong+1) Using Bump bumpCoilLong; // +++ original
//Transfinite Line {l1,l2} = (dl/cCoilLong+1)*1.5 Using Bump bumpCoilLong;
Transfinite Surface {s1} ; Recombine Surface{s1};

iBorder1++; lBorder1[iBorder1] = l1;
iBorder2++; lBorder2[iBorder2] = l2;

EndIf

pa1=pb1; pa2=pb2; lta=ltb;

Return
//////


/// Begin geometry
z0 = 0.;

flagStatus=0; // Start
xb1 = 0.; yb1 = 0.;
iPos = -1 ;
Call geoBranch;

lta_Start = lta;

flagStatus=-1; // Progression long.
dl = wWire;
iPos = 3;
Call geoBranch;
linesElecIn[]={lta, l1,l2};

flagStatus=1; // Progression
dl = 10.*um + hw-wWire+hw ;
iPos = 3;
Call geoBranch;

dl = 20.*um + wWire;
Call geoBranch;

dl = 40.*um;
Call geoBranch;
Call geoBranch;
Call geoBranch;

If (nTurns > 1)
For iTurn In {0:nTurns-2}
Call geoBranch;
Call geoBranch;
Call geoBranch;
Call geoBranch;
EndFor
EndIf

dl = dl/2 -wWire;
flagStatus=2; // End1
Call geoBranch;

iPos = iPos+2;
dl = (10. *um +hw - wWire+hw)*2;
flagStatus=3; // End2
Call geoBranch;


lta_save=lta;

iPos--;
dl = wWire;
flagStatus=3; // End2
Call geoBranch;
ltb_End = ltb;
linesElecOut[]={lta_save, l1,l2};

p1=newp; Point(p1)={-wBox/2., -wBox/2., z0, cBox};
p2=newp; Point(p2)={ wBox/2., -wBox/2., z0, cBox};
p3=newp; Point(p3)={ wBox/2.,  wBox/2., z0, cBox};
p4=newp; Point(p4)={-wBox/2.,  wBox/2., z0, cBox};

l12=newl; Line(l12)={p1,p2};
l23=newl; Line(l23)={p2,p3};
l34=newl; Line(l34)={p3,p4};
l41=newl; Line(l41)={p4,p1};

pointRef = p1;

iBorderCoil=-1;
iBorderCoil++; lBorderCoil[iBorderCoil] = lta_Start;
For i In {0:iBorder1}
iBorderCoil++; lBorderCoil[iBorderCoil] = lBorder2[i];
EndFor
iBorderCoil++; lBorderCoil[iBorderCoil] = -ltb_End;
For i In {0:iBorder2}
iBorderCoil++; lBorderCoil[iBorderCoil] = -lBorder1[iBorder2-i];
EndFor


// EXTRUDING MODEL
// Non uniform distrution of layers
alpha1 = prog_air ; // 1 uniform distribution of layers, > 1 thinner close to boundary, < 1 thinner in the middle
alpha2 = 1/alpha1 ;

cte1  = 0.; cte2  = 0.;
For i In{0:nl_air-1}
  cte1 += alpha1^i;
  cte2 += alpha2^i;
EndFor
For i In {0:nl_air-1}
  lv[] += 1 ;
  testv1 = alpha1^i/cte1;
  testv2 = alpha2^i/cte2;
  If(i>0)
    testv1 += bumpv1[i-1];
    testv2 += bumpv2[i-1];
  EndIf
  bumpv1[] += testv1 ;
  bumpv2[] += testv2 ;
EndFor


allSurfCoil[] = Surface '*';
surfelecin  = allSurfCoil[0] ;
surfelecout = allSurfCoil[ #allSurfCoil[]-1] ;

For k In {0:#allSurfCoil[]-1}
vol[] = Extrude {0, 0, wair} { Surface{allSurfCoil[k]}; Layers{lv[], bumpv1[]}; Recombine;};
If(k==0 || k == #allSurfCoil[]-1)
  volcoil[] += vol[1] ;
EndIf
If(k>0 &&k< #allSurfCoil[]-1)
  volaircut[] += vol[1] ;
EndIf
If(k>0 && k<#allSurfCoil[]-1)
  cutcoil[] += vol[5];
  skincoil2[] += vol[0];
EndIf
If(k==0)
  skincoil2[] += vol[4];
EndIf
If(k==#allSurfCoil[]-1)
  skincoil2[] += vol[2];
EndIf

vol[] = Extrude {0, 0, wcoil} { Surface{vol[0]}; Layers{nl_coil};Recombine;};
volcoil[] += vol[1] ;
vol[] = Extrude {0, 0, wairtop} { Surface{vol[0]}; Layers{lv[],bumpv2[]};Recombine;};
volair[] += vol[1] ;
EndFor

//air around
Line Loop(newll) = {l12,l23,l34,l41};
Line Loop(newll) = {lBorderCoil[{0:iBorderCoil}]};
sAir=news; Plane Surface(news) = {newll-1,newll-2};

vol[] = Extrude {0, 0, wair} { Surface{sAir}; Layers{lv[], bumpv1[]}; Recombine;};
volair[] += vol[1] ;
vol[] = Extrude {0, 0, wcoil}{ Surface{vol[0]}; Layers{nl_coil}; Recombine;};
volair[] += vol[1] ;
vol[] = Extrude {0, 0, wairtop} { Surface{vol[0]}; Layers{lv[],bumpv2[]}; Recombine;};
volair[] += vol[1] ;


// Physical regions

allSurfCoil[] -= {surfelecin, surfelecout};

allVol[] = Volume '*';
surfbox[] = CombinedBoundary{ Volume{allVol[]};} ;
surfbox[] -= {surfelecin, surfelecout};
surfbox[] -= {allSurfCoil[], sAir};

skincoil[] = CombinedBoundary{ Volume{volcoil[]};} ;
skincoil[] -= {surfelecin, surfelecout};

Physical Volume (COIL) = {volcoil[]} ;
Physical Surface (ELECIN) =  { surfelecin } ;
Physical Surface (ELECOUT) = { surfelecout } ;
Physical Surface (SKINCOIL) = { skincoil[] } ;
Physical Surface (SKINCOIL_2) = { skincoil2[] } ;

Physical Volume (AIR) = {volair[]} ;
Physical Volume (AIRCUT) = {volaircut[]} ;
Physical Surface (SURFBOX) = { -surfbox[], allSurfCoil[], sAir} ;

// CutCoil
Physical Surface (CUTCOIL) = { cutcoil[] } ;


Physical Surface (SURFBOXONESIDE) = {allSurfCoil[]} ;

linBndSurfCoil[] = CombinedBoundary{Surface{allSurfCoil[]};};

Physical Line (CUTCOILLINE) = {linBndSurfCoil[{1:11:2,14}]} ;

//For k In{0:#linBndSurfCoil[]-1}
//Printf("%g %g",k,linBndSurfCoil[k]); EndFor

Physical Point (POINTREFPOT) = {p1} ;

Color Red { Volume{volair[],volaircut[]}; }
Color Red { Surface{ Boundary{Volume{volair[],volaircut[]};} }; }
Color Gold { Volume{volcoil[]}; }
Color Gold { Surface{skincoil[]}; }
Color Red { Surface{surfelecin}; }
Color Green { Surface{surfelecout}; }


Hide{ Line{ Line '*'}; Point{ Point '*'}; }
nice_view[] = Boundary{ Surface{ skincoil[]};};
Show{ Line{nice_view[]}; }
