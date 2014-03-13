Include "waveguide3d_data.geo";

Solver.AutoMesh = 0;

If(MPI_Size == 1) // sequential meshing
  start = 0;
  end = N_DOM-1;
EndIf
If(MPI_Size > 1) // parallel meshing
  start = MPI_Rank;
  end = MPI_Rank;
EndIf

For idom In {start:end}

  Printf("Meshing waveguide subdomain %g...", idom);

  dx = (DX / N_DOM);
  x = idom * dx;

  Delete Model;
  Point(1) = {x, 0., 0., LC} ;
  myExtrudedLine[] = Extrude {0, DY, 0} {Point{1} ; } ;
  myExtrudedSurface[] = Extrude {0, 0, DZ} {Line{myExtrudedLine[1]} ; } ;
  myExtrudedVolume[] = Extrude {dx, 0, 0} {Surface{myExtrudedSurface[1]} ; };

  Transfinite Surface "*" ;
  Recombine Surface "*" ;
  Transfinite Volume "*" ;

  If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
    Mesh 3 ;
  EndIf

  left[] = myExtrudedSurface[1] ;
  right[] = myExtrudedVolume[0] ;
  lateral[] = myExtrudedVolume[{2:5}] ;
  volume[] = myExtrudedVolume[1] ;

  Physical Volume ( 6000 + idom + 1 ) = volume[]; // omega
  Physical Surface (3000 + idom + 1) = lateral[]; // gammad0

  If (idom == 0)
    Physical Surface (1000*(idom+5)) = right[]; // sigma1
    Physical Surface (1000 + idom + 1) = left[]; // gammad
  EndIf
  If (idom == N_DOM-1)
    Physical Surface (1000*(idom+4)) = left[]; // sigma0
    Physical Surface (2000 + idom +1) = right[];  // gammainf
  EndIf
  If (idom >= 1 && idom < N_DOM-1)
    Physical Surface (1000*(idom+4)) = left[]; //sigma0
    Physical Surface (1000*(idom+5)) = right[]; //sigma1
  EndIf

  CreateDir Str(DIR);
  Save StrCat(MSH_NAME, Sprintf("%g.msh", idom)) ;

  Printf("Done.");

EndFor

BoundingBox {0, DX, 0, DY, 0, DZ};
