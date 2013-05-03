Include "relay_data.pro";

Group {
  MovingIron     = #1000 ;
  SkinMovingIron = #1100 ;

  Yoke        = #2000 ;
  SkinYokeOut = #2200 ;

  MagnetRight = #3000 ;
  MagnetLeft  = #3001 ;
  Magnets = Region[{MagnetLeft, MagnetRight}] ;

  CoilR_up   = #4000 ;
  CoilR_down = #4001 ;
  CoilL_up   = #4002 ;
  CoilL_down = #4003 ;

  Coils_up = Region[{CoilR_up,CoilL_up}];
  Coils_down = Region[{CoilR_down,CoilL_down}];
  Coils = Region[{Coils_up,Coils_down}];

  AirLayer = #10000 ;
  AirGapOut = #5000 ;
  AirGap = Region[{ AirGapOut, AirLayer }] ;
  Dummy  = #111111 ; // lines of the geometry for nice visualisation

  If(!Flag_Circuit)
    DomainS = Region[{CoilR_down, CoilL_down}];
    DomainB = Region[{}];
  EndIf
  If(Flag_Circuit)
    DomainS = Region[{}];
    DomainB = Region[{CoilR_down, CoilL_down}];
  EndIf

  DomainC_Moving = Region[ { MovingIron } ];
  DomainC_NonMoving = Region[ { Yoke } ];
  DomainC = Region[ {DomainC_Moving, DomainC_NonMoving} ];

  SkinDomainC_Moving = Region[ { SkinMovingIron} ];

  DomainCC = Region[{ Coils, AirGap, Magnets} ];

  DomainKin = #1234 ; // Dummy region number for mechanical equation

  Flag_NL = 0 ; // Use nonlinear magnetic constitutive law
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

Include "ElectricCircuit.pro"
Include "BH.pro"

Function {
  mu0 = 4.e-7 * Pi ; mur = 1000 ;
  nu [#{Coils, Magnets, AirGap}]  = 1. / mu0 ;
  nu [#{MovingIron, Yoke}]  = 1 / (mur * mu0) ;
  sigma_iron = 0*2e6 ;
  sigma_lam = 10e6 *.5e-3*.5e-3/12. ; // laminated iron
  sigma[#{MovingIron,Yoke}] = 0 ;

  AxialLength = 0.09 ;// 90 mm

  cw = 19.5e-3 ;
  cl = 38e-3 ;
  n = 30 ; //300 Number of turns in the coil
  Scoil = cw*cl ;

  NbrWires_Area[#{CoilR_down}] =  n/Scoil ;
  NbrWires_Area[#{CoilL_down}] = -n/Scoil ;

  NbrWires_Area[#{CoilR_up}] =  n/Scoil ;
  NbrWires_Area[#{CoilL_up}] = -n/Scoil ;

  NbrWires[#{Coils}] = n/Scoil ;

  js[] = 0; // NbrWires_Area[] * Vector [0, 0, 1.] * $Time;

  // Permanent magnets
  Br = .8*1.06;
  mu_Magnet = 1.03 * mu0 ;

  Hc = Br/mu_Magnet;

  hc[#MagnetLeft ] = Vector[+Hc,0,0] ;
  hc[#MagnetRight] = Vector[-Hc,0,0] ;

  DefineConstant[ velocityY = {0., Path "Parameters/3"} ];

  t0 = tmin + step * dt;

  displacement[#{DomainC_NonMoving, DomainB}] = Vector[0., 0., 0.];
  displacement[#{DomainC_Moving}] = Vector[displacementX, displacementY, displacementZ];
  a_previousstep[] = Vector[0, 0, Field[XYZ[]-displacement[]]] ;

  // Normal for computing Force with Maxwell stress tensor
  p = p_init + displacementY ; // Current position

  N[#{AirLayer}] = 1/d *
    ( (Y[] >= h1+p) ? Vector[ 0.,  1.,0.] :
      (Y[] <=-h1+p) ? Vector[ 0., -1.,0.] :
      (X[] >= e1)   ? Vector[ 1.,  0.,0.] : Vector[ -1., 0.,0.] ) ;

  // Maxwell tensor
  Tmax[] = (SquDyadicProduct[$1]-SquNorm[$1]*TensorDiag[0.5,0.5,0.5])/mu0 ;

  // When including saturation
  h[DomainNL] = h_26[$1] ;
  dhdb[DomainNL] = dhdb_26[$1];
  NL_Eps = 1.e-5 ;  NL_Relax = 1. ; NL_Flag = 0 ; NL_NbrMax = 20 ;

  // Kinematics -> Movement
  Inertia = 87 ;
  Friction[] = (displacementY < -dmax) ? 10000 : ((displacementY > 0) ? -10000 : 0.) ;

  F_mid  = 4000 ;
  F_init = 7000 ; //6761.358 = value in profile for igte2002

  p0 = -p_init ; f0 =  F_init ;
  p1 = -p_mid  ; f1 =  F_mid  ;
  p2 =  p_mid  ; f2 = -F_mid  ;
  p3 =  p_init ; f3 = -F_init ;

  Fspring[] = (p < p1) ? (f0 + (f1-f0)/(p1-p0)*(p-p0)):
              (p < p2) ? 0.:
                         (f2 + (f3-f2)/(p3-p2)*(p-p2));
  Fmag[] = CompY[#55] ; // Computed in postprocessing
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

Constraint {
  { Name MVP_2D ;
    Case {
      { Region SkinYokeOut ; Type Assign; Value 0. ; }
      If(t0 == 0)
      { Region Domain ; Type InitFromResolution ; NameOfResolution MagStaInit_a_2D ; }
      EndIf
      If(t0 != 0)
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
      Galerkin { JacNL[ dhdb[{d a}] * Dof{d a} , {d a} ]  ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ h[{d a}] , {d a} ]  ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ nu[] * Dof{d a}  , {d a} ] ;
        In DomainL ; Jacobian Vol ; Integration I1 ; }
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
      Galerkin { JacNL[ dhdb[{d a}] * Dof{d a} , {d a} ]  ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ h[{d a}] , {d a} ]  ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ nu[] * Dof{d a}  , {d a} ] ;
        In DomainL ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ hc[]            , {d a} ] ;
        In Magnets ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      If(!Flag_Circuit)
        Galerkin { [ -js[], {a} ] ;
        In DomainS ; Jacobian Vol ; Integration I1 ; }
      EndIf
      If(Flag_Circuit)
        Galerkin { [ -  NbrWires[] * Dof{ir} , {a} ] ;
          In DomainB ; Jacobian Vol ; Integration I1 ; }
        Galerkin { DtDof [ AxialLength * NbrWires[] * Dof{a} , {ir} ] ;
          In DomainB ; Jacobian Vol ; Integration I1 ; }

        GlobalTerm { [ Resistance[]  * Dof{Ib}, {Ib} ] ; In DomainB ;}
        GlobalTerm { [ Dof{Ub} , {Ib} ] ; In DomainB ; }

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
      GmshRead["az.pos"]; Generate[Pr] ; Solve[Pr] ; TransferSolution[Pr] ;
    }
  }

  { Name MagStaInit_a_2D ;
    System {
      { Name S ; NameOfFormulation MagSta_a_2D ; DestinationSystem A; }
    }
    Operation {
      Generate[S] ; Solve[S] ; TransferSolution[S] ;
    }
  }

  { Name MagDyn_a_2D ;
    System {
      { Name A ; NameOfFormulation MagDyn_a_2D ; }
    }
    Operation {
      SetTime[t0] ;
      InitSolution[A]; SaveSolution[A];
      TimeLoopTheta[t0, t0+dt, dt, 1.]{ // do 1 step
	Generate[A]; Solve[A];  SaveSolution[A];
        PostOperation[MapMag];
      }
    }
  }

  { Name  MagDyn_a_2D_Kin ;
    System {
      { Name A ; NameOfFormulation MagDyn_a_2D ; }
      { Name M ; NameOfFormulation Mechanical ; }
    }
    Operation {
      SetTime[t0] ;
      InitSolution[A] ; SaveSolution[A] ;
      InitSolution[M] ; SaveSolution[M] ;

      TimeLoopTheta[t0, t0+dt, dt, 1.]{ // do 1 step
	Generate[A]; Solve[A];  SaveSolution[A];
        PostOperation[MapMag] ;
        Generate[M] ; Solve[M] ; SaveSolution[M] ;
        PostOperation[MapMec] ;
      }
    }
  }

}


PostProcessing {

 { Name MagDyn_a_2D ; NameOfFormulation MagDyn_a_2D ;
   PostQuantity {
     { Name a ; Value { Term { [  {a} ]   ; In Domain ; Jacobian Vol ; } } }
     { Name az ; Value { Term { [  CompZ[{a}] ]   ; In Domain ; Jacobian Vol ; } } }
     { Name b  ; Value { Term { [ {d a} ] ; In Domain ; Jacobian Vol ; } } }
     { Name j  ; Value { Term { [ -sigma[] * Dt[{a}] ] ; In Domain ; Jacobian Vol ; } } }
     { Name jz  ; Value { Term { [ CompZ[-sigma[] * Dt[{a}]] ] ; In Domain ; Jacobian Vol ; } } }
     { Name js  ; Value { Term { [ js[] ] ; In DomainS ; Jacobian Vol ; } } }
     { Name Flux ; Value { Integral { [ AxialLength * NbrWires_Area[]* CompZ[{a}] ] ;
           In Coils  ; Jacobian Vol ; Integration I1 ; } } }
     { Name W  ; Value { Integral { [ AxialLength * nu[]/2*SquNorm[{d a}] ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; } } }

     { Name F  ; Value { Integral { [ AxialLength * Tmax[{d a}] * N[] ] ;
           In Domain ; Jacobian Vol ; Integration I1 ; } } }
     { Name F_vw ; Value {
         Integral { Type Global ; [ 0.5 * nu[] * VirtualWork [{d a}] * AxialLength ];
           In ElementsOf[DomainCC, OnOneSideOf SkinDomainC_Moving];
           Jacobian Vol ; Integration I1 ; } } }
     { Name Fy ; Value { Term {  Type Global; [  CompY[#55] ] ; In Domain ; Jacobian Vol ; } } } // Magnetic force stored in register #55


     If(Flag_Circuit)
     { Name Uc ; Value { Term { [ {Ub} ]  ; In DomainB ; }
                         Term { [ {Uz} ]  ; In DomainZt_Cir ; }
     } }
     { Name Ic ; Value { Term { [ {Ib} ]  ; In DomainB ; }
     	                 Term { [ {Iz} ]  ; In DomainZt_Cir ; }
     } }
     EndIf
   }
 }

 { Name Mechanical ; NameOfFormulation Mechanical ;
   PostQuantity {
     { Name U  ; Value { Term { [ {U} ]  ; In DomainKin ; } } } //Position
     { Name V  ; Value { Term { [ {V} ]  ; In DomainKin ; } } } //Velocity
     { Name Fmag     ; Value { Term {  Type Global; [ Fmag[] ] ; In DomainKin ; } } }
     { Name Ftot     ; Value { Term {  Type Global; [ Fmag[] + Fspring[{U}] ] ; In DomainKin ; } } }
     { Name Fspr     ; Value { Term {  Type Global; [ Fspring[{U}] ]        ; In DomainKin ; } } }
     { Name Friction ; Value { Term {  Type Global; [ Friction[{U}] * {V} ] ; In DomainKin ; } } }
   }
 }

}

ExtGmsh     = ".pos" ;
ExtGnuplot  = ".dat" ;
cleanF = StrCat["rm -rf ", StrCat["Fvw", ExtGnuplot]];

PostOperation MapMag UsingPost MagDyn_a_2D {
  Print[ az, OnElementsOf Domain, File StrCat["az", ExtGmsh], Format Gmsh,
         OverrideTimeStepValue step, LastTimeStepOnly] ;
  //Print[ j, OnElementsOf #{DomainC,Dummy}, File "j.pos", Format Gmsh, LastTimeStepOnly ] ;
  //Print[ jz, OnElementsOf #{DomainC,Dummy}, File "jz.pos", Format Gmsh, LastTimeStepOnly ] ;
  //Print[ b, OnElementsOf #{Domain,Dummy},  File "b.pos", Format Gmsh,
  //       LastTimeStepOnly ] ;

  //Print[ F[AirLayer], OnGlobal, Format Table, File "Fmag.dat", Store 55,
  //       LastTimeStepOnly] ;
  Print[ F_vw, OnRegion NodesOf[SkinDomainC_Moving], Format RegionValue, File  StrCat["Fvw", ExtGnuplot], Store  55,
         LastTimeStepOnly] ;
}

/*
If(Flag_Circuit)
PostOperation IUc UsingPost  MagDyn_a_2D {
  Print[ Ic, OnRegion DomainB, File "Ic.dat" ] ;
  Print[ Uc, OnRegion E1, File "Uc.dat" ] ;
}
EndIf
*/

PostOperation MapMec UsingPost Mechanical {
  Echo [ "Cad_Para =", LastTimeStepOnly, NoNewLine, File "test.dat" ];
  Print[ U, OnRegion DomainKin, File > "test.dat", LastTimeStepOnly, NoNewLine, Format ValueOnly] ;
  Echo [ ";", LastTimeStepOnly, File > "test.dat" ];

  Print[ U, OnRegion DomainKin, File StrCat["disp", ExtGnuplot], Format Table,
         LastTimeStepOnly, SendToServer "Parameters/2displacementY"] ;
  Print[ V, OnRegion DomainKin, File StrCat["velocity", ExtGnuplot], Format Table,
         LastTimeStepOnly, SendToServer "Parameters/3velocityY"] ;

  Print[ Fmag, OnRegion DomainKin, Format Table, File  > StrCat["Fmag", ExtGnuplot],
         LastTimeStepOnly,SendToServer "Parameters/4forceY"] ;
  Print[ Ftot, OnRegion DomainKin, Format Table, File  > StrCat["Ftot", ExtGnuplot],
         LastTimeStepOnly,SendToServer "Parameters/5ftotY"] ;
  Print[ Fspr, OnRegion DomainKin, Format Table, File  > StrCat["Fspr", ExtGnuplot],
         LastTimeStepOnly, SendToServer "Parameters/6fspringY"] ;

  // Print[ Ftot, OnRegion DomainKin, File "Ftot.dat", Format Table, LastTimeStepOnly] ;
  // Print[ Fspring, OnRegion DomainKin, File "Fspring.dat", Format Table, LastTimeStepOnly] ;
}

If(Flag_Kinetics)
DefineConstant[ ResolutionChoices = {"MagDyn_a_2D_Kin", Path "GetDP/1"} ];
EndIf
If(!Flag_Kinetics)
DefineConstant[ ResolutionChoices = {"MagDyn_a_2D", Path "GetDP/1"} ];
EndIf

DefineConstant[ ComputeCommand = {"-solve -v 1 -v2", Path "GetDP/9"} ];

