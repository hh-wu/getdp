Include "relay_data.pro";

DefineConstant[
  time_min = { 0, Visible (Flag_AnalysisType == 1),
    Name "Input/30Time min."},
  time_max = { 1, Min time_min, Visible (Flag_AnalysisType == 1),
    Name "Input/31Time max."},
  delta_time = { 0.8e-3, Min time_max/5000, Visible (Flag_AnalysisType == 1),
    Name "Input/32Time"},
  NbSteps = (time_max - time_min)/delta_time,
  step = {0, Min 0, Max NbSteps, Step 1, Loop  (Flag_AnalysisType == 1),
    Name "Input/34Step", Visible (Flag_AnalysisType == 1)},
  Flag_Cir = 1,
  Flag_NL = { 0, Choices{0,1}, Name "Input/60Nonlinear BH-curve"}
];


Group {
  MovingIron     = Region[MOVINGIRON] ;
  SkinMovingIron = Region[SKINMOVINGIRON] ;

  Yoke        = Region[YOKE] ;
  SkinYokeOut = Region[SKINYOKEOUT] ;

  MagnetRight = Region[MAGNETRIGHT] ;
  MagnetLeft  = Region[MAGNETLEFT] ;

  CoilR_up   = Region[COILR_UP] ;
  CoilR_down = Region[COILR_DOWN]  ;
  CoilL_up   = Region[COILL_UP] ;
  CoilL_down = Region[COILL_DOWN] ;

  AirLayer = Region[AIRLAYER] ;
  AirGapOut = Region[AIRGAPOUT] ;
  Dummy = Region[DUMMY];


  Magnets = Region[{MagnetLeft, MagnetRight}] ;
  Coils_up = Region[{CoilR_up, CoilL_up}];
  Coils_down = Region[{CoilR_down, CoilL_down}];
  Coils = Region[{Coils_up, Coils_down}];

  AirGap = Region[{ AirGapOut, AirLayer }] ;

  DomainS = Region[{}];
  DomainB = Region[{CoilR_down, CoilL_down}];

  DomainC_Moving = Region[ { MovingIron } ];
  DomainC_NonMoving = Region[ { Yoke } ];
  DomainC = Region[ {DomainC_Moving, DomainC_NonMoving} ];

  SkinDomainC_Moving = Region[ { SkinMovingIron} ];

  DomainCC = Region[{ Coils, AirGap, Magnets} ];

  DomainKin = Region[1234] ; // Dummy region number for mechanical equation

  If(!Flag_NL)
    DomainNL = Region[{}];
    DomainL  = Region[{ DomainC, DomainCC }];
  EndIf
  If(Flag_NL)
    DomainNL = Region[{ DomainC  }];
    DomainL  = Region[{ DomainCC }];
  EndIf

  Domain = Region[ {DomainL, DomainNL} ] ;
}

Include "BH.pro"

