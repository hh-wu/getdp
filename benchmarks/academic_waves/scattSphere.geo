//========================================================
// Benchmark "scattering of an EM wave by a sphere"
// File: GMSH geometry
//========================================================

Include "scattSphere.dat";

Mesh.CharacteristicLengthMax = lc;
Mesh.CharacteristicLengthFactor = 1;
Mesh.Optimize = 1;

c0 = newp ; Point(newp) = {0,0,0};


// SPHERE

ps0[]+=newp ; Point(newp) = { R0,  0,  0};
ps0[]+=newp ; Point(newp) = {  0, R0,  0};
ps0[]+=newp ; Point(newp) = {-R0,  0,  0};
ps0[]+=newp ; Point(newp) = {  0,-R0,  0};
ps0[]+=newp ; Point(newp) = {  0,  0, R0};
ps0[]+=newp ; Point(newp) = {  0,  0,-R0};

lsp[]+=newl ; Circle(newl) = {ps0[0],c0,ps0[1]};
lsp[]+=newl ; Circle(newl) = {ps0[1],c0,ps0[2]};
lsp[]+=newl ; Circle(newl) = {ps0[2],c0,ps0[3]};
lsp[]+=newl ; Circle(newl) = {ps0[3],c0,ps0[0]};

lsp[]+=newl ; Circle(newl) = {ps0[0],c0,ps0[4]};
lsp[]+=newl ; Circle(newl) = {ps0[1],c0,ps0[4]};
lsp[]+=newl ; Circle(newl) = {ps0[2],c0,ps0[4]};
lsp[]+=newl ; Circle(newl) = {ps0[3],c0,ps0[4]};

lsp[]+=newl ; Circle(newl) = {ps0[0],c0,ps0[5]};
lsp[]+=newl ; Circle(newl) = {ps0[1],c0,ps0[5]};
lsp[]+=newl ; Circle(newl) = {ps0[2],c0,ps0[5]};
lsp[]+=newl ; Circle(newl) = {ps0[3],c0,ps0[5]};

Line Loop(newll) = {lsp[0],lsp[5],-lsp[4]};
sph0[] += news; Ruled Surface (news) = {newll-1};
Line Loop(newll) = {lsp[1],lsp[6],-lsp[5]};
sph0[] += news; Ruled Surface (news) = {newll-1};
Line Loop(newll) = {lsp[2],lsp[7],-lsp[6]};
sph0[] += news; Ruled Surface (news) = {newll-1};
Line Loop(newll) = {lsp[3],lsp[4],-lsp[7]};
sph0[] += news; Ruled Surface (news) = {newll-1};

Line Loop(newll) = {lsp[0],lsp[9],-lsp[8]};
sph0[] += news; Ruled Surface (news) = {newll-1};
Line Loop(newll) = {lsp[1],lsp[10],-lsp[9]};
sph0[] += news; Ruled Surface (news) = {newll-1};
Line Loop(newll) = {lsp[2],lsp[11],-lsp[10]};
sph0[] += news; Ruled Surface (news) = {newll-1};
Line Loop(newll) = {lsp[3],lsp[8],-lsp[11]};
sph0[] += news; Ruled Surface (news) = {newll-1};

surLlSph0 = newsl ; Surface Loop (surLlSph0) = sph0[];
volSph0 = newv ; Volume(newv) = {surLlSph0};


// DOMAIN + PML

// Points

ptX = {-ax-lpml, -ax, ax, ax+lpml};
ptY = {-ay-lpml, -ay, ay, ay+lpml};
ptZ = {-az-lpml, -az, az, az+lpml};

pIter=0;
For i In {0:3}
  For j In {0:3}
    For k In {0:3}
      p[pIter]=newp; Point(p[pIter]) = {ptX[i], ptY[j], ptZ[k]};
      pIter++;
    EndFor
  EndFor
EndFor

// Lines

lxIter=0;
lyIter=0;
lzIter=0;
For i In {0:2}
  For j In {0:3}
    For k In {0:3}
      pNum1 = k + 4*j + 4*4*i;
      pNum2 = pNum1+16;
      lx[lxIter]=newl; Line(lx[lxIter]) = {p[pNum1], p[pNum2]};
      lxIter++;
    EndFor
  EndFor
EndFor
For i In {0:3}
  For j In {0:2}
    For k In {0:3}
      pNum1 = k + 4*j + 4*4*i;
      pNum2 = pNum1+4;
      ly[lyIter]=newl; Line(ly[lyIter]) = {p[pNum1], p[pNum2]};
      lyIter++;
    EndFor
  EndFor
