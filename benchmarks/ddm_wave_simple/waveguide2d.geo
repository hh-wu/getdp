Include "waveguide2d_data.geo";

For idom In {0:N_DOM-1}

Delete Model;

Point(1) = {idom*dDom*Cos(theta), idom*dDom*Sin(theta), 0., LC} ;
myExtrudedLine[] = Extrude {-DY*Sin(theta), DY*Cos(theta), 0} {Point{1} ; } ;
myExtrudedSurface[] = Extrude {dDom*Cos(theta), dDom*Sin(theta), 0} {Line{myExtrudedLine[1]} ; };

Transfinite Line{myExtrudedLine[1]} = DY/LC+1 Using Progression 1 ;
Transfinite Line{myExtrudedSurface[0]} = DY/LC+1 Using Progression 1 ;
// Recombine Surface {myExtrudedSurface[1]} ;

lateralSides[] = {} ;
For i In {2:3}
  lateralSides += myExtrudedSurface[i] ;
  Transfinite Line{myExtrudedSurface[i]} = dDom/LC+1 Using Progression 1 ;
EndFor
Transfinite Surface{myExtrudedSurface[1]} ;
Recombine Surface {myExtrudedSurface[1]} ;

pmlLeft[] = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {Line{myExtrudedLine[1]} ; Layers{ (dBb/LC) } ; Recombine ; };
pmlRight[] = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {Line{myExtrudedSurface[0]} ; Layers{ (dBb/LC) } ; Recombine ; };

pmlLeftSides[] = {} ;
For i In {2:3}
  pmlLeftSides += pmlLeft[i] ;
EndFor

pmlRightSides[] = {} ;
For i In {2:3}
  pmlRightSides += pmlRight[i] ;
EndFor

Physical Line(-((idom+1)*1000+10)) = {myExtrudedLine[1]} ; // left face
Physical Line(((idom+1)*1000+20)) = myExtrudedSurface[0] ; // right face
Physical Line(-((idom+1)*1000+202)) = lateralSides[] ; // lateral shell
Physical Surface(((idom+1)*1000+200)) = myExtrudedSurface[1] ;

Physical Line(-((idom+1)*1000+1)) = {pmlLeft[0]} ; // left face
Physical Line(((idom+1)*1000+102)) = pmlLeftSides[] ; // lateral shell
Physical Surface(((idom+1)*1000+100)) = pmlLeft[1] ;

Physical Line(((idom+1)*1000+4)) = pmlRight[0] ; // right face
Physical Line(-((idom+1)*1000+302)) = pmlRightSides[] ; // lateral shell
Physical Surface(((idom+1)*1000+300)) = pmlRight[1] ;

  If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
    Printf("Meshing waveguide subdomain %g...", idom);
    Mesh 2 ;
    CreateDir Str(DIR);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", idom));
    Printf("Done.");
  EndIf

EndFor
