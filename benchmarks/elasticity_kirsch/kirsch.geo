Include "kirsch_data.pro";

DefineConstant [ NbDiv = 10 ]; 
If ( NbDiv==0 )
  NbDiv = 1 ;
EndIf

lc1 = Pi*Rint/2./NbDiv;
lc2 = lc1;

Point(1) = { 0    , 0    , 0 };
Point(2) = { Rint , 0    , 0 , lc1 };
Point(3) = { Rmid , 0    , 0 , lc2 };
Point(4) = { Rext , 0    , 0 , lc2 };
Point(5) = { 0    , Rext , 0 , lc2 };
Point(6) = { 0    , Rmid , 0 , lc2 };
Point(7) = { 0    , Rint , 0 , lc1 };

Circle(1) = { 2 , 1 , 7 };
Circle(2) = { 3 , 1 , 6 };
Circle(3) = { 4 , 1 , 5 };
Line(4) = { 2 , 3 };
Line(5) = { 3 , 4 };
Line(6) = { 5 , 6 };
Line(7) = { 6 , 7 };

Line Loop(8) = { 4, 2, 7, -1 };
Plane Surface(9) = { 8 };

Line Loop(10) = { 5, 3, 6, -2 };
Plane Surface(11) = { 10 };

Physical Surface(1) = { 9 };
Physical Surface(2) = { 11 };
Physical Line(3) = { 4, 5 };
Physical Line(4) = { 3 };
Physical Line(5) = { 6, 7 };
Physical Line(6) = { 1 };

