//========================================================
// Benchmarks "Shielding effectiveness"
// File: GetDP simulation (choice of the problem)
//========================================================

Include "main.dat";

Flag_SilverMuller = (Flag_BC_Type==0);
Flag_PML = (Flag_BC_Type==1);

DefineConstant[
  Freq = { 500e6, Min 400e6, Max 1e9, Step 20e6,
    Name StrCat[catParam3,"0Frequency [Hz]"], Loop 1, Highlight Str[colorpp]},
  lambda = { c0/(Freq),
    Name StrCat[catParam3,"1Wavelength [m]"], ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda,
    Name StrCat[catParam3,"2Wave number"], ReadOnly 1, Highlight Str[colorro]}
];

Group {
  If(Flag_SilverMuller)
    DomAir = Region[{ CAVITY_VOL, LAYER1 }];
    DomPml = Region[{ }];
    DomCond = Region[{ }];
    BndBC = Region[{ CAVITY_BORDER }];
    BndPEC = Region[{ }];
    BndSM = Region[{ BORDER }];
  EndIf

  If(Flag_PML)
    DomAir = Region[{ CAVITY_VOL }];
    DomPml = Region[{ LAYER1 }];
    DomCond = Region[{ }];
    BndBC = Region[{ CAVITY_BORDER }];
    BndPEC = Region[{ BORDER }];
    BndSM = Region[{ }];
  EndIf

  Boundary  = Region[{ BndBC, BndPEC, BndSM }];
  Domain    = Region[{ DomAir, DomPml, DomCond }];
  DomainTot = Region[{ Domain, Boundary }];
}

Function {
  mu0 = 4.e-7 * Pi;
  nu0 = 1/mu0;
  ep0 = 8.854187817e-12;

  epsilon [ #{DomAir, DomCond, Boundary} ] = ep0;
  nu [ #{DomAir, DomCond, Boundary} ] = nu0;
  sigma[ DomCond ] = 0.;

  I[] = Complex[0,1];

  If(Flag_PML)
    xLoc[] = Fabs[X[]]-Lx/2;
    yLoc[] = Fabs[Y[]]-Ly/2;
    zLoc[] = Fabs[Z[]]-Lz/2;
    PmlDelta = Llayer1;
    DampingProfileX[] = (xLoc[]>0) ? 1 / (PmlDelta-xLoc[]) : 0;
    DampingProfileY[] = (yLoc[]>0) ? 1 / (PmlDelta-yLoc[]) : 0;
    DampingProfileZ[] = (zLoc[]>0) ? 1 / (PmlDelta-zLoc[]) : 0;

    cX[] = Complex[1,-DampingProfileX[]/k0];
    cY[] = Complex[1,-DampingProfileY[]/k0];
    cZ[] = Complex[1,-DampingProfileZ[]/k0];

    t11[] = cY[]*cZ[]/cX[];
    t22[] = cX[]*cZ[]/cY[];
    t33[] = cX[]*cY[]/cZ[];
    tens[] = TensorDiag[ t11[], t22[], t33[] ];

    epsilon[ DomPml ] = ep0 * tens[];
    nu[ DomPml ] = nu0 / tens[];
  EndIf

  If(Flag_Model==2)
    eInc[] = Vector[0,0,Complex[Cos[k0*X[]],Sin[k0*X[]]]];
  EndIf
  If(Flag_Model==3)
    eInc[] = Vector[0,Complex[Cos[k0*Z[]],Sin[k0*Z[]]],0];
  EndIf
}

Include "formulations.pro"
