Include "reference.dat" ;

Mesh.Algorithm = 1; // 2D mesh algorithm (1=MeshAdapt, 2=Automatic, 5=Delaunay, 6=Frontal, 7=bamg, 8=delquad)
Geometry.CopyMeshingMethod = 1; // Copy meshing method when duplicating geometrical entities?

pl0[] += newp; Point(newp) = {xlam, ylam, 0, plam};
phi = Atan2[ylam, xlam] ;

dla_ind_x = rla_ind * Cos[phi] ;
dla_ind_y = rla_ind * Sin[phi] ;

xind1 = xlam + dla_ind_x;
xind2 = xlam + dla_ind_x + w_ind;
yind1 = ylam ;
yind2 = ylam + dla_ind_x;

pi[]+=newp ; Point(newp) = { xind1, 0,       0, pind};
pi[]+=newp ; Point(newp) = { xind2, 0,       0, pind};
pi[]+=newp ; Point(newp) = { xind2, gap_ind, 0, pind};
pi[]+=newp ; Point(newp) = { xind1, gap_ind, 0, pind};

li[]+=newl ; Line(newl) = {pi[0],pi[1]};
li[]+=newl ; Line(newl) = {pi[1],pi[2]};
li[]+=newl ; Line(newl) = {pi[2],pi[3]};
li[]+=newl ; Line(newl) = {pi[3],pi[0]};
Line Loop(newll) = {li[{0:3}]};
surfind[] += news ; Plane Surface(news) = {newll-1};

pi[]+=newp ; Point(newp) = { xind2, yind1,  0, pind};
pi[]+=newp ; Point(newp) = { xind1, yind1,  0, pind};

li[]+=newl ; Line(newl) = {pi[2],pi[4]};
li[]+=newl ; Line(newl) = {pi[4],pi[5]};
li[]+=newl ; Line(newl) = {pi[5],pi[3]};

Line Loop(newll) = {-li[2],li[{4:6}]};
surfind[] += news ; Plane Surface(news) = {newll-1};

pi[]+=newp ; Point(newp) = { xlam, yind2,       0, pind};
pi[]+=newp ; Point(newp) = { xlam, yind2+w_ind, 0, pind};
pi[]+=newp ; Point(newp) = { 0, yind2+w_ind, 0, pind};
pi[]+=newp ; Point(newp) = { 0, yind2,       0, pind};

li[]+=newl ; Line(newl) = {pi[0+6],pi[1+6]};
li[]+=newl ; Line(newl) = {pi[1+6],pi[2+6]};
li[]+=newl ; Line(newl) = {pi[2+6],pi[3+6]};
li[]+=newl ; Line(newl) = {pi[3+6],pi[0+6]};
Line Loop(newll) = {li[{7:10}]};
surfind[] += news ; Plane Surface(news) = {newll-1};
ci[]+=newl ; Circle(newl) = {pi[5],pl0[0],pi[6]};
ci[]+=newl ; Circle(newl) = {pi[4],pl0[0],pi[7]};
Line Loop(newll) = {ci[0],li[7],-ci[1],li[5]};
surfind[] += news ; Plane Surface(news) = {-(newll-1)};
Transfinite Line{li[{0,2,5,7,9}]} = 5 ;
Transfinite Line{ci[]} = Layers_circle ;
Transfinite Line{li[{1,3}]}  = 5 ;
Transfinite Line{li[{4,6}]}  = 11 ;
//Transfinite Line{li[{1,3}]}  = Ceil[gap_ind/(h/2)*n_smc] ;
//Transfinite Line{li[{4,6}]}  = Ceil[(yind1-gap_ind)/(h/2)*n_smc] ;
Transfinite Line{-li[{8}],li[{10}]} = Layers_y_indu Using Progression 1 ; // Prog1
Transfinite Surface{surfind[]}; Recombine Surface{surfind[]};

laxis[] += li[9];
lind_middle[] += li[0];
bndind[] += CombinedBoundary{Surface{surfind[]};};
bndind_out[]+= {-bndind[{1,3,5}],-bndind[{9}]};
bndind_in[]+= {-bndind[{8}], bndind[{2,4,7}]};
//Printf("out",bndind_out[]);
//Printf("in",bndind_in[]);

