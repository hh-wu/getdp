// Shaded pole machine

pp  = "1Geometric dimensions/0";
ppEM = "2Electromagnetic parameters/0";


// estimation of torque
// 3kW, 3-phase, 4-pole IM, 20 Nm, R 46 mm, axial length 127 mm
// shaded pole 5.2 mm, 20 mm
// 20 * (5.2/46)^2 * 20/127 = 0.04 Nm
// 0.04 Nm *2000/60*2*pi= 8.4 W

R = 5.5e-3 ;
g = 0.2e-3 ;

w1 = 10e-3 ;
w2 = 1e-3 ; // width of rings
w3 = 5e-3 ;
w4 = 10e-3 ; // width of coil sides

h1 = 10e-3 ;
h2 = 3e-3 ;

xm = 30e-3 ;
ym = 40e-3 ;

Rg = R-g ;
Rg1 = R-2*g/3 ; // intermediate radius in airgap, closest to rotor
Rg2 = R-g/3 ; // intermediate radius in airgap, closest to yoke

x2 = w1/2 ;
y2 = Sqrt[R^2-x2^2];

x3 = w2/2 ;
y3 = Sqrt[R^2-x3^2];

//-----------------------------------------------------------------------
//-----------------------------------------------------------------------

mur_fe = 1000;
sigma_fe = 2e6 ;
sigma_cu = 6e7 ; // Conductivity of the rings


rpm = 4000;
Ns = 6000;


IA = 1 ;
VA = 220 ; //supply voltage in V

AxialLength = 20e-3; // Axial length


//====================================
// Physical regions
//====================================
// Rotor
ROTOR_FE     = 1000 ;
ROTOR_AIR    = 1001 ;
ROTOR_AIRGAP = 1002 ;
ROTOR_MAGNET = 1010 ; // Index for first Magnet (1/8 model->1; full model->8)

ROTOR_BND_MOVING_BAND = 1100 ; // Index for first line (1/8 model->1; full model->8)
ROTOR_BND_A0 = 1200 ;
ROTOR_BND_A1 = 1201 ;
SURF_INT     = 1202 ;

// Stator
STATOR_FE     = 2000 ;
STATOR_AIR    = 2001 ;
STATOR_AIRGAP = 2002 ;

STATOR_BND_MOVING_BAND = 2100 ;// Index for first line (1/8 model->1; full model->8)
STATOR_BND_A0          = 2200 ;
STATOR_BND_A1          = 2201 ;

STATOR_IND = 2300 ; //Index for first Ind (1/8 model->3; full model->24)
STATOR_IND_AP = STATOR_IND + 1 ; STATOR_IND_BM = STATOR_IND + 2 ;STATOR_IND_CP = STATOR_IND + 3 ;
STATOR_IND_AM = STATOR_IND + 4 ; STATOR_IND_BP = STATOR_IND + 5 ;STATOR_IND_CM = STATOR_IND + 6 ;

STATOR_RING = 3000;

SURF_EXT = 4000 ; // outer boundary


MOVING_BAND = 9999 ;

NICEPOS = 111111 ;
