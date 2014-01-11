WAVENUMBER = 5*Pi*10. ;
LAMBDA = 2*Pi/WAVENUMBER ;
N_LAMBDA = 20.000000 ;
LC = 0.0025;//2500;
PRECOND_SWEEP = 1 ;
MAXIT = 300 ;
m = 2 ; // 'vertical'
n = 2 ; // 'horizontal'
TOL = 1.000000e-04 ;
Include "params_part2.geo";

nDomList = {3,5,2,5,1}; // number of domains in the different parts of the domain, starting from inner straigt part
// nDomList = {6,10,4,10,2}; // number of domains in the different parts of the domain, starting from inner straigt part

D1 = .1; // inner straight part length
D2 = .08; // middle straight part length
D3 = .01; // outlet straight part length
d1 = .084 ; // cross-section
d2 = .11; // cross-section
R = 0.186 + d1/2.; // rotation radius
alpha = 35/360*2*Pi; // rotation angle
shiftX = 0;
shiftY = -( (R+d1)*(1-Cos[alpha]) + D2*Sin[alpha] + R*(1-Cos[alpha]) ) ;
