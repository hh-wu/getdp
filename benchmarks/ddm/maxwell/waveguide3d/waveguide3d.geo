Include "params.geo";

Point(1) = {0., 0., 0., LC} ;
myExtrudedLine[] = Extrude {0, dy, 0} {Point{1} ; } ;
myExtrudedSurface[] = Extrude {0, 0, dz} {Line{myExtrudedLine[1]} ; } ;
myExtrudedVolume[] = Extrude {dx, 0, 0} {Surface{myExtrudedSurface[1]} ; };

Transfinite Surface{myExtrudedSurface[1]} ;
Recombine Surface {myExtrudedSurface[1]} ;

lateralSides[] = {} ;
For i In {2:5}
  lateralSides += myExtrudedVolume[i] ;
  Transfinite Surface{myExtrudedVolume[i]} ;
  Recombine Surface {myExtrudedVolume[i]} ;
EndFor
Transfinite Surface{myExtrudedVolume[0]} ;
Recombine Surface {myExtrudedVolume[0]} ;
Transfinite Volume{myExtrudedVolume[1]} ;

Mesh 3 ;

Physical Surface(-1) = {myExtrudedSurface[1]} ; // left face
Physical Surface(2) = myExtrudedVolume[0] ; // right face
Physical Surface(3) = lateralSides[] ; // lateral shell
Physical Volume(6) = myExtrudedVolume[1] ;

Save "waveguide3d_simple.msh" ;
