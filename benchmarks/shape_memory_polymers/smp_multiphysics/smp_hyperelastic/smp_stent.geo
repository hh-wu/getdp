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

//n_th = 2;
//n_circle = 3;
//n_extrude = 2;

//n_th = 5;
//n_circle = 20;
//n_extrude = 3;

n_th = 2;
n_circle = 3;
n_extrude = 2;


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

ll = newll;
s_tube = news;

Line Loop(ll+1) = {-(c+1), (l+1), (c+5), -(l+2)};
Line Loop(ll+2) = {-(c+2), (l+2), (c+6), -(l+3)};
Line Loop(ll+3) = {-(c+3), (l+3), (c+7), -(l+4)};
Line Loop(ll+4) = {-(c+4), (l+4), (c+8), -(l+1)};

Plane Surface(s_tube+1) = {ll+1};
Plane Surface(s_tube+2) = {ll+2};
Plane Surface(s_tube+3) = {ll+3};
Plane Surface(s_tube+4) = {ll+4};

If (!Flag_TransFinite)
  vol_tube[] = Extrude {0, 0, L}{
    Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4};
  };
  bndhole[] = Boundary{ Volume{vol_tube[1]}; };
EndIf

If (Flag_TransFinite)
  Transfinite Line{l+1, l+2, l+3, l+4} = n_th Using Progression 1.0;
  Transfinite Line{c+1, c+5} = n_circle Using Progression 0.95;
  Transfinite Line{c+2, c+6} = n_circle Using Progression 1/0.95;
  Transfinite Line{c+3, c+7} = n_circle Using Progression 0.95;
  Transfinite Line{c+4, c+8} = n_circle Using Progression 1/0.95;
  Transfinite Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4};
  Recombine Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4};

  vol_tube[] = Extrude {0, 0, L}{
    Surface{s_tube+1, s_tube+2, s_tube+3, s_tube+4}; Layers{n_extrude}; Recombine;
  };
EndIf

// Defining physical regions
//==========================
Physical Line(DIRICHLET_MECHANICS_1) = {79};
//Physical Line(DIRICHLET_MECHANICS_2) = {35};
Physical Surface(DIRICHLET_MECHANICS_2) = {40};
Physical Volume(DOMAIN_TUBE) = {1,2,3,4};
