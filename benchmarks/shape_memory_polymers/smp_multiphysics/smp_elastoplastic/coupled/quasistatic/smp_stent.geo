Include "smp_stent.dat";

//Mesh.ElementOrder = 2;
//Mesh.SecondOrderLinear = 0;
//front3d = 1; // Set to 1 if Frontal 3D mesh algorithm is used
//If(front3d == 1)
//    Mesh.Algorithm3D = 4; // Frontal 3D
//EndIf

// 1. The tube
//============
L    = 20.0e-3;
r_e  = 10.0e-3;
r_th = 5.0e-4;
r_i  = r_e - r_th;
r_h  = 1.0e-3;
r_ih = 1.0e-3;

lc_e = 2.0e-4;

t_skin = 3 * r_th;
r_skin  = r_e + t_skin;
lc_skin = lc_e * 5;

/*
  n_th = 6;
  n_circle = 20;
  n_extrude = 10;
*/
/*
  n_th = 3;
  n_skin = 3;
  n_circle = 10;
  n_extrude = 3;
*/

n_th = 6;
n_skin = 6;
n_circle = 5;
n_extrude = 3;


// Circle used to define the mechanical bar
//=========================================
p = newp;
Point(p) = {0.0,  0.0,  0.0, lc_e};
Point(p+1) = {r_i,  0.0,  0.0, lc_e};
Point(p+2) = {0.0,  r_i,  0.0, lc_e};
Point(p+3) = {-r_i, 0.0,  0.0, lc_e};
Point(p+4) = {0.0,  -r_i, 0.0, lc_e};

Point(p+5) = {r_e,  0.0,  0.0, lc_e};
Point(p+6) = {0.0,  r_e,  0.0, lc_e};
Point(p+7) = {-r_e, 0.0,  0.0, lc_e};
Point(p+8) = {0.0,  -r_e, 0.0, lc_e};

//===================================
Point(p+9) = {r_skin,  0.0,  0.0, lc_e};
Point(p+10) = {0.0,  r_skin,  0.0, lc_e};
Point(p+11) = {-r_skin, 0.0,  0.0, lc_e};
Point(p+12) = {0.0,  -r_skin, 0.0, lc_e};
//===================================

l = newl;
Line(l+1) = {p+1, p+5};
Line(l+2) = {p+2, p+6};
Line(l+3) = {p+3, p+7};
Line(l+4) = {p+4, p+8};

c = newc;
Circle(c+1) = {p+1, p, p+2};
Circle(c+2) = {p+2, p, p+3};
Circle(c+3) = {p+3, p, p+4};
Circle(c+4) = {p+4, p, p+1};

Circle(c+5) = {p+5, p, p+6};
Circle(c+6) = {p+6, p, p+7};
Circle(c+7) = {p+7, p, p+8};
Circle(c+8) = {p+8, p, p+5};

//====================================
line = newl;
Line(line+5) = {p+5, p+9};
Line(line+6) = {p+6, p+10};
Line(line+7) = {p+7, p+11};
Line(line+8) = {p+8, p+12};

Circle(c+9) = {p+9, p, p+10};
Circle(c+10) = {p+10, p, p+11};
Circle(c+11) = {p+11, p, p+12};
Circle(c+12) = {p+12, p, p+9};
//====================================

ll = newll;
s_tube = news;


Line Loop(ll+1) = {-(c+1), (l+1), (c+5), -(l+2)};
Line Loop(ll+2) = {-(c+2), (l+2), (c+6), -(l+3)};
Line Loop(ll+3) = {-(c+3), (l+3), (c+7), -(l+4)};
Line Loop(ll+4) = {-(c+4), (l+4), (c+8), -(l+1)};


//================================================
Line Loop(ll+5) = {-(c+5), (line+5), (c+9), -(line+6)};
Line Loop(ll+6) = {-(c+6), (line+6), (c+10), -(line+7)};
Line Loop(ll+7) = {-(c+7), (line+7), (c+11), -(line+8)};
Line Loop(ll+8) = {-(c+8), (line+8), (c+12), -(line+5)};
//================================================

Plane Surface(s_tube+1) = {ll+1};
Plane Surface(s_tube+2) = {ll+2};
Plane Surface(s_tube+3) = {ll+3};
Plane Surface(s_tube+4) = {ll+4};


//================================================
s_tissue = news;
Plane Surface(s_tissue+1) = {ll+5};
Plane Surface(s_tissue+2) = {ll+6};
Plane Surface(s_tissue+3) = {ll+7};
Plane Surface(s_tissue+4) = {ll+8};
//================================================


If (!Flag_TransFinite)
  vol_tube[] = Extrude {0, 0, L}{
    Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4};
  };
  vol_tissue[] = Extrude {0, 0, L}{
    Surface{s_tissue+1, s_tissue+2, s_tissue+3, s_tissue+4};
  };
  // bndhole[] = Boundary{ Volume{vol_tube[1]}; };
EndIf

If (Flag_TransFinite)
  Transfinite Line{l+1, l+2, l+3, l+4} = n_th Using Progression 1.0;
  Transfinite Line{line+5, line+6, line+7, line+8} = n_skin Using Progression 1/0.85;
  Transfinite Line{c+1, c+5, c+9} = n_circle Using Progression 0.95;
  Transfinite Line{c+2, c+6, c+10} = n_circle Using Progression 1/0.95;
  Transfinite Line{c+3, c+7, c+ 11} = n_circle Using Progression 0.95;
  Transfinite Line{c+4, c+8, c+12} = n_circle Using Progression 1/0.95;
  Transfinite Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4};
  Recombine Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4};
  Transfinite Surface{s_tissue+1, s_tissue+2, s_tissue+3, s_tissue+4};
  Recombine Surface{s_tissue+1, s_tissue+2, s_tissue+3, s_tissue+4};

  vol_tube[] = Extrude {0, 0, L}{
    Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4}; Layers{n_extrude}; Recombine;
  };
  vol_tissue[] = Extrude {0, 0, L}{
    Surface{s_tissue+1, s_tissue+2, s_tissue+3, s_tissue+4}; Layers{n_extrude}; Recombine;
  };
EndIf

// Defining physical regions
//==========================
Physical Point(DIRICHLET_ELEMAG) = {25};//{21};

Physical Line(DIRICHLET_MECHANICS_1) = {97};//{79};

Physical Surface(DIRICHLET_MECHANICS_2) = {58};//{40};
Physical Surface(DIRICHLET_THERMAL) = {142, 164, 186, 208};//{36, 58, 80, 102};
//Physical Surface(DIRICHLET_THERMAL) = {16, 17, 18, 19, 41, 63, 85, 107, 36, 58, 80, 102};
Physical Surface(CONVECTION_THERMAL) = {68, 90, 112, 46};//{28, 50, 72, 94};
Physical Surface(ALL_BOUNDARY) = {16, 17, 18, 19, 41, 63, 85, 107, 36, 58, 80, 102, 28, 50, 72, 94};

Physical Surface(ELEMAG_CUTS_1) = {80};
Physical Surface(ELEMAG_CUTS_2) = {58};
Physical Surface(ELEMAG_CUTS_3) = {102};
Physical Surface(ELEMAG_CUTS_4) = {50};

Physical Volume(DOMAIN_TUBE) = {1, 2, 3, 4};
Physical Volume(DOMAIN_TISSUE) = {5, 6, 7, 8};
