/* -------------------------------------------------------------------
   File "Core.geo"

   This file is the geometrical description used by GMSH to produce
   the file "Core.msh".
   ------------------------------------------------------------------- */

Include "Core_data.pro";

Rad = dxCore/3. ;
xInd   = dxCore + dist;
rInt   = Val_Rint; // see in Core_data.pro
rExt   = Val_Rext;

s       =  1.;
p0      = 12.e-3 *s;
pCorex  =  4e-3 *s; pCorey0 =  4e-3 *s; pCorey  =  4e-3 *s;
pIndx   =  5.e-3 *s; pIndy   =  5.e-3 *s;
pInt    = 12.5e-3*s; pExt    = 12.5e-3*s;

Point(1) = {0,0,0,pCorey0};
Point(2) = {dxCore,0,0,pCorex};
Point(3) = {dxCore-Rad,dyCore-Rad,0,pCorey};
Point(20) = {dxCore,dyCore-Rad,0,pCorey};
Point(21) = {dxCore-Rad,dyCore,0,pCorey};
Point(4) = {0,dyCore,0,pCorey0};
Point(5) = {xInd,0,0,pIndx};
Point(6) = {xInd+dxInd,0,0,pIndx};
Point(7) = {xInd+dxInd,dyInd,0,pIndy};
Point(8) = {xInd,dyInd,0,pIndy};
Point(9) = {rInt,0,0,pInt};
Point(10) = {rExt,0,0,pExt};
Point(11) = {0,rInt,0,pInt};
Point(12) = {0,rExt,0,pExt};

Line(1) = {1,2};  Line(2) = {2,5};   Line(3) = {5,6};
Line(4) = {6,9};  Line(5) = {9,10};  Line(6) = {1,4};
Line(7) = {4,11}; Line(8) = {11,12}; Line(9) = {2,20};
Circle(100) = {20, 3, 21};
Line(10) = {21,4}; Line(11) = {6,7};  Line(12) = {7,8};
Line(13) = {8,5};

Circle(14) = {9,1,11};  Circle(15) = {10,1,12};

Line Loop(16) = {-6,1,9,100,10};                 Plane Surface(17) = {16};
Line Loop(18) = {11,12,13,3};                Plane Surface(19) = {18};
Line Loop(20) = {7,-14,-4,11,12,13,-2,9,100,10}; Plane Surface(21) = {20};
Line Loop(22) = {8,-15,-5,14};               Plane Surface(23) = {22};

Physical Surface(101) = {21};  /* Air */
Physical Surface(102) = {17};  /* Core */
Physical Surface(103) = {19};  /* Ind */
Physical Surface(111) = {23};  /* AirInf */

Physical Line(1000) = {1,2};       /* Cut */
Physical Line(1001) = {2};         /* CutAir */
Physical Line(202)  = {9,10};      /* SkinCore */
Physical Line(203)  = {11,12,13};  /* SkinInd */
Physical Line(1100) = {1,2,3,4,5}; /* SurfaceGh0 */
Physical Line(1101) = {6,7,8};     /* SurfaceGe0 */
Physical Line(1102) = {15};        /* SurfaceGInf */
