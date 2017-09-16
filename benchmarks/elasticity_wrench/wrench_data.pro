mm = 1.e-3;
cm = 1.e-2;
in = 0.0254;
deg = Pi/180.;


DefineConstant[
  Refine = {0.004, Name  "Geometry/2Main characteristic length"}
];
/*
Refine = 
  mm*DefineNumber[ 4, Name "Geometry/2Main characteristic length"];
Printf("Refine=%f", Refine);
*/

Model3D = 
  DefineNumber[ 0, Name "Geometry/0Model 3D", Choices{0,1}];
Recomb = 
  DefineNumber[ 0, Name "Geometry/1Recombine", Choices{0,1}];



Thickness = 
  mm*DefineNumber[ 10, Name "Geometry/4Thickness (mm)"];
Width = 
  mm*DefineNumber[ 0.625*in/mm, Name "Geometry/5Arm Width (mm)"];
LLength = 
  cm*DefineNumber[ 6.0*in/cm, Name "Geometry/6Arm Length (cm)"];




