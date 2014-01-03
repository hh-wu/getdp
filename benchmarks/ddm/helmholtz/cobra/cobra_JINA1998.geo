// Geometry for a 3D 'cobra'- or 'S' shaped waveguide,
// following the JINA1998 specifications.
// Contributed to by Alexandre Vion - 2013

Include "params_JINA1998.geo";

N_DOM = 0;
For i In {0:4}
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

For i In {0:nDomList[0]-1} // straight part on the left
ext[] = Extrude{D1/nDomList[0],0,0}{ Surface{ls[i]}; Layers{D1/nDomList[0]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];
EndFor

n = nDomList[0];
For i In {n:n+nDomList[1]-1} // first bend
  ext[] = Extrude{{0,0,1}, {shiftX+D1,R+shiftY,0}, alpha/nDomList[1]}{ Surface{ls[i]}; Layers{R*alpha/nDomList[1]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];
EndFor

If (D2 > 0)
n += nDomList[1];
For i In {n:n+nDomList[2]-1} // straight part in the middle
  ext[] = Extrude{D2/nDomList[2]*Cos(alpha), D2/nDomList[2]*Sin(alpha), 0}{ Surface{ls[i]}; Layers{D2/nDomList[2]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];
EndFor
EndIf

n += nDomList[2];
For i In {n:n+nDomList[3]-1} // second bend
  ext[] = Extrude{{0,0,1}, {2*R*Sin[alpha]+shiftX+D2*Cos(alpha)+D1, R-2*R*Cos[alpha]+shiftY+D2*Sin(alpha), 0}, -alpha/nDomList[3]}{ Surface{ls[i]}; Layers{R*alpha/nDomList[3]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];
EndFor

n += nDomList[3]; // straight part on the right
For i In {n:n+nDomList[4]-1}
  ext[] = Extrude{D3/nDomList[4],0,0}{ Surface{ls[i]}; Layers{D3/nDomList[4]/lc}; Recombine; };
  ls[] += ext[0];
  lv[] += ext[1];
  lSides[] += ext[{2:5}];
EndFor

Mesh 3;
Physical Volume(6000) = {lv[]};
Physical Surface(1000) = {ls[0]};
Physical Surface(-2000) = {ls[N_DOM]};
Physical Surface(-3000) = {lSides[]};

System "rm cobra*.msh";
Save "cobra_JINA1998.msh";

For i In {0:N_DOM-1}
  Delete Physicals;
  Physical Volume(6001+i) = lv[i];

  If (i == 0)
    Physical Surface(1001) = ls[i];
    Physical Surface(-(5+i)*1000) = ls[i+1];
  EndIf

  If (i > 0 && i < N_DOM-1)
    Physical Surface((5+i-1)*1000) = ls[i];
    Physical Surface(-(5+i)*1000) = ls[i+1];
  EndIf

  If (i == N_DOM-1)
    Physical Surface((5+i-1)*1000) = ls[i];
    Physical Surface(-(2001+i)) = ls[i+1];
  EndIf

  Physical Surface(-(3001+i)) = {lSides[{i*4:(i+1)*4-1}]};

  Save Sprintf("cobra%g.msh", i);
EndFor