Function {
  DefineFunction[ js, dhdb_NL ];

  mu0 = 4.e-7 * Pi ; mur = 1000 ;
  nu[Region[{Coils, Magnets, AirGap}]]  = 1. / mu0 ;

  If(!Flag_NL)
    nu[ Region[{MovingIron, Yoke}] ]  = 1 / (mur * mu0) ;
  EndIf
  If(Flag_NL)
    nu [ DomainNL ] = nu_26[$1] ;
    dhdb_NL [ DomainNL ] = dhdb_26_NL[$1];
  EndIf

  Nb_max_iter        = 30 ;
  relaxation_factor  = 1;
  stop_criterion     = 1e-5;

  sigma_iron = 2e6 ;
  sigma_lam = 10e6 *.5e-3*.5e-3/12. ; // laminated iron
  sigma[Region[{MovingIron,Yoke}]] = 0; //sigma_lam ;

  NbWires[] = nwires;
  SurfCoil[] = SurfaceArea[]{COILR_UP}; // All of them have the same surface
  Idir[Region[{CoilR_down, CoilR_up}]] =  1.;
  Idir[Region[{CoilL_down, CoilL_up}]] = -1.;

  // Permanent magnets
  Br = .8*1.06;
  mu_Magnet = 1.03 * mu0 ;

  DefineConstant[
    Hc = { Br/mu_Magnet, Name "Input/50Coercive field", Highlight "AliceBlue"},
    VV = { 15,  Name "Input/51Voltage", Highlight "AliceBlue"},
    velocityY = { 0., Name "Output/3Vertical velocity", Visible (Flag_AnalysisType == 1)}
  ];

  hc[MagnetLeft ] = Vector[+Hc,0,0] ;
  hc[MagnetRight] = Vector[-Hc,0,0] ;

  // Artificial control of the geometrical limits for avoiding crashes...
  velocityY = (displacementY >=-15e-3 && displacementY <= 0) ? velocityY :0.;

  time0 = time_min + step * delta_time;

  dXYZ[Region[{DomainC_NonMoving, DomainB}]] = Vector[0., 0., 0.];
  dXYZ[DomainC_Moving] = Vector[0, DefineNumber[0, Name "DeltaU", Visible 0], 0];
  a_previousstep[] = Vector[0, 0, Field[XYZ[]-dXYZ[]]] ;

  // Normal for computing Force with Maxwell stress tensor
  p_current = p_init + displacementY ; // Current position

  N[AirLayer] = 1/d *
    ( (Y[] >= h1+p_current) ? Vector[ 0.,  1.,0.] :
      (Y[] <=-h1+p_current) ? Vector[ 0., -1.,0.] :
      (X[] >= e1)   ? Vector[ 1.,  0.,0.] : Vector[ -1., 0.,0.] ) ;

  // Maxwell tensor
  Tmax[] = (SquDyadicProduct[$1]-SquNorm[$1]*TensorDiag[0.5,0.5,0.5])/mu0 ;

  // Kinematics -> Movement
  Inertia = 87 ;
  Friction[] = (displacementY < -dmax) ? 10000 : ((displacementY > 0) ? -10000 : 0.) ;

  F_mid  = 4000 ;
  F_init = 7000 ; //6761.358 = value in profile for igte2002

  p0 = -p_init ; f0 =  F_init ;
  p1 = -p_mid  ; f1 =  F_mid  ;
  p2 =  p_mid  ; f2 = -F_mid  ;
  p3 =  p_init ; f3 = -F_init ;

  Fspring[] = (p_current < p1) ? (f0 + (f1-f0)/(p1-p0)*(p_current-p0)):
              (p_current < p2) ? 0.:
                         (f2 + (f3-f2)/(p3-p2)*(p_current-p2));
  Fmag[] = CompY[$Fmag] ; // computed in postprocessing
  Fmag_vw[] = CompY[$Fmag_vw] ; // computed in postprocessing
}

Jacobian {
  { Name Vol; Case { { Region All ; Jacobian Vol; } } }
}

Integration {
  { Name I1 ; Case { { Type Gauss ; Case {
          { GeoElement Triangle   ; NumberOfPoints  6 ; }
          { GeoElement Quadrangle ; NumberOfPoints  4 ; }
          { GeoElement Line       ; NumberOfPoints  13 ; }
        } }
    }
  }
}

Include "ElectricCircuit.pro"

Constraint {
  { Name MVP_2D ;
    Case {
      { Region SkinYokeOut ; Type Assign; Value 0. ; }
      If(time0 == 0 && Flag_AnalysisType==1)
        { Region Domain ; Type InitFromResolution ; NameOfResolution MagStaInit_a_2D ; }
      EndIf
      If(time0 != 0 && Flag_AnalysisType==1)
        { Region Domain ; Type InitFromResolution ; NameOfResolution ProjectionInit ; }
      EndIf
    }
  }

  { Name CurrentPosition ;
    Case {
      { Region DomainKin ; Type Init ; Value displacementY ; }
    }
  }
  { Name CurrentVelocity ;
    Case {
      { Region DomainKin ; Type Init ; Value velocityY ; }
    }
  }

}

