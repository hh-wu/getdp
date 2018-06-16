Include "waveguide2d_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh

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
  //NewModel;
  Delete Model;

  Point(1) = {i*dDom, 0, 0., LC};
  myExtrudedLine[] = Extrude {0, DY, 0} {
    Point{1}; Layers{DY/LC};
  };
  myExtrudedSurface[] = Extrude {dDom, 0, 0} {
    Line{myExtrudedLine[1]}; Layers{dDom/LC}; Recombine;
  };
  lateralSides[] = {};
  For iii In {2:3}
    lateralSides += myExtrudedSurface[iii];
  EndFor
  pmlLeft[] = Extrude {-dBb, 0, 0} {
    Line{myExtrudedLine[1]}; Layers{dBb/LC}; Recombine;
  };
  pmlRight[] = Extrude {dBb, 0, 0} {
    Line{myExtrudedSurface[0]}; Layers{dBb/LC}; Recombine;
  };

  pmlLeftSides[] = {};
  For iii In {2:3}
    pmlLeftSides += pmlLeft[iii];
  EndFor

  pmlRightSides[] = {};
  For iii In {2:3}
    pmlRightSides += pmlRight[iii];
  EndFor

  Physical Line(-((i+1)*1000+10)) = myExtrudedLine[1]; // left face
  Physical Line(((i+1)*1000+20)) = myExtrudedSurface[0]; // right face
  Physical Line(-((i+1)*1000+202)) = lateralSides[]; // lateral shell
  Physical Surface(((i+1)*1000+200)) = myExtrudedSurface[1];

  Physical Line(-((i+1)*1000+1)) = pmlLeft[0]; // left face
  Physical Line(((i+1)*1000+102)) = pmlLeftSides[]; // lateral shell
  Physical Surface(((i+1)*1000+100)) = pmlLeft[1];

  Physical Line(((i+1)*1000+4)) = pmlRight[0]; // right face
  Physical Line(-((i+1)*1000+302)) = pmlRightSides[]; // lateral shell
  Physical Surface(((i+1)*1000+300)) = pmlRight[1];

  If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
    Printf("Meshing waveguide subdomain %g...", i);
    Mesh 2;
    CreateDir Str(DIR);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", i));
    Printf("Done.");
  EndIf

EndFor

BoundingBox {0, DX, 0, DY, 0, DZ};
