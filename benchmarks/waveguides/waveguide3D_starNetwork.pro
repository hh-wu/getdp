//========================================================
// Benchmark "EM waveguide 3D - star-shaped network"
// File: GetDP simulation
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide3D_starNetwork.dat" ;

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
  mMode = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"1Excitation mode number (horizontal)"]},
  nMode = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"2Excitation mode number (vertical)"]},
  FREQ = { 5e9, Min 1e8, Max 1e10, Step 1e8,
    Name StrCat[catParam2,"3Frequency [Hz]"]},
  FREQ_CUT = { 0.5*c0 * Sqrt[(mMode*mMode)/(W*W) + (nMode*nMode)/(Wz*Wz)], ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"4Cutoff frequency [Hz]"]},
  LAMB = { c0/FREQ*100, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"5Wavelength [cm]"]}
];
LAMB = LAMB/100;

Function {
  I[] = Complex[0.,1.] ;
  epsR[] = 1 ;
  muR[] = 1 ;

  k0 = 2*Pi/LAMB ;   // Free space wavevector
  ky = mMode*Pi/W ;  // Transverse wavevector (horizontal)
  kz = nMode*Pi/Wz ; // Transverse wavevector (vertical)

  For n In {1:NbPorts}
    phi = 2*Pi*(n-0.5)/NbPorts ;
    yLoc~{n}[] = Sin[phi]*X[] - Cos[phi]*Y[] + W/2 ;
    zLoc~{n}[] = Z[] + Wz/2 ;
    ePort~{n}[] = Vector[ nMode/Wz * Cos[ky*yLoc~{n}[]] * Sin[kz*zLoc~{n}[]] * ( Sin[phi]) ,
                          nMode/Wz * Cos[ky*yLoc~{n}[]] * Sin[kz*zLoc~{n}[]] * (-Cos[phi]) ,
                         -mMode/W  * Sin[ky*yLoc~{n}[]] * Cos[kz*zLoc~{n}[]] ] * 2/Sqrt[nMode^2*W/Wz + mMode^2*Wz/W] ;
    /*
    ePort~{n}[] = Vector[ mMode/W  * Cos[ky*yLoc~{n}[]] * Sin[kz*zLoc~{n}[]] * ( Sin[phi]) ,
                          mMode/W  * Cos[ky*yLoc~{n}[]] * Sin[kz*zLoc~{n}[]] * (-Cos[phi]) ,
                          nMode/Wz * Sin[ky*yLoc~{n}[]] * Cos[kz*zLoc~{n}[]] ] ;
    */
    eInc[Port~{n}] = (n == ActivePort) ? ePort~{n}[] : Vector[ 0., 0., 0. ] ;
  EndFor
}

Include "formulations.pro";
