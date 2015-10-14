Include "smc_data_edge.pro" ;

Mesh.Algorithm = 1; // 2D mesh algorithm (1=MeshAdapt, 2=Automatic, 5=Delaunay,
                    // 6=Frontal, 7=bamg, 8=delquad)
Geometry.CopyMeshingMethod = 1; // Copy meshing method when duplicating geometrical entities?

// First lamination -- up to down
//=====================================

pl0[] += newp; Point(newp) = {xlam, ylam, 0, plam};
pl0[] += newp; Point(newp) = {xlam,  0, 0, plam};
pl0[] += newp; Point(newp) = {0,     0, 0, plam};
pl0[] += newp; Point(newp) = {0,    ylam, 0, plam};

ll0[] += newl; Line(newl) = {pl0[0], pl0[1]};
ll0[] += newl; Line(newl) = {pl0[1], pl0[2]};
ll0[] += newl; Line(newl) = {pl0[2], pl0[3]};
ll0[] += newl; Line(newl) = {pl0[3], pl0[0]};

Line Loop(newll) = {ll0[]};
surfIron[] +=news; Plane Surface(news) = {newll-1};
laxis_iron[] += ll0[2] ;

Transfinite Line{-ll0[1], ll0[3]} = Lay_X Using Progression Pro_X ; // 10
Transfinite Line{-ll0[0], ll0[2]} = Lay_Y Using Progression Pro_Y;
Transfinite Surface{surfIron[]} ;
Recombine Surface{surfIron[]} ;

// Inductor
//=====================================

dla_ind_x = rla_ind;// * Cos[phi] ;
dla_ind_y = rla_ind;// * Sin[phi] ;

xind1 = xlam + dla_ind_x;
xind2 = xlam + dla_ind_x + w_ind;
yind1 = ylam ;
yind2 = ylam + dla_ind_x;

p_zero  = newp; Point(newp) = { 0                , 0                , 0, lc_smc_iso};
p_indu1 = newp; Point(newp) = { 2 * xind1        , 0                , 0, pind};
p_indu2 = newp; Point(newp) = { 2 * xind1 + w_ind, 0                , 0, pind};
p_indu3 = newp; Point(newp) = { 0                , 2 * xind1 + w_ind, 0, pind};
p_indu4 = newp; Point(newp) = { 0                , 2 * xind1        , 0, pind};

l_indu1 = newl; Line(newl) = {p_indu1, p_indu2};
c_indu2 = newl; Circle(newl) = {p_indu2,p_zero,p_indu3};
l_indu3 = newl; Line(newl) = {p_indu3, p_indu4};
c_indu4 = newl; Circle(newl) = {p_indu4,p_zero,p_indu1};

li[] = {l_indu1, c_indu2, l_indu3, c_indu4};

Line Loop(newll) = {l_indu1, c_indu2, l_indu3, c_indu4};
surfind[] += news ; Plane Surface(news) = {(newll-1)};

Transfinite Line{l_indu1, l_indu3} = 5;//n_thickness ;
Transfinite Line{c_indu2, c_indu4} = 25; //5 * n_thickness ;
Transfinite Surface{surfind[]}; Recombine Surface{surfind[]};

bndind_out = {c_indu2};
bndind_in  = {c_indu4};

// Air around
//====================================================

pa[]+=newp ; Point(newp) = { x_air        , 0            , 0, lca};
pa[]+=newp ; Point(newp) = { x_air + d_inf, 0            , 0, lca};
pa[]+=newp ; Point(newp) = { 0.0          , y_air + d_inf, 0, lca};
pa[]+=newp ; Point(newp) = { 0.0          , y_air        , 0, lca};

// Outer layer of air
//===================
lair[]+=newl ; Line(newl) = {p_indu2,pa[0]}; // y = 0
lair[]+=newl ; Circle(newl) = {pa[0],pl0[2],pa[3]};
lair[]+=newl ; Line(newl) = {pa[3],p_indu3}; // axis (x=0)

Line Loop(newll) = {-bndind_out[],lair[{0:2}]};
surfair_out[]+= news ; Plane Surface(news) = {newll-1};

// Outer layer for infty transformation
//=====================================
lair[]+=newl ; Line(newl) = {pa[0],pa[1]};
lair[]+=newl ; Circle(newl) = {pa[1],pl0[2],pa[2]};
lair[]+=newl ; Line(newl) = {pa[2],pa[3]};

Line Loop(newll) = {lair[{3:5}], -lair[{1}]};
surf_Inf[]+= news ; Plane Surface(news) = {newll-1};

// Air between the homogenized domain and the inductor
//====================================================
lai[]+=newl; Line(newl) = {pl0[1], p_indu1};
lai[]+=newl; Line(newl) = {p_indu4, pl0[3]};
laxis[] += lai[1] ;
Transfinite Line{lai[]} = nlai ;

llairout   = newll ; Line Loop(newll) = {bndind_in[], -lai[{0}], -ll0[{0,3}],-lai[1]} ;
surfair[] += news ; Plane Surface(news) = {llairout};
lines_sym[] += {ll0[{1}],lai[0]};
//====================================================

Physical Line(GAMMA_INF)    = {lair[4]};
Physical Surface(CONDUCTOR) = {surfIron[]} ;

If(!Flag_3D)
Physical Surface(AIR) = {surfair[], surfair_out[]} ;
Physical Surface(INDUCTOR) = {surfind[]} ;
EndIf
If(Flag_3D)
  Physical Surface(AIR) = {surfair[], surfair_out[]} ;
  Physical Surface(INDUCTOR) = {surfind[]} ;
EndIf

Physical Surface(OMEGA_INF) = {surf_Inf[]} ;
Physical Line(SYMMETRY_X0) = {ll0[1], lai[0], l_indu1, lair[0], lair[3]} ;
Physical Line(SYMMETRY_Y0) = {ll0[2], lai[1], l_indu3, lair[2], lair[5]} ;
