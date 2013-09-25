// Band frequency : 2 to 3 GHz, working frequency 2.45 GHz

//FREQ = 2.4e9; // Resonance should be here...
//FREQ = 1e9; // mesh for reasonable computation time...

ppEM = "2Electromagnetic parameters/0";
close_menu = 0;
colorro    = "LightGrey";
colorpp    = "Ivory";

fmin = 1e9 ;
fmax = 3e9 ;
nn = 50 ;

c0 = 3e8 ; // speed of light in vacuum

mm = 1e-3 ;
micro = 1e-6 ;
gg = 1e9 ;

DefineConstant[
  FREQ = { 1, Min fmin, Max fmax, Step (fmax-fmin)/nn, Label "Frequency [GHz]", Loop 0,
    Path StrCat(ppEM,"0"), Highlight Str[colorpp],
    Help Str["- Resonance frequency is 2.45 GHz'"]},
  lambda = { c0/(FREQ*gg), Label "Wavelength [m]",
    Path StrCat(ppEM,"1"), ReadOnly 1, Highlight Str[colorro]},
  k0 = {2*Pi/lambda, Label "Wave number",
    Path StrCat(ppEM,"2"), ReadOnly 1, Highlight Str[colorro]},
  EPSILONR = {4.5, Label "Relative permittivity of dielectric layer",
    Path StrCat(ppEM,"3"), Highlight Str[colorpp]}
] ;

FREQ = FREQ*gg; // from GHz to Hz

// Microstrip dimensions
L1 = 3.94 * mm ;
L2 = 2.70 * mm ;
L3 = 5.00 * mm ;
L4 = 2.64 * mm ;
L5 = 2.00 * mm ;
L6 = 4.90 * mm ;
W1 = 0.90 * mm ;
W2 = 0.50 * mm ;
D1 = 0.50 * mm ;
D2 = 0.30 * mm ;
D3 = 0.30 * mm ;
D4 = 0.50 * mm ;
D5 = 1.40 * mm ;
D6 = 1.70 * mm ;

wT = D1 + L3 + 2*L5 + 2*L2 + D3 ;
hT = L6 + W2 + D2 ;

dwT = 0.2 * wT ;
dhT = 0.4 * hT ;

/*
PCB DESCRIPTION:1-2 LAYER PCB 0.25 MM NOMINAL
		2-3 LAYER PCB 0.50 MM NOMINAL
		3-4 LAYER PCB 0.25 MM NOMINAL
		THICKNESS FR4 WITH 35um Cu PER LAYER
		Dimensions in mil (0.001 inch)
                DOUBLE SIDE SOLDER MASK,
                DOUBLE SIDE SILKSCREEN,
                8 MIL MIN TRACE WIDTH AND 6 MIL MIN ISOLATION
		Dielectric constant for FR4 is 4.5
*/
cte = 1 ;
depth1 = 35 * micro*cte ;
depth2 = 0.25 * mm*cte ; // Thickness of substrate?
depth3 = 0.50 * mm*cte ; // Thickness of substrate?
depth4 = depth2 ;
zT = 3*depth1+ depth2 + depth3 + depth4 ;
zb2  = 2*zT + depth1 ;
zb2_ = zT - depth1 ;

xb = wT * 0.6 ;
yb = hT * 0.8 ;
zb = 6 * (depth1+depth2) ;

PmlDelta = zb/2 * 4 ;
PmlDelta_ext = PmlDelta ;


//=======================================================================
//=======================================================================

MICROSTRIP     = 1000 ;
SKINMICROSTRIP = 1010 ;
CUTMICROSTRIP = 1020;

// Splitting in two parts for source with av-formulation
SKINMICROSTRIP1 = SKINMICROSTRIP + 1 ; // on the left of skinfeed
SKINMICROSTRIP2 = SKINMICROSTRIP + 2 ; // on the right of skinfeed

FEED       = 1100 ;
SKINFEED   = 1110 ;
SKINF_TOP  = 1111 ;
SKINF_BOT  = 1112 ;
SKINF_BACK = 1113 ;
SKINF_FRONT = 1114 ;

SUBSTRATE  = 1200 ;

GROUND     = 1300 ;
SKINGROUND = 1310;
SKINGROUND1 = SKINGROUND+1;
SKINGROUND2 = SKINGROUND+2;
SKINGROUND3 = SKINGROUND+3;

AIR  = 2000;
PMLX = 2100 ;
PMLY = 2200 ;
PMLZ = 2300 ;

SURFAIR = 2222 ;
