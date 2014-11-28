WAVENUMBER = 2*Pi*25. ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = 0.0025;//2500;
PRECOND_SWEEP = 1 ;
MAXIT = 100 ;
m = 1 ; // 'vertical'
n = 1 ; // 'horizontal'
TOL = 1.000000e-06 ;

COMBINED_SWEEP = 0;

Include "params_part2.geo";


PARTS = 5; // 1-5 (just for testing; should be 5)


nDomList = {3,5,2,5,1}; // number of domains in the different parts of the domain, starting from inner straight part
// nDomList = {6,10,5,10,1}; // number of domains in the different parts of the domain, starting from inner straight part
// nDomList = {2,2,1,2,1}; // number of domains in the different parts of the domain, starting from inner straight part
// nDomList = {1,1,1,1,1}; // number of domains in the different parts of the domain, starting from inner straight part


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
nLayersPml = 3;

lc = LC;

dTr = nLayersTr*lc;
dPml = nLayersPml*lc;
dBb = (nLayersPml+nLayersTr)*lc;