FunctionSpace {
  { Name Hcurl_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf [ All ] ; }
    }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf  ; NameOfConstraint MVP_2D ; }
    }
  }

  { Name Position ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_Region ;
        Support DomainKin ; Entity DomainKin ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf  ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef U ; EntityType Region ; NameOfConstraint CurrentPosition ; }
    }
  }

  { Name Velocity ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_Region ;
        Support DomainKin ; Entity DomainKin ; } }
    GlobalQuantity {
      { Name V ; Type AliasOf  ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef V ; EntityType Region ; NameOfConstraint CurrentVelocity ; }
    }
  }

}

Formulation {

 { Name Projection ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
    }
    Equation {
      Galerkin { [  Dof{a}, {a} ] ;
        In Region[{DomainC, DomainB}] ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ -a_previousstep[], {a} ] ;
        In Region[{DomainC, DomainB}] ; Jacobian Vol ; Integration I1 ; }
    }
  }

  { Name MagSta_a_2D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a}  , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { JacNL[ dhdb_NL[{d a}] * Dof{d a} , {d a} ]  ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ hc[]             , {d a} ] ;
        In Magnets ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ -js[], {a} ] ;
        In DomainS ; Jacobian Vol ; Integration I1 ; }
    }
  }

  { Name MagDyn_a_2D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
      { Name ir ; Type Local  ; NameOfSpace Hregion_i_Mag_2D ; }
      { Name Ub ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ub] ; }
      { Name Ib ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ib] ; }
      { Name Uz ; Type Global ; NameOfSpace Hregion_Z [Uz] ; }
      { Name Iz ; Type Global ; NameOfSpace Hregion_Z [Iz] ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a}  , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { JacNL[ dhdb_NL[{d a}] * Dof{d a} , {d a} ]  ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ hc[]            , {d a} ] ;
        In Magnets ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ -js[], {a} ] ;
        In DomainS ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ -NbWires[]/SurfCoil[] * Dof{ir} , {a} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof [ AxialLength * NbWires[]/SurfCoil[] * Dof{a} , {ir} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }

      GlobalTerm { [ Resistance[]  * Dof{Ib}, {Ib} ] ; In DomainB ;}
      GlobalTerm { [ Dof{Ub} , {Ib} ] ; In DomainB ; }

      If(Flag_Cir)
        GlobalTerm { [ Dof{Uz}        , {Iz} ] ; In Resistance_Cir ; }
        GlobalTerm { [ Resistance[{Iz}] * Dof{Iz} , {Iz} ] ; In Resistance_Cir ; }

        GlobalEquation {
          Type Network ; NameOfConstraint ElectricalCircuit ;
          { Node {Ib}; Loop {Ub}; Equation {Ub}; In DomainB ; }
          { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir ; }
        }
      EndIf
    }
  }

  { Name Mechanical ; Type FemEquation ;
    Quantity {
      { Name V ; Type Global ; NameOfSpace Velocity [V] ; } // velocity
      { Name U ; Type Global ; NameOfSpace Position [U] ; } // position
    }
    Equation {
      GlobalTerm { DtDof [ Inertia * Dof{V} , {V} ] ; In DomainKin ; }
      GlobalTerm { [ Friction[] * Dof{V} , {V} ] ; In DomainKin ; }
      GlobalTerm { [    -Fspring[{U}] , {V} ] ; In DomainKin ; }
      GlobalTerm { [          -Fmag[] , {V} ] ; In DomainKin ; }

      GlobalTerm { DtDof [ Dof{U} , {U} ] ; In DomainKin ; }
      GlobalTerm {       [-Dof{V} , {U} ] ; In DomainKin ; }
    }
  }

}

