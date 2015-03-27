Include "reference.dat" ;

Mesh.Algorithm = 1; // 2D mesh algorithm (1=MeshAdapt, 2=Automatic, 5=Delaunay, 6=Frontal, 7=bamg, 8=delquad)
Geometry.CopyMeshingMethod = 1; // Copy meshing method when duplicating geometrical entities?

// Inductor
//=========
pl0[] += newp; Point(newp)  = {0    , 0    , 0, plam};
pi[]  += newp; Point(newp)  = {xind1, 0    , 0, pind};
pi[]  += newp; Point(newp)  = {xind2, 0    , 0, pind};
pi[]  += newp; Point(newp)  = {0    , xind2, 0, pind};
pi[]  += newp; Point(newp)  = {0    , xind1, 0, pind};

li[]  += newl; Line(newl)   = {pi[0], pi[1]};
ci[]  += newl; Circle(newl) = {pi[1],pl0[0],pi[2]};
ci[]  += newl; Circle(newl) = {pi[3],pl0[0],pi[0]}; 
li[]  += newl; Line(newl)   = {pi[2], pi[3]};

Line Loop(newll) = {li[0], ci[0], li[1], ci[1]};
surfind[] += news ; Plane Surface(news) = {newll-1}; 

Transfinite Line{li[{0,1}]} = n_ind ;
Transfinite Line{ci[{0,1}]} = n_circles ;
Transfinite Surface{surfind[]}; Recombine Surface{surfind[]};  

// An smc grain
//=============
p1 = newp;   Point(p1)  = {0.0              , 0.0              , 0.0, lc_smc_iso};
p2 = newp;   Point(p2)  = {eps              , 0.0              , 0.0, lc_smc_iso};
p3 = newp;   Point(p3)  = {eps              , eps              , 0.0, lc_smc_iso};
p4 = newp;   Point(p4)  = {0.0              , eps              , 0.0, lc_smc_iso};
p5 = newp ;  Point(p5)  = {d_i              , d_i + r_c        , 0.0, lc_smc_cond};
p6 = newp ;  Point(p6)  = {d_i + r_c        , d_i              , 0.0, lc_smc_cond};
p7 = newp ;  Point(p7)  = {d_i + r_c        , d_i + r_c        , 0.0, lc_smc_cond};
p8 = newp ;  Point(p8)  = {eps - (d_i + r_c), d_i              , 0.0, lc_smc_cond};
p9 = newp ;  Point(p9)  = {eps - d_i        , d_i + r_c        , 0.0, lc_smc_cond};
p10 = newp;  Point(p10) = {eps - (d_i + r_c), d_i + r_c        , 0.0, lc_smc_cond};
p11 = newp;  Point(p11) = {eps - d_i        , eps - (d_i + r_c), 0.0, lc_smc_cond};
p12 = newp;  Point(p12) = {eps - (d_i + r_c), eps - d_i        , 0.0, lc_smc_cond};
p13 = newp;  Point(p13) = {eps - (d_i + r_c), eps - (d_i + r_c), 0.0, lc_smc_cond};
p14 = newp;  Point(p14) = {(d_i + r_c)      , eps - d_i        , 0.0, lc_smc_cond};
p15 = newp;  Point(p15) = {d_i              , eps - (d_i + r_c), 0.0, lc_smc_cond};
p16 = newp;  Point(p16) = {d_i + r_c        , eps - (d_i + r_c), 0.0, lc_smc_cond};

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

// Duplicate smc grain
//====================
bnd[] = Boundary{Surface{s_iso[0],s_cond[0]};};
l_bottom[] += bnd[0];

For k In {1:n_smc-1}
s_cond[] += Translate {k * eps, 0, 0} { Duplicata { Surface{s_cond[{0}] }; } };
s_iso[]+= Translate {k * eps, 0, 0} { Duplicata { Surface{s_iso[{0}]  }; } };
bnd[] = Boundary{Surface{s_iso[k],s_cond[k]};};
l_bottom[] += bnd[0];
EndFor
For k In {1:n_smc-1}
s_cond[] += Translate {0, k * eps, 0} { Duplicata { Surface{s_cond[{0:n_smc-1}] }; } };
s_iso[]  += Translate {0, k * eps, 0} { Duplicata { Surface{s_iso[{0:n_smc-1}]  }; } };
EndFor

bnd_num[] = Boundary{Surface{s_iso[n_smc-1],s_cond[n_smc-1]};};
lastCellBnd[] = Boundary{Line{bnd_num[0]}; };
p_lastCellBnd = lastCellBnd[1]; 

ladd1 = newl; Line(ladd1) = {2, 341};
ladd2 = newl; Line(ladd2) = {7333, 5};    
ll_air_added = 2041; Line Loop(ll_air_added) = {ladd2, 3, ladd1, 138, 349, 560, 771, 982, 1193, 1404, 1615, 1826, 2037, 2038, 2025, 2012, 1999, 1986, 1973, 1960, 1947, 1934, 1921};
s_air_added = news; Plane Surface(s_air_added) = {-ll_air_added};

// Air around
//====================================================
pa[]   += newp ; Point(newp) = { x_air, 0.0,   0, lca};
pa[]   += newp ; Point(newp) = { 0.0  , y_air, 0, lca}; 
pinf[] += newp ; Point(newp) = { x_inf, 0.0,   0, lca};
pinf[] += newp ; Point(newp) = { 0.0  , y_inf, 0, lca};

lair[]+=newl ; Line(newl) = {pi[1], pa[0]};
lair[]+=newl ; Circle(newl) = {pa[0], pl0[0], pa[1]};
lair[]+=newl ; Line(newl) = {pa[1], pi[2]};

linf[]+=newl ; Line(newl) = {pa[0], pinf[0]};
linf[]+=newl ; Circle(newl) = {pinf[0], pl0[0], pinf[1]};
linf[]+=newl ; Line(newl) = {pinf[1], pa[1]};

ll_air_out = newll; Line Loop(ll_air_out) = {lair[{0:2}],-ci[0]};
surfair_out[]+= news ; Plane Surface(news) = {ll_air_out};

ll_inf =newll; Line Loop(ll_inf) = {linf[{0:2}], -lair[{1}]};
surf_Inf[]+= news ; Plane Surface(news) = {ll_inf};

Transfinite Line{lair[1],linf[1]} = n_circles ;
Transfinite Line{lair[{0,2}]} = n_air_out ;
Transfinite Line{linf[{0,2}]} = n_inf ;

Transfinite Surface{surfair_out[]}; Recombine Surface{surfair_out[]};  
Transfinite Surface{surf_Inf[]}; Recombine Surface{surf_Inf[]}; 

// Physical regions
//=================
Physical Surface(AIR) = {surfair_out[], s_air_added} ;
Physical Surface(IND) = {surfind[] } ;
Physical Surface(ISOL) = {s_iso[]} ;
Physical Surface(OMEGA_INF) = {surf_Inf[] } ;
If(Flag_Fine==1)
  For ii In {0:#s_cond[]-1}
    Physical Surface(IRON+ii)  = s_cond[{ii}];
  EndFor
EndIf
//allSkinIron[] += Boundary{Surface{s_cond[]};} ;
Physical Line(OUTERBND)   = linf[1];
Physical Line(SYMMETRY_X0) = {7, 33, 46, 59, 72, 85, 98, 111, 124, 137, 2039, 1, 2043, 2046};
Physical Line(SYMMETRY_Y0) = {10, 234, 445, 656, 867, 1078, 1289, 1500, 1711, 1922, 2040, 4, 2045, 2048};
