Group {
  c1 = Region[121] ;
  c2 = Region[122] ;
  c3 = Region[123] ;
  c4 = Region[124] ;
  guide = Region[101];
  diel = Region[111];
  Tot = Region[{guide, diel}];
}

Function {
  mu0 = 4.e-7 * Pi ;
  ep0 = 8.854187817e-12 ;
  epsr = 13.;
  epsilonr[guide] = epsr;
  epsilonr[diel] = 1.0;
  mur[] = 1.0;
  EZ[] = Vector[0,0,1] ;

  mode = 18;
  frames = 60;

  DefineConstant[
    nn = {40, Min 1, Max 100, Step 1, Name "Input/Number of points (N)"},
    ic = {0, Min 0, Max 3*nn-1, Step 1, Loop 1, ReadOnlyRange 1,
          Name "Input/Sol. step (in [0,3N-1])"} ,
    gam = {2., Choices{0, 1, 2, 4, 2*Pi}, Name "Input/Beta"} ,
    nmodes = {20, Min 5, Max 100, Step 1, Name "Input/Number of modes"}
  ];

  /* tan pi/6 */
  ta = 1./Sqrt[3.];
  dk=1./nn;

  If(ic < nn)
    par2 = dk*ic;
    par1 = 0.0;
  EndIf
  If(ic >= nn && ic < 2 * nn)
    par2 = 1.;
    par1 = dk * ta * (ic - nn);
  EndIf
  If (ic >= 2 * nn && ic < 3 * nn)
    par2 = dk * (3 * nn - ic);
    par1 = dk * ta * (3 * nn - ic);
  EndIf

  dec = -0.01;
  If (gam == 0)
    dec = 0.4;
    If (ic < nn / 2)
      dec = -0.5;
    EndIf
    If (ic > 3 * nn - nn / 2)
      dec = -0.5;
    EndIf
    If (ic >= nn / 2 && ic < nn)
      dec=0.2;
    EndIf
    If (ic >= 3 * nn - nn && ic <= 3 * nn - nn / 2)
      dec=0.2;
    EndIf
  EndIf

  Printf("Step %g: parameters %g %g %g %g", ic, par1, par2, gam, dec);

  gamma[] = gam;

  DefineConstant[
    KX = {par1 * 2. * ta * Pi, ReadOnly 1, Name "Ouput/KX"},
    KY = {par2 * 2. * ta * Pi, ReadOnly 1, Name "Ouput/KY"},
    decalage = {gam * gam / epsr + dec, ReadOnly 1, Name "Ouput/Eigensolver shift"}
  ];

  // for LinkCplx constraint
  L = 1.;
  s = L/2.; c = Sqrt[3.] * L / 2.;
  c13 = Cos[- KX*s - KY*c];
  s13 = Sin[- KX*s - KY*c];
  c24 = Cos[  KX*s - KY*c];
  s24 = Sin[  KX*s - KY*c];
  ca = Cos[KX];
  sa = Sin[KX];
}

