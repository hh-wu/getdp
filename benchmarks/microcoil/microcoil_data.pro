pp  = "1Geometric dimensions/0";
ppEM  = "2Electromagnetic parameters/0";

close_menu = 0;
colorro  = "LightGrey";
colorpp = "Ivory";


mu0  = 4.e-7 * Pi ;
nu0  = 1/mu0 ;
eps0 = 8.854187818e-12 ;
c0   = Sqrt[nu0/eps0];

DefineConstant[
  nTurns = {2, Label "Number of turns", Path StrCat(pp,"0"),  Highlight Str[colorpp], Closed close_menu},
  wWire =  {5, Label "Width of wire [microns]",  Path StrCat(pp,"1"),  Highlight Str[colorpp]},
  hWire =  {5, Label "Height of wire [microns]", Path StrCat(pp,"2"),  Highlight Str[colorpp]},
  gWire =  {5, Label "Gap between wire [microns]", Path StrCat(pp,"3"),  Highlight Str[colorpp]},

  Freq  = {1e8, Label "Working Frequency [Hz]", Path StrCat(ppEM,"0"),  Highlight Str[colorpp] },
  epsilon_r  = {5, Label "Relative permittivity of medium" , Path StrCat(ppEM,"1"),  Highlight Str[colorpp] },
  c_medium  = {c0/Sqrt[epsilon_r], Label "Speed of light in medium", ReadOnly 1, Path StrCat(ppEM,"5"),  Highlight Str[colorro] },
  k_medium  = {2*Pi*Freq/c_medium, Label "Wave number in medium", ReadOnly 1, Path StrCat(ppEM,"4"),  Highlight Str[colorro] },
  lambda_medium = {c_medium/Freq, Label "Wavelength in medium", ReadOnly 1, Path StrCat(ppEM,"3"),  Highlight Str[colorro] }
];

um = 1e-6; // micron
wWire = wWire * um;
gWire = gWire * um;
hWire = hWire * um;

// Box
wBox = ((wWire+gWire)*nTurns + 20*um+wWire/2.) *4 ;

//zBox1 = hWire * 10;
zBox1 = 10. *um;
zBox2 = zBox1;

// Characteristic lengths
s=0.8;

cCoil     = wWire *s;
cCoilLong = wWire *s;

bumpCoil     = 0.2;
bumpCoilLong = 0.2*5;

//nwWire = wWire/cCoil;
nwWire = 4 ;
nhWire = nwWire;

cBox = wBox/10. * s; // before
//cBox = wBox/10. *s*2; // after


// data for extrussion
wair  = 10*um ;
wcoil =  5*um ;
wairtop = wair ;

nl_air  = 3 ; // 5
nl_coil = 4 ; // 6
prog_air = 0.8 ;

//---------------------------------------------------------------------------
// Physical regions
//---------------------------------------------------------------------------

COIL = 1000;

SKINCOIL = 1111;
ELECIN   = 1100;
ELECOUT  = 1101;

AIR     = 2000;
AIRCUT  = 2001;
SURFBOX = 2222;

CUTCOIL = 1200;
SKINCOIL_2 = 1201;

CUTCOILLINE = 1202;
SURFBOXONESIDE = 2223;

POINTREFPOT = 3333;
