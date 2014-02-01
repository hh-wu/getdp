//========================================================
// Benchmark "EM waveguide 3D - Rectangular"
// File: GetDP simulation
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide3D_rectangle.dat" ;

Group {
  Port_1 = Region[{BND_PORT_1}] ;
  Port_2 = Region[{BND_PORT_2}] ;
  BndABC = Region[{Port_1, Port_2}] ;
  BndPEC = Region[{BND_PEC}] ;
  Domain = Region[{DOM}] ;
}

eps0 = 8.8541878176e-12 ;
mu0 = 1.2566370614e-6 ;
Z0 = Sqrt[mu0/eps0] ;
Y0 = Sqrt[eps0/mu0] ;
c0 = 1/Sqrt[eps0*mu0] ;

NbPorts = 2 ;
DefineConstant[
  ActivePort = {1, Choices{1="Port 1 [z=0]", 2="Port 2 [z=L]"},
    Name StrCat[catParam2,"0Active port"]},
  FREQ = { 6e9, Min 1e8, Max 1e10, Step 1e8,
    Name StrCat[catParam2,"1Frequency [Hz]"]},
  LAMB = { c0/FREQ*100, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"2Wavelength [cm]"]},
  m = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"3Excitation mode number (x)"]},
  n = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"4Excitation mode number (y)"]}
];
LAMB = LAMB/100 ;

Function {
  I[] = Complex[0.,1.] ;
  epsR[] = 1 ;
  muR[] = 1 ;
  
  omega = 2*Pi*FREQ ;
  k0 = 2*Pi/LAMB ; // Free space wavevector
  kx = m*Pi/Wx ;   // Transverse wavevector (x)
  ky = n*Pi/Wy ;   // Transverse wavevector (y)
  gamma2 = Pi^2 * (m^2/Wx^2 + n^2/Wy^2) ;
  
  H0[] = I[]*mu0*omega/gamma2 ;
  For n In {1:NbPorts}
    ePort~{n}[] = Vector[ - H0[]*ky * Cos[kx*X[]]*Sin[ky*Y[]],
                          + H0[]*kx * Sin[kx*X[]]*Cos[ky*Y[]], 0. ] ;
    eInc[Port~{n}] = (n == ActivePort) ? ePort~{n}[] : Vector[ 0., 0., 0. ] ;
  EndFor
}

Include "formulations.pro";
