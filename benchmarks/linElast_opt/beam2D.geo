Include "beam_data.geo";

//unstructured or transfinite
//Geometry.CopyMeshingMethod = 1;
//If(!transfiniteMesh)
//  Mesh.Algorithm = 8;
//EndIf
nbPtSpline = 10;
Point(1) = {0, 0, 0, lc};
Point(2) = {dx, 0, 0, lc};
Point(3) = {dx, dy, 0, lc};
Point(4) = {0, dy, 0, lc};
Point(5) = {dx, dy/2, 0, lc};
If(Flag_hole==1) //ellipse
  Printf("ellispe");
  Point(6) = {dx/2, dy/2, 0, lc}; //center
  Point(7) = {dx/2+hole_length/2, dy/2, 0, lc};  //right
  Point(8) = {dx/2, dy/2+hole_width/2, 0, lc};   //up
  Point(9) = {dx/2-hole_length/2, dy/2, 0, lc};  //left
  Point(10) = {dx/2, dy/2-hole_width/2, 0, lc};  //down
EndIf
If(Flag_hole==2)//spline
  Printf("spline");
  aa = {};
  For i In {0:(NSpline-1)}
    theta = i*2*Pi/NSpline;
    aa[i]=newp;
    Point(aa[i]) = {dx/2+RSpline~{i}*Cos[theta], dy/2+RSpline~{i}*Sin[theta], 0, lc}; 
  EndFor
  //Printf("aa:",aa[]);
EndIf
Line(1) = {1, 2};
Line(2) = {2, 5};
Line(3) = {5, 3};
Line(4) = {3, 4};
Line(5) = {4, 1};
If(Flag_hole==1)//ellipse
  Ellipse(6) = {7, 6, 7, 8};
  Ellipse(7) = {8, 6, 8, 9};
  Ellipse(8) = {9, 6, 9, 10};
  Ellipse(9) = {10, 6, 10, 7};
EndIf
If(Flag_hole==2)//spline
  Spline ( 6 ) = { aa[],aa[0] };
EndIf
If(transfiniteMesh)
  Transfinite Line{5} = nbElemPerLineY;//Using Progression 1.3;
  Transfinite Line{3} = 0.5*(nbElemPerLineY+1); //Using Progression 1.2;
  Transfinite Line{2} = 0.5*(nbElemPerLineY+1);//Using Progression 1.2;
  Transfinite Line{1} = nbElemPerLineX;
  Transfinite Line{4} = nbElemPerLineX;
EndIf
Line Loop(5) = {1, 2, 3, 4, 5};
If(!Flag_hole)
  Plane Surface(6) = {5};//list of line loops
EndIf
If(Flag_hole==1) //ellipse
  Line Loop(6) = {6, 7, 8, 9};
  Plane Surface(6) = {5,-6};//list of line loops
EndIf
If(Flag_hole==2) //spline
  Line Loop(6) = {6};
  Plane Surface(6) = {5,-6};//list of line loops
EndIf
If(transfiniteMesh)
  Transfinite Surface{6} = {1,2,3,4};
  //Transfinite Surface{7} = {6,7,8,9};
EndIf

Physical Surface(BLOC) = {6};
Physical Line(SURF_BAS) = {1};
Physical Line(SURF_HAUT) = {4};
Physical Line(SURF_GAUCHE) = {5};
Physical Line(SURF_DROITE) = {2,3};
Physical Point(POINT_1) = {1};
Physical Point(POINT_2) = {2};
Physical Point(POINT_3) = {3};
Physical Point(POINT_4) = {4};
Physical Point(POINT_5) = {5};
If(Flag_hole)
  Physical Line(HOLE) = {6,7,8,9}; 
EndIf

If(Flag_meshRecombine)
  Recombine Surface "*";
EndIf
////Mesh.RecombineAll = Flag_meshRecombine;
//If(Flag_meshRecombine==0.0)
//  Mesh.Algorithm = 2; // auto 
//EndIf
//If(Flag_meshRecombine==1.0)
//  Mesh.Algorithm = 8; // DelQuad (experimental)
//EndIf

