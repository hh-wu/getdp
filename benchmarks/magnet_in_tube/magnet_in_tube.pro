Include "magnet_in_tube_data.pro";

ResDir='res/';
ExtGmsh     = '.pos'; // Default extension for Gmsh files
ExtGnuplot  = '.dat'; // Default extension text file

DefineConstant[
  Flag_AnalysisType = { 1,
    Choices{0='prescribed speed', 1='evolution in time'},
    Name StrCat[femp,'31Type of Analysis'], Highlight 'Blue'}
];


Group {
  Air  = Region[{AIR}];
  Tube = Region[{TUBE}];
  Magnet = Region[{MAGNET}];

  Surf_bn0 = Region[{AXIS}];   // part of boundary with zero tangential magnetic field...
  Surf_Inf = Region[{OUT_BND}];// imposing Dirichlet BC at infinity boundary...

  DomainM  = Region[{Magnet}] ; // region(s) with permanent magnets

  Domain  = Region[ {Air, Magnet, Tube} ]; // computation domain
  DomainV = Region[ {Tube} ] ; // using term vxb for accounting for eddy-currents conducting domain

  DomainKin = Region[{1234}] ; // Dummy region number for mechanical equation
}


// --------------------------------------------------------------------------

Function {
  mu0 = 4.e-7 * Pi ;
  nu0 = 1/mu0 ;

  sigma_cu = 5.9e7 ;
  mur_tube = 1;

  nu [ #{Air, Magnet} ]    = nu0 ;
  nu [ Tube ]  = nu0/mur_tube ;

  sigma [ Tube ] = sigma_cu ;
  rho[] = 1/sigma[] ;

  br[Magnet] = Vector[0., BR, 0.];

  // Kinematics -> Movement
  Fmagnetic[] = CompY[$florentz]; // Oposite to the one on the tube
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function{
  DefineConstant[ //Predefined values, that may change if defined somewhere else in the pro-file
    SymmetryFactor = 2*Pi, // axisymmetry
    time0 = 0,
    ms = 1e-3,
    timemax={25*ms, Name StrCat[femp,'40max time'],
      Visible (Flag_AnalysisType == 1), Highlight Str[color_time_var]},
    delta_time = {ms, Name  StrCat[femp,'41delta time'],
      Visible (Flag_AnalysisType == 1), Highlight Str[color_time_var]},
    NbSteps = {(timemax - time0)/delta_time, Name StrCat[femp,'42number steps'],
      Visible (Flag_AnalysisType == 1), Highlight Str[color_time_var], ReadOnly},
    po    = '{3Output/0'

    // velocityY = {(Flag_AnalysisType==1)? 0.: 0.26, Name StrCat[femp,'32initial speed of magnet'],
    //  Units 'm/s', Highlight 'AliceBlue'} // This is not enough to change the initial value

    accelerationY = gravity,
    //{gravity, Min 0, Max gravity, Name StrCat[po, str_acc], Visible 0,
    //  Units "m/s²", Highlight "Ivory", ReadOnlyRange 1}

    Clean_Results = {1, Choices {0,1}, Name StrCat[femp,'30Remove previous result files?'], Highlight 'Pink'}
  ];

  If(Flag_AnalysisType==1)
    UndefineConstant[ StrCat[femp,'32initial speed of magnet'] ];
    DefineConstant[
      velocityY = {0., Name StrCat[femp,'32initial speed of magnet'],
        Units 'm/s', Highlight 'Ivory'}
    ];
  EndIf
  If(Flag_AnalysisType==0)
    UndefineConstant[ StrCat[femp,'32initial speed of magnet'] ];
    DefineConstant[
      velocityY = {0.26, Name StrCat[femp,'32initial speed of magnet'],
        Units 'm/s', Highlight 'Ivory'}
    ];
  EndIf

  Velocity[] = Vector[0., -$velocity, 0.];
  Position[] = Vector[0.,  $position, 0.];
  Acceleration[] = Vector[0., $acceleration,  0.];
}

// -----------------------------------------------
// Axisymmetry problem
// -----------------------------------------------
Jacobian {
  { Name Vol; Case {
      { Region All ; Jacobian VolAxiSqu; } } } // or VolAxi
  { Name Sur; Case { { Region All ; Jacobian SurAxi; } } }
}

Integration {
  { Name I1 ; Case {
      { Type Gauss ; Case {
          { GeoElement Triangle   ; NumberOfPoints  6 ; }
          { GeoElement Quadrangle ; NumberOfPoints  4 ; }
          { GeoElement Line       ; NumberOfPoints  13 ; }
        }
      }
    }
  }
}

//-------------------------------------------------------------------------------------

Constraint {

  { Name MVP_2D ;
    Case {
      { Region Surf_Inf ; Type Assign ; Value 0. ; }
      { Region Surf_bn0 ; Type Assign ; Value 0. ; }
    }
  }

}

//-----------------------------------------------------------------------------------------------

FunctionSpace {
  // Magnetic Vector Potential a (b = curl a)
  { Name Hcurl_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
    }
  }

}

//-----------------------------------------------------------------------------------------------

Formulation {

  { Name MagStaDyn_a_2D ; Type FemEquation ;
    Quantity {
      // magnetic vector potential
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
    }

    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a}  , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ -nu[]*br[], {d a} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ -sigma[]*(Velocity[]*^ Dof{d a}) , {a} ] ;
        In DomainV ; Jacobian Vol ; Integration I1 ; }
    }
  }

}

