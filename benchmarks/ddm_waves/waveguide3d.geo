Include "waveguide3d_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh

// For ii In {0:nDoms-1}
If(MPI_Size == 1) // sequential meshing
  start = 0;
  end = N_DOM-1;
EndIf
If(MPI_Size > 1) // parallel meshing
  start = MPI_Rank;
  end = MPI_Rank;
EndIf

For ii In {start:end}

  i = ii+1;
  x = ii * dx;

  //NewModel;
  Delete Model;

  Point(1) = {ii*dx*Cos(theta), ii*dx*Sin(theta), 0., LC} ;
  myExtrudedLine[] = Extrude {-DY*Sin(theta), DY*Cos(theta), 0} {Point{1} ; Layers{ DY/LC };} ;
  myExtrudedSurface[] = Extrude {0, 0, DZ} {
    Line{myExtrudedLine[1]} ; Layers{ DZ/LC }; Recombine;
  };
  If ( (MPI_Size == 1 || MPI_Rank == ii) && nLayersDom < 5 )
    Printf("WARNING: less than 5 layers (%g) in domain %g", nLayersDom, (ii));
  EndIf
  myExtrudedVolume[] = Extrude {dx*Cos(theta), dx*Sin(theta), 0} {
    Surface{myExtrudedSurface[1]} ; Layers{ nLayersDom }; Recombine;
  };

  lateralSides[] = {} ;
  For iii In {2:5}
    lateralSides += myExtrudedVolume[iii] ;
  EndFor

  pmlLeft[] = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {
    Surface{myExtrudedSurface[1]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
  };
  pmlRight[] = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {
    Surface{myExtrudedVolume[0]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
  };

  pmlLeftSides[] = {} ;
  For iii In {2:5}
    pmlLeftSides += pmlLeft[iii] ;
  EndFor

  pmlRightSides[] = {} ;
  For iii In {2:5}
    pmlRightSides += pmlRight[iii] ;
  EndFor
  Transfinite Volume{pmlRight[1]} ;

  Physical Surface(-((i+1)*1000+10)) = {myExtrudedSurface[1]} ; // left face
  Physical Surface(((i+1)*1000+20)) = myExtrudedVolume[0] ; // right face
  Physical Surface(((i+1)*1000+202)) = lateralSides[] ; // lateral shell
  Physical Volume(((i+1)*1000+200)) = myExtrudedVolume[1] ;

  Physical Surface(-((i+1)*1000+1)) = {pmlLeft[0]} ; // left face
  Physical Surface(-((i+1)*1000+102)) = pmlLeftSides[] ; // lateral shell
  Physical Volume(((i+1)*1000+100)) = pmlLeft[1] ;

  Physical Surface(((i+1)*1000+4)) = pmlRight[0] ; // right face
  Physical Surface(((i+1)*1000+302)) = pmlRightSides[] ; // lateral shell
  Physical Volume(((i+1)*1000+300)) = pmlRight[1] ;

  If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
    Printf("Meshing waveguide subdomain %g...", i);
    Mesh 3 ;
    CreateDir Str(DIR);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", i));
    Printf("Done.");
  EndIf

EndFor

BoundingBox {0, DX, 0, DY, 0, DZ};
