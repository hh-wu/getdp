WAVENUMBER = 2*Pi*15. ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
// LC = LAMBDA/N_LAMBDA;//0.005-0*1e-9;//2500;
LC = 0.005-1*1e-9;//2500;

Printf("LC: %g",LC);

// Geometry.Tolerance = 1e-12;

PRECOND_SWEEP = 1 ;
MAXIT = 100 ;
m = 1 ; // 'vertical'
n = 1 ; // 'horizontal'
TOL = 1.000000e-06 ;
Include "params_part2.geo";

PARTS = 5;
OPEN_ENDED = 1;

// nDomList = {3,5,2,5,1}; // number of domains in the different parts of the domain, starting from inner straight part
nDomList = {2,2,1,2,1}; // number of domains in the different parts of the domain, starting from inner straight part
// nDomList = {6,10,4,10,2}; // number of domains in the different parts of the domain, starting from inner straight part

D1 = .1; // inner straight part length
D2 = .08; // middle straight part length
D3 = .01; // outlet straight part length
d1 = .084 ; // cross-section
d2 = .11; // cross-section
R = 0.186 + d1/2.; // rotation radius
alpha = 35/360*2*Pi; // rotation angle
shiftX = 0;
shiftY = -( (R+d1)*(1-Cos[alpha]) + D2*Sin[alpha] + R*(1-Cos[alpha]) ) ;

PML = 1;
OSRC = 0;

nLayersTr = 2;
nLayersPml = 7;

lc = LC;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;


MshNameFull = "cobra_JINA1998.msh";

// // WAVENUMBER = 2*Pi*25. ;
// // LAMBDA = 2*Pi/WAVENUMBER ;
// // N_LAMBDA = 20.000000 ;
// // LC = 0.005;//LAMBDA/N_LAMBDA;//0.002;//2500;
// // PRECOND_SWEEP = 1 ;
// // MAXIT = 100 ;
// // m = 1 ; // 'vertical'
// // n = 1 ; // 'horizontal'
// // TOL = 1.000000e-06 ;

// // COMBINED_SWEEP = 0;

// // Include "params_part2.geo";


// // PARTS = 5; // 1-5 (just for testing; should be 5)


// // // nDomList = {3,5,2,5,1}; // number of domains in the different parts of the domain, starting from inner straight part
// // // nDomList = {6,10,5,10,1}; // number of domains in the different parts of the domain, starting from inner straight part
// // // nDomList = {12,20,10,20,2}; // number of domains in the different parts of the domain, starting from inner straight part
// // nDomList = {2,2,1,2,1}; // number of domains in the different parts of the domain, starting from inner straight part
// // // nDomList = {1,1,1,1,1}; // number of domains in the different parts of the domain, starting from inner straight part


// // D1 = .1; // inner straight part length
// // D2 = .08; // middle straight part length
// // D3 = .01; // outlet straight part length
// // d1 = .084 ; // cross-section
// // d2 = .11; // cross-section
// // R = 0.186 + d1/2.; // rotation radius
// // alpha = 35/360*2*Pi; // rotation angle
// // shiftX = 0;
// // shiftY = -( (R+d1)*(1-Cos[alpha]) + D2*Sin[alpha] + R*(1-Cos[alpha]) ) ;

// // PML = 1;
// // OSRC = 0;

// // nLayersTr = 0.;
// // nLayersPml = 5.;

// // lc = LC;

// // dTr = nLayersTr*lc;
// // dPml = nLayersPml*lc;
// // dBb = (nLayersPml+nLayersTr)*lc;
