Include "beam_data.geo";

// square
If (!Flag_sym)
  p100 = newp; Point(p100) = {-Lx/2,0,-Lz/2, lc};
  p1 = newp; Point(p1) = {-Lx,-Ly/2,-Lz/2, lc};
  p2 = newp; Point(p2) = { 0.,-Ly/2,-Lz/2, lc};
  p3 = newp; Point(p3) = { 0., Ly/2,-Lz/2, lc};
  p4 = newp; Point(p4) = {-Lx, Ly/2,-Lz/2, lc};
ElseIf (Flag_sym==1)
  p1 = newp; Point(p1) = {-Lx,-Ly/2,-Lz/2, lc};
  p2 = newp; Point(p2) = { 0,-Ly/2,-Lz/2, lc};
  p3 = newp; Point(p3) = { 0, Ly/2,-Lz/2, lc};
  p4 = newp; Point(p4) = {-Lx, Ly/2,-Lz/2, lc};
ElseIf (Flag_sym==2)
  p1 = newp; Point(p1) = {-Lx/2,0,-Lz/2, lc};
  p2 = newp; Point(p2) = { 0,0,-Lz/2, lc};
  p3 = newp; Point(p3) = { 0, Ly/2,-Lz/2, lc};
  p4 = newp; Point(p4) = {-Lx/2, Ly/2,-Lz/2, lc};
EndIf
If (!Flag_sym)
  If (Flag_addpad)
    p10 = newp; Point(p10) = {0.,-Ly/2 + Lypad,-Lz/2, lc};
  Else
    p10 = newp; Point(p10) = {0., 0,-Lz/2, lc};
  EndIf
Else  
  p10 = newp; Point(p10) = {0, 0,-Lz/2, lc};
EndIf
If (Flag_addpad && !Flag_sym)
  p11 = newp; Point(p11) = {-Lx,-Ly/2 + Lypad,-Lz/2,lc};
  p12 = newp; Point(p12) = {Lxpad,-Ly/2 + Lypad,-Lz/2,lc};
  p13 = newp; Point(p13) = {Lxpad,-Ly/2,-Lz/2,lc};
  p14 = newp; Point(p14) = {Lxpad,-Ly/2 + Lypad,-Lz/2,lc};
ElseIf (!Flag_addpad && !Flag_sym)
  p11 = newp; Point(p11) = {-Lx,0,-Lz/2,lc};
EndIf
l1 = newl; Line(l1) = {p1,p2}; 
l3 = newl; Line(l3) = {p3,p4};
If (!Flag_sym) 
  l2_1 = newl; Line(l2_1) = {p2,p10};
  l2_2 = newl; Line(l2_2) = {p10,p3};
  l4_1 = newl; Line(l4_1) = {p4,p11};
  l4_2 = newl; Line(l4_2) = {p11,p1};
  ll1 = newll; Line Loop(ll1) = {l1,l2_1,l2_2,l3,l4_1,l4_2};
ElseIf (Flag_sym==2)
  l2 = newl; Line(l2) = {p2,p10,p3};
  l4 = newl; Line(l4) = {p4,p1};  
  ll1 = newll; Line Loop(ll1) = {l1,l2,l3,l4};
EndIf

ll_[] = {ll1};
If (Flag_addpad)
  lpad_1 = newl; Line(lpad_1) = {p10,p12};
  lpad_2 = newl; Line(lpad_2) = {p12,p13};
  lpad_3 = newl; Line(lpad_3) = {p13,p2};
  ll2 = newll; Line Loop(ll2) = {lpad_1,lpad_2,lpad_3,l2_1};
EndIf

