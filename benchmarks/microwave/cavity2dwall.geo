Mesh.Optimize = 1;
Mesh.CharacteristicLengthMax = lc ;


// CAVITY

xCav = Lx/2;
yCav = Ly/2;
ap = App/2;
pCav[0]=newp; Point(pCav[0]) = {-xCav, ap, 0};
pCav[1]=newp; Point(pCav[1]) = {-xCav, yCav, 0};
pCav[2]=newp; Point(pCav[2]) = { xCav, yCav, 0};
pCav[3]=newp; Point(pCav[3]) = { xCav,-yCav, 0};
pCav[4]=newp; Point(pCav[4]) = {-xCav,-yCav, 0};
pCav[5]=newp; Point(pCav[5]) = {-xCav,-ap, 0};
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
pLay1[1]=newp; Point(pLay1[1]) = {-xCav, y, 0};
pLay1[2]=newp; Point(pLay1[2]) = { x, y, 0};
pLay1[3]=newp; Point(pLay1[3]) = { x,-y, 0};
pLay1[4]=newp; Point(pLay1[4]) = {-xCav,-y, 0};
pLay1[5]=newp; Point(pLay1[5]) = {-x,-y, 0};
For i In {0:5}
  lLay1[i]=newl; Line(lLay1[i]) = {pLay1[i],pLay1[(i+1)%6]};
EndFor
lCavLayTop=newl; Line(lCavLayTop) = {pCav[1],pLay1[1]};
lCavLayBot=newl; Line(lCavLayBot) = {pCav[4],pLay1[4]};
llLay1[0]=newll; Line Loop(llLay1[0]) = {lLay1[0],-lCavLayTop,-lCav[0],-lApp,-lCav[4],lCavLayBot,lLay1[4],lLay1[5]};
llLay1[1]=newll; Line Loop(llLay1[1]) = {lLay1[{1:3}],-lCavLayBot,-lCav[3],-lCav[2],-lCav[1],lCavLayTop};
surfLay1[0]=news; Plane Surface(surfLay1[0]) = {llLay1[0]};
surfLay1[1]=news; Plane Surface(surfLay1[1]) = {llLay1[1]};


// PHYSICAL ELEMENTS

Physical Line(CAVITY_APERTURE) = {lApp};
Physical Line(CAVITY_BORDER) = {lCav[],lCavLayTop,lCavLayBot};
Physical Line(BORDER) = {lLay1[]};

Physical Surface(CAVITY_VOL) = {surfCav};
Physical Surface(LAYER1) = {surfLay1[]};

