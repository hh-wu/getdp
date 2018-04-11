/* -----------------------
   File Annulus.geo
----------------------- */

// Mesh step h :
h = 0.025;

/*==============*/
/* Large Circle */
/*==============*/

// Points :
Point(1) = {0,0,0,h};
Point(2) = {1,0,0,h};
Point(3) = {0,1,0,h};
Point(5) = {-1,0,0,h};
Point(6) = {0,-1,0,h};

// Arcs :
Circle(1) = {2,1,3};
Circle(2) = {3,1,5};
Circle(3) = {5,1,6};
Circle(4) = {6,1,2};

// Circle :
Line Loop(1) = {1,2,3,4};

/*===============*/
/* Little Circle */
/*===============*/

// Points :
Point(200) = {0.2,0,0,h};
Point(300) = {0,0.2,0,h};
Point(500) = {-0.2,0,0,h};
Point(600) = {0,-0.2,0,h};

// Arcs :
Circle(100) = {200,1,300};
Circle(200) = {300,1,500};
Circle(300) = {500,1,600};
Circle(400) = {600,1,200};

// Circle :
Line Loop(100) = {100,200,300,400};

/*=======*/
/* Omega */
/*=======*/

// Annulus : The surface between the little circle and the large circle
Plane Surface(1) = {1, 100};

/*===================*/
/* Physical Entities */
/*===================*/

// Gama0
Physical Line(1001) = {1,2,3,4};
// Gama1
Physical Line(1002) = {100,200,300,400};

// Omega
Physical Surface(1005) = {1};

