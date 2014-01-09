//========================================================
// Benchmark "EM waveguide 2D - H-bend"
// File: GetDP simulation
// Contributors:
//   L. Rindorf (original version, 2008)
//   C. Geuzaine, A. Modave (modifications)
//========================================================
   
Include "waveguide2D_Hbend.dat" ;

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
  Flag_ActivePort = {1, Choices{1="Port 1 [x=0]", 2="Port 2 [x=L]"},
    Name "Input/01Active port", Highlight "Black"}
] ;

DefineConstant[
  FREQ = { 4e9, Min 4e9, Max 6e9, Step 1e8,
    Name StrCat[catParam2,"0Frequency [Hz]"]},
  m = { 1, Min 1, Max 10, Step 1,
    Name StrCat[catParam2,"1Excitation mode number"]},
  LAMB = { c0/FREQ, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"2Wavelength [m]"]}
];


Function {
  I[] = Complex[0.,1.] ;
  
  k0 = 2*Pi/LAMB; // Free space wavevector
  kt = m*Pi/W;    // Transverse wavevector
   
  ePort1[] = Vector[ 0., 0., Sin[kt*(Y[]+W/2)] ] ;
  ePort2[] = Vector[ 0., 0., Sin[kt*(X[]+W/2-R)] ] ;
  intPort1 = W/2 ; // square of electric field "ePort1" integrated at port 1
  intPort2 = W/2 ; // square of electric field "ePort2" integrated at port 2
  
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
