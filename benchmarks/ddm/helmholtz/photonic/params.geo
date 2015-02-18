Include "params.pro";

DEBUG=0;

ni = 1e7 ;
//// n = -3.3285e5*lambda0+3.5031

// number of cells
nyp = 3 ;
nym = 4 ;
nx = 6 ; // 2*nx-1 wires

nempty = 0;

// Elemnetary cell
// pitch
dx = 44.5E-3 ;
dy = 44.5E-3 ;
dmin = dx < dy ? dx : dy ;
// radius
r = 7E-3 ;

// distance from elem cell to abc
delta = - 5*r ;
// delta = - 5*LAMBDA ;

// mesh size
lc = LC ;
If(DEBUG)
  Printf("lc = %f",lc);
EndIf

// length of the wires
valz = 20 * r ;

Lx = (nx-0.5)*dx ;
