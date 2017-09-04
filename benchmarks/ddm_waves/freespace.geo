Include "freespace_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh

lc=LC;

Ddom = DGeo/N_DOM;
// iPoint = Ceil(xSource/Ddom); // source location
// iPoint = Ceil(xSource/Ddom) + Ceil((N_DOM-1)/2.+1); // source location
iPoint = Ceil((xSource-shiftX)/Ddom); // source location
Printf("iPoint: %g",iPoint);

// For idom In {0:nDoms-1}
If(MPI_Size == 1) // sequential meshing
  start = 0;
  end = N_DOM-1;
EndIf
If(MPI_Size > 1) // parallel meshing
  start = MPI_Rank;
  end = MPI_Rank;
EndIf

For i In {start+1:end+1}
  Delete Model;

  If (i!=iPoint)

    Point(1) = {(i-1)*Ddom+shiftX,-dGeo+shiftY,0,lc};
    Point(2) = {i*Ddom+shiftX,-dGeo+shiftY,0,lc};
    Point(3) = {i*Ddom+shiftX,0+shiftY,0,lc};
    Point(4) = {(i-1)*Ddom+shiftX,0+shiftY,0,lc};

    Point(7) = {i*Ddom+shiftX,ySource+0*shiftY,0,lc};
    Point(9) = {(i-1)*Ddom+shiftX,ySource+0*shiftY,0,lc};

    Point(52) = {(i)*Ddom+dBb+shiftX,-dGeo+shiftY,0,lc};
    Point(57) = {(i)*Ddom+dBb+shiftX,ySource+0*shiftY,0,lc};
    Point(53) = {(i)*Ddom+dBb+shiftX,0+shiftY,0,lc};

    Point(51) = {(i-1)*Ddom-dBb+shiftX,-dGeo+shiftY,0,lc};
    Point(59) = {(i-1)*Ddom-dBb+shiftX,ySource+0*shiftY,0,lc};
    Point(54) = {(i-1)*Ddom-dBb+shiftX,0+shiftY,0,lc};

    Line(10) = {1,2};
    Line(11) = {2,7};
    Line(12) = {7,3};
    Line(13) = {3,4};
    Line(14) = {4,9};
    Line(15) = {9,1};
    Line(16) = {7,9};

    Line(61) = {2,52};
    Line(62) = {52,57};
    Line(63) = {57,53};
    Line(64) = {53,3};
    Line(65) = {59,9};

    Line(75) = {4,54};
    Line(76) = {54,59};
    Line(77) = {59,51};
    Line(78) = {51,1};
    Line(79) = {7,57};

    Line Loop(40) = {10,11,16,15};
    Plane Surface(100) = {40};
    Line Loop(50) = {-16,12,13,14};
    Plane Surface(101) = {50};

    Line Loop(80) = {61,62,-79,-11};
    Plane Surface(104) = {80};
    Line Loop(85) = {79,63,64,-12};
    Plane Surface(105) = {85};
    Line Loop(90) = {65,-14,75,76};
    Plane Surface(106) = {90};
    Line Loop(95) = {78,-15,-65,77};
    Plane Surface(107) = {95};


    Transfinite Line{10,16,13} = (Ddom)/lc+1 Using Progression 1;
    Transfinite Line{77,15,11,62} = (dGeo+ySource-shiftY)/lc+1 Using Progression 1;
    Transfinite Line{76,14,12,63} = (-ySource+shiftY)/lc+1 Using Progression 1;
    Transfinite Line{78,65,75,61,79,64} = (nLayersTr+nLayersPml+1) Using Progression 1;

    Transfinite Surface{100:101,104:107};
    Recombine Surface{100:101,104:107};

    iDom = i;

    Physical Point((iDom*1000+11)) = CombinedBoundary{ Line{14,15};};
    Physical Point((iDom*1000+21)) = CombinedBoundary{ Line{11,12};};

    Physical Line((iDom*1000+102)) = {78}; // bottom PML left
    Physical Line((iDom*1000+202)) = {10}; // bottom Omega
    Physical Line((iDom*1000+302)) = {61}; // bottom PML right
    Physical Line((iDom*1000+103)) = {75}; // top PML left
    Physical Line((iDom*1000+203)) = {13}; // top Omega
    Physical Line((iDom*1000+303)) = {64}; // top PML right

    Physical Line((iDom*1000+1)) = {76,77}; // left
    Physical Line((iDom*1000+4)) = {62,63}; // right

    Physical Line((iDom*1000+10)) = {14,15}; // interface with left PML
    Physical Line((iDom*1000+20)) = {11,12}; // interface with right PML

    Physical Surface((iDom*1000+200)) = {100:101};
    Physical Surface((iDom*1000+300)) = {104,105};
    Physical Surface((iDom*1000+100)) = {106,107};
  EndIf

  If (i == iPoint)
    Point(1) = {(i-1)*Ddom+shiftX,-dGeo+shiftY,0,lc};
    Point(2) = {i*Ddom+shiftX,-dGeo+shiftY,0,lc};
    Point(3) = {i*Ddom+shiftX,0+shiftY,0,lc};
    Point(4) = {(i-1)*Ddom+shiftX,0+shiftY,0,lc};

    Point(5) = {xSource,ySource,0,lc};

    Point(6) = {xSource,-dGeo+shiftY,0,lc};
    Point(7) = {i*Ddom+shiftX,ySource+0*shiftY,0,lc};
    Point(8) = {xSource,0+shiftY,0,lc};
    Point(9) = {(i-1)*Ddom+shiftX,ySource+0*shiftY,0,lc};

    Point(52) = {(i)*Ddom+dBb+shiftX,-dGeo+shiftY,0,lc};
    Point(57) = {(i)*Ddom+dBb+shiftX,ySource+0*shiftY,0,lc};
    Point(53) = {(i)*Ddom+dBb+shiftX,0+shiftY,0,lc};

    Point(51) = {(i-1)*Ddom-dBb+shiftX,-dGeo+shiftY,0,lc};
    Point(59) = {(i-1)*Ddom-dBb+shiftX,ySource+0*shiftY,0,lc};
    Point(54) = {(i-1)*Ddom-dBb+shiftX,0+shiftY,0,lc};

    Line(10) = {1,6};
    Line(11) = {6,2};
    Line(12) = {2,7};
    Line(13) = {7,3};
    Line(14) = {3,8};
    Line(15) = {8,4};
    Line(16) = {4,9};
    Line(17) = {9,1};
    Line(18) = {6,5};
    Line(19) = {7,5};
    Line(20) = {8,5};
    Line(21) = {9,5};

    Line(61) = {2,52};
    Line(62) = {52,57};
    Line(63) = {57,53};
    Line(64) = {53,3};
    Line(65) = {59,9};

    Line(75) = {4,54};
    Line(76) = {54,59};
    Line(77) = {59,51};
    Line(78) = {51,1};
    Line(79) = {7,57};

    Line Loop(40) = {10,18,-21,17};
    Plane Surface(100) = {40};
    Line Loop(50) = {11,12,19,-18};
    Plane Surface(101) = {50};
    Line Loop(60) = {-19,13,14,20};
    Plane Surface(102) = {60};
    Line Loop(70) = {21,-20,15,16};
    Plane Surface(103) = {70};

    Line Loop(80) = {61,62,-79,-12};
    Plane Surface(104) = {80};
    Line Loop(85) = {79,63,64,-13};
    Plane Surface(105) = {85};
    Line Loop(90) = {65,-16,75,76};
    Plane Surface(106) = {90};
    Line Loop(95) = {78,-17,-65,77};
    Plane Surface(107) = {95};

    Transfinite Line{10,15,21} = (xSource-(i-1)*Ddom-shiftX)/lc+1 Using Progression 1;
    Transfinite Line{11,14,19} = (i*Ddom-xSource+shiftX)/lc+1 Using Progression 1;
    Transfinite Line{12,17,18,77,62} = (dGeo+ySource-shiftY)/lc+1 Using Progression 1;
    Transfinite Line{13,16,20,76,63} = (-ySource+shiftY)/lc+1 Using Progression 1;

    // Transfinite Line{78,65,75,61,79,64} = (dBb)/lc+1 Using Progression 1;
    Transfinite Line{78,65,75,61,79,64} = (nLayersTr+nLayersPml+1) Using Progression 1;

    Transfinite Surface{100:107};
    Recombine Surface{100:107};

    iDom = i;

    Physical Point(1) = {5};

    Physical Point((iDom*1000+11)) = CombinedBoundary{ Line{16,17};};
    Physical Point((iDom*1000+21)) = CombinedBoundary{ Line{12,13};};

    Physical Line((iDom*1000+102)) = {78}; // bottom PML left
    Physical Line((iDom*1000+202)) = {10,11}; // bottom Omega
    Physical Line((iDom*1000+302)) = {61}; // bottom PML right
    Physical Line((iDom*1000+103)) = {75}; // top PML left
    Physical Line((iDom*1000+203)) = {15,14}; // top Omega
    Physical Line((iDom*1000+303)) = {64}; // top PML right
    Physical Line((iDom*1000+1)) = {76,77}; // left
    Physical Line((iDom*1000+4)) = {62,63}; // right

    Physical Line((iDom*1000+10)) = {16,17}; // interface with left PML
    Physical Line((iDom*1000+20)) = {12,13}; // interface with right PML

    Physical Surface((iDom*1000+200)) = {100:103};
    Physical Surface((iDom*1000+300)) = {104,105};
    Physical Surface((iDom*1000+100)) = {106,107};
  EndIf

  idom = i-1;
  // Save Sprintf("marmousi_mshcut%g.msh", i-1);
  If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
    Printf("Meshing waveguide subdomain %g...", idom);
    Mesh 2 ;
    CreateDir Str(DIR);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", idom));
    Printf("Done.");
  EndIf

EndFor

BoundingBox {0+shiftX, DGeo+shiftX, -dGeo+shiftY, 0+shiftY, 0, 0};
