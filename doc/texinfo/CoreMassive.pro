/* -------------------------------------------------------------------
   File "CoreMassive.pro"

   This file defines the problem dependent data structures for the
   dynamic core-inductor problem.
   
   To compute the solution: 
        getdp CoreMassive -msh Core.msh -solve MagDyn_av_2D

   To compute post-results: 
        getdp CoreMassive -msh Core.msh -pos Map_a
        getdp CoreMassive -msh Core.msh -pos U_av
   ------------------------------------------------------------------- */

Group {

  Air    = Region[ 101 ];   Core   = Region[ 102 ];
  Ind    = Region[ 103 ];   AirInf = Region[ 111 ];

  SurfaceGh0  = Region[ 1100 ];  SurfaceGe0 = Region[ 1101 ];
  SurfaceGInf = Region[ 1102 ];

  Val_Rint = 200.e-3;
  Val_Rext = 250.e-3;

  DomainCC_Mag = Region[ {Air, AirInf} ];
  DomainC_Mag  = Region[ {Ind, Core} ]; // Massive inductor + conducting core
  DomainB_Mag  = Region[ {} ];
  DomainS_Mag  = Region[ {} ];
  DomainInf    = Region[ {AirInf} ];
  Domain_Mag   = Region[ {DomainCC_Mag, DomainC_Mag} ];

}

Function {

  mu0 = 4.e-7 * Pi;

  murCore = 100.;

  nu [ #{Air, Ind, AirInf} ]  = 1. / mu0;
  nu [ Core ]  = 1. / (murCore * mu0);
  sigma [ Ind ] = 5.9e7;
  sigma [ Core ] = 2.5e7;

  Freq = 1.;

}

Constraint {

  { Name MagneticVectorPotential_2D;
    Case {
      { Region SurfaceGe0 ; Value 0.; }
      { Region SurfaceGInf; Value 0.; }
    }
  }

  { Name SourceCurrentDensityZ;
    Case {
    }
  }

  Val_I_ = 0.01 * 1000.;

  { Name Current_2D;
    Case {
      { Region Ind; Value Val_I_; }
    }
  }

  { Name Voltage_2D;
    Case {
      { Region Core; Value 0.; }
    }
  }

}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "MagDyn_av_2D.pro"

PostOperation {
  { Name Map_a; NameOfPostProcessing MagDyn_av_2D;
    Operation {
      Print[ az, OnElementsOf Domain_Mag, File "Core_m_a.pos" ];
      Print[ j, OnElementsOf Domain_Mag, File "Core_m_j.pos" ];
    }
  }
  { Name U_av;  NameOfPostProcessing MagDyn_av_2D;
    Operation {
      Print[ U, OnRegion Ind ];
      Print[ I, OnRegion Ind ];
    }
  }
}
