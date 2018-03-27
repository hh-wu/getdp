! cylindrical_cavity This program computes particular solutions to
! the elastic wave equation in cylindrical geometries,
! see: https://bitbucket.org/appelo/pewe
!
! Copyright (C) 2015 Kristoffer Virta & Daniel Appelo
!
!  This program is free software: you can redistribute it and/or modify
!  it under the terms of the GNU General Public License as published by
!  the Free Software Foundation, either version 3 of the License, or
!  (at your option) any later version.
!
!  This program is distributed in the hope that it will be useful,
!  but WITHOUT ANY WARRANTY; without even the implied warranty of
!  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
!  GNU General Public License for more details.
!
!  You should have received a copy of the GNU General Public License
!  along with this program.  If not, see <http://www.gnu.org/licenses/>.
!
!  Modified by Vanessa Mattesi for inclusion in GetDP:
!
!  Exact solution for a cylindrical wall (zero displacement on the
!  boundary) and with a shear incident wave for elasticity 2D.

subroutine cylindrical_wallsout(du,dv,dut,dvt,X,Y,t,omega,lambda,mu,rho,a)

  implicit none
  double precision :: x,y,du,dv,dvt,dut,t
  double precision :: r,theta
  double precision :: lambda,mu,rho
  double precision :: cp,cs,omega,kp,ks,a
  double precision :: psi_0,epsilon_n
  double complex   :: dr_j_p,dr_h_p,dr_h_s,dr_hr_p,dr_hr_s
  double complex   :: m11,m12,m21,m22,An,Bn,f_1,f_2
  double complex   :: p,q
  integer :: n,ns
  double precision , parameter :: pi = 4d0*datan(1d0)
  
  double complex, external :: besselh  !besselh(order n,kind 1 or 2,k*r) Hankel function of order n of the first or second kind of argument (kr)
  double complex, external :: dr_h     !dr_h(kind 1 or 2,k,r,n) derivative of the Hankel function of order n of the first or second kind of argument (kr)
  double complex, external :: dr_j     !dr_j(k,r,n) derivative of the bessel function of first kind of order n of argument (kr)

  ! Compute radius r and angle theta
  r = sqrt(X**2+Y**2);
  theta = atan2(Y,X);
  ! P and S wave speeds
  cp = sqrt((lambda+2.d0*mu)/rho);
  cs = sqrt(mu/rho);
  ! To satisfy elastic wave equation
  kp = omega/cp;
  ks = omega/cs;
  ! Amplitude of incomming wave
  psi_0 = 1.d0;
  ! size of the series
  ns = 2*FLOOR(omega);
  !-------------------------------
  ! Series expansion of solution -
  !-------------------------------
  ! initialisation of the radial and azimutal part of the solution
  p=0.d0;
  q=0.d0;
!$OMP PARALLEL DO PRIVATE(n,f_1,f_2,epsilon_n,m11,m12,m21,m22,An,Bn) REDUCTION(+:p,q)
  do n = 0,ns
    If (n==0) then 
      epsilon_n=1.d0; 
    else if (n>0) then 
      epsilon_n=2.d0;
    endIf

    m11 = dr_h(1,kp,a,n);
    m12 =-(dble(n)/a)*besselh(n,1,ks*a);
    m21 = (dble(n)/a)*besselh(n,1,kp*a);
    m22 =-dr_h(1,ks,a,n);

    f_1 = psi_0*epsilon_n*((0.d0,-1.d0)**n) *(dble(n)/a)*besjn(n,ks*a);
    f_2 = psi_0*epsilon_n*((0.d0,-1.d0)**n) *dr_j(ks,a,n);

    An = 1.d0/(m11*m22 - m12*m21)*( m22*f_1-m12*f_2);
    Bn = 1.d0/(m11*m22 - m12*m21)*(-m21*f_1+m11*f_2);  

    p = p+ ( An*dr_h(1,kp,r,n) - Bn*(dble(n)/r)*besselh(n,1,ks*r) ) *sin(n*theta);
    q = q+ ( An*(dble(n)/r)*besselh(n,1,kp*r) - Bn*dr_h(1,ks,r,n) ) *cos(n*theta);

  end do
!$OMP END PARALLEL DO
  ! return real part in du,dv
  du = dreal(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
  dv = dreal(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))
  ! return imaginary part in dut, dvt
  dut = dimag(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
  dvt = dimag(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))

end subroutine cylindrical_wallsout
