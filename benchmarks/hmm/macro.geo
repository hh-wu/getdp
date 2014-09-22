Include "macro.dat" ;

Mesh.Algorithm = 1; // 2D mesh algorithm (1=MeshAdapt, 2=Automatic, 5=Delaunay, 6=Frontal, 7=bamg, 8=delquad)
Geometry.CopyMeshingMethod = 1; // Copy meshing method when duplicating geometrical entities?

//=====================================
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

Transfinite Line{-ll0[1],ll0[3]} = Lay1 Using Progression Pro1 ; // 10
Transfinite Line{-ll0[{0}], ll0[{2}]} = (Lay3_tot) Using Progression 1.0;
Transfinite Surface{surfIron[]} ;
//Recombine Surface{surfIron[]} ;

//=====================================
// Inductor
//=====================================
phi = Atan2[ylam, xlam] ;

dla_ind_x = rla_ind * Cos[phi] ;
dla_ind_y = rla_ind * Sin[phi] ;

xind1 = xlam + dla_ind_x;
xind2 = xlam + dla_ind_x + w_ind;
yind1 = ylam ;
yind2 = ylam + dla_ind_x;

pi[]+=newp ; Point(newp) = { xind1, 0,      0, pind};
pi[]+=newp ; Point(newp) = { xind2, 0,      0, pind};
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
surfind[] += news ; Plane Surface(news) = {newll-1};

Transfinite Line{li[{0,2,5,7,9}]} = n_thickness ;
//Transfinite Line{li[{0,2,5,7,9}]} = Ceil[w_ind/pind] ;
Transfinite Line{ci[]} = n_circle ;
//Transfinite Line{ci[]} = Ceil[w_ind/pind]+1 ;
Transfinite Line{li[{1,3}]}  = Ceil[gap_ind/(h/2)*nlam] ;
Transfinite Line{li[{4,6}]}  = Ceil[(yind1-gap_ind)/(h/2)*nlam] ;
Transfinite Line{-li[{8}],li[{10}]} = Lay1 Using Progression 1 ; // Prog1
Transfinite Surface{surfind[]}; //Recombine Surface{surfind[]};

laxis[] += li[9];
lind_middle[] += li[0];
bndind[] += CombinedBoundary{Surface{surfind[]};};

bndind_out[]+= {-bndind[{1,3,5}],bndind[{9}]};
bndind_in[]+= {-bndind[{8}], bndind[{2,4,7}]};
//Printf("out",bndind_out[]);
//Printf("in",bndind_in[]);

cen0 = newp ; Point(cen0) = {0, 0, 0, pind};

  surfIsol[]={};
  volisol[]={};
  lai[]+=newl; Line(newl) = {pl0[1], pi[0]};
  lai[]+=newl; Line(newl) = {pi[9], pl0[3]};
  laxis[] += lai[1] ;
  Transfinite Line{lai[]} = nlai ;



  llairout   = newll ; Line Loop(newll) = {bndind_in[], -lai[{0}], -ll0[{0,3}],-lai[1]} ;
  surfair[] += news ; Plane Surface(news) = {llairout};
  lines_sym[] += {ll0[{1}],lai[0]};

//====================================================
// Air around
//====================================================

pa[]+=newp ; Point(newp) = { x_air, 0,      0, lca};
pa[]+=newp ; Point(newp) = { x_air, y_air,  0, lca};
pa[]+=newp ; Point(newp) = { 0, y_air,      0, lca};


lair[]+=newl ; Line(newl) = {pi[1],pa[0]}; // y = 0
lair[]+=newl ; Line(newl) = {pa[0],pa[1]};
lair[]+=newl ; Line(newl) = {pa[1],pa[2]};
lair[]+=newl ; Line(newl) = {pa[2],pi[8]}; // axis (x=0)

Line Loop(newll) = {bndind_out[],lair[{0:3}]};
surfair_out[]+= news ; Plane Surface(news) = {newll-1};


Physical Line(GAMMA_INF)         = {lair[{1,2}], lind_middle[], lines_sym[],lair[0] };
 //Physical Line(GAMMA_INF)       = {llam[{0:2}],lair2[{2,3}],lair[{0,3}], lair2[{0,1}] };
Physical Surface(CONDUCTOR)   = {surfIron[]} ;
// Physical Surface(CONDUCTOR)   = {slam[]} ;
Physical Surface(AIR)         = {surfair[], surfair_out[], surfind[0]} ;
Physical Surface(INDUCTOR1)   = {surfind[{1:#surfind[]-1}]} ;
// Physical Surface(INDUCTOR1)   = {sind[0]} ;
Physical Surface(INDUCTOR2)   = {} ;
// Physical Surface(INDUCTOR2)   = {sind[1]} ;
Physical Surface(INDUCTOR_R)  = {};
// Physical Surface(INDUCTOR_R)  = {sindR};
Physical Surface(INDUCTOR_L)  = {};
// Physical Surface(INDUCTOR_L)  = {sindL};
