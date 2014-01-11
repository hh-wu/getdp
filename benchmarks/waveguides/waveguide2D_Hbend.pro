//========================================================
// Benchmark "EM waveguide 2D - H-bend"
// File: GetDP simulation
// Contributors:
//   L. Rindorf (original version, 2008)
//   A. Modave (modifications)
//========================================================
   
Include "waveguide2D_Hbend.dat" ;

Group {
  Port1  = Region[{BND_PORT1}] ;
  Port2  = Region[{BND_PORT2}] ;
  BndABC = Region[{Port1, Port2}] ;
  BndPEC = Region[{BND_PEC}] ;
  Domain = Region[{DOM}] ;
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
  LAMB = { c0/FREQ*100, ReadOnly 1, Highlight "LightGrey",
    Name StrCat[catParam2,"2Wavelength [cm]"]}
];
LAMB = LAMB/100;

Function {
  I[] = Complex[0.,1.] ;
  epsR[] = 1 ;
  muR[] = 1 ;
  
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

Include "formulations.pro";

PostProcessing {
  { Name postPro_Field ; NameOfFormulation eFormulation ;
    Quantity {
      { Name eZ ; Value { Local{ [ CompZ[{e}] ] ; In Domain ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_FieldsBnd ; NameOfFormulation eFormulation ;
    Quantity {
      { Name eBnd ; Value { Local{ [ {e} ] ; In SurAll ; Jacobian Jac ; } } }
      { Name ePort1 ; Value { Local{ [ ePort1[] ] ; In Port1 ; Jacobian Jac ; } } }
      { Name ePort2 ; Value { Local{ [ ePort2[] ] ; In Port2 ; Jacobian Jac ; } } }
      { Name eInc ; Value { Local{ [ eInc[] ] ; In BndABC ; Jacobian Jac ; } } }
      { Name normal ; Value { Local{ [ Normal[] ] ; In SurAll ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_SParameters ; NameOfFormulation eFormulation ;
    Quantity {
      If (Flag_ActivePort==1)
        { Name R ; Value { Integral{ [ ({e}-ePort1[])*Conj[ePort1[]] / intPort1 ] ; In Port1 ; Jacobian Jac ; Integration I1 ; } } }
        { Name T ; Value { Integral{ [ ({e})         *Conj[ePort2[]] / intPort2 ] ; In Port2 ; Jacobian Jac ; Integration I1 ; } } }
        { Name NormR ; Value { Local{ [ Norm[#1] ] ; In Port1 ; Jacobian Jac ; } } }
        { Name NormT ; Value { Local{ [ Norm[#2] ] ; In Port2 ; Jacobian Jac ; } } }
        { Name NormR_2 ; Value { Local{ [ Norm[#1]^2 ] ; In Port1 ; Jacobian Jac ; } } }
        { Name NormT_2 ; Value { Local{ [ Norm[#2]^2 ] ; In Port2 ; Jacobian Jac ; } } }
        { Name NormR_dB ; Value { Local{ [ 20*Log10[Norm[#1]] ] ; In Port1 ; Jacobian Jac ; } } }
        { Name NormT_dB ; Value { Local{ [ 20*Log10[Norm[#2]] ] ; In Port2 ; Jacobian Jac ; } } }
      EndIf
      If (Flag_ActivePort==2)
        { Name R ; Value { Integral{ [ ({e}-ePort2[])*Conj[ePort2[]] / intPort2 ] ; In Port2 ; Jacobian Jac ; Integration I1 ; } } }
        { Name T ; Value { Integral{ [ ({e})         *Conj[ePort1[]] / intPort1 ] ; In Port1 ; Jacobian Jac ; Integration I1 ; } } }
        { Name NormR ; Value { Local{ [ Norm[#1]^2 ] ; In Port2 ; Jacobian Jac ; } } }
        { Name NormT ; Value { Local{ [ Norm[#2]^2 ] ; In Port1 ; Jacobian Jac ; } } }
        { Name NormR_2 ; Value { Local{ [ Norm[#1]^2 ] ; In Port2 ; Jacobian Jac ; } } }
        { Name NormT_2 ; Value { Local{ [ Norm[#2]^2 ] ; In Port1 ; Jacobian Jac ; } } }
        { Name NormR_dB ; Value { Local{ [ 20*Log10[Norm[#1]] ] ; In Port2 ; Jacobian Jac ; } } }
        { Name NormT_dB ; Value { Local{ [ 20*Log10[Norm[#2]] ] ; In Port2 ; Jacobian Jac ; } } }
      EndIf
    }
  }
}

PostOperation {
  { Name Get_Field ; NameOfPostProcessing postPro_Field ;
    Operation {
      Print [ eZ, OnElementsOf Domain, File StrCat[myDir, "eZ.pos"]] ;
    }
  }
  { Name Get_FieldsBnd ; NameOfPostProcessing postPro_FieldsBnd ;
    Operation {
      Print [ eBnd, OnElementsOf SurAll, File StrCat[myDir, "eBnd.pos"]] ;
      Print [ ePort1, OnElementsOf Port1, File StrCat[myDir, "ePort1.pos"]] ;
      Print [ ePort2, OnElementsOf Port2, File StrCat[myDir, "ePort2.pos"]] ;
      Print [ eInc, OnElementsOf BndABC, File StrCat[myDir, "eInc.pos"]] ;
      Print [ normal, OnElementsOf SurAll, File StrCat[myDir, "normal.pos"]] ;
    }
  }
  { Name Get_SParameters ; NameOfPostProcessing postPro_SParameters ;
    Operation {
      If (Flag_ActivePort==1)
        Print [ R[Port1], OnRegion Port1, StoreInRegister 1,
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ T[Port2], OnRegion Port2, StoreInRegister 2,
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print [ NormR[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"0|R|"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ NormT[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"1|T|"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print [ NormR_2[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"2|R|^2"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ NormT_2[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"3|T|^2"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print [ NormR_dB[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"4|R| [dB]"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ NormT_dB[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"5|T| [dB]"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
      EndIf
      If (Flag_ActivePort==2)
        Print [ R[Port2], OnRegion Port2, StoreInRegister 1,
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ T[Port1], OnRegion Port1, StoreInRegister 2,
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print [ NormR[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"0|R|"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ NormT[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"1|T|"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print [ NormR_2[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"2|R|^2"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ NormT_2[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"3|T|^2"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print [ NormR_dB[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"4|R| [dB]"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ NormT_dB[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"5|T| [dB]"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
      EndIf
    }
  }
}

DefineConstant[
  MyPostOp = {"Get_Field, Get_SParameters", Choices{"Get_Field", "Get_FieldsBnd", "Get_SParameters"},
    Name "Input/1Post-processing", MultipleSelection "101"}
] ;

DefineConstant[
  R_ = {"eFormulation", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { Str[MyPostOp], Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
] ;
