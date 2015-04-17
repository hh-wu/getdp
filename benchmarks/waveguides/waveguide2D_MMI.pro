Include "waveguide2D_MMI.dat" ;

DefineConstant[ Excitation = 1 ]; // FIXME: add BC for TM excitation

Group {
  For n In {1:NbPorts}
    Port~{n} = Region[{BND_PORT~{n}}] ;
    BndABC += Region[{Port~{n}}] ;
  EndFor
  BndPEC = Region[{BND_LAT}] ;
  Domain = Region[{DOM}] ;
}

eps0 = 8.8541878176e-12 ;
mu0 = 1.2566370614e-6 ;
Z0 = Sqrt[mu0/eps0] ;
Y0 = Sqrt[eps0/mu0] ;
c0 = 1/Sqrt[eps0*mu0] ;

DefineConstant[
  ActivePort = { 1, Min 1, Max NbPorts, Step 1,
    Name StrCat[catParam2,"0Number of active port"]},
  LAMB0 = { 635, Min 400, Max 750,
    Name StrCat[catParam2,"1Wavelength in vacuum [nm]"]},
  RINDEX = { 2, Min 1, Max 10,
    Name StrCat[catParam2,"2Refractive index"]},
  FREQ = { c0/(LAMB0*1e-9), ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"2Frequency [Hz]"]},
  m = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"3Excitation mode number"]}
];
LAMB0 = LAMB0*1e-9;
EPSR = RINDEX^2;
MUR = 1;

Function {
  I[] = Complex[0.,1.] ;
  epsR[] = EPSR ;
  muR[] = MUR ;

  k0 = 2*Pi/LAMB0 ; // Free space wavevector
  kt = m*Pi/Wwg ;    // Transverse wavevector

  For n In {1:NbPorts}
    yLoc~{n}[] = Y[] - yBot~{n} ;
    ePort~{n}[] = Vector[ 0., 0., Sin[kt*yLoc~{n}[]] ] ;
    eInc[Port~{n}] = (n == ActivePort) ? ePort~{n}[] : Vector[ 0., 0., 0. ] ;
  EndFor
}

Include "formulations.pro";
