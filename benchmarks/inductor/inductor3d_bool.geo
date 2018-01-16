// Include "inductor3d_data.geo";

SetFactory("OpenCASCADE");

Mesh.Optimize = 1;

DefineConstant[
  md = { 1.,  Name StrCat[ppm,"0Mesh density"], Highlight Str[colorpp], Closed close_menu},
  nn_wcore   = { Ceil[md*2],  Name StrCat[ppm,"0core width"], ReadOnly 1, Highlight Str[colorro], Closed close_menu},
  nn_airgap  = { Ceil[md*1], Name StrCat[ppm,"1air gap width"], ReadOnly 1, Highlight Str[colorro]},
  nn_ri = { Ceil[md*6], Name StrCat[ppm,"2"], Label "1/4 shell in", ReadOnly 1, Visible (Flag_Infinity==1), Highlight Str[colorro]},
  nn_ro = { Ceil[md*6], Name StrCat[ppm,"3"], Label "1/4 shell out", ReadOnly 1, Highlight Str[colorro]}
];

// characteristic lengths
lc0  = wcoil/nn_wcore;
lc1  = ag/nn_airgap;
lc2  = 2*lc1;

lcri = Pi*Rint/2/nn_ri;
// lcro = Pi*Rext/2/nn_ro;

// E-core
xe = -wcoreI/2;          dxe = wcoreI;
ye = -htot/2+wcoreE+ag ; dye = hcoreE;
ze = -Lz/2;              dze = Lz;

vE()+=newv; Box(newv) = {xe, ye,  ze, dxe, dye, dze};

// I-core
xi = -wcoreI/2; dxi = wcoreI;
yi = -htot/2 ;  dyi = wcoreE;
zi = -Lz/2; dzi = Lz;

vCoreI()+=newv; Box(newv) = {xi, yi, zi, dxi, dyi, dzi};

// coil
xc = -wcoreI/2+wcoreE;   dxc = wcoreE;
yc = -htot/2+wcoreE+ag ; dyc = hcoil;
zc = -Lz/2;              dzc = Lz;

vBc()+=newv; Box(newv) = {xc, yc,  zc, dxc, dyc, dzc};

xc_ = -wcoreI/2+wcoreE+3*wcoreE;   dxc = wcoreE;
vBc()+=newv; Box(newv) = {xc_, yc,  zc, dxc, dyc, dzc};

vBc()+=newv; Box(newv) = {xc+wcoreE, yc,  zc, 2*wcoreE, dyc, -wcoreE};
vBc()+=Translate {0, 0, Lz+wcoreE} { Duplicata {Volume{vBc(2)};}};


vaux=newv; Cylinder(newv) = { 0, -htot/2+wcoreE+ag, 0, 0, hcoil, 0, wcoreE};
cutsurf()+=news; Rectangle(news) = {-wcoreE, -htot/2+wcoreE+ag, 0, 2*wcoreE, hcoil, 0};
cutsurf()+=Rotate {{0, 1, 0}, {0, 0, 0}, Pi/2} { Duplicata { Surface{cutsurf(0)}; } };

vCc() = BooleanFragments{ Volume{vaux}; Surface{cutsurf()}; Delete; }{}; //corners

Translate {-wcoreE, 0,  Lz/2} { Volume{vCc(0)};}
Translate { wcoreE, 0,  Lz/2} { Volume{vCc(1)};}
Translate {-wcoreE, 0, -Lz/2} { Volume{vCc(2)};}
Translate { wcoreE, 0, -Lz/2} { Volume{vCc(3)};}

vCoil()+=newv; BooleanUnion(newv) = { Volume{vBc()}; Delete; }{ Volume{vCc()}; Delete; };
// vCoil() = BooleanFragments{ Volume{vBc(),vCc()}; Delete; }{};
vCoreE() += newv; BooleanDifference(newv) = { Volume{vE(0)}; Delete; }{ Volume{vCoil()}; };


// Air around
vA()+=newv; Sphere(newv) = {0,0,0, Rint};
vA()+=newv; Sphere(newv) = {0,0,0, Rext};

vAir()+=newv; BooleanDifference(newv) = { Volume{vA(1)}; Delete; }{ Volume{vA(0)}; };
vAir()+=newv; BooleanDifference(newv) = { Volume{vA(0)}; Delete; }{ Volume{vCoreE(),vCoreI(),vCoil()}; };

