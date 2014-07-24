Group {
  c1    = Region[121] ;
  c2    = Region[122] ;
  c3    = Region[123] ;
  c4    = Region[124] ;
  //square     = Region[124];
  guide      = Region[101];
  diel       = Region[111];
  Tot        = Region[{guide, diel}];
}

Function {
  mu0 = 4.e-7 * Pi ;
  ep0 = 8.854187817e-12 ;
  epsr = 13.;
  epsilonr[guide]  = epsr;
  epsilonr[diel]   = 1.0;
  mur[] = 1.0;

  mode=18;
  frames=60;

  DefineConstant[
    nn = {40, Min 1, Max 100, Name "Number of points"},
    ic = {0, Min 0, Max 3*nn-1, Step 1, Loop 1, Name "Step"}
  ];

  /* tan pi/6 */
  ta=1./Sqrt[3.];

  If(ic < nn)
    par2 = 0.025*ic;
    par1=0.0;
  EndIf
  If(ic>=nn && ic<2*nn)
    par2=1.;
    par1=0.025*ta*(ic-nn);
  EndIf
  If (ic>=2*nn && ic<3*nn)
    par2=0.025*(3*nn-ic);
    par1=0.025*ta*(3*nn-ic);
  EndIf

  KX = par1 * 2. * ta * Pi;
  KY = par2 * 2. * ta * Pi ;
  //KX = 2. * Pi /3. ; //4.3;
  //KY = 2. * Pi /Sqrt[3.] ; //2.07;
  //gam = 7.;

  DefineConstant[ gam= {2., Choices{0, 1, 2, 4, 2*Pi}, Name "beta"} ];
  // == \beta\Lambda p. 152

  dec=-0.01;
  If (gam==0)
    dec=0.4;
    If (ic<nn/2)
      dec=-0.5;
    EndIf
    If (ic>3*nn-nn/2)
      dec=-0.5;
    EndIf
    If (ic>=nn/2 && ic<nn)
      dec=0.2;
    EndIf
    If (ic>=3*nn-nn && ic<=3*nn-nn/2)
      dec=0.2;
    EndIf
  EndIf

  Printf("  ITERATION %g ", ic);
  Printf("  parameters %g %g %g %g", par1,par2,gam,dec);

  // je definis le shift pour l'algo Lanczos.
  gamma[] = gam;
  decalage = gam*gam/epsr+dec;
  //decalage=32;

  // je definis les vecteurs pour "LinkCplx".
  EZ[] = Vector[0,0,1] ;

  L=1.;
  s=L/2.; c=Sqrt[3.]*L/2.;

  //KX=KX / c;
  //KY=KY / c;

  c13=Cos[ - KX*s - KY*c];
  s13=Sin[ - KX*s - KY*c];
  c24=Cos[   KX*s - KY*c];
  s24=Sin[   KX*s - KY*c];

  ca=Cos[KX];
  sa=Sin[KX];
}

Constraint {
  { Name arete;
    Case {
      //{ Region square; Value 0.; }
      { Region c3 ; Type LinkCplx ; RegionRef c1;
        Coefficient  Complex[c13,s13];
	Function Vector[$X+s,$Y+c,0] ;
      }
      { Region c4 ; Type LinkCplx ; RegionRef c2;
        Coefficient  Complex[c24,s24];
	Function Vector[$X-s,$Y+c,0] ;
      }
    }
  }
  { Name nodal;
    Case {
      //{ Region square; Value 0.; }
      { Region c3 ; Type LinkCplx ; RegionRef c1;
        Coefficient  Complex[c13,s13];
	Function Vector[$X+s,$Y+c,0] ;
      }
      { Region c4 ; Type LinkCplx ; RegionRef c2;
        Coefficient  Complex[c24,s24];
	Function Vector[$X-s,$Y+c,0] ;
      }
    }
  }
}

FunctionSpace {
  { Name H_nodal; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef hn; Function BF_Node; Support Tot; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef hn; EntityType NodesOf ; NameOfConstraint nodal; }
    }
  }

  { Name H_arete; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef he; Function BF_Edge; Support Tot; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint arete; }
    }
  }

  { Name H_arete_perp; Type Form1P;
    BasisFunction {
      { Name sn; NameOfCoef hn; Function BF_PerpendicularEdge; Support Tot; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef hn; EntityType NodesOf ; NameOfConstraint nodal; }
    }
  }

  { Name H_facet_perp; Type Form2;
    BasisFunction {
      { Name sn; NameOfCoef hn; Function BF_PerpendicularFacet; Support Tot; Entity EdgesOf[All]; }
    }
  }
}

Jacobian{
  { Name JVol ;
    Case {
      { Region All ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Triangle ; NumberOfPoints 3 ; }
        }
      }
    }
  }
}

