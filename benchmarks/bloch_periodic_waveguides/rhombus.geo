/* -------------------------------------------------------------------
   File "cercle.geo"

   This file is the geometrical description used by GMSH to produce
   the file "cercle.msh".
   ------------------------------------------------------------------- */

/* Definition of geometrical points */

L=1.;
//fill=0.45;
//r=L*Sqrt(Sqrt(3.)*fill/(2*Pi));
r=L*0.48;
c=0.5; s=Sqrt(3.)*0.5;

t=0.05;
t2=0.015;
Point(1) = { +L*c      , 0, 0, t} ;
Point(2) = { (L-r)*c   , r*s, 0, t2} ;
Point(3) = { +r*c      , (L-r)*s, 0, t2} ;

Point(4) = { 0       , L*s, 0, t} ;
Point(5) = { -r*c      , (L-r)*s, 0, t2} ;
Point(6) = { -(L-r)*c   , r*s, 0, t2} ;

Point(7) = { -L*c    , 0, 0, t} ;
Point(8) = { -(L-r)*c   , -r*s, 0, t2} ;
Point(9) = { -r*c      , -(L-r)*s, 0, t2} ;

Point(10) = { 0       , -L*s, 0, t} ;
Point(11) = { +r*c      , -(L-r)*s, 0, t2} ;
Point(12) = { (L-r)*c   , -r*s, 0, t2} ;



/* Definition of geometrical lines */

Line(1) = {1,2};   Line(2) = {2,3};  Line(3) = {3,4};
Line(4) = {4,5};   Line(5) = {5,6};  Line(6) = {6,7};
Line(7) = {7,8};   Line(8) = {8,9};  Line(9) = {9,10};
Line(10) = {10,11};   Line(11) = {11,12};  Line(12) = {12,1};

Circle(13) = {12,1,2};  Circle(14) = {3,4,5};
Circle(15) = {6,7,8};  Circle(16) = {9,10,11}; 

/* Definition of geometrical surfaces */

Line Loop(20) = {12,1 ,-13};   
Line Loop(21) = {3 ,4 ,-14};   
Line Loop(22) = {6 ,7 ,-15};   
Line Loop(23) = {9 ,10,-16};   
Line Loop(24) = {13,2,14,5,15,8,16,11};   

Plane Surface(30) = {20};
Plane Surface(31) = {21};
Plane Surface(32) = {22};
Plane Surface(33) = {23};
Plane Surface(34) = {24};

/* Definition of Physical entities (surfaces, lines). The Physical
   entities tell GMSH the elements and their associated region numbers
   to save in the file 'cercle.msh'. For example, the Region 
   101 is made of elements of surface 14 (complementary of cercle in square),
   while the Region 121 is made of element of line 2 (top of square). */

Physical Surface (101) = {34} ;   /* Silica */
Physical Surface (111) = {30,31,32,33} ;   /* Diel1 */

Physical Line (121) = {1,2,3} ;       
Physical Line (122) = {4,5,6} ; 
Physical Line (123) = {7,8,9} ;   
Physical Line (124) = {10,11,12} ;   
//Physical Line (124) = {-5,-6,-7,-8} ;   
