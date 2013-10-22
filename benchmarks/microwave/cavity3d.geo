Mesh.Optimize = 1;
Mesh.CharacteristicLengthMax = lc ;


// generateBox (for cavity and layers)

surf_num = 0;
Function generateBox
  p[0]=newp; Point(p[0]) = { x, y, z};
  p[1]=newp; Point(p[1]) = { x,-y, z};
  p[2]=newp; Point(p[2]) = {-x,-y, z};
  p[3]=newp; Point(p[3]) = {-x, y, z};
  p[4]=newp; Point(p[4]) = { x, y,-z};
  p[5]=newp; Point(p[5]) = { x,-y,-z};
  p[6]=newp; Point(p[6]) = {-x,-y,-z};
  p[7]=newp; Point(p[7]) = {-x, y,-z};
  l[0]=newl; Line(l[0]) = {p[0],p[1]};
  l[1]=newl; Line(l[1]) = {p[1],p[2]};
  l[2]=newl; Line(l[2]) = {p[2],p[3]};
  l[3]=newl; Line(l[3]) = {p[3],p[0]};
  l[4]=newl; Line(l[4]) = {p[4],p[5]};
  l[5]=newl; Line(l[5]) = {p[5],p[6]};
  l[6]=newl; Line(l[6]) = {p[6],p[7]};
  l[7]=newl; Line(l[7]) = {p[7],p[4]};
  l[8]=newl; Line(l[8]) = {p[0],p[4]};
  l[9]=newl; Line(l[9]) = {p[1],p[5]};
  l[10]=newl; Line(l[10]) = {p[2],p[6]};
  l[11]=newl; Line(l[11]) = {p[3],p[7]};
  ll[0]=newll; Line Loop(ll[0]) = {-l[{0:3}],-lAp[]};
  ll[1]=newll; Line Loop(ll[1]) = {l[{4:7}]};
  ll[2]=newll; Line Loop(ll[2]) = {l[3],l[8],-l[7],-l[11]};
  ll[3]=newll; Line Loop(ll[3]) = {-l[9],-l[5],l[10],l[1]};
  ll[4]=newll; Line Loop(ll[4]) = {-l[10],-l[6],l[11],l[2]};
  ll[5]=newll; Line Loop(ll[5]) = {l[0],l[9],-l[4],-l[8]};
  For i In {0:5}
    surf[surf_num]=news; Plane Surface(surf[surf_num]) = {ll[i]}; surf_num++;
  EndFor
Return


// CAVITY

x = Lx/2;
y = Ly/2;
z = Lz/2;

If(Flag_Aperture==0)
  pAp[0]=newp; Point(pAp[0]) = { Appx/2, -Appy/2, z};
  pAp[1]=newp; Point(pAp[1]) = { Appx/2,  Appy/2, z};
  pAp[2]=newp; Point(pAp[2]) = {-Appx/2,  Appy/2, z};
  pAp[3]=newp; Point(pAp[3]) = {-Appx/2, -Appy/2, z};
  lAp[0]=newl; Line(lAp[0]) = {pAp[0],pAp[1]};
  lAp[1]=newl; Line(lAp[1]) = {pAp[1],pAp[2]};
  lAp[2]=newl; Line(lAp[2]) = {pAp[2],pAp[3]};
  lAp[3]=newl; Line(lAp[3]) = {pAp[3],pAp[0]};
  llAp=newll; Line Loop(llAp) = {lAp[{0:3}]};
  surfAp=news; Plane Surface(surfAp) = {llAp};
EndIf

If(Flag_Aperture==1)
  pAp[0]=newp; Point(pAp[0]) = { 0.0,  0.0,   z};
  pAp[1]=newp; Point(pAp[1]) = { 0.0, -Appy/2, z};
  pAp[2]=newp; Point(pAp[2]) = { 0.0,  Appy/2, z};
  pAp[3]=newp; Point(pAp[3]) = { Appx/2, 0.0,   z};
  pAp[4]=newp; Point(pAp[4]) = {-Appx/2, 0.0,   z};
  lAp[0]=newl; Ellipse(lAp[0]) = {pAp[3],pAp[0],pAp[3],pAp[2]};         
  lAp[1]=newl; Ellipse(lAp[1]) = {pAp[2],pAp[0],pAp[2],pAp[4]};         
  lAp[2]=newl; Ellipse(lAp[2]) = {pAp[4],pAp[0],pAp[4],pAp[1]};         
  lAp[3]=newl; Ellipse(lAp[3]) = {pAp[1],pAp[0],pAp[1],pAp[3]};
  llAp=newll; Line Loop(llAp) = {lAp[{0:3}]};
  surfAp=news; Plane Surface(surfAp) = {llAp};
EndIf

Call generateBox;
sl[0]=newsl; Surface Loop(sl[0])={surf[{0:5}],surfAp};
volCavity=newv; Volume(volCavity)={sl[0]};


// LAYER 1

x = Lx/2+Llayer1;
y = Ly/2+Llayer1;
z = Lz/2+Llayer1;
lAp = {};

Call generateBox;
sl[1]=newsl; Surface Loop(sl[1])={surf[{6:11}]};
volLayer1=newv; Volume(volLayer1)={sl[1],-sl[0]};


// PHYSICAL ELEMENTS

Physical Surface(CAVITY_BORDER) = {surf[{0:5}]};
Physical Surface(BORDER) = {surf[{6:11}]};
Physical Surface(CAVITY_APERTURE) = {surfAp};

Physical Volume(CAVITY_VOL) = {volCavity};
Physical Volume(LAYER1) = {volLayer1};