Resolution {
  { Name ProjectionInit ;
    System {
      { Name Pr ; NameOfFormulation Projection ; DestinationSystem A; }
    }
    Operation {
      GmshRead["tmp.pos"]; Generate[Pr] ; Solve[Pr] ; TransferSolution[Pr] ;
    }
  }

  { Name MagStaInit_a_2D ;
    System {
      { Name S ; NameOfFormulation MagSta_a_2D ; DestinationSystem A; }
    }
    Operation {
      If(!Flag_NL)
        Generate[S]; Solve[S];
      EndIf
      If(Flag_NL)
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[S] ; SolveJac[S] ; }
      EndIf
      TransferSolution[S] ;
    }
  }

  { Name  Analysis ;
    System {
      If(Flag_AnalysisType ==0)
        { Name A ; NameOfFormulation MagSta_a_2D ; }
      EndIf
      If(Flag_AnalysisType ==1)
        { Name A ; NameOfFormulation MagDyn_a_2D ; }
        { Name M ; NameOfFormulation Mechanical ; }
      EndIf
    }
    Operation {
      If(Flag_AnalysisType ==0)
        If(!Flag_NL)
          Generate[A]; Solve[A];
        EndIf
        If(Flag_NL)
          IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
            GenerateJac[A] ; SolveJac[A] ; }
        EndIf
        SaveSolution[A];
        PostOperation[MapMag] ;
      EndIf

      If(Flag_AnalysisType ==1)
        SetTime[time0] ;
        InitSolution[A] ; SaveSolution[A] ;
        InitSolution[M] ; SaveSolution[M] ;

        TimeLoopTheta[time0, time0+delta_time, delta_time, 1.]{ // do 1 step
          If(!Flag_NL)
            Generate[A]; Solve[A];
          EndIf
          If(Flag_NL)
            IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor] {
              GenerateJac[A] ; SolveJac[A] ; }
          EndIf
          SaveSolution[A];
          PostOperation[MapMag] ;

          Generate[M] ; Solve[M] ; SaveSolution[M] ;
          PostOperation[MapMec] ;
        }
      EndIf
    }
  }

}