Formulation {
  // formulation H en incidence conique
  { Name Guide_h_2D; Type FemEquation;
    Quantity {
      { Name Ht; Type Local; NameOfSpace H_arete; }
      { Name Hl; Type Local; NameOfSpace H_arete_perp; }
    }
    Equation {
      Galerkin { [ 1/mur[] * Dof{d Ht} , {d Ht} ]; In Tot; Integration I1;
      Jacobian JVol; }
      Galerkin { [ 1/mur[] * Dof{d Hl} , {d Hl} ]; In Tot; Integration I1;
      Jacobian JVol; }
      Galerkin { DtDtDof [ epsilonr[] * Dof{Ht} , {Ht} ]; In Tot; Integration
      I1; Jacobian JVol; }
      Galerkin { DtDtDof [ epsilonr[] * Dof{Hl} , {Hl} ]; In Tot; Integration
      I1; Jacobian JVol; }

      Galerkin { [ - Complex[0,gamma[]]/mur[] * (EZ[] *^ Dof{Ht}) , {d
      Hl} ]; In Tot; Integration I1; Jacobian JVol; }
      Galerkin { [   Complex[0,gamma[]]/mur[] * Dof{d Hl} ,  EZ[] *^ {Ht} ];
      In Tot; Integration I1; Jacobian JVol; }
      Galerkin { [   gamma[]^2/mur[] * (EZ[] *^ Dof{Ht}) , EZ[] *^ {Ht} ];
      In Tot; Integration I1; Jacobian JVol; }
    }
  }

}


Resolution {
  { Name Guide_h_2D_PVP;
    System {
      { Name A; NameOfFormulation Guide_h_2D; Type Complex; Frequency 1.; }
    }
    Operation {
      GenerateSeparate[A];  EigenSolve[A, 20, decalage,0];
      SaveSolutions[A] ;
    }
  }
}

PostProcessing {
  { Name Guide_h_2D; NameOfFormulation Guide_h_2D; NameOfSystem A;
    Quantity {
      //{ Name ht;   Value{ Local{ [ {Ht} ] ; In Tot; Jacobian JVol; } } }
      //{ Name ht1;  Value{ Local{ [ {Ht} * Complex[c13,-s13] ] ; In Tot; Jacobian JVol; } } }

      { Name ht     ;  Value{ Local{ [ {Ht}                                           ] ; In Tot; Jacobian JVol; } } }
      { Name htb    ;  Value{ Local{ [ {Ht}* Complex[c13,-s13]                        ] ; In Tot; Jacobian JVol; } } }
      { Name hta    ;  Value{ Local{ [ {Ht}* Complex[ca , sa ]                        ] ; In Tot; Jacobian JVol; } } }
      { Name htb1_a ;  Value{ Local{ [ {Ht}* Complex[c13, s13] * Complex[ca  , sa]    ] ; In Tot; Jacobian JVol; } } }
      { Name htb_a  ;  Value{ Local{ [ {Ht}* Complex[c13,-s13] * Complex[ca  , sa]    ] ; In Tot; Jacobian JVol; } } }
      { Name ht2a   ;  Value{ Local{ [ {Ht}* Complex[ca, sa]^2                        ] ; In Tot; Jacobian JVol; } } }
      { Name htb1_2a;  Value{ Local{ [ {Ht}* Complex[c13, s13] * Complex[ca, sa]^2    ] ; In Tot; Jacobian JVol; } } }
      { Name ht2b ;    Value{ Local{ [ {Ht}* Complex[c13,-s13]^2                      ] ; In Tot; Jacobian JVol; } } }
      { Name ht2b1_2a; Value{ Local{ [ {Ht}* Complex[c13, s13]^2 * Complex[ca, sa]^2  ] ; In Tot; Jacobian JVol; } } }
      //{ Name htp;  Value{ Local{ [ {Ht} * Complex[Cos[-KX*X[]-KY*Y[]],Sin[-KX*X[]-KY*Y[]]]]                 ; In Tot; Jacobian JVol; } } }
      //{ Name htpx; Value{ Local{ [ {Ht} * Complex[Cos[-KX*(X[]+1)-KY*Y[]],Sin[-KX*(X[]+1)-KY*Y[]]]]         ; In Tot; Jacobian JVol; } } }
      //{ Name htpy; Value{ Local{ [ {Ht} * Complex[Cos[-KX*X[]-KY*(Y[]-1)],Sin[-KX*X[]-KY*(Y[]-1)]]]         ; In Tot; Jacobian JVol; } } }
      //{ Name htpxy;Value{ Local{ [ {Ht} * Complex[Cos[-KX*(X[]-1)-KY*(Y[]-1)],Sin[-KX*(X[]-1)-KY*(Y[]-1)]]] ; In Tot; Jacobian JVol; } } }
      { Name hlz     ;  Value{ Local{ [ CompZ[{Hl}                                           ]] ; In Tot; Jacobian JVol; } } }
      { Name hlzb    ;  Value{ Local{ [ CompZ[{Hl}* Complex[c13,-s13]                        ]] ; In Tot; Jacobian JVol; } } }
      { Name hlza    ;  Value{ Local{ [ CompZ[{Hl}* Complex[ca , sa ]                        ]] ; In Tot; Jacobian JVol; } } }
      { Name hlzb1_a ;  Value{ Local{ [ CompZ[{Hl}* Complex[c13, s13] * Complex[ca  , sa]    ]] ; In Tot; Jacobian JVol; } } }
      { Name hlzb_a  ;  Value{ Local{ [ CompZ[{Hl}* Complex[c13,-s13] * Complex[ca  , sa]    ]] ; In Tot; Jacobian JVol; } } }
      { Name hlz2a   ;  Value{ Local{ [ CompZ[{Hl}* Complex[ca, sa]^2                        ]] ; In Tot; Jacobian JVol; } } }
      { Name hlzb1_2a;  Value{ Local{ [ CompZ[{Hl}* Complex[c13, s13] * Complex[ca, sa]^2    ]] ; In Tot; Jacobian JVol; } } }
      { Name hlz2b ;    Value{ Local{ [ CompZ[{Hl}* Complex[c13,-s13]^2                      ]] ; In Tot; Jacobian JVol; } } }
      { Name hlz2b1_2a; Value{ Local{ [ CompZ[{Hl}* Complex[c13, s13]^2 * Complex[ca, sa]^2  ]] ; In Tot; Jacobian JVol; } } }
      //{ Name h;  Value{ Local{ [ {Ht}+{Hl} ] ; In Tot; Jacobian JVol; } } }
    }
  }
}

