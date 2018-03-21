/*
   To solve the problem
   with scalar potential, type 'getdp test -solve MagSta_phi -pos phi'
   with vector potential, type 'getdp test -solve MagSta_a -pos a'
*/

Include "magnet_data.pro";
Include "../templates/Lib_Materials.pro";

Group {
  // AIR, AIR_INF, etc. are variables defined in core.txt, and correspond to the
  // tags of physical regions in the mesh
  Air     = Region[ AIR ];
  AirInf  = Region[ AIR_INF ];
  Core    = Region[ CORE ];
  AirGap  = Region[ AIR_GAP ];
  Magnet  = Region[ MAGNET ];
  Dirichlet_a_0   = Region[ LINE_INF ] ;
  Dirichlet_phi_0 = Region[ {LINE_X, LINE_INF} ] ;

  // This defines a constant ('Flag_NL') with a default value (0), and a way to
  // change it from outside getdp with ONELAB, using the given parameter name
  // and possible binary values 0 or 1.
  DefineConstant[
    Flag_NL = { 0, Choices{0,1}, Name "Parameters/Materials/1Nonlinear BH-curve"}
  ];

  // These are the generic group names that are used in "Magnetostatics.pro"
  Vol_Inf_Mag = Region[ AirInf ] ;
  Vol_M_Mag   = Region[ Magnet ] ;
  Vol_L_Mag = Region[ {Air, AirInf, AirGap} ] ;
  Vol_NL_Mag = Region[ {} ] ;
  If(Flag_NL)
    Vol_NL_Mag += Region[ {Core} ] ;
  Else
    Vol_L_Mag += Region[ {Core} ] ;
  EndIf
}

Function {
  // Another parameter that can be changed interactively; but is only visible
  // when it makes sense (if we don't perform a nonlinear analysis)
  DefineConstant[ murCore = {200., Min 1, Max 1000, Step 10, Visible !Flag_NL,
      Name "Parameters/Materials/Core relative permeability"} ];

  nu [ Region[{Air, AirInf, AirGap, Magnet}] ] = 1. / mu0;

  If(!Flag_NL)
    nu [ Core ]  = 1. / (murCore * mu0) ;
    mu [ Core ]  = murCore * mu0;
  EndIf
  If(Flag_NL)
    nu [ Core ] = SteelGeneric_nu[$1] ;
    dhdb_NL [ Core ] = SteelGeneric_dhdb_NL[$1];
    mu [ Core ] = SteelGeneric_mu[$1] ;
    dbdh_NL [ Core ] = SteelGeneric_dbdh_NL[$1];
  EndIf

  mu [ Region[{Air, AirInf, AirGap, Magnet}] ] = mu0 ;

  DefineConstant[ Hc = {920000,
      Name "Parameters/Materials/hc", Label "Magnet coercive field (A/m)"} ];
  hc [ Magnet ] = Rotate[ Vector[Hc, 0, 0.], 0, 0, Pi/2] ;
}

Constraint {
  { Name a ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }
  { Name phi ;
    Case {
      { Region Dirichlet_phi_0 ; Value 0. ; }
    }
  }
}

modelPath = CurrentDirectory;
Include "../templates/Lib_MagSta_a_phi.pro"

eps = 1.e-5;

PostOperation {
  { Name phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ phi, OnElementsOf Vol_Mag, File "phi.pos" ] ;
      Print[ hc, OnElementsOf Vol_Mag, File "hc.pos" ] ;
      Print[ b, OnElementsOf Vol_Mag, File "b_phi.pos" ] ;
      Print[ b, OnLine {{-0.07,eps,0}{0.09,eps,0}} {500}, File "b_phi.txt", Format Table ] ;
    }
  }
  { Name a ; NameOfPostProcessing MagSta_a;
    Operation {
      Print[ az, OnElementsOf Vol_Mag, File "az.pos"] ;
      Print[ b, OnElementsOf Vol_Mag, File "b_a.pos" ] ;
      Print[ h, OnElementsOf Vol_Mag, File "h_a.pos" ] ;
      Print[ b, OnLine {{-0.07,eps,0}{0.09,eps,0}} {500}, File "b_a.txt" , Format Table ] ;
    }
  }
}
