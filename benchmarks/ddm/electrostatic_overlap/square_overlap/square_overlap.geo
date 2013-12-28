Include "params.geo" ;

x0 = 0 ;
y0 = 0 ;
lc = LC ;

Point(1) = {x0, y0, 0, lc} ;
Point(2) = {x0+D/2.-H_ol/2., y0, 0, lc} ;
Point(3) = {x0+D/2.-H_ol/2., y0+d, 0, lc} ;
Point(4) = {x0, y0+d, 0, lc} ;

Point(5) = {x0+D/2.+H_ol/2., y0, 0, lc} ;
Point(6) = {x0+D, y0, 0, lc} ;
Point(8) = {x0+D/2.+H_ol/2., y0+d, 0, lc} ;
Point(7) = {x0+D, y0+d, 0, lc} ;

Line(1) = {1, 2} ;
Line(2) = {2, 3} ;
Line(3) = {3, 4} ;
Line(4) = {4, 1} ;

Line(5) = {5, 6} ;
Line(6) = {6, 7} ;
Line(7) = {7, 8} ;
Line(8) = {8, 5} ;

Line(15) = {2, 5} ;
Line(17) = {8, 3} ;

Line Loop(10) = {1, 2, 3, 4} ;
Plane Surface(11) = {10} ;

Line Loop(20) = {5, 6, 7, 8} ;
Plane Surface(21) = {20} ;

Line Loop(200) = {15, -8, 17, -2} ;
Plane Surface(210) = {200} ;

Transfinite Line {2, 4} = d/lc+1 Using Progression 1 ;
Transfinite Line {1, 3} = (D/2.-H_ol/2.)/lc+1 Using Progression 1 ;
Transfinite Surface {11} ; Recombine Surface {11} ;

Transfinite Line {6, 8} = d/lc+1 Using Progression 1 ;
Transfinite Line {5, 7} = (D/2.-H_ol/2.)/lc+1 Using Progression 1 ;
Transfinite Surface {21} ; Recombine Surface {21} ;

Transfinite Line {16, 18} = d/lc+1 Using Progression 1 ;
Transfinite Line {15, 17} = H_ol/lc+1 Using Progression 1 ;
Transfinite Surface {210} ; Recombine Surface {210} ;

Mesh 2;

Physical Line(1) = {4, 6};
Physical Line(2) = {1, 15, 5, 7, 17, 3};
Physical Surface(6) = {11, 21, 210};
Save "square.msh";

Delete Physicals;
Physical Line(1001) = {4};
Physical Line(2001) = {1,15,3,17};
Physical Line(5000) = {8}; // artificial interface, edge of domain
Physical Line(5100) = {2}; // artificial interface, inside domain (inner edge of the overlap)
Physical Surface(6001) = {11, 210};
Save "square0.msh";

Delete Physicals;
Physical Line(1002) = {6};
Physical Line(2002) = {15, 5, 7, 17};
Physical Line(5000) = {2};
Physical Line(5100) = {8};
Physical Surface(6002) = {21, 210};
Save "square1.msh";