cen0 = newp ; Point(cen0) = {0, 0, 0, pind};

If(Flag_Fine)
//===============================================================================================
//Include "physical.dat" ;
//Include "common_10.dat";
x_L = 0.0;
y_L = 0.0   ;

p1 = newp;   Point(p1) = {x_L + 0.0               , y_L + 0.0              , 0.0, lc_smc_iso};
p2 = newp;   Point(p2) = {x_L + eps               , y_L + 0.0              , 0.0, lc_smc_iso};
p3 = newp;   Point(p3) = {x_L + eps               , y_L + eps              , 0.0, lc_smc_iso};
p4 = newp;   Point(p4) = {x_L + 0.0               , y_L + eps              , 0.0, lc_smc_iso};
p5 = newp ;  Point(p5)  = {x_L + d_i              , y_L + d_i + r_c        , 0.0, lc_smc_cond};
p6 = newp ;  Point(p6)  = {x_L + d_i + r_c        , y_L +  d_i             , 0.0, lc_smc_cond};
p7 = newp ;  Point(p7)  = {x_L + d_i + r_c        , y_L + d_i + r_c        , 0.0, lc_smc_cond};
p8 = newp ;  Point(p8)  = {x_L + eps - (d_i + r_c), y_L + d_i              , 0.0, lc_smc_cond};
p9 = newp ;  Point(p9)  = {x_L + eps - d_i        , y_L + d_i + r_c        , 0.0, lc_smc_cond};
p10 = newp;  Point(p10) = {x_L + eps - (d_i + r_c), y_L + d_i + r_c        , 0.0, lc_smc_cond};
p11 = newp;  Point(p11) = {x_L + eps - d_i        , y_L + eps - (d_i + r_c), 0.0, lc_smc_cond};
p12 = newp;  Point(p12) = {x_L + eps - (d_i + r_c), y_L + eps - d_i        , 0.0, lc_smc_cond};
p13 = newp;  Point(p13) = {x_L + eps - (d_i + r_c), y_L + eps - (d_i + r_c), 0.0, lc_smc_cond};
p14 = newp;  Point(p14) = {x_L + (d_i + r_c)      , y_L + eps - d_i        , 0.0, lc_smc_cond};
p15 = newp;  Point(p15) = {x_L + d_i              , y_L + eps - (d_i + r_c), 0.0, lc_smc_cond};
p16 = newp;  Point(p16) = {x_L + d_i + r_c        , y_L + eps - (d_i + r_c), 0.0, lc_smc_cond};

l1 = newl ; Line(l1)  = {p1,p2} ;
l2 = newl ; Line(l2)  = {p2,p3} ;
l3 = newl ; Line(l3)  = {p3,p4} ;
l4 = newl ; Line(l4)  = {p4,p1} ;
l5 = newl; Circle(l5) = {p5, p7, p6};
l6 = newl ; Line(l6)  = {p6,p8} ;
l7 = newl; Circle(l7) = {p8, p10, p9};
l8 = newl ; Line(l8)  = {p9,p11} ;
l9 = newl; Circle(l9) = {p11, p13, p12};
l10 = newl ; Line(l10)  = {p12,p14} ;
l11 = newl; Circle(l11) = {p14, p16, p15};
l12 = newl ; Line(l12)  = {p15,p5} ;


ll1 = newll; Line Loop(ll1)   = {l5,l6,l7,l8, l9, l10, l11, l12} ;
s_cond[] += news ; Plane Surface(news) = {ll1} ;
ll2 = newll; Line Loop(ll2)   = {l1,l2,l3,l4} ;
s_iso[]  += news ; Plane Surface(news) = {ll2, ll1} ;


// Duplicate the cell geometry
//============================

bnd[] = Boundary{Surface{s_iso[0],s_cond[0]};};
l_bottom[] += bnd[0];

