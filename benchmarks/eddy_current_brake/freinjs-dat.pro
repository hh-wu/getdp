// File freinjs-dat.pro


/// *) Constants --------------------------------------------------------------
///    ---------

mm = 1e-3;    // mm -> m

/// *) Dimensions -------------------------------------------------------------
///    ----------

ly_gap = 2*mm;      // airgap

lx_foot = 60*mm;	// length of foot at the top
ly_foot = 60*mm;	// height
lz_foot = 30*mm;	// width

lx_core = 280*mm;	// length of core
ly_core = lx_foot;	// height
lz_core = lz_foot;	// width

lx_plate = lx_core+2*lx_foot;	// length of plate
ly_plate = 40*mm;				// height (thickness)
lz_plate = 4*lz_foot;			// width

lx_coil = 20*mm;		// length
ly_coil = ly_foot/2;	// height
lz_coil = lx_coil;		// width, must be equal to the width

//air
scale = 0.5 ;
lx_box = lx_plate/scale;							// length
ly_box = (ly_plate+ly_gap+ly_foot+ly_core)/scale;	// height
lz_box = ly_box;							// width

//--------------
xmin = 0; // minimum displacement
xmax = lx_core/2 ; //maximum displacement
//--------------

axl = -lx_box/2-xmax/2; //left of airbox
axr =  lx_box/2+xmax/2; //right of airbox
ayb = -ly_box/4; //bottom of airbox
ayt =  3*ly_box/4; //top of airbox
azb = -lz_box/2; //back of airbox
azf =  lz_box/2; //front of airbox

// For imposed movement..
// ----------------------------------------

time0 = 0 ;
Freq = 50 ;
T    = 1/Freq ;
nbrT = 1/10 ;
nbrSteps = nbrT * 100 ;
timeMax =  time0 + nbrT*T ;
dtime = (timeMax-time0)/nbrSteps ;

displacementY = 0 ;
displacementZ = 0 ;


DefineConstant[ Flag_StepByStep = {1, Choices {0,1}, Name "Flag_StepByStep"}] ;

DefineConstant[ step = {0, Min 0, Max nbrSteps, Step 1, Loop "1",
                        Name "Parameters/1Step"} ];
displacementX = - step * (xmax - xmin) / nbrSteps ;

timei = time0 + step*dtime ;


/// *) Physical entities ------------------------------------------------------
///    -----------------

AIR    = 9001;
PLATE  = 9002;
AIRGAP = 9003;

CORE      = 9004;
CORE_BOT  = 9005; // below the coil
CORE_COIL = 9006; // in the coil
CORE_TOP  = 9007; // "on top of the coil" = the rest of the core

COIL    = 9008;
COIL_R  = 9009; // right
COIL_BR = 9010; // back right
COIL_B  = 9011; // back
COIL_BL = 9012; // back left
COIL_L  = 9013; // left
COIL_FL = 9014; // front left
COIL_F  = 9015; // front
COIL_FR = 9016; // front rigth

CUT_COIL_BOT   = 9021; // cut surface at the bottom of the coil
CUT_COIL_TOP   = 9022; // cut surface at the top of the coil
SKIN_COIL      = 9023;
SKIN_CORE_COIL = 9024; // common surface between the core and the coil
SKIN_CIRCUIT   = 9025; // skin of the magnetic circuit (core + plate)

SKIN_CORE   = 9125; // skin of the magnetic circuit (core + plate)
SKIN_PLATE  = 9126; // skin of the magnetic circuit (core + plate)
AIR_INF     = 9026;

CUT_SYMMETRY = 10000;

// EOF
