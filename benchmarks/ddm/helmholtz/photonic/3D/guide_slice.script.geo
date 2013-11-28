Include "params.geo";

// // the output format is plain-text
// // to have a binary output format:
// //// * option 1/ add -bin to the command line
// ////   $ gmsh guide_slice.script.geo -bin -
// //// * option 2/ add Mesh.Binary=1; in this file
// Mesh.Binary=1;

// source=newp;Point(source)={0,0,0} ;
// Physical Point("SOURCE") = {source};

// init
icircle=-1;
circles[] = {} ;
circloops[] = {} ;
is=-1;
circsurfs[] = {} ;

////
OFFSET = 5000; // trick
//// to fix a confusion by gmsh
//// between surf_elem & phys_group

If(nx<1)
  nx = 1 ;
EndIf

// Global square
// Lx x Ly
isquare = -1 ;
square[] = {} ;
Lx = (nx-0.5) * dx ;
Lyp = nyp * dy + r - delta;
Lym = nym * dy + r -delta ;
Lzm = 50*r - delta ;
p10=newp+OFFSET; Point(p10) = {-Lx,Lyp,-Lzm,lc};
p20=newp; Point(p20) = {Lx,Lyp,-Lzm,lc};
p30=newp; Point(p30) = {Lx,-Lym,-Lzm,lc};
p40=newp; Point(p40) = {-Lx,-Lym,-Lzm,lc};
l10=newl+OFFSET; Line(l10) = {p10,p20};
l20=newl; Line(l20) = {p20,p30};
l30=newl; Line(l30) = {p30,p40};
l40=newl; Line(l40) = {p40,p10};
L1=newll; Line Loop(L1) = {l10,l20,l30,l40};
back=news+OFFSET; Ruled Surface(back)={L1} ; square[isquare++] = back ;

p11=newp; Point(p11) = {-Lx,Lyp,valz+Lzm,lc};
p21=newp; Point(p21) = {Lx,Lyp,valz+Lzm,lc};
p31=newp; Point(p31) = {Lx,-Lym,valz+Lzm,lc};
p41=newp; Point(p41) = {-Lx,-Lym,valz+Lzm,lc};
l11=newl; Line(l11) = {p11,p21};
l21=newl; Line(l21) = {p21,p31};
l31=newl; Line(l31) = {p31,p41};
l41=newl; Line(l41) = {p41,p11};
L1=newll; Line Loop(L1) = {l11,l21,l31,l41};
front=news; Ruled Surface(front)={-L1} ;  square[isquare++] = front ;
// minus to obtain the right orientation

l1=newl; Line(l1) = {p10,p11};
l2=newl; Line(l2) = {p20,p21};
l3=newl; Line(l3) = {p30,p31};
l4=newl; Line(l4) = {p40,p41};

L1=newll; Line Loop(L1) = {l1,-l41,-l4,l40};
left=news; Ruled Surface(left)={-L1} ;  square[isquare++] = left ;
// minus to obtain the right orientation

L1=newll; Line Loop(L1) = {l1,l11,-l2,-l10};
top=news; Ruled Surface(top)={L1} ;  square[isquare++] = top ;

L1=newll; Line Loop(L1) = {l2,l21,-l3,-l20};
right=news; Ruled Surface(right)={L1} ;  square[isquare++] = right ;

L1=newll; Line Loop(L1) = {l3,l31,-l4,-l30};
bottom=news; Ruled Surface(bottom)={L1} ;  square[isquare++] = bottom ;

box=newsl+OFFSET;Surface Loop(box) = {square[] };
// end global square