// hole
If( Flag_hole == 1 ) //ellipse
  If (!Flag_sym)
    p_ec = newp;Point(p_ec) = {-Lx/2, 0, -Lz/2, lc}; //center
    p_e1 = newp;Point(p_e1) = {-Lx/2+hole_length/2, 0, -Lz/2, lc};  //right
    p_e2 = newp;Point(p_e2) = {-Lx/2, hole_width/2, -Lz/2, lc};   //up
    p_e3 = newp;Point(p_e3) = {-Lx/2-hole_length/2, 0, -Lz/2, lc};  //left
    p_e4 = newp;Point(p_e4) = {-Lx/2, -hole_width/2, -Lz/2, lc};  //down
  EndIf
  If (Flag_sym==1)
    p_e4 = newp;Point(p_e4) = {-Lx/2, -hole_width/2, -Lz/2, lc};  //down
    Printf("p_e4:%g",p_e4);
    l_p2_pe4 = newl; Line(l_p2_pe4) = {p2,p_e4};
    l_pe4_pe2 = newl; Line(l_pe4_pe2) = {p_e4,p_e2}; 
    l_pe2_p3 = newl; Line(l_pe2_p3) = {p_e2,p3}; 
  ElseIf (Flag_sym==2)
    p_ec = newp;Point(p_ec) = {0, 0, -Lz/2, lc}; //center
    p_e2 = newp;Point(p_e2) = {0, hole_width/2, -Lz/2, lc};   //up
    p_e3 = newp;Point(p_e3) = {-hole_length/2, 0, -Lz/2, lc};  //left
    l_pe2_p3 = newl; Line(l_pe2_p3) = {p_e2,p3}; 
  EndIf
  Printf("p_ec:%g",p_ec);
  Printf("p_e2:%g",p_e2);
  Printf("p_e3:%g",p_e3);
  
  If (!Flag_sym)
    l_e1 = newll;Ellipse(l_e1) = {p_e1, p_ec, p_e1, p_e2};
    l_e4 = newll;Ellipse(l_e4) = {p_e4, p_ec, p_e4, p_e1}; 
  EndIf
  l_e2 = newll;Ellipse(l_e2) = {p_e2, p_ec, p_e2, p_e3}; 
  line_vel[] = {l_e2};
  If (Flag_sym==0 || Flag_sym==1)
    l_e3 = newll;Ellipse(l_e3) = {p_e3, p_ec, p_e3, p_e4};
  EndIf
  If (!Flag_sym)
    ll_e = newll;Line Loop(ll_e) = {l_e1,l_e2,l_e3,l_e4};
    ll_[] += -ll_e;
  ElseIf(Flag_sym==1)
    ll_e = newll;Line Loop(ll_e) = {l1,l_p2_pe4,-l_e2,-l_e3,l_pe2_p3,l3,l4_1,l4_2};
    Printf("ll_e:%g",ll_e);
    ll_[] = {ll_e};
  ElseIf(Flag_sym==2)
    l1 = newl; Line(l1) = {p1,p_e3};
    ll_e = newll;Line Loop(ll_e) = {l1,-l_e2,l_pe2_p3,l3,l4};
    Printf("ll_e:%g",ll_e);
    ll_[] = {ll_e};
  EndIf
EndIf
If ( Flag_hole == 2 ) //spline
  aa[] = {};
  For i In {0:(NSpline-1)}
    theta = i*2*Pi/NSpline;
    aa +=newp;
    Point(aa[i]) = {RSpline~{i}*Cos[theta], RSpline~{i}*Sin[theta], -Lz/2, lc}; 
  EndFor
  l_s = newl;Spline(l_s) = { aa[],aa[0] };
  ll_s = newll; Line Loop(ll_s) = {l_s};
  ll_[] += -ll_s;
EndIf
s1 = news; Plane Surface(s1) = ll_[];
If (Flag_addpad)
  s2 = news; Plane Surface(s2) = -ll2;
EndIf

If(transfinite)
  If (Flag_addpad)
    // s1
    Transfinite Line{l1} = (nbE_Y*Lypad/Ly)*(Lxpad/Lx); //Using Bump 0.01;
    Transfinite Line{-l3} = (nbE_Y*Lypad/Ly)*(Lxpad/Lx); //Using Bump 0.01;
    Transfinite Line{l2_1} = nbE_Y*Lypad/Ly; //Using Bump 0.01;
    Transfinite Line{l2_2} = nbE_Y*(1.0-Lypad/Ly); //Using Bump 0.01;
    Transfinite Line{-l4_1} = nbE_Y*(1.0-Lypad/Ly); //Using Bump 0.01;
    Transfinite Line{-l4_2} = nbE_Y*(Lypad/Ly); //Using Bump 0.01;
    // s2 
    Transfinite Line{lpad_1} = (nbE_Y_pad*Lypad/Ly)*(Lxpad/Lx);
    Transfinite Line{lpad_3} = (nbE_Y_pad*Lypad/Ly)*(Lxpad/Lx);
    Transfinite Line{lpad_2} = nbE_Y_pad*Lypad/Ly;
    Transfinite Surface{s2} = {p10,p12,p13,p2};
  Else
    Transfinite Line{l1} = nbE_X; //Using Bump 0.01;
    Transfinite Line{-l3} = nbE_X; //Using Bump 0.01; 
    Transfinite Line{l2_1} = nbE_Y*0.5; //Using Bump 0.01;
    Transfinite Line{l2_2} = nbE_Y*0.5; //Using Bump 0.01;
    Transfinite Line{-l4_1} = nbE_Y*0.5; //Using Bump 0.01;
    Transfinite Line{-l4_2} = nbE_Y*0.5; //Using Bump 0.01;
  EndIf
  Transfinite Surface{s1} = {p1,p2,p3,p4};
  Recombine Surface "*";