Constraint {
  { Name arete;
    Case {
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
      { Name sn; NameOfCoef hn; Function BF_Node;
        Support Tot; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef hn; EntityType NodesOf ; NameOfConstraint nodal; }
    }
  }

  { Name H_arete; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef he; Function BF_Edge;
        Support Tot; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint arete; }
    }
  }

  { Name H_arete_perp; Type Form1P;
    BasisFunction {
      { Name sn; NameOfCoef hn; Function BF_PerpendicularEdge;
        Support Tot; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef hn; EntityType NodesOf ; NameOfConstraint nodal; }
    }
  }

  { Name H_facet_perp; Type Form2;
    BasisFunction {
      { Name sn; NameOfCoef hn; Function BF_PerpendicularFacet;
        Support Tot; Entity EdgesOf[All]; }
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
  // H-formulation in conical incidence
  { Name Guide_h_2D; Type FemEquation;
    Quantity {
      { Name Ht; Type Local; NameOfSpace H_arete; }
      { Name Hl; Type Local; NameOfSpace H_arete_perp; }
    }
    Equation {
      Galerkin { [ 1/mur[] * Dof{d Ht} , {d Ht} ];
        In Tot; Integration I1; Jacobian JVol; }
      Galerkin { [ 1/mur[] * Dof{d Hl} , {d Hl} ];
        In Tot; Integration I1; Jacobian JVol; }
      Galerkin { DtDtDof [ epsilonr[] * Dof{Ht} , {Ht} ];
        In Tot; Integration I1; Jacobian JVol; }
      Galerkin { DtDtDof [ epsilonr[] * Dof{Hl} , {Hl} ];
        In Tot; Integration I1; Jacobian JVol; }

      Galerkin { [ - Complex[0,gamma[]]/mur[] * (EZ[] /\ Dof{Ht}) , {d Hl} ];
        In Tot; Integration I1; Jacobian JVol; }
      Galerkin { [ Complex[0,gamma[]]/mur[] * Dof{d Hl} ,  EZ[] /\ {Ht} ];
        In Tot; Integration I1; Jacobian JVol; }
      Galerkin { [ gamma[]^2/mur[] * (EZ[] /\ Dof{Ht}) , EZ[] /\ {Ht} ];
        In Tot; Integration I1; Jacobian JVol; }
    }
  }
}

Resolution {
  { Name Guide_h_2D_PVP;
    System {
      { Name A; NameOfFormulation Guide_h_2D; Type Complex; }
    }
    Operation {
      CreateDir["res"] ;
      GenerateSeparate[A];  EigenSolve[A, nmodes, decalage, 0];
      SaveSolutions[A] ;
      PostOperation[plot] ;
    }
  }
}

PostProcessing {
  { Name Guide_h_2D; NameOfFormulation Guide_h_2D; NameOfSystem A;
    Quantity {
      { Name step; Value{ Local { [ ic ]; In Tot ; Jacobian JVol; } } }

      { Name h; Value{ Local{ [ {Ht}+{Hl} ]; In Tot; Jacobian JVol; } } }

      { Name ht;       Value{ Local{ [ {Ht}                                         ]; In Tot; Jacobian JVol; } } }
      { Name htb;      Value{ Local{ [ {Ht}* Complex[c13,-s13]                      ]; In Tot; Jacobian JVol; } } }
      { Name hta;      Value{ Local{ [ {Ht}* Complex[ca , sa ]                      ]; In Tot; Jacobian JVol; } } }
      { Name htb1_a;   Value{ Local{ [ {Ht}* Complex[c13, s13] * Complex[ca, sa]    ]; In Tot; Jacobian JVol; } } }
      { Name htb_a;    Value{ Local{ [ {Ht}* Complex[c13,-s13] * Complex[ca, sa]    ]; In Tot; Jacobian JVol; } } }
      { Name ht2a;     Value{ Local{ [ {Ht}* Complex[ca, sa]^2                      ]; In Tot; Jacobian JVol; } } }
      { Name htb1_2a;  Value{ Local{ [ {Ht}* Complex[c13, s13] * Complex[ca, sa]^2  ]; In Tot; Jacobian JVol; } } }
      { Name ht2b;     Value{ Local{ [ {Ht}* Complex[c13,-s13]^2                    ]; In Tot; Jacobian JVol; } } }
      { Name ht2b1_2a; Value{ Local{ [ {Ht}* Complex[c13, s13]^2 * Complex[ca, sa]^2]; In Tot; Jacobian JVol; } } }

      { Name hlz;       Value{ Local{ [ CompZ[{Hl}                                         ]]; In Tot; Jacobian JVol; } } }
      { Name hlzb;      Value{ Local{ [ CompZ[{Hl}* Complex[c13,-s13]                      ]]; In Tot; Jacobian JVol; } } }
      { Name hlza;      Value{ Local{ [ CompZ[{Hl}* Complex[ca , sa ]                      ]]; In Tot; Jacobian JVol; } } }
      { Name hlzb1_a;   Value{ Local{ [ CompZ[{Hl}* Complex[c13, s13] * Complex[ca, sa]    ]]; In Tot; Jacobian JVol; } } }
      { Name hlzb_a;    Value{ Local{ [ CompZ[{Hl}* Complex[c13,-s13] * Complex[ca, sa]    ]]; In Tot; Jacobian JVol; } } }
      { Name hlz2a;     Value{ Local{ [ CompZ[{Hl}* Complex[ca, sa]^2                      ]]; In Tot; Jacobian JVol; } } }
      { Name hlzb1_2a;  Value{ Local{ [ CompZ[{Hl}* Complex[c13, s13] * Complex[ca, sa]^2  ]]; In Tot; Jacobian JVol; } } }
      { Name hlz2b;     Value{ Local{ [ CompZ[{Hl}* Complex[c13,-s13]^2                    ]]; In Tot; Jacobian JVol; } } }
      { Name hlz2b1_2a; Value{ Local{ [ CompZ[{Hl}* Complex[c13, s13]^2 * Complex[ca, sa]^2]]; In Tot; Jacobian JVol; } } }
    }
  }
}

PostOperation {
  { Name plot; NameOfPostProcessing Guide_h_2D;
    Operation {
      Print[ step, OnPoint{0,0,0}, Format Table, File "res/step.txt", SendToServer "GetDP/Step" ] ;
      Print[ h, OnElementsOf Tot , File Sprintf("res/h_%g.pos", ic), SendToServer "No" ] ;
    }
  }

  { Name h; NameOfPostProcessing Guide_h_2D;
    Operation {
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
  { Name h_anim; NameOfPostProcessing Guide_h_2D;
    Operation {
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
  // always solve this resolution (it's the only one provided)
  R_ = {"Guide_h_2D_PVP", Name "GetDP/1ResolutionChoices", Visible 0},

  // set some command-line options for getdp
  C_ = {"-solve -slepc -bin", Name "GetDP/9ComputeCommand", Visible 0},

  // we could use this to store different .res files for each step:
  //C_ = {StrCat("-solve -slepc -bin -name res_", Sprintf("%g", ic)),
  //      Name "GetDP/9ComputeCommand", Visible 0, ReadOnly 1},

  // don't do the post-processing pass
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0},

  // plot real part of eigenvalues in terms of step (GetDP/Step is created in
  // post-processing in order to get the correct number of abscissa values --
  // which depends on the number of eigenvalues we compute)
  omega_ = {0, Name "GetDP/Re(Omega)", ReadOnly 1, Graph "01"},
  step_ = {0, Name "GetDP/Step", ReadOnly 1, Graph "10", Visible 0}
];
