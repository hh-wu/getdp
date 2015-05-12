// MEM 3D
Include "mem3D_data.geo" ;

DefineConstant[
  Flag_AnalysisType = { 2,  Choices{0="Electrostatics", 1="Elasticity",
      2="Electrostatics+Elasticity" },
    Name "Input/0Type of analysis", Highlight "Blue",
    Help Str["- Use 'Elasticity' to compute the displacement of the upper electrode with an imposed force",
      "- Use 'Coupled' to compute the displacement of upper electrode under the computed electric force"]}
] ;

Group {
  PlateINT = #PLATEINT ;
  Sur_PlateINT = #SUR_PLATEINT ; Beams = #BEAMS ;

  Sur_PlateINT_Dwn = #SUR_PLATEINT_DWN ;
  Sur_PlateINT_Up = #SUR_PLATEINT_UP ;

  PlateIN = #PLATEIN ;
  Sur_PlateIN  = #SUR_PLATEIN ;

  Diel = #DIEL ; Sur_Diel = #SUR_DIEL;
  Air  = #AIR ;
  Shell = #SHELL ; Surf_Inf = #SUR_INF ;
  AirLayer = #AIRLAYER ;

  DomainC_Ele = Region[{ PlateINT, PlateIN }] ;
  DomainCC_Ele = Region[{ Diel, Air, Shell, AirLayer}] ; // Nonconducting regions

  Domain_Ele = Region[{DomainCC_Ele, DomainC_Ele}] ;

  SkinDomainC_Ele = Region[{Sur_PlateINT, Sur_PlateIN, Surf_Inf}];

  Sur_Beam1 = Region[{SUR_BEAM1d, SUR_BEAM1i}];
  Sur_Beam2 = Region[{SUR_BEAM2d, SUR_BEAM2i}];
  Sur_Beam3 = Region[{SUR_BEAM3d, SUR_BEAM3i}];
  Sur_Beam4 = Region[{SUR_BEAM4d, SUR_BEAM4i}];

  //Electrostatic + Elastic
  Domain_Disp = Region[ {PlateINT, Beams} ] ;
  Domain_Force_Lin = Region[ {} ] ;
  Domain_Force_Sur = Region[ {Sur_PlateINT_Dwn} ];
  Domain_Force_Vol = Region[ {} ];

  Domain_Force = Region[ {Domain_Force_Lin, Domain_Force_Sur, Domain_Force_Vol} ];
  DomainTot = Region[{Domain_Disp, Domain_Force}];
}

Function {
  eps0 = 8.854187818e-12 ;

  epsr[#{Air, Shell, AirLayer}] = 1. ;
  epsr[#{DomainC_Ele, SkinDomainC_Ele, Sur_PlateINT_Dwn}] = 1. ;
  epsr[#{Diel, Sur_Diel}] = epsr_diel ;

  eps[] = eps0*epsr[] ;

  Val_Rint = R1 ;
  Val_Rext = R2 ;

  // Elasticity
  // Mechanical constants E = 70 GPa,  v = 0.3
  E[#{PlateINT, Beams}] = E_val ; nu = nu_val ;

  //Cij = [ C11   C12
  //        C21   C22];

  //Cij = E/(1+nu)/(1-2nu)*
  //[ 1-nu        nu         nu         0                  0                  0
  //    nu      1-nu         nu         0                  0                  0
  //    nu        nu       1-nu         0                  0                  0
  //     0         0          0      (1-2nu)/2             0                  0
  //     0         0          0         0               (1-2nu)/2             0
  //     0         0          0         0                  0              (1-2nu)/2 ]

  f[] = E[]/(1+nu)/(1-2*nu);
  c11 = 1-nu ;
  c12 = nu ;
  c44 = (1-2*nu)/2 ;
  C_11[#{PlateINT, Beams} ] = f[]*TensorSym[ c11, c12, c12, c11, c12, c11 ];
  C_22[#{PlateINT, Beams} ] = f[]*TensorSym[ c44, 0, 0, c44, 0, c44 ];
  C_12[#{PlateINT, Beams} ] = Tensor[0,0,0, 0,0,0, 0,0,0];
  C_21[#{PlateINT, Beams} ] = Tensor[0,0,0, 0,0,0, 0,0,0];

  // C = q/V = eps*A/d  -> force = q^2/(2 *eps0) = (eps*A*V/d)^2/(2 *eps0)

  force =  eps0 * (Vmax/(gap+td))^2/2 ;//For pure mechanical test
  F[Domain_Force] = Vector[0,0,-force];

}


Constraint {
  { Name ElectricScalarPotential ;
    Case {
    }
  }

  { Name GlobalElectricPotential ;
    Case {
      //{ Region Surf_Inf ;   Value  0. ; }
      { Region Sur_PlateINT ; Value  Vmax ; }
      { Region Sur_PlateIN  ; Value  Vmin ; }
    }
  }

  { Name GlobalElectricCharge ;
    Case {
      { Region Surf_Inf ;   Value  0. ; }
    }
  }


 { Name DisplacementX ; Type Assign ;
    Case {
      { Region Sur_Beam1; Value 0.0 ; }
      { Region Sur_Beam2; Value 0.0 ; }
      { Region Sur_Beam3; Value 0.0 ; }
      { Region Sur_Beam4; Value 0.0 ; }
    }
  }

  { Name DisplacementY ; Type Assign ;
    Case {
      { Region Sur_Beam1; Value 0.0 ; }
      { Region Sur_Beam2; Value 0.0 ; }
      { Region Sur_Beam3; Value 0.0 ; }
      { Region Sur_Beam4; Value 0.0 ; }
    }
  }

  { Name DisplacementZ ; Type Assign ;
    Case {
      { Region Sur_Beam1; Value 0.0 ; }
      { Region Sur_Beam2; Value 0.0 ; }
      { Region Sur_Beam3; Value 0.0 ; }
      { Region Sur_Beam4; Value 0.0 ; }
    }
  }
}

Include "ElectroMechanical3D.pro"

ExtGmsh = ".pos" ;
ExtGnuplot = ".dat" ;

PostOperation Post_elec UsingPost Electrostatics_vf {
  Print[ v, OnElementsOf DomainCC_Ele, File "v.pos" ] ;
  Print[ e, OnElementsOf DomainCC_Ele, File "e.pos" ] ;

  // Print [ Force, OnRegion NodesOf[Domain_Force_Sur], File "Force.pos" ] ; // MUCH TOO SLOW!!

  // Print[ v, OnSection {{-bc/2, -Lc/2, -gap/2}{-bc/2, Lc/2, -gap/2}{bc/2, Lc/2, -gap/2}}, File "v_xy.pos" ] ;
  // Print[ v, OnSection {{0, -Lc/2, R1}{0, Lc/2, R1}{0, Lc/2, -R1}}, File "v_yz.pos" ] ;

  // Print[ e, OnSection {{-bc/2, -Lc/2, -gap/2}{-bc/2, Lc/2, -gap/2}{bc/2, Lc/2, -gap/2}}, File "e_xy.pos" ] ;
  // Print[ e, OnSection {{0, -Lc/2, R1}{0, Lc/2, R1}{0, Lc/2, -R1}}, File "e_yz.pos" ] ;
}

PostOperation Post_mec UsingPost Mec_u_3D {
  Print [ u, OnElementsOf Domain_Disp, File "u.pos" ] ;
}


