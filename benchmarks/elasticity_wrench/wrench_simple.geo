
Include "wrench_data.pro";

Geometry.LightTwoSide = 1;
Mesh.LightTwoSide = 1;


lc = Refine; 
lc2 = lc; // nut region
lc3 = lc/5; // edge grip region

Ri = 0.494*in;
Re = 0.8*in;
L = LLength;
LL = 1*in;
E = 0.625*in;
F = Width;
D = 0.45*in; // Nut

theta = 14*deg;

Point(1) = { 0, 0, 0, lc2};
Point(2) = { -Ri, 0, 0, lc2};
th1 = Asin[E/2./Ri];
Point(3) = { -Ri + Ri*Cos[th1], Ri*Sin[th1], 0, lc2};
th2 = Asin[E/2./Re];
Point(4) = { -Re*Cos[th2]+D, Re*Sin[th2], 0, lc3};
Point(5) = { -Re*Cos[th2], Re*Sin[th2], 0, lc2};
th3 = th2 - theta;
Point(6) = { Re*Cos[th3], Re*Sin[th3], 0, lc};
Point(7) = {  (L-LL)*Cos[theta]+F/2.*Sin[theta],
	     -(L-LL)*Sin[theta]+F/2.*Cos[theta], 0, lc};
Point(8) = { L*Cos[theta]+F/2.*Sin[theta], 
	     -L*Sin[theta]+F/2.*Cos[theta], 0, lc};
Point(9) = { L*Cos[theta]-F/2.*Sin[theta], 
	     -L*Sin[theta]-F/2.*Cos[theta], 0, lc};
th4 = -th2 - theta;
Point(10) = { Re*Cos[th4], Re*Sin[th4], 0, lc};
Point(11) = { -Re*Cos[th2], -Re*Sin[th2], 0, lc2};
Point(12) = { -Re*Cos[th2]+D, -Re*Sin[th2], 0, lc3};
Point(13) = { -Ri + Ri*Cos[th1], -Ri*Sin[th1], 0, lc2};

contour[] = {};
contour[] += newl; Circle(newl) = {1,2,3};
contour[] += newl; Line(newl) = {3,4};
contour[] += newl; cl1=newl; Line(newl) = {4,5}; 
contour[] += newl; Circle(newl) = {5,1,6};
contour[] += newl; Line(newl) = {6,7};
contour[] += newl; cl2=newl; Line(newl) = {7,8}; 
contour[] += newl; Line(newl) = {8,9};
contour[] += newl; Line(newl) = {9,10};
contour[] += newl; Circle(newl) = {10,1,11};
contour[] += newl; cl3=newl; Line(newl) = {11,12}; 
contour[] += newl; Line(newl) = {12,13};
contour[] += newl; Circle(newl) = {13,2,1};
ll=newll; Line Loop(ll) = { contour[] };

wrench=news; Plane Surface(wrench) = { ll}; 
If(Recomb==1)
  Recombine Surface{wrench};
EndIf

If(Model3D==0)
  Physical Surface(1)= wrench;
  Physical Line(2)= {cl1, cl3};
  Physical Line(3)= {cl2};
EndIf

If(Model3D==1)
  Physical Surface(10)= wrench;
//Extrude{0,0,0.01}{ Surface{wrench}; Recombine; Layers{3}; }
  Extrude{0,0,-Thickness}{ Surface{wrench}; Recombine; }

  Physical Volume(1) = 1;
  Physical Surface(2) = {39,67};
  Physical Surface(3) = 51;
EndIf



