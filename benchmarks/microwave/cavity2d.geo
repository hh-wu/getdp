Mesh.Optimize = 1;
Mesh.CharacteristicLengthMax = lc ;


// CAVITY

x = Lx/2;
y = Ly/2;
ap = App/2;
pCav[0]=newp; Point(pCav[0]) = {-x, ap, 0};
pCav[1]=newp; Point(pCav[1]) = {-x, y, 0};
pCav[2]=newp; Point(pCav[2]) = { x, y, 0};
pCav[3]=newp; Point(pCav[3]) = { x,-y, 0};
pCav[4]=newp; Point(pCav[4]) = {-x,-y, 0};
pCav[5]=newp; Point(pCav[5]) = {-x,-ap, 0};
For i In {0:4}
  lCav[i]=newl; Line(lCav[i]) = {pCav[i],pCav[(i+1)]};
EndFor
lApp=newl; Line(lApp) = {pCav[5],pCav[0]};
llCav=newll; Line Loop(llCav) = {lCav[],lApp};
surfCav=news; Plane Surface(surfCav) = {llCav};


// LAYER 1

x = Lx/2+Llayer1;
y = Ly/2+Llayer1;
pLay1[0]=newp; Point(pLay1[0]) = {-x, y, 0};
pLay1[1]=newp; Point(pLay1[1]) = { x, y, 0};
pLay1[2]=newp; Point(pLay1[2]) = { x,-y, 0};
pLay1[3]=newp; Point(pLay1[3]) = {-x,-y, 0};
For i In {0:3}
  lLay1[i]=newl; Line(lLay1[i]) = {pLay1[i],pLay1[(i+1)%4]};
EndFor
llLay1=newll; Line Loop(llLay1) = {lLay1[]};
surfLay1=news; Plane Surface(surfLay1) = {llLay1,-llCav};


// PHYSICAL ELEMENTS

Physical Line(CAVITY_APERTURE) = {lApp};
Physical Line(CAVITY_BORDER) = {lCav[]};
Physical Line(BORDER) = {lLay1[]};

Physical Surface(CAVITY_VOL) = {surfCav};
Physical Surface(LAYER1) = {surfLay1};