If(Flag_Symmetry)
  xa =  -Rext;   ya =  -Rext;  za =  -Rext;
  dxa =  2*Rext; dya = 2*Rext; dza = 2*Rext;

  If(Flag_Symmetry==1)
    vAux=newv; Box(newv) = {xa, ya, 0*za, dxa, dya, -dza/2};
  EndIf
  If(Flag_Symmetry==2)
    vAux=newv; Box(newv) = {0*xa, ya, 0*za, dxa/2, dya, -dza/2};
  EndIf

  For k In {0:#vCoil()-1}
    vvv=newv; BooleanIntersection(newv) = { Volume{vCoil(k)}; Delete; }{ Volume{vAux}; };
    vCoil(k) = vvv;
  EndFor
  For k In {0:#vAir()-1}
    vvv=newv; BooleanIntersection(newv) = { Volume{vAir(k)}; Delete; }{ Volume{vAux}; };
    vAir(k) = vvv;
  EndFor

  vvv=newv; BooleanIntersection(newv) = { Volume{vCoreE(0)}; Delete; }{ Volume{vAux}; };
  vCoreE(0) = vvv;
  vvv=newv; BooleanIntersection(newv) = { Volume{vCoreI(0)}; Delete; }{ Volume{vAux}; Delete; };
  vCoreI(0) = vvv;

EndIf

BooleanFragments{ Volume{vAir(), vCoreE(), vCoreI(), vCoil()}; Delete; }{} // This needs to be done at the end


// Adapting mesh size...
Characteristic Length { PointsOf{ Volume{vAir(0)}; } }= lcri;
Characteristic Length { PointsOf{ Volume{vCoreE(), vCoreI()}; } }= lc0;
Characteristic Length { PointsOf{ Volume{vCoil()}; } }= lc2; // Basic lc, we refine after

ptos_ag() = Point In BoundingBox  {xi-ag, -htot/2+wcoreE-ag, zi-ag, dxi, 3*ag, dzi};
Characteristic Length { ptos_ag() }= lc1; // points around airgap


// Boundary conditions
tol = 2*ag;
cut_xy() = Surface In BoundingBox {-Rext-tol,-Rext-tol,-tol, 2*(Rext+tol), 2*(Rext+tol), 2*tol}; // 1/2, 1/4
cut_yz() = Surface In BoundingBox {-tol,-Rext-tol,-Rext-tol, 2*tol, 2*(Rext+tol), 2*(Rext+tol)}; // 1/4

all_vol() = Volume '*';
bndAir() = CombinedBoundary{Volume{all_vol()};};
bndAir() -= {cut_xy(),cut_yz()};


//=================================================
// Some colors... for aesthetics :-)
//=================================================
Recursive Color SkyBlue {Volume{vAir()};}
Recursive Color SteelBlue {Volume{vCoreE(),vCoreI()};}
Recursive Color Red {Volume{vCoil()};}

//=================================================
// Physical regions for FE analysis with GetDP
//=================================================

Physical Volume(ECORE) = vCoreE();
Physical Volume(ICORE) = vCoreI();

bnd_vCoreI() = Boundary{Volume{vCoreI()};};
bnd_vCoreI() -= {cut_xy(),cut_yz()};
Physical Surface(SKINICORE) = bnd_vCoreI();

bnd_vCoreE() = CombinedBoundary{Volume{vCoreE()};};
bnd_vCoreE() -= {cut_xy(),cut_yz()};
Physical Surface(SKINECORE) = bnd_vCoreE();

Physical Volume(COIL) = vCoil();
bnd_vCoil() = CombinedBoundary{Volume{vCoil()};};
bnd_vCoil() -= {cut_xy(),cut_yz()};
Physical Surface(SKINCOIL) = bnd_vCoil();

If(Flag_Infinity==0)
  Physical Volume(AIR) = {vAir()};
EndIf
If(Flag_Infinity==1)
  Physical Volume(AIR) = vAir(1);
  Physical Volume(AIRINF) = vAir(0);
EndIf
Physical Surface(SURF_AIROUT) = bndAir();

Physical Surface(CUT_XY) = {cut_xy()};
Physical Surface(CUT_YZ) = {cut_yz()}; // BC if symmetry
