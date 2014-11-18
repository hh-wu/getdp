Include "params3d_PML.geo";

LC = lc;


Point(1) = {0., 0., 0., LC} ;
myExtrudedLine[] = Extrude {0, dy, 0} {Point{1} ; } ;
myExtrudedSurface[] = Extrude {0, 0, dz} {Line{myExtrudedLine[1]} ; } ;
myExtrudedVolume[] = Extrude {D, 0, 0} {Surface{myExtrudedSurface[1]} ; };

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

Mesh 3;

Physical Surface(-(1)) = {myExtrudedSurface[1]} ; // left face
Physical Surface(4) = myExtrudedVolume[0] ; // right face
Physical Surface(2) = lateralSides[] ; // lateral shell
Physical Volume(6) = myExtrudedVolume[1] ;

Save "waveguide_mshcut.msh";

For idom In {0:nDoms-1}

Delete Model;

Point(1) = {idom*dDom, 0., 0., LC} ;
myExtrudedLine[] = Extrude {0, dy, 0} {Point{1} ; } ;
myExtrudedSurface[] = Extrude {0, 0, dz} {Line{myExtrudedLine[1]} ; } ;
myExtrudedVolume[] = Extrude {dDom, 0, 0} {Surface{myExtrudedSurface[1]} ; };


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


pmlLeft[] = Extrude {-dBb, 0, 0} {Surface{myExtrudedSurface[1]} ; Layers{ (dBb/LC) } ; Recombine ; };
pmlRight[] = Extrude {dBb, 0, 0} {Surface{myExtrudedVolume[0]} ; Layers{ (dBb/LC) } ; Recombine ; };




pmlLeftSides[] = {} ;
For i In {2:5}
  pmlLeftSides += pmlLeft[i] ;
  // Transfinite Surface{pmlLeft[i]} ;
  // Recombine Surface {pmlLeft[i]} ;
EndFor
// Transfinite Surface{pmlLeft[0]} ;
// Recombine Surface {pmlLeft[0]} ;
// Transfinite Volume{pmlLeft[1]} ;

pmlRightSides[] = {} ;
For i In {2:5}
  pmlRightSides += pmlRight[i] ;
  // Transfinite Surface{pmlRight[i]} ;
  // Recombine Surface {pmlRight[i]} ;
EndFor
// Transfinite Surface{pmlRight[0]} ;
// Recombine Surface {pmlRight[0]} ;
Transfinite Volume{pmlRight[1]} ;


Mesh 3 ;

Physical Surface(-((idom+1)*1000+10)) = myExtrudedSurface[1] ; // left face
Physical Surface(((idom+1)*1000+20)) = myExtrudedVolume[0] ; // right face
Physical Surface(((idom+1)*1000+202)) = lateralSides[] ; // lateral shell
Physical Volume(((idom+1)*1000+200)) = myExtrudedVolume[1] ;

Physical Surface(-((idom+1)*1000+1)) = pmlLeft[0] ; // left face
Physical Surface(-((idom+1)*1000+102)) = pmlLeftSides[] ; // lateral shell
Physical Volume(((idom+1)*1000+100)) = pmlLeft[1] ;

Physical Surface(((idom+1)*1000+4)) = pmlRight[0] ; // right face
Physical Surface(((idom+1)*1000+302)) = pmlRightSides[] ; // lateral shell
Physical Volume(((idom+1)*1000+300)) = pmlRight[1] ;



Save Sprintf("waveguide_mshcut%g.msh", idom) ;

EndFor
