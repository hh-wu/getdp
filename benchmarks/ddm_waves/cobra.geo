// Geometry for a 3D 'cobra'- or 'S' shaped waveguide,
// following the JINA1998 specifications.
// Contributed to by Alexandre Vion - 2013-2015

Include "cobra_data.geo";

Solver.AutoMesh = -1; // the geometry creates the mesh

// For ii In {0:nDoms-1}
If(MPI_Size == 1) // sequential meshing
  start = 0;
  end = N_DOM-1;
EndIf
If(MPI_Size > 1) // parallel meshing
  start = MPI_Rank;
  end = MPI_Rank;
EndIf

p = newp ; lp[] += p ; Point(p) = {shiftX, d1+shiftY, 0, LC} ;
p = newp ; lp[] += p ; Point(p) = {shiftX, 0.+shiftY, 0, LC} ;
p = newp ; lp[] += p ; Point(p) = {shiftX, 0.+shiftY, d2, LC} ;
p = newp ; lp[] += p ; Point(p) = {shiftX, d1+shiftY, d2, LC} ;

l = newl ; ll[] += l ; Line(l) = {lp[0], lp[1]};
l = newl ; ll[] += l ; Line(l) = {lp[1], lp[2]};
l = newl ; ll[] += l ; Line(l) = {lp[2], lp[3]};
l = newl ; ll[] += l ; Line(l) = {lp[3], lp[0]};

lo = newll ; llo[] += lo ; Line Loop(lo) = {ll[]};
s = news ; ls[] += s ; Plane Surface(s) = {lo};

Transfinite Line{ll[{0,2}]} = d1/LC+1 Using Progression 1;
Transfinite Line{ll[{1,3}]} = d2/LC+1 Using Progression 1;
Transfinite Surface{s}; Recombine Surface{s};

theta = 0; // theta is the cumulative angle