//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

Resolution {

  { Name Analysis ;
    System {
      { Name A ; NameOfFormulation MagStaDyn_a_2D ; }
    }

    Operation {
      CreateDir[ResDir];
      If(Clean_Results==1)
        DeleteFile[ StrCat[ResDir, '*.pos'] ];
        DeleteFile[ StrCat[ResDir, 'disp.dat'] ];
        DeleteFile[ StrCat[ResDir, 'velocity.dat'] ];
        DeleteFile[ StrCat[ResDir, 'acceleration.dat'] ];
      EndIf

      Evaluate[$velocity0 = velocityY, $position0=0.];
      Evaluate[$velocity  = velocityY, $position =0., $acceleration=accelerationY];

      If(Flag_AnalysisType==0) // Static
        Generate[A] ; Solve[A] ; SaveSolution[A] ;
        PostOperation[Get_LocalFields] ;
      Else //TD
        InitSolution[A] ;  SaveSolution[A] ;
        TimeLoopTheta[time0, timemax, delta_time, 1.]{
          Generate[A] ; Solve[A] ; SaveSolution[A] ;
          PostOperation[Get_LocalFields] ;

          // dv/dt * mass -Fmg[]+Fmagnetic[] = 0
          Evaluate[ $velocity = $velocity0 + (mass*gravity-CompY[$florentz])/mass * $DTime ] ;

          Evaluate[ $position = $position0 + $velocity* $DTime ] ;  // v = dx/dt
          Evaluate[ $acceleration= ($velocity-$velocity0)/$DTime ]; // a= dv/dt

          // Update
          Evaluate[ $velocity0 = $velocity ];
          Evaluate[ $position0 = $position ];

          PostOperation[Get_UVA] ; // Needed for saving speed, position and acceleration
        }
      EndIf
    }
  }

}

//-----------------------------------------------------------------------------------------------

