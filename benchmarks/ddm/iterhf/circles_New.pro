Include "circles_param.pro";

// Function {
//   // Phase Reduction formulation - For imposing phi_unwrap on a point as a source
//   phi0 = Pi/4*0 ;
//   xcen = (Nh-1)*(2*R0+distx)/2 ;
//   ycen = (Nv-1)*(2*R0+disty)/2 ;
//   ii = 1 ;
//   For t1 In {1:Nh}
//     For t2 In {1:Nv}
//       xaux = (t1-1)*(2*R0+distx)-xcen ;
//       yaux = (t2-1)*(2*R0+disty)-ycen ;
//       cx~{ii} = xaux; cy~{ii} = yaux; cz~{ii} = 0.; // coordinates of center
//       px~{ii} = xaux+R0*Cos[phi0]; py~{ii} = yaux+R0*Sin[phi0] ; pz~{ii} = 0.; // coordinates of an arbitrary boundary point
//       Printf("bnd pnt %g %g %g", px~{ii},py~{ii},pz~{ii});
//       Printf("center  %g %g %g", cx~{ii},cy~{ii},cz~{ii});
//       ii=ii+1;
//     EndFor
//   EndFor
//  //For problem with only one scatterer center at (0,0,0)
//   cx~{0} = 0; cy~{0} = 0; cz~{0} = 0.; // coordinates of center
// }
Function {
  If (Flag_Quinconce)
    disty = disty*Sqrt[2]/2.;
  EndIf

  // Phase Reduction formulation - For imposing phi_unwrap on a point as a source
  phi0 = Pi/4*0 ;
  xcen = (Nh-1)*(2*R0+distx)/2 ;
  ycen = (Nv-1)*(2*R0+disty)/2 ;
  ii = 1 ;
  If (!Flag_Quinconce)
  For t1 In {1:Nh}
    For t2 In {1:Nv}
      xaux = (t1-1)*(2*R0+distx)-xcen ;
      yaux = (t2-1)*(2*R0+disty)-ycen ;
      cx~{ii} = xaux; cy~{ii} = yaux; cz~{ii} = 0.; // coordinates of center
      px~{ii} = xaux+R0*Cos[phi0]; py~{ii} = yaux+R0*Sin[phi0] ; pz~{ii} = 0.; // coordinates of an arbitrary boundary point
      Printf("%g bnd pnt %g %g %g", ii, px~{ii},py~{ii},pz~{ii});
      Printf("%g center  %g %g %g", ii, cx~{ii},cy~{ii},cz~{ii});
      ii=ii+1;
    EndFor
  EndFor
  EndIf

  If (Flag_Quinconce)
For t1 In {1:Nh} 
  For t2 In {1:Nv} 
  //If(t1==t2 ||t1<t2 )
    xaux = (t1-1)*(2*R0+distx)-xcen ;    
    yaux = (t2-1)*(2*R0+disty)-ycen ;
    If (Flag_Quinconce && (t2 % 2))
      xaux += R0+distx/2;
    EndIf
    If(!(Flag_Quinconce && t2 % 2 && t1 == Nh))
      cx~{ii} = xaux; cy~{ii} = yaux; cz~{ii} = 0.; // coordinates of center
      px~{ii} = xaux+R0*Cos[phi0]; py~{ii} = yaux+R0*Sin[phi0] ; pz~{ii} = 0.; // coordinates of an arbitrary boundary point
      Printf("%g bnd pnt %g %g %g", ii, px~{ii},py~{ii},pz~{ii});
      Printf("%g center  %g %g %g", ii, cx~{ii},cy~{ii},cz~{ii});
      ii=ii+1;
    EndIf
  //EndIf
EndFor
EndFor
  EndIf

 //For problem with only one scatterer center at (0,0,0)
  cx~{0} = 0; cy~{0} = 0; cz~{0} = 0.; // coordinates of center
}

Group {
  Gama~{0}  = #{ (100:(100+Nh*Nv-1)) }; //Total problem
  Omega~{0} = Region[ {1} ];
  FilledHole~{0} = #{} ;
  Epsilon~{0} = #{ (300:(300+Nh*Nv-1)) };

  Sigma = Region[ {2} ];

  For iSub In {1:Nbr_SubProblems}
    Omega~{iSub} = Region[ {1} ];
    Gama~{iSub} = #{ (100+iSub-1) } ;
    Epsilon~{iSub} = #{ (300+iSub-1) };
    FilledHole~{iSub} = #{} ;
    For t In {1:Nbr_SubProblems}
      If (t!=iSub)
        FilledHole~{iSub} += Region[{ (200+t-1) }];
      EndIf
    EndFor
    Omega~{iSub} += Region[ FilledHole~{iSub}] ;
  EndFor
}

DIM = 2D; // for projections
Function {
  I[] = Complex[0, 1];

  // incident plane wave
  alpha0 = 0*Pi/8 ;
  alpha[] = Vector[Cos[alpha0], Sin[alpha0], 0];
  uinc[] = Complex[ Cos[k*alpha[]*XYZ[]], Sin[k*alpha[]*XYZ[]] ];
  grad_uinc[] = I[] * k * alpha[] * uinc[];
  dn_uinc[] = Normal[] * grad_uinc[];

  // Coefs for Bayliss-Turkel ABC (as a correction to the Sommerfeld ABC)
  alphaBT[] = 1/(2*Ro) - I[]/(8*k*Ro^2*(1+I[]/(k*Ro)));
  betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*Ro)));

  // projection operators for phase extension
  For iSub In {0:Nbr_SubProblems}
    C~{iSub}[] = Vector[cx~{iSub},cy~{iSub},cz~{iSub}];
    R~{iSub}[]  = XYZ[] - C~{iSub}[] ;

    R0~{iSub}[] = R0 * R~{iSub}[] / Norm[R~{iSub}[]];
    normRminusR0~{iSub}[] = Norm[ R~{iSub}[] - R0~{iSub}[]] ;

    ProjectX~{iSub}[] = cx~{iSub} + R0 * (X[]-cx~{iSub}) / Norm[R~{iSub}[]];
    ProjectY~{iSub}[] = cy~{iSub} + R0 * (Y[]-cy~{iSub}) / Norm[R~{iSub}[]];
    ProjectZ~{iSub}[] = 0.;

    Project~{iSub}[] = C~{iSub}[] + R0 * (XYZ[]-C~{iSub}[]) / Norm[R~{iSub}[]];
 EndFor
}

Include "Helmholtz_Iter_New.pro";

//PrintConstants;