For ii In {0:nDomList[0]-1} // straight part on the left
  i = ii+1;
  nLayersDom = Ceil(D1/nDomList[0]/(LC*(1.+1e-6)));
  If ( (MPI_Size == 1 || MPI_Rank == ii) && nLayersDom < 5 )
    Printf("WARNING: less than 5 layers (%g) in domain %g", nLayersDom, (i));
  EndIf
  ext[] = Extrude{D1/nDomList[0],0,0}{
    Surface{ls[ii]}; Layers{ nLayersDom }; Recombine;
  };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];

  pmlLeft~{i} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {
    Surface{ls[ii]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
  };
  pmlRight~{i} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {
    Surface{ls[ii+1]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
  };
EndFor

If (PARTS > 1)
  n = nDomList[0];
  For ii In {n:n+nDomList[1]-1} // first bend
    i = ii+1;
    nLayersDom = Ceil(R*alpha/nDomList[1]/LC); // perturbation of LC to help rounding
    If ( (MPI_Size == 1 || MPI_Rank == ii) && nLayersDom < 5 )
      Printf("WARNING: less than 5 layers (%g) in domain %g", nLayersDom, (i));
    EndIf
    ext[] = Extrude{{0,0,1}, {shiftX+D1,R+d1+shiftY,0}, alpha/nDomList[1]}{
      Surface{ls[ii]}; Layers{ nLayersDom }; Recombine;
    };
    ls[] += ext[0];
    lv[] += ext[1];
    lSides[] += ext[{2:5}];

    pmlLeft~{i} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {
      Surface{ls[ii]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
    };
    theta += alpha/nDomList[1];
    pmlRight~{i} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {
      Surface{ls[ii+1]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
    };
  EndFor
EndIf

If (PARTS > 2)
  If (D2 > 0)
    n += nDomList[1];
    For ii In {n:n+nDomList[2]-1} // straight part in the middle
      i = ii+1;
      nLayersDom = Ceil(D2/nDomList[2]/(LC*(1.+1e-6))); // perturbation of LC to help rounding
      If ( (MPI_Size == 1 || MPI_Rank == ii) && nLayersDom < 5 )
	      Printf("WARNING: less than 5 layers (%g) in domain %g", nLayersDom, (i));
      EndIf
      ext[] = Extrude{D2/nDomList[2]*Cos(alpha), D2/nDomList[2]*Sin(alpha), 0}{
        Surface{ls[ii]}; Layers{ nLayersDom }; Recombine;
      };
      ls[] += ext[0];
      lv[] += ext[1];
      lSides[] += ext[{2:5}];

      pmlLeft~{i} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {
        Surface{ls[ii]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
      };
      pmlRight~{i} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {
        Surface{ls[ii+1]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
      };
    EndFor
  EndIf
EndIf

If (PARTS > 3)
  n += nDomList[2];
  For ii In {n:n+nDomList[3]-1} // second bend
    i = ii+1;
    nLayersDom = Ceil(R*alpha/nDomList[3]/LC);
    If ( (MPI_Size == 1 || MPI_Rank == ii) && nLayersDom < 5 )
      Printf("WARNING: less than 5 layers (%g) in domain %g", nLayersDom, (i));
    EndIf
    ext[] = Extrude{{0,0,1}, {shiftX+D1+(R+d1)*Sin[alpha]+D2*Cos(alpha)+R*Sin[alpha],
        shiftY+(R+d1)*(1-Cos[alpha])+D2*Sin[alpha]+R*(1-Cos[alpha])-R, 0},
      -alpha/nDomList[3]}{
      Surface{ls[ii]}; Layers{ nLayersDom }; Recombine;
    };
    ls[] += ext[0];
    lv[] += ext[1];
    lSides[] += ext[{2:5}];

    pmlLeft~{i} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {
      Surface{ls[ii]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
    };
    theta -= alpha/nDomList[1];
    pmlRight~{i} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {
      Surface{ls[ii+1]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
    };
  EndFor
EndIf

If (PARTS > 4)
  n += nDomList[3]; // straight part on the right
  For ii In {n:n+nDomList[4]-1}
    i = ii+1;
    nLayersDom = Ceil(D3/nDomList[4]/(LC*(1.+1e-6))); // perturbation of LC to help rounding
    If ( (MPI_Size == 1 || MPI_Rank == ii) && nLayersDom < 5 )
      Printf("WARNING: less than 5 layers (%g) in domain %g", nLayersDom, (i));
    EndIf
    ext[] = Extrude{D3/nDomList[4],0,0}{
      Surface{ls[ii]}; Layers{ nLayersDom }; Recombine;
    };
    ls[] += ext[0];
    lv[] += ext[1];
    lSides[] += ext[{2:5}];

    pmlLeft~{i} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {
      Surface{ls[ii]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
    };
    pmlRight~{i} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {
      Surface{ls[ii+1]} ; Layers{ (nLayersTr+nLayersPml) } ; Recombine ;
    };
  EndFor
EndIf
n += nDomList[4];

If (MPI_Size == 1 && StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
  Printf("Meshing all subdomains on 1 CPU...");
  Mesh 3 ;
  Printf("Done.");
EndIf

// For iiMPI In {0:n-1}
For iiMPI In {start:end}
  Delete Physicals;
  i = iiMPI+1;

  If(MPI_Size > 1) // parallel meshing
    For ii In {0:N_DOM-1}
      If (ii != iiMPI)
    	Delete{
    	  Volume{lv[ii]};
    	  Volume{pmlLeft~{ii}[1]};
    	  Volume{pmlRight~{ii}[1]};
    	  Surface{pmlLeft~{i}[0]};
    	  Surface{pmlRight~{i}[0]};
    	  Surface{pmlLeft~{i}[2]};
    	  Surface{pmlLeft~{i}[3]};
    	  Surface{pmlLeft~{i}[4]};
    	  Surface{pmlLeft~{i}[5]};
    	  Surface{pmlRight~{i}[2]};
    	  Surface{pmlRight~{i}[3]};
    	  Surface{pmlRight~{i}[4]};
    	  Surface{pmlRight~{i}[5]};
    	  Surface{lSides[{(ii*4)}]};
    	  Surface{lSides[{(ii*4+1)}]};
    	  Surface{lSides[{(ii*4+2)}]};
    	  Surface{lSides[{(ii*4)+3}]};
    	}
      EndIf
    EndFor
    For ii In {0:N_DOM}
      If ( (ii < i) && (ii > i+1) )
    	Delete{
    	  Surface{ls[ii]};
    	}
      EndIf
    EndFor
  EndIf

  Physical Volume(((i+1)*1000+200)) = lv[iiMPI];
  Physical Volume(((i+1)*1000+100)) = pmlLeft~{i}[1];
  Physical Volume(((i+1)*1000+300)) = pmlRight~{i}[1];

  Physical Surface(((i+1)*1000+10)) = ls[iiMPI];
  Physical Surface(((i+1)*1000+20)) = -ls[iiMPI+1];

  Physical Surface(((i+1)*1000+1)) = pmlLeft~{i}[0];
  Physical Surface(((i+1)*1000+4)) = -pmlRight~{i}[0];

  myList2[] = -lSides[{(iiMPI*4):(iiMPI*4+3)}];
  myList1[] = pmlLeft~{i}[2];
  myList1[] += pmlLeft~{i}[3];
  myList1[] += pmlLeft~{i}[4];
  myList1[] += pmlLeft~{i}[5];
  myList3[] = -pmlRight~{i}[2];
  myList3[] += -pmlRight~{i}[3];
  myList3[] += -pmlRight~{i}[4];
  myList3[] += -pmlRight~{i}[5];

  Physical Surface(((i+1)*1000+202)) = {myList2[]};
  Physical Surface(((i+1)*1000+102)) = {myList1[]};
  Physical Surface(((i+1)*1000+302)) = {myList3[]};

  If (MPI_Size > 1 && StrCmp(OnelabAction, "check"))
    Printf("Meshing waveguide subdomain %g...", i);
    Mesh 3 ;
    Printf("Done.");
  EndIf

  If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
    CreateDir Str(DIR);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", i));
  EndIf

EndFor

BoundingBox {-0.1, 0.6, -0.2, 0.2, -0.2, 0.2};

// // Full domain
// Delete Physicals;

// Physical Volume(6000) = {lv[]};
// Physical Surface(2000) = -{lSides[]};
// Physical Surface(1000) = {ls[0]};
// Physical Surface(4000) = -{ls[#ls[]-1]};

// Save "cobra.msh";