PostOperation {
  { Name h; NameOfPostProcessing Guide_h_2D;
    Operation {
      //Print[ht,  OnElementsOf Tot , File   "DEDET.pos", Format Gmsh ] ;
      //Print[ht1, OnElementsOf Tot , File > "DEDET.pos", ChangeOfCoordinates {$X+s,$Y+c,$Z} ] ;
      //Print[htx, OnElementsOf Tot , File > "DEDET.pos", ChangeOfCoordinates {$X+1,$Y,$Z} ] ;
      //Print[hty, OnElementsOf Tot , File > "DEDET.pos", ChangeOfCoordinates {$X,$Y+1,$Z} ] ;
      //Print[htxy,OnElementsOf Tot , File > "DEDET.pos", ChangeOfCoordinates {$X+1,$Y+1,$Z} ] ;
      //Print[htxx, OnElementsOf Tot , File > "DEDET.pos", ChangeOfCoordinates {$X+2,$Y,$Z} ] ;
      //Print[htxxy,OnElementsOf Tot , File > "DEDET.pos", ChangeOfCoordinates {$X+2,$Y+1,$Z} ] ;

      //Print[htp, OnElementsOf Tot , File   "DEDEP.pos" , Format Gmsh ] ;
      //Print[htp, OnElementsOf Tot , File > "DEDEP.pos" , ChangeOfCoordinates {$X+1,$Y,$Z}  ] ;
      //Print[htp, OnElementsOf Tot , File > "DEDEP.pos" , ChangeOfCoordinates {$X,$Y+1,$Z}  ] ;
      //Print[htp, OnElementsOf Tot , File > "DEDEP.pos" , ChangeOfCoordinates {$X+1,$Y+1,$Z}  ] ;
      Print[ht, OnElementsOf Tot , File "DEDET1.pos" , Format Gmsh, Depth -4 ] ;
      Print[htb, OnElementsOf Tot , File  "DEDET2.pos" , ChangeOfCoordinates {$X+s,$Y+c,$Z}, Depth -4 ] ;
      Print[hta, OnElementsOf Tot , File  "DEDET3.pos" , ChangeOfCoordinates {$X+1,$Y,$Z}, Depth -4 ] ;
      Print[htb1_a, OnElementsOf Tot , File  "DEDET4.pos" , ChangeOfCoordinates {$X+1-s,$Y-c,$Z}, Depth -4 ] ;
      Print[htb_a, OnElementsOf Tot , File  "DEDET5.pos" , ChangeOfCoordinates {$X+1+s,$Y+c,$Z}, Depth -4 ] ;
      Print[ht2a, OnElementsOf Tot , File  "DEDET6.pos" , ChangeOfCoordinates {$X+2,$Y,$Z}, Depth -4 ] ;
      Print[htb1_2a, OnElementsOf Tot , File  "DEDET7.pos" , ChangeOfCoordinates {$X+2-s,$Y-c,$Z}, Depth -4 ] ;
      Print[ht2b, OnElementsOf Tot , File  "DEDET8.pos" , ChangeOfCoordinates {$X+2*s,$Y+2*c,$Z}, Depth -4 ] ;
      Print[ht2b1_2a, OnElementsOf Tot , File  "DEDET9.pos" , ChangeOfCoordinates {$X+2-2*s,$Y-2*c,$Z}, Depth -4 ] ;

      Print[hlz, OnElementsOf Tot , File "DEDEL1.pos" , Format Gmsh ] ;
      Print[hlzb, OnElementsOf Tot , File  "DEDEL2.pos" , ChangeOfCoordinates {$X+s,$Y+c,$Z} ] ;
      Print[hlza, OnElementsOf Tot , File  "DEDEL3.pos" , ChangeOfCoordinates {$X+1,$Y,$Z} ] ;
      Print[hlzb1_a, OnElementsOf Tot , File  "DEDEL4.pos" , ChangeOfCoordinates {$X+1-s,$Y-c,$Z} ] ;
      Print[hlzb_a, OnElementsOf Tot , File  "DEDEL5.pos" , ChangeOfCoordinates {$X+1+s,$Y+c,$Z} ] ;
      Print[hlz2a, OnElementsOf Tot , File  "DEDEL6.pos" , ChangeOfCoordinates {$X+2,$Y,$Z} ] ;
      Print[hlzb1_2a, OnElementsOf Tot , File  "DEDEL7.pos" , ChangeOfCoordinates {$X+2-s,$Y-c,$Z} ] ;
      Print[hlz2b, OnElementsOf Tot , File  "DEDEL8.pos" , ChangeOfCoordinates {$X+2*s,$Y+2*c,$Z} ] ;
      Print[hlz2b1_2a, OnElementsOf Tot , File  "DEDEL9.pos" , ChangeOfCoordinates {$X+2-2*s,$Y-2*c,$Z} ] ;
    }
  }
}