For ix In {-nx+1:nx-1}
valx = ix*dx ;
// row toward y>0
For iy In {1:nyp}
  valy = iy*dy ;
  If(DEBUG)
    Printf("iy = %g , iy*dy = %f , icircle = %g",
      iy,valy,icircle+1);
  EndIf

  p10=newp; Point(p10) = {valx,valy,0,lc};
  p20=newp; Point(p20) = {valx+r,valy,0,lc};
  p30=newp; Point(p30) = {valx,valy+r,0,lc};
  p40=newp; Point(p40) = {valx-r,valy,0,lc};
  p50=newp; Point(p50) = {valx,valy-r,0,lc};
  c10=newl; Circle(c10) = {p20,p10,p30}; circles[icircle++] = c10 ;
  c20=newl; Circle(c20) = {p30,p10,p40}; circles[icircle++] = c20 ;
  c30=newl; Circle(c30) = {p40,p10,p50}; circles[icircle++] = c30 ;
  c40=newl; Circle(c40) = {p50,p10,p20}; circles[icircle++] = c40 ;
  ll0=newll; Line Loop(ll0) = {c10,c20,c30,c40};
  sc=news; Ruled Surface(sc)={ll0} ; circsurfs[is++] = sc ;

  p11=newp; Point(p11) = {valx,valy,valz,lc};
  p21=newp; Point(p21) = {valx+r,valy,valz,lc};
  p31=newp; Point(p31) = {valx,valy+r,valz,lc};
  p41=newp; Point(p41) = {valx-r,valy,valz,lc};
  p51=newp; Point(p51) = {valx,valy-r,valz,lc};
  c11=newl; Circle(c11) = {p21,p11,p31}; circles[icircle++] = c11 ;
  c21=newl; Circle(c21) = {p31,p11,p41}; circles[icircle++] = c21 ;
  c31=newl; Circle(c31) = {p41,p11,p51}; circles[icircle++] = c31 ;
  c41=newl; Circle(c41) = {p51,p11,p21}; circles[icircle++] = c41 ;
  ll1=newll; Line Loop(ll1) = {-c11,-c21,-c31,-c41};
  sc=news; Ruled Surface(sc)={ll1} ; circsurfs[is++] = sc ;

  l2=newl; Line(l2) = {p20,p21} ;
  l3=newl; Line(l3) = {p30,p31} ;
  l4=newl; Line(l4) = {p40,p41} ;
  l5=newl; Line(l5) = {p50,p51} ;

  ll=newll; Line Loop(ll)={-c10,-l3,c11,l2} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

  ll=newll; Line Loop(ll)={-c20,-l4,c21,l3} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

  ll=newll; Line Loop(ll)={-c30,-l5,c31,l4} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

  ll=newll; Line Loop(ll)={-c40,-l2,c41,l5} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

EndFor
// row toward y>0
For iy In {1:nym}
  valy = -iy*dy ;
  If(DEBUG)
    Printf("iy = %g , iy*dy = %f , icircle = %g",
      iy,valy,icircle+1);
  EndIf

  p10=newp; Point(p10) = {valx,valy,0,lc};
  p20=newp; Point(p20) = {valx+r,valy,0,lc};
  p30=newp; Point(p30) = {valx,valy+r,0,lc};
  p40=newp; Point(p40) = {valx-r,valy,0,lc};
  p50=newp; Point(p50) = {valx,valy-r,0,lc};
  c10=newl; Circle(c10) = {p20,p10,p30}; circles[icircle++] = c10 ;
  c20=newl; Circle(c20) = {p30,p10,p40}; circles[icircle++] = c20 ;
  c30=newl; Circle(c30) = {p40,p10,p50}; circles[icircle++] = c30 ;
  c40=newl; Circle(c40) = {p50,p10,p20}; circles[icircle++] = c40 ;
  ll0=newll; Line Loop(ll0) = {c10,c20,c30,c40};
  sc=news; Ruled Surface(sc)={ll0} ; circsurfs[is++] = sc ;

  p11=newp; Point(p11) = {valx,valy,valz,lc};
  p21=newp; Point(p21) = {valx+r,valy,valz,lc};
  p31=newp; Point(p31) = {valx,valy+r,valz,lc};
  p41=newp; Point(p41) = {valx-r,valy,valz,lc};
  p51=newp; Point(p51) = {valx,valy-r,valz,lc};
  c11=newl; Circle(c11) = {p21,p11,p31}; circles[icircle++] = c11 ;
  c21=newl; Circle(c21) = {p31,p11,p41}; circles[icircle++] = c21 ;
  c31=newl; Circle(c31) = {p41,p11,p51}; circles[icircle++] = c31 ;
  c41=newl; Circle(c41) = {p51,p11,p21}; circles[icircle++] = c41 ;
  ll1=newll; Line Loop(ll1) = {-c11,-c21,-c31,-c41};
  sc=news; Ruled Surface(sc)={ll1} ; circsurfs[is++] = sc ;

  l2=newl; Line(l2) = {p20,p21} ;
  l3=newl; Line(l3) = {p30,p31} ;
  l4=newl; Line(l4) = {p40,p41} ;
  l5=newl; Line(l5) = {p50,p51} ;

  ll=newll; Line Loop(ll)={-c10,-l3,c11,l2} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

  ll=newll; Line Loop(ll)={-c20,-l4,c21,l3} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

  ll=newll; Line Loop(ll)={-c30,-l5,c31,l4} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

  ll=newll; Line Loop(ll)={-c40,-l2,c41,l5} ;
  sc=news; Ruled Surface(sc)={ll} ; circsurfs[is++] = sc ;

EndFor
EndFor
wires=newsl; Surface Loop(wires) = {circsurfs[] };


vol = newv +OFFSET; Volume(vol) = { box , wires } ;

Transfinite Surface{left} Left ;
Transfinite Surface{right} Right;

Physical Surface(16) = {circsurfs[]} ;
Physical Surface(13) = {back,front,top,bottom} ; // ABC
Physical Surface(140) = {left} ; // Sigma
Physical Surface(141) = {right} ; // Sigma

Physical Volume(17) = {vol} ;


Mesh 3;
Save Sprintf(StrCat(Problem,"_Slice.msh"));