EndIf

// Extrude: 3D
If(Flag_extrude) 
  If(!transfinite)
    e1[] = Extrude {0, 0, Lz} { Surface{s1}; };
  EndIf
  If(transfinite)
    Transfinite Surface {s1} = {l1, l2_1, l2_2, l3, l4_1,l4_2};
    Recombine Surface "*";
    e1[] = Extrude {0, 0, Lz} { Surface{s1}; Layers {nbE_Z}; Recombine;};
  EndIf
  vol[] = {e1[1]};
EndIf
pl[] = Line "*";

// Physical regions
If(!Flag_extrude) //2D
  If (Flag_addpad)
    Physical Surface(BLOC) = {s1,s2}; 
  Else
    Physical Surface(BLOC) = {s1}; 
  EndIf
  If (!Flag_sym)
    Physical Line(SURF_GAUCHE) = {l4_1,l4_2};
  ElseIf (Flag_sym==2)
    Physical Line(SURF_GAUCHE) = {l4};
  EndIf
  Physical Line(SURF_HAUT) = {l3};
  If(Flag_hole && Flag_sym==2) 
    Physical Line(SURF_DROITE) = {l_pe2_p3};//{l2_1,l2_2};
  Else
    Physical Line(SURF_DROITE) = {l2_1,l2_2};
  EndIf 
  Physical Line(SURF_BAS) = {l1};
  //Physical Point(POINT_CENTER) = {p100};
  Physical Point(POINT_1) = {p1};
  Physical Point(POINT_2) = {p2};
  Physical Point(POINT_3) = {p3};
  Physical Point(POINT_4) = {p4};
  Physical Point(POINT_5) = {p10};
  If (Flag_addpad)
    Physical Point(POINT_12) = {p12};
  EndIf
  If(Flag_hole && !Flag_sym)
    Physical Line(HOLE) = {pl[4],pl[5],pl[6],pl[7]}; 
    pNP[] = pl[];
    pNP[] -= {pl[4],pl[5],pl[6],pl[7]};
  EndIf
  If(Flag_hole && Flag_sym==1)
    Physical Line(HOLE) = {l_e2,l_e3}; 
    pNP[] = pl[];
    pNP[] -= {l_e2,l_e3};
  EndIf
  If(Flag_hole && Flag_sym==2)
    Physical Line(HOLE) = {l_e2}; 
    pNP[] = pl[];
    pNP[] -= {l_e2};
  EndIf
  If(Flag_hole)
    Physical Line(LINE_NON_PERTURBED) = { pNP[] };
  EndIf
EndIf
If(Flag_extrude) //3D
  Printf("pl:",pl[]);
  Printf("e1:",e1[]);
  Physical Volume(BLOC) = vol[]; 
  Physical Surface(SURF_HAUT) = e1[5];
  If (!Flag_sym)
    Physical Surface(SURF_DROITE) = {e1[3],e1[4]};
    Physical Surface(SURF_GAUCHE) = {e1[6],e1[7]};
  ElseIf (Flag_sym==2)
    Physical Surface(SURF_DROITE) = e1[4]; 
    Physical Surface(SURF_GAUCHE) = e1[6];
  EndIf 
  Physical Surface(SURF_BAS) = e1[2];
  If(!Flag_hole)
    Physical Line(LINE_BAS) = {pl[9]};
  EndIf
//  If(Flag_hole==1)//ellipse
//    Physical Line(LINE_BAS) = {pl[17]};
//  EndIf
//  If(Flag_hole==2)//spline
//    Physical Line(LINE_BAS) = {pl[11]};
//  EndIf
  Physical Point(POINT_1) = p1;
  Physical Point(POINT_2) = p2;
  Physical Point(POINT_3) = p3;
  Physical Point(POINT_4) = p4;
EndIf
Color SkyBlue {Surface{s1};}
//Mesh.RecombineAll = 1; 