PostOperation {
  { Name h_anim; NameOfPostProcessing Guide_h_2D;
    Operation {
      //Print[ht, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames, File "DEDEt1.pos" , Depth -4, Format Gmsh ] ;
      //Print[htb, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt2.pos" , ChangeOfCoordinates {$X+s,$Y+c,$Z}, Depth -4 ] ;
      //Print[hta, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt3.pos" , ChangeOfCoordinates {$X+1,$Y,$Z}, Depth -4 ] ;
      //Print[htb1_a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt4.pos" , ChangeOfCoordinates {$X+1-s,$Y-c,$Z}, Depth -4 ] ;
      //Print[htb_a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt5.pos" , ChangeOfCoordinates {$X+1+s,$Y+c,$Z}, Depth -4 ] ;
      //Print[ht2a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt6.pos" , ChangeOfCoordinates {$X+2,$Y,$Z}, Depth -4 ] ;
      //Print[htb1_2a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt7.pos" , ChangeOfCoordinates {$X+2-s,$Y-c,$Z}, Depth -4 ] ;
      //Print[ht2b, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt8.pos" , ChangeOfCoordinates {$X+2*s,$Y+2*c,$Z}, Depth -4 ] ;
      //Print[ht2b1_2a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEt9.pos" , ChangeOfCoordinates {$X+2-2*s,$Y-2*c,$Z}, Depth -4 ] ;

      Print[hlz, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames, File "DEDEL1.pos" , Format Gmsh ] ;
      Print[hlzb, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL2.pos" , ChangeOfCoordinates {$X+s,$Y+c,$Z} ] ;
      Print[hlza, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL3.pos" , ChangeOfCoordinates {$X+1,$Y,$Z} ] ;
      Print[hlzb1_a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL4.pos" , ChangeOfCoordinates {$X+1-s,$Y-c,$Z} ] ;
      Print[hlzb_a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL5.pos" , ChangeOfCoordinates {$X+1+s,$Y+c,$Z} ] ;
      Print[hlz2a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL6.pos" , ChangeOfCoordinates {$X+2,$Y,$Z} ] ;
      Print[hlzb1_2a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL7.pos" , ChangeOfCoordinates {$X+2-s,$Y-c,$Z} ] ;
      Print[hlz2b, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL8.pos" , ChangeOfCoordinates {$X+2*s,$Y+2*c,$Z} ] ;
      Print[hlz2b1_2a, OnElementsOf Tot ,TimeStep mode, HarmonicToTime frames , File  "DEDEL9.pos" , ChangeOfCoordinates {$X+2-2*s,$Y-2*c,$Z} ] ;
    }
  }
}

DefineConstant[
  R_ = {"Guide_h_2D_PVP", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -slepc", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

