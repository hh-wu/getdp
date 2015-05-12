//========================================================
// Benchmark "EM waveguide 2D - star-shaped network"
// File: GetDP simulation
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide2D_starNetwork.dat" ;

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
  m = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"1Excitation mode number"]},
  FREQ = { 4e9, Min 1e8, Max 5e10, Step 1e8,
    Name StrCat[catParam2,"2Frequency [Hz]"]},
  FREQ_CUT = { 0.5*c0 * m/W, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"3Cutoff frequency [Hz]"]},
  LAMB = { c0/FREQ*100, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"4Wavelength [cm]"]}
];
LAMB = LAMB/100;

Function {
  I[] = Complex[0.,1.] ;
  epsR[] = 1 ;
  muR[] = 1 ;

  k0 = 2*Pi/LAMB ; // Free space wavevector
  kt = m*Pi/W ;    // Transverse wavevector

  For n In {1:NbPorts}
    phi = 2*Pi*(n-0.5)/NbPorts ;
    yLoc~{n}[] = (-Sin[phi]*X[] + Cos[phi]*Y[]) + 0.5*W ;
    ePort~{n}[] = Vector[ 0., 0., Sin[kt*yLoc~{n}[]] ] ;
    eInc[Port~{n}] = (n == ActivePort) ? ePort~{n}[] : Vector[ 0., 0., 0. ] ;
  EndFor
}

Include "formulations.pro";
