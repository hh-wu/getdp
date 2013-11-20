Include "params.geo" ;

// init
icircle=-1;
circles[] = {} ;
circloops[] = {} ;
is=-1;
circsurfs[] = {} ;

////
OFFSET = 100; // trick
//// to fix a confusion by gmsh
//// between surf_elem & phys_group

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
Physical Line(13) = {l3,l1,l2} ; // ABC
Physical Line(140) = {l4} ; // Sigma left
Transfinite Line{l4} = 1/lc ;
// end global square

If ( ni >= 1e6)
  surf=news+OFFSET;
  Plane Surface(surf) = {L1,circloops[]} ;
  Physical Surface(17) = {surf} ;
  Physical Line(16) = {circles[]} ;
EndIf
If ( ni < 1e6)
  Printf("Not implemented yet.");
EndIf


Mesh 2;
Save Sprintf(StrCat(Problem,"_End.msh"));