EndFor
For i In {0:3}
  For j In {0:3}
    For k In {0:2}
      pNum1 = k + 4*j + 4*4*i;
      pNum2 = pNum1+1;
      lz[lzIter]=newl; Line(lz[lzIter]) = {p[pNum1], p[pNum2]};
      lzIter++;
    EndFor
  EndFor
EndFor

// Surfaces

sxIter=0;
syIter=0;
szIter=0;
For i In {0:3}
  For j In {0:2}
    For k In {0:2}
      lyNum1 = k + 4*j + 3*4*i;
      lzNum1 = k + 3*j + 3*4*i;
      lyNum2 = lyNum1 + 1;
      lzNum2 = lzNum1 + 3;
      sxLL=newll; Line Loop(sxLL) = {-lz[lzNum1], ly[lyNum1], lz[lzNum2], -ly[lyNum2]};
      sx[sxIter] = news; Plane Surface(sx[sxIter]) = {sxLL};
      sxIter++;
    EndFor
  EndFor
EndFor
For i In {0:2}
  For j In {0:3}
    For k In {0:2}
      lxNum1 = k + 4*j + 4*4*i;
      lzNum1 = k + 3*j + 3*4*i;
      lxNum2 = lxNum1 + 1;
      lzNum2 = lzNum1 + 12;
      syLL=newll; Line Loop(syLL) = {-lx[lxNum1], lz[lzNum1], lx[lxNum2], -lz[lzNum2]};
      sy[syIter] = news; Plane Surface(sy[syIter]) = {syLL};
      syIter++;
    EndFor
  EndFor
EndFor
For i In {0:2}
  For j In {0:2}
    For k In {0:3}
      lxNum1 = k + 4*j + 4*4*i;
      lyNum1 = k + 4*j + 3*4*i;
      lxNum2 = lxNum1 + 4;
      lyNum2 = lyNum1 + 12;
      szLL=newll; Line Loop(szLL) = {-ly[lyNum1], lx[lxNum1], ly[lyNum2], -lx[lxNum2]};
      sz[szIter] = news; Plane Surface(sz[szIter]) = {szLL};
      szIter++;
    EndFor
  EndFor
EndFor

// Volumes

vIter=0;
For i In {0:2}
  For j In {0:2}
    For k In {0:2}
      sxNum1 = k + 3*j + 3*3*i;
      syNum1 = k + 3*j + 4*3*i;
      szNum1 = k + 4*j + 4*3*i;
      sxNum2 = sxNum1 + 9;
      syNum2 = syNum1 + 3;
      szNum2 = szNum1 + 1;
      If (i != 1 || j != 1 || k != 1)
        vSL=newsl; Surface Loop(vSL) = {-sx[sxNum1],-sy[syNum1],-sz[szNum1],sx[sxNum2],sy[syNum2],sz[szNum2]};
      EndIf
      If (i == 1 && j == 1 && k == 1)
        vSL=newsl; Surface Loop(vSL) = {-sx[sxNum1],-sy[syNum1],-sz[szNum1],sx[sxNum2],sy[syNum2],sz[szNum2],sph0[]};
      EndIf
      v[vIter] = news; Volume(v[vIter]) = {vSL};
      vIter++;
    EndFor
  EndFor
EndFor


// PHYSICAL REGIONS

Physical Surface(SCATTERER) = {sph0[]};

Physical Surface(BOUNDARY_X) = {-sx[0],-sx[1],-sx[2],-sx[3],-sx[4],-sx[5],-sx[6],-sx[7],-sx[8],
                                 sx[0+27],sx[1+27],sx[2+27],sx[3+27],sx[4+27],sx[5+27],sx[6+27],sx[7+27],sx[8+27]};
Physical Surface(BOUNDARY_Y) = {-sy[0],-sy[1],-sy[2],-sy[12],-sy[13],-sy[14],-sy[24],-sy[25],-sy[26],
                                 sy[0+9],sy[1+9],sy[2+9],sy[12+9],sy[13+9],sy[14+9],sy[24+9],sy[25+9],sy[26+9]};
Physical Surface(BOUNDARY_Z) = {-sz[0],-sz[4],-sz[8],-sz[12],-sz[16],-sz[20],-sz[24],-sz[28],-sz[32],
                                 sz[0+3],sz[4+3],sz[8+3],sz[12+3],sz[16+3],sz[20+3],sz[24+3],sz[28+3],sz[32+3]};

Physical Volume(DOMAIN) = {v[13]};
Physical Volume(LAYERS) = {v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8],v[9],v[10],v[11],v[12],
                           v[14],v[15],v[16],v[17],v[18],v[19],v[20],v[21],v[22],v[23],v[24],v[25],v[26]};
