/*
   To solve the problem
   with scalar potential, type 'getdp test -solve MagSta_phi -pos phi'
   with vector potential, type 'getdp test -solve MagSta_a -pos a'
*/

Include "magnet_data.pro";

DefineConstant[
  Flag_NL = { 1, Choices{0,1}, Name "Parameters/Materials/Nonlinear BH-curve"}
];
Include "BH.pro";

Group {
  // AIR, AIR_INF, etc. are variables defined in core.txt, and correspond to the
  // tags of physical regions in the mesh
  Air     = Region[ AIR ];
  AirInf  = Region[ AIR_INF ];
  Core    = Region[ CORE ];
  AirGap  = Region[ AIR_GAP ];
  Magnet  = Region[ MAGNET ];

  // These are the generic group names that are used in "Magnetostatics.pro"
  Domain_S = Region[ {} ] ;
  Domain_Inf = Region[ AirInf ] ;
  //Domain_Inf = Region[{}] ;
  Domain_M   = Region[ Magnet ] ;

  Domain_NL = Region[ {} ] ;
  If(Flag_NL)
    Domain_NL += Region[ {Core} ] ;
  EndIf

  Domain_Mag = Region[ {Air, AirInf, Core, AirGap} ] ;
  Dirichlet_a_0   = Region[ LINE_INF ] ;
  //Dirichlet_a_0   = Region[ {}] ;
  Dirichlet_phi_0 = Region[ {LINE_X, LINE_INF} ] ;
}

Function {
  mu0 = 4.e-7 * Pi ;

  // DefineConstant is used to define a default value for murCore; this value
  // can be changed interactively by the ONELAB server
  DefineConstant[ murCore = {200., Min 1, Max 1000, Step 10,
      Name "Parameters/Materials/Core relative permeability"} ];

  nu [ Region[{Air, AirInf, AirGap, Magnet}] ] = 1. / mu0 ;

  If(!Flag_NL)
    nu [ Core ]  = 1. / (murCore * mu0) ;
    mu [ Core ]  = murCore * mu0;
  EndIf
  If(Flag_NL)
    nu [ Core ] = nu_1[$1] ;
    dhdb_NL [ Core ] = dhdb_1_NL[$1];

    mu [ Core ] = mu_1[$1] ;
    dbdh_NL [ Core ] = dbdh_1_NL[$1];
  EndIf



  mu [ Region[{Air, AirInf, AirGap, Magnet}] ] = mu0 ;

  DefineConstant[ Hc = {920000,
      Name "Parameters/Materials/hc", Label "Magnet coercive field (A/m)"} ];
  hc [ Magnet ] = Rotate[ Vector[Hc, 0, 0.], 0, 0, Pi/2] ;
}

Include "Magnetostatics.pro"

eps = 1.e-5;

PostOperation {
  { Name phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ phi, OnElementsOf Domain, File "phi.pos" ] ;
      Print[ hc, OnElementsOf Domain, File "hc.pos" ] ;
      Print[ b, OnElementsOf Domain, File "b_phi.pos" ] ;
      Print[ b, OnLine {{-0.07,eps,0}{0.09,eps,0}} {500}, File "b_phi.txt", Format Table ] ;
    }
  }
  { Name a ; NameOfPostProcessing MagSta_a;
    Operation {
      Print[ az, OnElementsOf Domain, File "az.pos"] ;
      Print[ b, OnElementsOf Domain, File "b_a.pos" ] ;
      Print[ h, OnElementsOf Domain, File "h_a.pos" ] ;
      Print[ b, OnLine {{-0.07,eps,0}{0.09,eps,0}} {500}, File "b_a.txt" , Format Table ] ;
    }
  }
}
