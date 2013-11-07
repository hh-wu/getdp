// Include "params_wg.pro" ;
Include "params.geo" ;


// // // D_DOM = D/N_DOM ;
// // // LC = lc ;
// // // If(N_DOM <1)
// // //   Error("Don't mess with me Dude ^_^");
// // // EndIf

// // // // pp[0] = newp; Point(pp[0]) = {0, 0, 0, LC};
// // // pp[1] = newp; Point(pp[1]) = {0, 0, 0, LC};
// // // pp[2] = newp; Point(pp[2]) = {0, d, 0, LC};
// // // // pp[3] = newp; Point(pp[3]) = {0, d, 0, LC};

// // // ll[0] = newl ; Line(ll[0]) = {pp[1], pp[2]} ;
// // // // ll[1] = newl ; Line(ll[1]) = {pp[1], pp[2]} ;
// // // // ll[2] = newl ; Line(ll[2]) = {pp[2], pp[3]} ;
// // // // ll[3] = newl ; Line(ll[3]) = {pp[3], pp[0]} ;

// // // // Line Loop(ll[3]+1) = {ll[0], ll[1], ll[2], ll[3]} ;
// // // // Plane Surface(0) = {ll[3]+1} ;

// // // // Transfinite Line {ll[1], ll[3]} = d/lc+1 Using Progression 1 ;
// // // // Transfinite Line {ll[0], ll[2]} = D_DOM/lc+1 Using Progression 1 ;
// // // // Transfinite Surface {0} ;
// // // // Recombine Surface {0} ;


// // // // idom = 1 ;

// // // For idom In {0:N_DOM-1}
// // // // For idom In {0:0}
// // // pp[0] = pp[1] ;
// // // pp[3] = pp[2] ;
// // // pp[1] = newp; Point(pp[1]) = {(idom+1)*D_DOM, 0, 0, LC};
// // // pp[2] = newp; Point(pp[2]) = {(idom+1)*D_DOM, d, 0, LC};


// // // // // pp[0] = newp; Point(pp[0]) = {idom*D_DOM, 0, 0, LC};
// // // // pp[4*idom+1] = newp; Point(pp[4*idom+1]) = {(idom+1)*D_DOM, 0, 0, LC};
// // // // pp[4*idom+2] = newp; Point(pp[4*idom+2]) = {(idom+1)*D_DOM, d, 0, LC};
// // // // // pp[3] = newp; Point(pp[3]) = {idom*D_DOM, d, 0, LC};

// // // // ll[3] = -ll[0] ;
// // // ll[0] = newl ; Line(ll[0]) = {pp[0], pp[1]} ;
// // // ll[1] = newl ; Line(ll[1]) = {pp[1], pp[2]} ;
// // // ll[2] = newl ; Line(ll[2]) = {pp[2], pp[3]} ;
// // // ll[3] = newl ; Line(ll[3]) = {pp[3], pp[0]} ;

// // // ss[0] = news ;
// // // // ss[1] = news ;
// // // Line Loop(ss[0]) = {ll[0], ll[1], ll[2], ll[3]} ;
// // // Plane Surface(ss[0]) = {ss[0]} ;
// // // // Line Loop(100+idom) = {ll[0], ll[1], ll[2], ll[3]} ;
// // // // Plane Surface(100+2*idom) = {100+idom} ;
// // // // Line Loop(100+idom*10) = {ll[0], ll[1], ll[2], ll[3]} ;
// // // // Plane Surface(100+idom*10) = {100+idom*10} ;


// // // Transfinite Line {ll[1], ll[3]} = d/lc+1 Using Progression 1 ;
// // // Transfinite Line {ll[0], ll[2]} = D_DOM/lc+1 Using Progression 1 ;
// // // Transfinite Surface {ss[0]} ;
// // // Recombine Surface {ss[0]} ;


// // // EndFor

// // // // Transfinite Line {ll[1], ll[3]} = d/lc+1 Using Progression 1 ;
// // // // Transfinite Line {ll[0], ll[2]} = D_DOM/lc+1 Using Progression 1 ;
// // // // Transfinite Surface {idom} ;
// // // // Recombine Surface {idom} ;







// // // // For idom In {0:N_DOM-1}
// // // //   pp[idom+1] = newp; Point(pp[idom+1]) = {(idom+1)*stepx, 0, 0, LC};
// // // //   li[idom] = newl; Line(li[idom]) = {pp[idom], pp[idom+1]};
// // // //   Physical Line(100 + idom) = {li[idom]}; //Omega

// // // //   //Transmission boundaries
// // // //   If(idom == 0)
// // // //     Physical Point(400 + idom) = {pp[idom+1]};	//right
// // // //   EndIf

// // // //   If(idom == N_DOM-1)
// // // //     Physical Point(300 + idom) = {-pp[idom]}; //left
// // // //   EndIf

// // // //   If(idom > 0 && idom < N_DOM-1)
// // // //     Physical Point(200 + idom) = {-pp[idom], pp[idom+1]};
// // // //     Physical Point(300 + idom) = {-pp[idom]}; //left
// // // //     Physical Point(400 + idom) = {pp[idom+1]};	//right
// // // //   EndIf
// // // // EndFor

// // // // Physical Point(1) = {-pp[0]};  //Gamma_Left (incoming wave)
// // // // Physical Point(2) = {pp[N_DOM]};//GammaInf




lc = LC ;

x0 = 0 ;
y0 = 0 ;

Point(1) = {x0, y0, 0, lc} ;
Point(2) = {x0+D, y0, 0, lc} ;
Point(3) = {x0+D, y0+d, 0, lc} ;
Point(4) = {x0, y0+d, 0, lc} ;

Line(1) = {1, 2} ;
Line(2) = {2, 3} ;
Line(3) = {3, 4} ;
Line(4) = {4, 1} ;

Line Loop(5) = {1, 2, 3, 4} ;
Plane Surface(6) = {5} ;


Transfinite Line {2, 4} = d/lc+1 Using Progression 1 ;
Transfinite Line {1, 3} = D/lc+1 Using Progression 1 ;
Transfinite Surface {6} ;
Recombine Surface {6} ;

Physical Line(4) = {4} ;
Physical Line(1) = {1} ;
Physical Line(2) = {2} ;
Physical Line(3) = {3} ;
Physical Surface(6) = {6} ;

Mesh 2;
// Save StrCat(MshName,".msh") ;
Save "waveguide2d_simple.msh" ;
// Save "myStraightMeshMono.msh" ;