For k In {1:n_smc-1}
s_cond[] += Translate {k * eps, 0, 0} { Duplicata { Surface{s_cond[{0}] }; } };
s_iso[]+= Translate {k * eps, 0, 0} { Duplicata { Surface{s_iso[{0}]  }; } };
bnd[] = Boundary{Surface{s_iso[k],s_cond[k]};};
l_bottom[] += bnd[0];
EndFor
For k In {1:n_smc-1}
//For k In {1:n_smc/2-1}
s_cond[] += Translate {0, k * eps, 0} { Duplicata { Surface{s_cond[{0:n_smc-1}] }; } };
s_iso[]  += Translate {0, k * eps, 0} { Duplicata { Surface{s_iso[{0:n_smc-1}]  }; } };
EndFor

bnd_num[] = Boundary{Surface{s_iso[n_smc-1],s_cond[n_smc-1]};};
lastCellBnd[] = Boundary{Line{bnd_num[0]}; };
p_lastCellBnd = lastCellBnd[1]; 

// Getting the Boundary of the entire duplicated structure
//========================================================

allSurfaces[] = Surface '*';
bndlines[] = CombinedBoundary{Surface{allSurfaces[]};};

For k In {0:#bndlines[]-1}
Printf("%g", bndlines[k]);
EndFor

alll = 999999; Line Loop(newll) = bndlines[];
//=======================================================
ladd1 = newl; Line(ladd1) = {11, 7340};
ladd2 = newl; Line(ladd2) = {348, 2};
ll_air_added = 9999; Line Loop(ll_air_added) = {ladd2, -4, -9, 18, -15, ladd1, -1936, -1949, -1962, -1975, -1988, -2001, -2014, -2027, -2040, -2053, -2052, -1841, -1630, -1419, -1208, -997, -786, -575, -364, -153};
s_air_added = news ; Plane Surface(s_air_added) = {-ll_air_added} ;

EndIf

//====================================================
// Air around
//====================================================

pa[]+=newp ; Point(newp) = { x_air        , 0.0,           0, lca};
pa[]+=newp ; Point(newp) = { x_air + d_inf, 0.0,           0, lca};
pa[]+=newp ; Point(newp) = { 0.0          , y_air,         0, lca};
pa[]+=newp ; Point(newp) = { 0.0          , y_air + d_inf, 0, lca};

p_zero = newp; Point(p_zero) = {0.0, 0.0, 0.0, 0.05};

lair[]+=newl ; Line(newl) = {pi[1], pa[0]}; // y = 0
lair[]+=newl ; Circle(newl) = {pa[0], p_zero, pa[2]};
lair[]+=newl ; Line(newl) = {pa[2], pi[8]}; // axis (x=0)

lair[]+=newl ; Line(newl) = {pa[0], pa[1]};
lair[]+=newl ; Circle(newl) = {pa[1], p_zero, pa[3]};
lair[]+=newl ; Line(newl) = {pa[3], pa[2]};

Line Loop(newll) = {bndind_out[],lair[{0:2}]};
surfair_out[]+= news ; Plane Surface(news) = {newll-1};

Line Loop(newll) = {lair[{3:5}], -lair[{1}]};
surf_Inf[]+= news ; Plane Surface(news) = {newll-1};


CONDUCTOR  = 11;
// //=======================


Physical Surface(AIR) = {surfair_out[], s_air_added, surfind[0]} ;
Physical Surface(IND) = {surfind[{1:#surfind[]-1}] } ;
Physical Surface(ISOL) = {s_iso[]} ;
Physical Surface(OMEGA_INF) = {surf_Inf[] } ;
If(Flag_Fine==1)
  For ii In {0:#s_cond[]-1}
    Physical Surface(IRON+ii)  = s_cond[{ii}];
  EndFor
EndIf

allSkinIron[] += Boundary{Surface{s_cond[]};} ;
Physical Line(OUTERBND)   = lair[{4}];
Physical Line(SYMMETRY_X0) = {lind_middle[],lair[{0,3}], 22, 48, 61, 74, 87, 100, 113, 126, 139, 152, ladd2};
