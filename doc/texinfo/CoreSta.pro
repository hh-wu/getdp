/* -------------------------------------------------------------------
   File "CoreSta.pro"

   This file defines the problem dependent data structures for the
   static core-inductor problem.
   
   To compute the solution: 
       getdp CoreSta -msh Core.msh -solve MagSta_a_2D

   To compute post-results: 
       getdp CoreSta -msh Core.msh -pos Map_a
   ------------------------------------------------------------------- */

Group {

  Air    = Region[ 101 ];   Core   = Region[ 102 ];
  Ind    = Region[ 103 ];   AirInf = Region[ 111 ];

  SurfaceGh0  = Region[ 1100 ];  SurfaceGe0 = Region[ 1101 ];
  SurfaceGInf = Region[ 1102 ];

  Val_Rint = 200.e-3;
  Val_Rext = 250.e-3;

  DomainCC_Mag = Region[ {Air, AirInf, Core, Ind} ];
  DomainC_Mag  = Region[ {} ];
  DomainS_Mag  = Region[ {Ind} ]; // Stranded inductor
  DomainInf    = Region[ {AirInf} ];
  Domain_Mag   = Region[ {DomainCC_Mag, DomainC_Mag} ];

}

Function {

  mu0 = 4.e-7 * Pi;
  murCore = 100.;

  nu [ Region[{Air, Ind, AirInf}] ]  = 1. / mu0;
  nu [ Core ]  = 1. / (murCore * mu0);

  Sc[ Ind ] = 2.5e-2 * 5.e-2;

}

Constraint {

  { Name MagneticVectorPotential_2D;
    Case {
      { Region SurfaceGe0 ; Value 0.; }
      { Region SurfaceGInf; Value 0.; }
    }
  }

  Val_I_1_ = 0.01 * 1000.;

  { Name SourceCurrentDensityZ;
    Case {
      { Region Ind; Value Val_I_1_/Sc[]; }
    }
  }

}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "MagSta_a_2D.pro"

e = 1.e-5;
p1 = {e,e,0};
p2 = {0.12,e,0};

PostOperation {

  { Name Map_a; NameOfPostProcessing MagSta_a_2D;
    Operation {
      Print[ az, OnElementsOf Domain_Mag, File "CoreSta_a.pos" ];
      Print[ b, OnLine{{List[p1]}{List[p2]}} {1000}, File "k_a" ];
    }
  }

}
