Include "params.geo" ;

// // the output format is plain-text
// // to have a binary output format:
// //// * option 1/ add -bin to the command line
// ////   $ gmsh guide_start.script.geo -bin -
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

// Global square
// Lx x Ly
isquare = -1 ;
square[] = {} ;
Lx = (nx-1/2)*dx ;
Lyp = nyp * dy + r - delta;
Lym = nym * dy + r -delta ;
Lzm = 50*r -delta ;
p10=newp; Point(p10) = {-Lx,Lyp,-Lzm,lc};
p20=newp; Point(p20) = {Lx,Lyp,-Lzm,lc};
p30=newp; Point(p30) = {Lx,-Lym,-Lzm,lc};
p40=newp; Point(p40) = {-Lx,-Lym,-Lzm,lc};
l10=newl; Line(l10) = {p10,p20};
l20=newl; Line(l20) = {p20,p30};
l30=newl; Line(l30) = {p30,p40};
l40=newl; Line(l40) = {p40,p10};
L1=newll; Line Loop(L1) = {l10,l20,l30,l40};
back=news; Ruled Surface(back)={L1} ; square[isquare++] = back ;

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

box=newsl; Surface Loop(box) = {square[] };
// end global square

vol = newv ; Volume(vol) = { box } ;

Transfinite Surface{right} Right ;

//Physical Surface(16) = {circsurfs[]} ;
Physical Surface(13) = {back,front,top,bottom,left} ; // ABC
Physical Surface(141) = {right} ; // Sigma

Physical Volume(17) = {vol} ;


Mesh 3;
str = StrCat("../",Problem);
Save Sprintf(StrCat(str,"_Start.msh"));