PostProcessing {

  { Name MagStaDyn_a_2D ; NameOfFormulation MagStaDyn_a_2D ; NameOfSystem A;
    PostQuantity {
      { Name a  ; Value { Term { [ {a} ]; In Domain; Jacobian Vol; } } }
      { Name az ; Value { Term { [ CompZ[{a}] ]; In Domain; Jacobian Vol; } } }
      { Name raz; Value { Term { [ CompZ[{a}]*X[] ]; In Domain; Jacobian Vol; } } }

      { Name b ; Value { Term { [ {d a} ] ; In Domain; Jacobian Vol; } } }
      { Name nb; Value { Term { [ Norm[{d a}] ] ; In Domain; Jacobian Vol; } } }
      { Name br; Value { Term { [ br[] ]; In DomainM; Jacobian Vol; } } }

      { Name h ; Value { Term { [ nu[{d a}] * {d a} ]; In Domain; Jacobian Vol; } } }

      { Name j ; Value {
          Term { [  sigma[]*(Velocity[] *^ {d a}) ]; In DomainV; Jacobian Vol; }
        }
      }
      { Name jz; Value {
          Term { [ CompZ[ sigma[]*(Velocity[] *^ {d a}) ]]; In DomainV; Jacobian Vol; }
        }
      }

      { Name njz ; Value {
          Term { [ Norm[ CompZ[ sigma[]*(Velocity[] *^ {d a}) ] ]]; In DomainV; Jacobian Vol; }
        }
      }

      { Name F_lorentz ; Value {
          Integral { [ SymmetryFactor * CrossProduct[ sigma[]*(Velocity[]*^{d a}), {d a}] ];
            In DomainV; Jacobian Vol; Integration I1; }
        }
      }

      { Name Fmagnetic ; Value { Term { Type Global; [ Fmagnetic[] ]; In DomainKin; } } }
      { Name V ; Value { Term {  Type Global; [ CompY[-Velocity[]] ]; In DomainKin; } } }
      { Name U ; Value { Term {  Type Global; [ CompY[Position[]] ]; In DomainKin; } } }
      { Name A ; Value { Term {  Type Global; [ CompY[Acceleration[]] ]; In DomainKin; } } }

    }//PostQuantity
  }// MagStaDyn_a_2D


}

//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------


PostOperation {

  { Name Get_LocalFields; NameOfPostProcessing MagStaDyn_a_2D; LastTimeStepOnly ;
    Operation{
      Print[ b,   OnElementsOf Domain,  File StrCat[ResDir,'b.pos'] ];
      Print[ nb,  OnElementsOf Domain,  File StrCat[ResDir,'nb.pos'] ];
      Print[ raz, OnElementsOf Domain,  File StrCat[ResDir,'raz.pos'] ];
      Print[ jz,  OnElementsOf DomainV, File StrCat[ResDir,'jz.pos'] ];
      Print[ njz, OnElementsOf DomainV, File StrCat[ResDir,'njz.pos'] ];

      Echo[Str['View[PostProcessing.NbViews-1].RangeType = 3;' ,// per timestep
          'View[PostProcessing.NbViews-1].NbIso = 25;',
          'View[PostProcessing.NbViews-1].IntervalsType = 2;' // (1=iso, 2=continuous, 3=discrete, 4=numeric)
        ], File StrCat[ResDir,'az.opt']];

      Print[ F_lorentz[Tube], OnGlobal, Format Table,
        File > StrCat[ResDir, 'force', ExtGnuplot], StoreInVariable $florentz];
      Print[ Fmagnetic, OnRegion DomainKin, Format Table, File > StrCat[ResDir, "force_y", ExtGnuplot],
        SendToServer StrCat[po, str_for], Highlight 'Ivory'];
    }
  }

  { Name Get_UVA; NameOfPostProcessing MagStaDyn_a_2D; LastTimeStepOnly ; Format Table;
    Operation{
      Print[ U, OnRegion DomainKin, File > StrCat[ResDir,'disp', ExtGnuplot], Highlight 'Ivory',
        SendToServer StrCat[po, str_disp] ] ;
      Print[ V, OnRegion DomainKin, File > StrCat[ResDir,'velocity', ExtGnuplot], Highlight 'Ivory',
        SendToServer StrCat[po, str_vel] ] ;
      Print[ A, OnRegion DomainKin, File > StrCat[ResDir,'acceleration', ExtGnuplot], Highlight 'Ivory',
        SendToServer StrCat[po, str_acc] ] ;
    }
  }

}

DefineConstant[
  // always solve this resolution (it's the only one provided)
  R_ = {'Analysis', Name 'GetDP/1ResolutionChoices', Visible 0},
  // set some command-line options for getdp
  C_ = {'-solve -v 3 -v2', Name 'GetDP/9ComputeCommand', Visible 0},
  // don't do the post-processing pass (some already included in Resolution)
  P_ = {'', Name 'GetDP/2PostOperationChoices', Visible 0}
];
