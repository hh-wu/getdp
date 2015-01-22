// Geometry for a 3D 'cobra'- or 'S' shaped waveguide,
// following the JINA1998 specifications.
// Contributed to by Alexandre Vion - 2013

Include "params_JINA1998.geo";

N_DOM = 0;
For i In {0:PARTS-1}
N_DOM += nDomList[i];
EndFor

lc = LC;

p = newp ; lp[] += p ; Point(p) = {shiftX, d1+shiftY, 0, lc} ;
p = newp ; lp[] += p ; Point(p) = {shiftX, 0.+shiftY, 0, lc} ;
p = newp ; lp[] += p ; Point(p) = {shiftX, 0.+shiftY, d2, lc} ;
p = newp ; lp[] += p ; Point(p) = {shiftX, d1+shiftY, d2, lc} ;

l = newl ; ll[] += l ; Line(l) = {lp[0], lp[1]};
l = newl ; ll[] += l ; Line(l) = {lp[1], lp[2]};
l = newl ; ll[] += l ; Line(l) = {lp[2], lp[3]};
l = newl ; ll[] += l ; Line(l) = {lp[3], lp[0]};

lo = newll ; llo[] += lo ; Line Loop(lo) = {ll[]};
s = news ; ls[] += s ; Plane Surface(s) = {lo};

Transfinite Line{ll[{0,2}]} = d1/lc+1 Using Progression 1;
Transfinite Line{ll[{1,3}]} = d2/lc+1 Using Progression 1;
Transfinite Surface{s}; Recombine Surface{s};

theta = 0; // theta is the cumulative angle

For i In {0:nDomList[0]-1} // straight part on the left
  ext[] = Extrude{D1/nDomList[0],0,0}{ Surface{ls[i]}; Layers{D1/nDomList[0]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];

  idom = i;
  pmlLeft~{idom} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {Surface{ls[i]} ; Layers{ (dBb/LC) } ; Recombine ; };
  pmlRight~{idom} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {Surface{ls[i+1]} ; Layers{ (dBb/LC) } ; Recombine ; };
EndFor

If (PARTS > 1)
n = nDomList[0];
For i In {n:n+nDomList[1]-1} // first bend
  ext[] = Extrude{{0,0,1}, {shiftX+D1,R+d1+shiftY,0}, alpha/nDomList[1]}{ Surface{ls[i]}; Layers{R*alpha/nDomList[1]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];

  idom =i;
  pmlLeft~{idom} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {Surface{ls[i]} ; Layers{ (dBb/LC) } ; Recombine ; };
  theta += alpha/nDomList[1];
  pmlRight~{idom} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {Surface{ls[i+1]} ; Layers{ (dBb/LC) } ; Recombine ; };
EndFor
EndIf

If (PARTS > 2)
If (D2 > 0)
n += nDomList[1];
For i In {n:n+nDomList[2]-1} // straight part in the middle
  ext[] = Extrude{D2/nDomList[2]*Cos(alpha), D2/nDomList[2]*Sin(alpha), 0}{ Surface{ls[i]}; Layers{D2/nDomList[2]/lc-1}; Recombine; }; // reduce the #layers by 1 for a more balanced mesh ?
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];

  idom =i;
  pmlLeft~{idom} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {Surface{ls[i]} ; Layers{ (dBb/LC) } ; Recombine ; };
  pmlRight~{idom} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {Surface{ls[i+1]} ; Layers{ (dBb/LC) } ; Recombine ; };
EndFor
EndIf
EndIf

If (PARTS > 3)
n += nDomList[2];
For i In {n:n+nDomList[3]-1} // second bend
  ext[] = Extrude{{0,0,1}, {shiftX+D1+(R+d1)*Sin[alpha]+D2*Cos(alpha)+R*Sin[alpha], shiftY+(R+d1)*(1-Cos[alpha])+D2*Sin[alpha]+R*(1-Cos[alpha])-R, 0}, -alpha/nDomList[3]}{ Surface{ls[i]}; Layers{R*alpha/nDomList[3]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];

  idom =i;
  pmlLeft~{idom} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {Surface{ls[i]} ; Layers{ (dBb/LC) } ; Recombine ; };
  theta -= alpha/nDomList[1];
  pmlRight~{idom} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {Surface{ls[i+1]} ; Layers{ (dBb/LC) } ; Recombine ; };
EndFor
EndIf

If (PARTS > 4)
n += nDomList[3]; // straight part on the right
For i In {n:n+nDomList[4]-1}
  ext[] = Extrude{D3/nDomList[4],0,0}{ Surface{ls[i]}; Layers{D3/nDomList[4]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];

  idom =i;
  pmlLeft~{idom} = Extrude {-dBb*Cos(theta), -dBb*Sin(theta), 0} {Surface{ls[i]} ; Layers{ (dBb/LC) } ; Recombine ; };
  pmlRight~{idom} = Extrude {dBb*Cos(theta), dBb*Sin(theta), 0} {Surface{ls[i+1]} ; Layers{ (dBb/LC) } ; Recombine ; };
EndFor
EndIf

Mesh 2;

n += nDomList[4];
For i In {0:n-1}
  Delete Physicals;
  Mesh 1; // hack to remove any existing 3d mesh (that otherwise causes an error)
  idom = i;

  Physical Volume(((idom+1)*1000+200)) = lv[i];
  Physical Volume(((idom+1)*1000+100)) = pmlLeft~{idom}[1];
  Physical Volume(((idom+1)*1000+300)) = pmlRight~{idom}[1];

  Physical Surface(((idom+1)*1000+10)) = ls[i];
  Physical Surface(((idom+1)*1000+20)) = -ls[i+1];

  Physical Surface(((idom+1)*1000+1)) = pmlLeft~{idom}[0];
  Physical Surface(((idom+1)*1000+4)) = -pmlRight~{idom}[0];

  myList2[] = -lSides[{(idom*4):(idom*4+3)}];
  myList1[] = pmlLeft~{idom}[2];
  myList1[] += pmlLeft~{idom}[3];
  myList1[] += pmlLeft~{idom}[4];
  myList1[] += pmlLeft~{idom}[5];
  myList3[] = -pmlRight~{idom}[2];
  myList3[] += -pmlRight~{idom}[3];
  myList3[] += -pmlRight~{idom}[4];
  myList3[] += -pmlRight~{idom}[5];

  Physical Surface(((idom+1)*1000+202)) = {myList2[]};
  Physical Surface(((idom+1)*1000+102)) = {myList1[]};
  Physical Surface(((idom+1)*1000+302)) = {myList3[]};

  Mesh 3;


// Plugin(MeshSubEntities).InputDimension = 2;
// Plugin(MeshSubEntities).InputPhysicalGroup = ((idom+1)*1000+10);
// Plugin(MeshSubEntities).OuputDimension = 0;
// Plugin(MeshSubEntities).OuputPhysicalGroup = ((idom+1)*1000+17);
// Plugin(MeshSubEntities).Run;

// Plugin(MeshSubEntities).InputDimension = 2;
// Plugin(MeshSubEntities).InputPhysicalGroup = ((idom+1)*1000+20);
// Plugin(MeshSubEntities).OuputDimension = 0;
// Plugin(MeshSubEntities).OuputPhysicalGroup = ((idom+1)*1000+27);
// Plugin(MeshSubEntities).Run;

  Save Sprintf("cobra%g.msh",i);
EndFor


Delete Physicals;

Physical Volume(6000) = {lv[]};
Physical Surface(2000) = -{lSides[]};
Physical Surface(1000) = {ls[0]};
Physical Surface(4000) = -{ls[#ls[]-1]};

Save "cobra.msh";
