Include "meso.dat";

If(Flag_Exact)
  x_L = Position_X - 0.5 * eps; 
  y_L = Position_Y - 0.5 * eps;
  Printf("Position_X = %g, Position_Y = %g", Position_X, Position_Y);
EndIf
If(!Flag_Exact)
  x_L = - 0.5 * eps; 
  y_L = - 0.5 * eps;
EndIf

p1 = newp ;  Point(p1)  = {x_L + 0.5 * d_i        , y_L + 0.5 * d_i        , 0.0, lc_ext};
p2 = newp ;  Point(p2)  = {x_L + eps - 0.5 * d_i  , y_L + 0.5 * d_i        , 0.0, lc_ext};
p3 = newp ;  Point(p3)  = {x_L + eps - 0.5 * d_i  , y_L + eps - 0.5 * d_i  , 0.0, lc_ext};
p4 = newp ;  Point(p4)  = {x_L + 0.5 * d_i        , y_L + eps - 0.5 * d_i  , 0.0, lc_ext};
p5 = newp ;  Point(p5)  = {x_L + d_i              , y_L + d_i + r_c        , 0.0, lc_int};
p6 = newp ;  Point(p6)  = {x_L + d_i + r_c        , y_L +  d_i             , 0.0, lc_int};
p7 = newp ;  Point(p7)  = {x_L + d_i + r_c        , y_L + d_i + r_c        , 0.0, lc_int};
p8 = newp ;  Point(p8)  = {x_L + eps - (d_i + r_c), y_L + d_i              , 0.0, lc_int};
p9 = newp ;  Point(p9)  = {x_L + eps - d_i        , y_L + d_i + r_c        , 0.0, lc_int};
p10 = newp;  Point(p10) = {x_L + eps - (d_i + r_c), y_L + d_i + r_c        , 0.0, lc_int};
p11 = newp;  Point(p11) = {x_L + eps - d_i        , y_L + eps - (d_i + r_c), 0.0, lc_int};
p12 = newp;  Point(p12) = {x_L + eps - (d_i + r_c), y_L + eps - d_i        , 0.0, lc_int};
p13 = newp;  Point(p13) = {x_L + eps - (d_i + r_c), y_L + eps - (d_i + r_c), 0.0, lc_int};
p14 = newp;  Point(p14) = {x_L + (d_i + r_c)      , y_L + eps - d_i        , 0.0, lc_int};
p15 = newp;  Point(p15) = {x_L + d_i              , y_L + eps - (d_i + r_c), 0.0, lc_int};
p16 = newp;  Point(p16) = {x_L + d_i + r_c        , y_L + eps - (d_i + r_c), 0.0, lc_int};

p17 = newp;  Point(p17) = {x_L + 0.0              , y_L + 0.0              , 0.0, lc_ext};
p18 = newp;  Point(p18) = {x_L + eps              , y_L + 0.0              , 0.0, lc_ext};
p19 = newp;  Point(p19) = {x_L + eps              , y_L + eps              , 0.0, lc_ext};
p20 = newp;  Point(p20) = {x_L + 0.0              , y_L + eps              , 0.0, lc_ext};

//=============
// Adding lines
//=============

l1 = newl ; Line(l1)    = {p1,p2} ;
l2 = newl ; Line(l2)    = {p2,p3} ;
l3 = newl ; Line(l3)    = {p3,p4} ;
l4 = newl ; Line(l4)    = {p4,p1} ;
l5 = newl; Circle(l5)   = {p5, p7, p6};
l6 = newl ; Line(l6)    = {p6,p8} ;
l7 = newl; Circle(l7)   = {p8, p10, p9};
l8 = newl ; Line(l8)    = {p9,p11} ;
l9 = newl; Circle(l9)   = {p11, p13, p12};
l10 = newl ; Line(l10)  = {p12,p14} ;
l11 = newl; Circle(l11) = {p14, p16, p15};
l12 = newl ; Line(l12)  = {p15,p5} ;

l13 = newl ; Line(13)   = {p17, p18};
l14 = newl ; Line(14)   = {p18, p2 };
l15 = newl ; Line(15)   = {p1 , p17};
l16 = newl ; Line(16)   = {p18, p19};
l17 = newl ; Line(17)   = {p19, p3 };
l18 = newl ; Line(18)   = {p19, p20};
l19 = newl ; Line(19)   = {p20, p4 };
l20 = newl ; Line(20)   = {p20, p17};

//====================================
// Adding the surface of the conductor
//====================================

ll1 = newll; Line Loop(ll1)   = {l5,l6,l7,l8, l9, l10, l11, l12} ;
s_cond[] = news ; Plane Surface(news) = {ll1} ;
ll2 = newll; Line Loop(ll2)   = {l1,l2,l3,l4} ;
s_iso[]  = news ; Plane Surface(news) = {ll2, ll1} ;

//=======================================
// Adding transfinite insulation surfaces
//=======================================

ll3 = newll; Line Loop(ll3)   = {l13,l14,-l1,l15} ;
s_iso3[]  = news ; Plane Surface(news) = {ll3} ;
Transfinite Line{l1, l13} = n_1 ;
Transfinite Line{l14, -l15} = n_2 ;
Transfinite Surface{s_iso3[]} ; Recombine Surface{s_iso3[]} ;

ll4 = newll; Line Loop(ll4)   = {l16,l17,-l2,-l14} ;
s_iso4[]  = news ; Plane Surface(news) = {ll4} ;
Transfinite Line{l2, l16} = n_1 ;
Transfinite Line{l14, l17} = n_2 ;
Transfinite Surface{s_iso4[]} ; Recombine Surface{s_iso4[]} ;

ll5 = newll; Line Loop(ll5)   = {l18,l19,-l3,-l17} ;
s_iso5[]  = news ; Plane Surface(news) = {ll5} ;
Transfinite Line{l3, l18} = n_1 ;
Transfinite Line{l17, l19} = n_2 ;
Transfinite Surface{s_iso5[]} ; Recombine Surface{s_iso5[]} ;

ll6 = newll; Line Loop(ll6)   = {l20,-l15,-l4,-l19} ;
s_iso6[]  = news ; Plane Surface(news) = {ll6} ;
Transfinite Line{l4, l20} = n_1 ;
Transfinite Line{l19, -l15} = n_2 ;
Transfinite Surface{s_iso6[]} ; Recombine Surface{s_iso6[]} ;

//========================
// Adding physical regions
//========================

Physical Point(GAMMA_POINT)  = {p1};

Physical Line(GAMMA_LEFT)    = {l20};
Physical Line(GAMMA_RIGHT)   = {l16};
Physical Line(GAMMA_DOWN)    = {l13};
Physical Line(GAMMA_UP)      = {l18};

Physical Surface(IRON)       = {s_cond[]};
Physical Surface(INSULATION) = {s_iso[], s_iso3[], s_iso4[], s_iso5[], s_iso6[]};

