Include "params.geo";

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
Lx = (nx-1/2)*dx ;
Lyp = nyp * dy + r - delta;
Lym = nym * dy + r -delta ;
Lzm = 0;
p1=newp+OFFSET; Point(p1) = {-Lx,Lyp,-Lzm,lc};
p2=newp; Point(p2) = {Lx,Lyp,-Lzm,lc};
p3=newp; Point(p3) = {Lx,-Lym,-Lzm,lc};
p4=newp; Point(p4) = {-Lx,-Lym,-Lzm,lc};
l1=newl+OFFSET; Line(l1) = {p1,p2}; square[isquare++] = l1 ;
l2=newl; Line(l2) = {p2,p3}; square[isquare++] = l2 ;
l3=newl; Line(l3) = {p3,p4}; square[isquare++] = l3 ;
l4=newl; Line(l4) = {p4,p1}; square[isquare++] = l4 ;
L1=newll+OFFSET; Line Loop(L1) = {l1,l2,l3,l4};
Physical Line(13) = {l3,l1} ; // ABC
Physical Line(140) = {l4} ; // Sigma left
Physical Line(141) = {l2} ; // Sigma right
Transfinite Line{l2,l4} = 1/lc ;
// end global square

// hack
p1=newp; Point(p1) = {1,0,0,lc};
p2=newp; Point(p2) = {1,1,0,lc};
p3=newp; Point(p3) = {0,1,0,lc};
p4=newp; Point(p4) = {0,0,0,lc};
l1=newl; Line(l1) = {p1,p2};
l2=newl; Line(l2) = {p2,p3};
l3=newl; Line(l3) = {p3,p4};
l4=newl; Line(l4) = {p4,p1};
Ltemp=newll; Line Loop(Ltemp) = {l1,l2,l3,l4};
sc=news+OFFSET; Plane Surface(sc)={Ltemp};

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
  ll=newll; Line Loop(ll) = {c10,c20,c30,c40}; circloops[is++] = ll ;
  sc=news; Plane Surface(sc)={ll} ; circsurfs[is] = sc ;
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
  ll0=newll; Line Loop(ll0) = {c10,c20,c30,c40}; circloops[is++] = ll0 ;
  sc=news; Plane Surface(sc)={ll0} ; circsurfs[is] = sc ;
EndFor
EndFor
If(DEBUG)
Printf("icircle = %g , L2 = %g (=%g ?)",icircle+1,sc,icircle+1+4+1);
EndIf

If ( ni >= 1e6)
  surf=news;
  Plane Surface(surf) = {L1,circloops[]} ;
  Physical Surface(17) = {surf} ;
  Physical Line(16) = {circles[]} ;
EndIf
If ( ni < 1e6)
  Plane Surface(1) = {L1,circloops[]} ;
  Physical Surface(17) = {1} ;
  Physical Surface(27) = {circsurfs[]} ;
EndIf

Mesh 2;
Save Sprintf(StrCat(Problem,"_Slice.msh"));