PostProcessing {

 { Name MagDyn_a_2D ; NameOfFormulation MagDyn_a_2D ;
   PostQuantity {
     { Name a ; Value { Term { [  {a} ]   ; In Domain ; Jacobian Vol ; } } }
     { Name az ; Value { Term { [  CompZ[{a}] ]   ; In Domain ; Jacobian Vol ; } } }
     { Name b  ; Value { Term { [ {d a} ] ; In Domain ; Jacobian Vol ; } } }
     { Name j  ; Value { Term { [ -sigma[] * Dt[{a}] ] ; In DomainC ; Jacobian Vol ; } } }
     { Name jz  ; Value { Term { [ CompZ[-sigma[] * Dt[{a}]] ] ; In Domain ; Jacobian Vol ; } } }

     { Name boundary  ; Value { Term { [ 1 ] ; In Dummy ; Jacobian Vol ; } } } // Dummy quantity - for visualization

     { Name Flux ; Value { Integral { [ AxialLength*Idir[]*NbWires[]/SurfCoil[]* CompZ[{a}] ] ;
           In Coils  ; Jacobian Vol ; Integration I1 ; } } }
     { Name W  ; Value { Integral { [ AxialLength * nu[]/2*SquNorm[{d a}] ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; } } }

     { Name F  ; Value { Integral { [ AxialLength * Tmax[{d a}] * N[] ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; } } }
     { Name F_vw ; Value {
         Integral { Type Global ; [ 0.5 * nu[] * VirtualWork [{d a}] * AxialLength ];
           In ElementsOf[DomainCC, OnOneSideOf SkinDomainC_Moving];
           Jacobian Vol ; Integration I1 ; } } }

     If(Flag_Cir)
       { Name Uc ; Value {
           Term { [ {Ub} ]  ; In DomainB ; }
           Term { [ {Uz} ]  ; In DomainZt_Cir ; }}}
       { Name Ic ; Value {
           Term { [ {Ib} ]  ; In DomainB ; }
           Term { [ {Iz} ]  ; In DomainZt_Cir ; }}}
     EndIf
   }
 }

 { Name Mechanical ; NameOfFormulation Mechanical ;
   PostQuantity {
     { Name U  ; Value { Term { [ {U} ]  ; In DomainKin ; } } } //Position
     { Name DeltaU  ; Value { Term { [ {U}-displacementY ]  ; In DomainKin ; } } } //Position change
     { Name V  ; Value { Term { [ {V} ]  ; In DomainKin ; } } } //Velocity
     { Name Fmag     ; Value { Term {  Type Global; [ Fmag[] ] ; In DomainKin ; } } }
     { Name Fmag_vw  ; Value { Term {  Type Global; [ Fmag_vw[] ] ; In DomainKin ; } } }
     { Name Ftot     ; Value { Term {  Type Global; [ Fmag[] + Fspring[{U}] ] ; In DomainKin ; } } }
     { Name Fspr     ; Value { Term {  Type Global; [ Fspring[{U}] ]        ; In DomainKin ; } } }
     { Name Friction ; Value { Term {  Type Global; [ Friction[{U}] * {V} ] ; In DomainKin ; } } }
   }
 }

}

ExtGmsh     = ".pos" ;
ExtGnuplot  = ".dat" ;

PostOperation MapMag UsingPost MagDyn_a_2D {
  Print[ boundary,  OnElementsOf Dummy, File StrCat["bnd",ExtGmsh], Format Gmsh,
    OverrideTimeStepValue step, LastTimeStepOnly ] ;
  Print[ b, OnElementsOf Domain,  File StrCat["b", ExtGmsh], Format Gmsh,
    OverrideTimeStepValue step, LastTimeStepOnly ] ;
  //Print[ j, OnElementsOf DomainC,  File StrCat["j", ExtGmsh], Format Gmsh,
  //  OverrideTimeStepValue step, LastTimeStepOnly ] ;
  Print[ az, OnElementsOf Domain, File StrCat["az", ExtGmsh], Format Gmsh,
    OverrideTimeStepValue step, LastTimeStepOnly] ;
  Print[ az, OnElementsOf Domain, File StrCat["tmp", ExtGmsh], Format Gmsh,
    OverrideTimeStepValue 0, LastTimeStepOnly, SendToServer "No"] ;
  Print[ F[AirLayer], OnGlobal, Format Table, File "Fmag.dat",
    StoreInVariable $Fmag, LastTimeStepOnly] ;
  Print[ F_vw, OnRegion NodesOf[SkinDomainC_Moving], Format RegionValue,
    File StrCat["Fvw", ExtGnuplot], StoreInVariable $Fmag_vw, LastTimeStepOnly] ;
}

PostOperation MapMec UsingPost Mechanical {
  Print[ U, OnRegion DomainKin, File StrCat["disp", ExtGnuplot], Format Table,
         LastTimeStepOnly, SendToServer "Output/2Vertical displacement"] ;
  Print[ DeltaU, OnRegion DomainKin, File StrCat["deltadisp", ExtGnuplot], Format Table,
         LastTimeStepOnly, SendToServer "DeltaU"] ;
  Print[ V, OnRegion DomainKin, File StrCat["velocity", ExtGnuplot], Format Table,
         LastTimeStepOnly, SendToServer "Output/3Vertical velocity"] ;

  Print[ Fmag, OnRegion DomainKin, Format Table, File  > StrCat["Fmag", ExtGnuplot],
         LastTimeStepOnly,SendToServer "Output/4forceY"] ;
  Print[ Fmag_vw, OnRegion DomainKin, Format Table, File  > StrCat["Fmag_vw", ExtGnuplot],
         LastTimeStepOnly,SendToServer "Output/4force_vwY"] ;

  Print[ Ftot, OnRegion DomainKin, Format Table, File  > StrCat["Ftot", ExtGnuplot],
         LastTimeStepOnly,SendToServer "Output/5ftotY"] ;
  Print[ Fspr, OnRegion DomainKin, Format Table, File  > StrCat["Fspr", ExtGnuplot],
         LastTimeStepOnly, SendToServer "Output/6fspringY"] ;
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
