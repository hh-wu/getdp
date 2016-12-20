
DefineConstant[ // allows to set these from outside
  // Analysis type
  ANALYSIS = {0, Name "Input/00Type of analysis",
    Choices {0="Helmholtz", 1="Maxwell"}},
  // wavenumber
  WAVENUMBER = {30*Pi, Name "Input/0Wavenumber"},
  LAMBDA = {2*Pi/WAVENUMBER, Name "Input/1Wavelength", ReadOnly 1},
  // number of points per wavelength
  N_DOM = {7, Min 7, Max 512, Step 1, Name "Input/04Number of subdomains"},
  N_LAMBDA = {10, Name "Input/2Points per wavelength"},
  // base msh filename
  MSH_BASE_NAME = "mesh_",
  // directory for output files
  DIR = "out/",
  nLayersTr = 1,
  nLayersPml = 1,
  OPEN_ENDED = 1 // radiation condition ; otherwise wall condition
];

// prefix for (split) mesh files (one for each partition)
MSH_NAME = StrCat(DIR, MSH_BASE_NAME) ;

LC = LAMBDA/N_LAMBDA;

Printf("LC: %g",LC);

m = 1 ; // 'vertical'
n = 1 ; // 'horizontal'

PARTS = 5; // use 5 for the full model

D1 = .1; // inner straight part length
D2 = .08; // middle straight part length
D3 = .01; // outlet straight part length
d1 = .084 ; // cross-section
d2 = .11; // cross-section
R = 0.186 + d1/2.; // rotation radius
alpha = 35/360*2*Pi; // rotation angle

// dispatch the subdomains on the different parts
Ltot = D1+D2+D3+2.*R*alpha;

// normalized lengths of each part
p = {D1/Ltot,
     R*alpha/Ltot,
     D2/Ltot,
     R*alpha/Ltot,
     D3/Ltot};

nDomList = {}; // list of number of subdomains in each of the 5 parts
l = {}; // list of lengths of the subdomains in each part
nd = 0; // counter
For i In{0:4}
  nDomList += Round[p(i)*N_DOM]; // initial guess
  If (nDomList(i) == 0) // prevent part with 0 subdomain
    nDomList(i) = 1.;
  EndIf
  nd += nDomList(i);
  l += p(i);
EndFor

// remove or add domains as needed (simplistic approach)
nDiff = nd - N_DOM;
If (nDiff > 0)
  If (nDiff == 1)
    If (l(0) < l(2))
      nDomList[0] = nDomList[0]-1;
    EndIf
    If (l(0) > l(2))
      nDomList(2) = nDomList(2)-1;
    EndIf
  EndIf
  If (nDiff == 2)
    nDomList(1) -= 1;
    nDomList(3) -= 1;
  EndIf
  If (nDiff == 3)
    If (l(0) < l(2))
      nDomList(0) -= 1;
    EndIf
    If (l(0) > l(2))
      nDomList(2) -= 1;
    EndIf
    nDomList(1) -= 1;
    nDomList(3) -= 1;
  EndIf
  If (nDiff == 4)
    nDomList(0) -= 1;
    nDomList(1) -= 1;
    nDomList(2) -= 1;
    nDomList(3) -= 1;
  EndIf
  If (nDiff == 5)
    nDomList(0) -= 1;
    nDomList(1) -= 1;
    nDomList(2) -= 1;
    nDomList(3) -= 1;
    nDomList(4) -= 1;
  EndIf
EndIf
If (nDiff < 0)
  If (nDiff == -1)
    If (l(0) > l(2))
      nDomList(0) += 1;
    EndIf
    If (l(0) < l(2))
      nDomList(2) += 1;
    EndIf
  EndIf
  If (nDiff == -2)
    nDomList(1) += 1;
    nDomList(3) += 1;
  EndIf
  If (nDiff == -3)
    If (l(0) > l(2))
      nDomList(0) += 1;
    EndIf
    If (l(0) < l(2))
      nDomList(2) += 1;
    EndIf
    nDomList(1) += 1;
    nDomList(3) += 1;
  EndIf
  If (nDiff == -4)
    nDomList(0) += 1;
    nDomList(1) += 1;
    nDomList(2) += 1;
    nDomList(3) += 1;
  EndIf
  If (nDiff == -5)
    nDomList(0) += 1;
    nDomList(1) += 1;
    nDomList(2) += 1;
    nDomList(3) += 1;
    nDomList(4) += 1;
  EndIf
EndIf

shiftX = 0;
shiftY = -( (R+d1)*(1-Cos[alpha]) + D2*Sin[alpha] + R*(1-Cos[alpha]) ) ;

dTr = nLayersTr*LC;
dPml = nLayersPml*LC;
dBb = (nLayersPml+nLayersTr)*LC;
