/* -------------------------------------------------------------------
   File "kirsch.pro"

   The Kirsch problem describes elastic stresses around a circular hole 
   in an infinite plate subjected to a unidirectional tension. 
   This problem has an analytic solution. 
   Using symmetries, it is enough to solve a quarter of the model. 

   The solution of this problem involving a uniform imposed stress field 
   that expands to infinity is not square integrable (infinite energy).
   Two approaches are used to deal with that.
   1. The analytic solution is imposed on the external boundary 
   at finite distance (Flag_Infinity=0).
   2. The problem is reformulated in terms of a reaction field 
   that vanishes at infinity and is therefore square integrable, 
   with now non-homogeneous boundary conditions located 
   at the edge of the circular hole (Flag_Infinity=1).
   The decay of the reaction stress field at infinity is represented exactly 
   by using a shell of infinite elements.

   Both approaches deliver asymptotically the exact solution of the problem,
   so that convergence can be checked at first and second order. 

   Interactively run the model with Onelab:
       gmsh kirsch.pro

   ------------------------------------------------------------------- */

Include "kirsch_data.pro";

DefineConstant[ Mec = 1 ]; // Problem number

Flag_Infinity = 
  DefineNumber[ 0, Name "Geometry/Use infinite transformation", Choices{0,1}];
Flag_degree2 = 
  DefineNumber[ 0, Name "Geometry/Use degree 2 (hierarch.)", Choices{0,1}];
Young = 1e9 * 
  DefineNumber[ 200, Name "Material/Young modulus [GPa]"];
Poisson = 
  DefineNumber[ 0.3, Name "Material/Poisson coefficient []"];

Group {
  // Give explicit labels to the regions defined in the .geo file 
  Bottom = Region[ 3 ];
  Inf    = Region[ 4 ];
  Left   = Region[ 5 ];
  Hole   = Region[ 6 ];
  Body = Region[ {1, 2} ];

  // Attribute those labels to the template (user-defined) groups
  Vol_Elast~{Mec} = Region[ { Body } ];
  Sur_Disp_x~{Mec} = Region[ { Left } ];
  Sur_Disp_y~{Mec} = Region[ { Bottom } ];

  If(Flag_Infinity == 0)
    DomainInf~{Mec} = Region [ {} ];
    Sur_Force~{Mec} = Region[ { Inf } ];
  Else
    DomainInf~{Mec} = Region [ 2 ];
    Sur_Force~{Mec} = Region[ { Hole } ];
  EndIf
}

Function {
  E[] = 1e8;
  nu[] = 0.33;

  cosa[] = X[]/Norm[ XYZ[] ];
  sina[] = Y[]/Norm[ XYZ[] ];
  cos2a[] = cosa[]^2 - sina[]^2;
  sin2a[] = 2.*cosa[]*sina[];
  z[] = Rint*Rint/SquNorm[ XYZ[] ];

  sigma = 1e8;

  // Analytical solution of Kirsch's problem
  sigma_rr[] =  sigma/2*( ( 1 - z[]#1 ) + ( 1 + 3*#1^2 - 4*#1) * cos2a[] );
  sigma_tt[] =  sigma/2*( ( 1 + #1) - ( 1 + 3*#1^2 ) * cos2a[] );
  sigma_rt[] = -sigma/2*( ( 1 - 3*#1^2 + 2*#1 ) * sin2a[] );

  If(Flag_Infinity == 0)
    sigma_xx[] = sigma_rr[]*cosa[]^2 - sigma_rt[]*sin2a[] + sigma_tt[]*sina[]^2;
  Else
    sigma_xx[] = -sigma + 
                 sigma_rr[]*cosa[]^2 - sigma_rt[]*sin2a[] + sigma_tt[]*sina[]^2;
  EndIf
  sigma_yy[] = sigma_rr[]*sina[]^2 + sigma_rt[]*sin2a[] + sigma_tt[]*cosa[]^2;
  sigma_xy[] = (sigma_rr[]-sigma_tt[])*sin2a[]/2. + sigma_rt[]*cos2a[];

  If(Flag_Infinity == 0)
    pressure_x[] = sigma_rr[] * cosa[] - sigma_rt[] * sina[];
    pressure_y[] = sigma_rr[] * sina[] + sigma_rt[] * cosa[];
  Else
    pressure_x[] = sigma * cosa[];
    pressure_y[] = 0;
    SphShell_Rint~{Mec} = Rmid;
    SphShell_Rext~{Mec} = Rext;
  EndIf

  displacement_x[] = 0;
  displacement_y[] = 0;
}

FE_Degree~{Mec} = Flag_degree2 ? 2 : 1 ;
iP = Mec; 
Include "Lib_Elast_u.pro";

PostProcessing{
  {Name Convergence; NameOfFormulation Elast_u;
    Quantity {
      { Name sigma_xx ; 
	Value { Term { [ sigma_xx[] ]; 
	    In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; } } }
      { Name sigma_xy ; 
	Value { Term { [ sigma_xy[] ]; 
	    In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; } } }
     { Name sigma_yy ; 
       Value { Term { [ sigma_yy[] ]; 
	    In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; } } }
      {Name Diff ;
        Value { Integral { Type Global ; 
	    [ SquNorm[ CompX[  C_xx[]*{d ux}+C_xy[]*{d uy} ] - sigma_xx[] ] ];
	    In Body ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; } } }
      {Name Norm ;
        Value { Integral { Type Global ; [ SquNorm[ sigma_xx[] ]];
	    In Body ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; } } }
      {Name Erreur; Value {
	  Term { Type Global; [Sqrt[ $diff ]/Sqrt[ $norm ]] ; 
	    In Body; Jacobian Vol~{iP}; } } } 
    }
  }
}

PostOperation {
  { Name pos; NameOfPostProcessing Elast_u;
    Operation {
      Print[ sig_xx, OnElementsOf Body, File "sigxx.pos" ];
      Print[ sig_yy, OnElementsOf Body, File "sigyy.pos" ];
      Print[ sig_xy, OnElementsOf Body, File "sigxy.pos" ];
      Print[ u, OnElementsOf Body, File "u.pos" ];
    }
  }
  { Name Convergence; NameOfPostProcessing Convergence;
    Operation {
      Print[ sigma_xx, OnElementsOf Body, File "sxx.pos" ];
      Print[ sigma_yy, OnElementsOf Body, File "syy.pos" ];
      Print[ sigma_xy, OnElementsOf Body, File "sxy.pos" ];
      Print [ Diff[ Region[1] ], OnGlobal, Format Table, 
	      StoreInVariable $diff] ;
      Print [ Norm[ Region[1] ], OnGlobal, Format Table, 
	      StoreInVariable $norm] ;
      Print [ Erreur, OnRegion Body, Format Table, File >> "erreur.txt"] ;
    }
  }
}


// Tell Gmsh which GetDP commands to execute when running the model.
DefineConstant[
  R_ = {"Elast_u", Name "GetDP/1ResolutionChoices", Visible 0},
  P_ = {"pos", Name "GetDP/2PostOperationChoices", Visible 1},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0}
];

