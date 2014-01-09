//========================================================
// Benchmark "EM waveguide 3D - Rectangular"
// File: GetDP simulation
// Contributors: C. Geuzaine, A. Modave
//========================================================

Include "waveguide3D_rectangle.dat" ;

Group {
  Domain = Region[{DOM}] ;
  BndPEC = Region[{BND_PEC}] ;
  Port1  = Region[{BND_PORT1}] ;
  Port2  = Region[{BND_PORT2}] ;
  Ports  = Region[{Port1, Port2}] ;
}

eps0 = 8.8541878176e-12 ;
mu0 = 1.2566370614e-6 ;
Z0 = Sqrt[mu0/eps0] ;
Y0 = Sqrt[eps0/mu0] ;
c0 = 1/Sqrt[eps0*mu0] ;

DefineConstant[
  Flag_ActivePort = {1, Choices{1="Port 1 [z=0]", 2="Port 2 [z=L]"},
    Name "Input/01Active port", Highlight "Black"}
] ;

DefineConstant[
  FREQ = { 4.225e9, Min 1e8, Max 1e10, Step 1e8,
    Name StrCat[catParam2,"0Frequency [Hz]"]},
  m = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"1Excitation mode number (x)"]},
  n = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"1Excitation mode number (y)"]},
  LAMB = { c0/FREQ, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"2Wavelength [m]"]}
];

Function {
  I[] = Complex[0.,1.] ;
  
  k0 = 2*Pi/LAMB; // Free space wavevector
  kx = m*Pi/Wx;   // Transverse wavevector (x)
  ky = n*Pi/Wy;   // Transverse wavevector (y)
  beta = Sqrt[k0^2-kx^2-ky^2];  // Propagation constant
  
  ePort1[] = Vector[ Sin[kx*X[]], Sin[ky*Y[]], 0. ] ;
  ePort2[] = Vector[ Sin[kx*X[]], Sin[ky*Y[]], 0. ] ;
  intPort1 = Wx*Wy ; // square of electric field "ePort1" integrated at port 1
  intPort2 = Wx*Wy ; // square of electric field "ePort2" integrated at port 2
  
  If(Flag_ActivePort==1)
    eInc[Port1] = ePort1[] ;
    eInc[Port2] = Vector[ 0., 0., 0. ] ;
  EndIf
  If(Flag_ActivePort==2)
    eInc[Port1] = Vector[ 0., 0., 0. ] ;
    eInc[Port2] = ePort2[] ;
  EndIf
}

Constraint {
  { Name eConstraint ; Type Assign ;
    Case {
      { Region BndPEC ; Value 0. ; }
    }
  }
}

Include "formulations.pro";
