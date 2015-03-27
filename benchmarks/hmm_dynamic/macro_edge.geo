Include "macro.dat" ;

Mesh.Algorithm = 1; // 2D mesh algorithm (1=MeshAdapt, 2=Automatic, 5=Delaunay, 6=Frontal, 7=bamg, 8=delquad)
Geometry.CopyMeshingMethod = 1; // Copy meshing method when duplicating geometrical entities?

// First lamination -- up to down
//=====================================

pl0[] += newp; Point(newp) = {0,     0  , 0, plam};
pl0[] += newp; Point(newp) = {xlam,  0  , 0, plam};
pl0[] += newp; Point(newp) = {xlam, ylam, 0, plam};
pl0[] += newp; Point(newp) = {0,    ylam, 0, plam};

ll0[] += newl; Line(newl) = {pl0[0], pl0[1]};
ll0[] += newl; Line(newl) = {pl0[1], pl0[2]};
ll0[] += newl; Line(newl) = {pl0[2], pl0[3]};
ll0[] += newl; Line(newl) = {pl0[3], pl0[0]};

Line Loop(newll) = {ll0[]};
surfIron[] +=news; Plane Surface(news) = {newll-1};
laxis_iron[] += ll0[2] ;

Transfinite Line{-ll0[{0}],ll0[{2}]} = (Layers_x_hom) Using Progression 1.0;
Transfinite Line{-ll0[1]  ,ll0[3]}   = (Layers_y_hom) Using Progression Pro1 ; // 10
Transfinite Surface{surfIron[]} ;
Recombine Surface{surfIron[]} ;

pl0[]  += newp; Point(newp)  = {xind1, 0    , 0, pind};
pl0[]  += newp; Point(newp)  = {xind2, 0    , 0, pind};
pl0[]  += newp; Point(newp)  = {0    , xind2, 0, pind};
pl0[]  += newp; Point(newp)  = {0    , xind1, 0, pind};

ll0[]  += newl; Line(newl)   = {pl0[1], pl0[4]};
ll0[]  += newl; Circle(newl) = {pl0[4],pl0[0],pl0[7]}; 
ll0[]  += newl; Line(newl)   = {pl0[7], pl0[3]};

Line Loop(newll) = {ll0[4], ll0[5], ll0[6], -ll0[2], -ll0[1]};
surfAir_in[] += news ; Plane Surface(news) = {newll-1}; 

ll0[]  += newl; Line(newl)   = {pl0[4], pl0[5]};
ll0[]  += newl; Circle(newl) = {pl0[5],pl0[0],pl0[6]};
ll0[]  += newl; Line(newl)   = {pl0[6], pl0[7]};

Line Loop(newll) = {ll0[7], ll0[8], ll0[9], -ll0[5]};
surfInd[] += news ; Plane Surface(news) = {newll-1};

Transfinite Line{ll0[{7,9}]} = n_ind ;
Transfinite Line{ll0[{5,8}]} = n_circles ;
Transfinite Surface{surfInd[]}; Recombine Surface{surfInd[]}; 

// Air around
//====================================================

pl0[] += newp; Point(newp) = { x_air, 0.0,   0, lca};
pl0[] += newp; Point(newp) = { 0.0  , y_air, 0, lca};

ll0[] += newl; Line(newl) = {pl0[5], pl0[8]}; 
ll0[] += newl; Circle(newl) = {pl0[8], pl0[0], pl0[9]};
ll0[] += newl; Line(newl) = {pl0[9], pl0[6]};

Line Loop(newll) = {ll0[10], ll0[11], ll0[12], -ll0[8]};
surfAir_out[] += news ; Plane Surface(news) = {newll-1};

Transfinite Line{ll0[{10,12}]} = n_air_out ;
Transfinite Line{ll0[{11}]} = n_circles ;
Transfinite Surface{surfAir_out[]}; Recombine Surface{surfAir_out[]}; 

// Region Inf
//===========
pl0[] += newp; Point(newp) = { x_inf, 0.0,   0, lca};
pl0[] += newp; Point(newp) = { 0.0  , y_inf, 0, lca};

ll0[] +=newl ; Line(newl) = {pl0[8], pl0[10]};
ll0[] +=newl ; Circle(newl) = {pl0[10], pl0[0], pl0[11]};
ll0[] +=newl ; Line(newl) = {pl0[11], pl0[9]};

ll_inf = newll; Line Loop(ll_inf) = {ll0[{13:15}],-ll0[11]};
surfInf[]+= news ; Plane Surface(news) = {ll_inf};

Transfinite Line{ll0[14]} = n_circles ;
Transfinite Line{ll0[13], ll0[15]} = n_inf ;
Transfinite Surface{surfInf[]}; Recombine Surface{surfInf[]};


Physical Line(GAMMA_INF)    = {ll0[14]};
Physical Line(SYMMETRY_X0)  = {ll0[0], ll0[4], ll0[7], ll0[10], ll0[13]};
Physical Line(SYMMETRY_Y0)  = {ll0[3], ll0[6], ll0[9], ll0[12], ll0[15]};
Physical Surface(CONDUCTOR) = {surfIron[]} ;
Physical Surface(AIR)       = {surfAir_in[], surfAir_out[]} ;
Physical Surface(INDUCTOR)  = {surfInd[]} ;
Physical Surface(OMEGA_INF) = {surfInf[]} ;
