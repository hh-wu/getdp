/* --------------------------------------------------------------------------
    This is a sample GetDP problem definition file                           

    This file includes the file 'Magnetostatics.pro'

    (C) 1998 P. Dular, C. Geuzaine
   -------------------------------------------------------------------------- */

/* 
   To solve the problem
   with scalar potential, type 'getdp test -pre MagSta_phi -cal -pos phi'
   with vector potential, type 'getdp test -pre MagSta_a -cal -pos a'
*/

Group {
  
  /* The numbers correspond to physical regions defined in 'test.geo' (the input 
     to the GMSH meshing tool) */
  
  Air     = Region[ 102 ];
  AirInf  = Region[ 101 ];
  Core    = Region[ 106 ];
  Gap     = Region[ 103 ];
  IndP1   = Region[ 111 ];
  IndP2   = Region[ 112 ];
  IndS1   = Region[ 121 ];
  IndS2   = Region[ 122 ];
  Mag     = Region[ 104 ];

  Dirichlet_a   = Region[ 1000 ] ;
  Dirichlet_phi = Region[ {1000,1001} ] ;

  Domain     = Region[ {Air, AirInf, Core, Mag, Gap, IndP1, IndP2, IndS1, IndS2} ] ;
  Domain_Inf = Region[ AirInf ] ;
  Domain_S   = Region[ {/*IndP1, IndP2*/} ] ;
  Domain_M   = Region[ {Mag} ] ;

  Val_Rint = 0.2 ;  
  Val_Rext = 0.3 ;

}


Function {

  mu0     = 4.e-7 * Pi ;
  murCore = 10. ;
  murMag  = 1. ;

  nu [ Region[{Air, IndP1, IndP2, IndS1, IndS2, AirInf, Gap}] ]  = 1. / mu0 ;
  nu [ Core ]  = 1. / (murCore * mu0) ;
  nu [ Mag ]   = 1. / (murMag * mu0) ;

  mu [ Region[{Air, IndP1, IndP2, IndS1, IndS2, AirInf, Gap}] ]  = mu0 ;
  mu [ Core ]  = murCore * mu0 ;
  mu [ Mag ]   = murMag * mu0 ;

  hc [ Mag ]   = Vector[0., 920000., 0.] ;

  Itot = 4737 ; 
  Surf = 0.03*0.002 ;

  js [ IndP1 ] = Vector[0, 0, Itot/Surf] ;
  js [ IndP2 ] = Vector[0, 0, -Itot/Surf] ;

}


Constraint {

  { Name a ;
    Case {
      { Region Dirichlet_a ; Value 0. ; }
    }
  }

  { Name phi ;
    Case {
      { Region Dirichlet_phi ; Value 0. ; }
    }
  }

}


Include "Magnetostatics.pro"

eps = 1.e-5 ;

PostOperation {

  { Name a ; NameOfPostProcessing MagSta_a;
    Operation {
      Plot[ a, OnRegion Domain, File "a.pos"] ;
      Plot[ b, OnRegion Domain, File "b_a.pos", Depth 0 ] ;
      Plot[ h, OnRegion Domain, File "h_a.pos", Depth 0 ] ;
      Plot[ b, OnPlane {{-0.1,0,0}{0.1, 0, 0}{-0.1,0.1,0}} {60,30}, File "b_a_grid.pos" ] ;
      Plot[ b, OnLine {{-0.07,eps,0}{0.09, eps, 0}} {500}, File "b_a.cut" , Format Table ] ;
      Plot[ h, OnLine {{-0.06,eps,0}{-0.06,0.05,0}} {500}, File "h_a.cut" , Format Table ] ;
    }
  }

  { Name phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Plot[ phi, OnRegion Domain, File "phi.pos"] ;
      Plot[ b,   OnRegion Domain, File "b_phi.pos", Depth 0 ] ;
      Plot[ h,   OnRegion Domain, File "h_phi.pos", Depth 0 ] ;
      Plot[ b,   OnPlane {{-0.1,0,0}{0.1, 0, 0}{-0.1,0.1,0}} {60,30}, File "b_phi_grid.pos" ] ;
      Plot[ b,   OnLine {{-0.07,eps,0}{0.09, eps, 0}} {500}, File "b_phi.cut" , Format Table ] ;
      Plot[ h,   OnLine {{-0.06,eps,0}{-0.06,0.05,0}} {500}, File "h_phi.cut" , Format Table ] ;
    }
  }

}

