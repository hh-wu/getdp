// Include "params_wg.pro" ;
Include "params.geo" ;

lc = LC ;

x0 = 0 ;
y0 = 0 ;

Point(1) = {x0, y0, 0, lc} ;
Point(2) = {x0+D, y0, 0, lc} ;
Point(3) = {x0+D, y0+d, 0, lc} ;
Point(4) = {x0, y0+d, 0, lc} ;

Line(1) = {1, 2} ;
Line(2) = {2, 3} ;
Line(3) = {3, 4} ;
Line(4) = {4, 1} ;

Line Loop(5) = {1, 2, 3, 4} ;
Plane Surface(6) = {5} ;


Transfinite Line {2, 4} = d/lc+1 Using Progression 1 ;
Transfinite Line {1, 3} = D/lc+1 Using Progression 1 ;
Transfinite Surface {6} ;
Recombine Surface {6} ;

Physical Line(4) = {4} ;
Physical Line(1) = {1} ;
Physical Line(2) = {2} ;
Physical Line(3) = {3} ;
Physical Surface(6) = {6} ;

Mesh 2;
Save "waveguide2d.msh" ;
