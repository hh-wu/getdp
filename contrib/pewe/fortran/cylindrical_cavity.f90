! cylindrical_cavity This program computes particular solutions to
! the elastic wave equation in cylindrical geometries,
! see: https://bitbucket.org/appelo/pewe
!
! Copyright (C) 2015 Kristoffer Virta & Daniel Appelo
!
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


!  Modified by Steven Roman for inclusion in GetDP:
!   - bessel_jn -> bessjn (for old gfortran versions)
!   - 100 modes -> ns modes (depending on wavenumber)
!   - return real and imag part

subroutine cylindrical_cavity(du,dv,dut,dvt,X,Y,t,omega,lambda,mu,rho,a)

  implicit none
  double precision :: x,y,du,dv,dvt,dut,t
  double precision :: r,theta
  double precision :: lambda,mu,rho
  double precision :: cp,cs,omega,gamma,eta,a
  double precision :: phi_0,f_00,f_02,epsilon_0,epsilon_1,c01,c02
  double precision :: epsilon_n

  double precision :: f_10,f_11,f_12,f_13,f_14,f_15
  double complex   :: a_00,a_02,b_01,b_04,m11,m12,m21,m22,ab0(2),q
  double complex   :: a_10,a_11,a_12,a_13,a_14,a_15
  double complex   :: b_10,b_11,b_12,b_13,b_14,b_15
  double complex   :: c11,c12,ab1(2),v,cn1,cn2,abn(2)
  double complex   :: f_n0,f_n1,f_n2,f_n3,f_n4,f_n5
  double complex   :: a_n0,a_n1,a_n2,a_n3,a_n4,a_n5
  double complex   :: b_n0,b_n1,b_n2,b_n3,b_n4,b_n5

  integer :: n
  double precision , parameter :: pi = acos(-1.d0)

  integer :: ns
  
  double complex, external :: besselh

  ! Computes displacement field (du(x,y,t),dy(x,y,t))
  ! of incoming P waves, scattered P waves and scattered S waves at
  ! time t = 0. Solution at other times are given by
  ! du(x,y,t) = du(x,y,0)*exp(1i*omega*t),
  ! dv(x,y,t) = dv(x,y,0)*exp(1i*omega*t).

  ! Compute radius r and angle theta
  r = sqrt(X**2+Y**2)
  theta = atan2(Y,X)

  ! P and S wave speeds
  cp = sqrt((lambda+2.d0*mu)/rho)
  cs = sqrt(mu/rho)
  ! To satisfy elastic wave equation
  gamma = omega/cp
  eta   = omega/cs
  ! Radius of cylinder
  !a = 1.d0
  ! Amplitude of incomming wave
  phi_0 = 1.d0
  ! %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Series expansion of solution%%%%%%%%%%%
  ! disp('COMPUTING COEFICIENTS')
  n = 0
  f_00 = -gamma*besjn(1,gamma*a)
  f_02 = -gamma**2/2.d0*(besjn(0,gamma*a)-besjn(2,gamma*a))

  a_00 = -gamma*besselh(1,2,gamma*a)
  a_02 = -gamma**2/2.d0*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a))

  b_01 = eta*besselh(1,2,eta*a)
  b_04 = eta**2/2.d0*(besselh(0,2,eta*a)-besselh(2,2,eta*a))

  epsilon_0 = 1.d0
  m11 = (lambda+2.d0*mu)*a_02+lambda/a*a_00
  m12 = 0.d0
  m21 = 0.d0
  m22 = mu*(b_04-1.d0/a*b_01)

  c01 = -phi_0*epsilon_0*((lambda+2.d0*mu)*f_02+lambda/a*f_00)
  c02 = 0.d0

  AB0(1) = 1.d0/(m11*m22 - m12*m21)*(m22*c01-m12*c02)
  AB0(2) = 1.d0/(m11*m22 - m12*m21)*(-m21*c01+m11*c02)
  q = phi_0*epsilon_0*(-gamma)*besjn(1,gamma*r) &
       + AB0(1)*(-gamma)*(besselh(1,2,gamma*r))
  n = 1
  f_10 = gamma/2.d0*(besjn(0,gamma*a)-besjn(2,gamma*a))
  f_11 = -1.d0/a*besjn(1,gamma*a)
  f_12 = -gamma**2/2.d0*besjn(1,gamma*a)&
       -gamma**2/4.d0*(besjn(1,gamma*a)-besjn(3,gamma*a))
  f_13 = -gamma/2.d0*(besjn(0,gamma*a)-besjn(2,gamma*a))
  f_14 = -1.d0/a*gamma/2.d0*(besjn(0,gamma*a)-besjn(2,gamma*a)) &
       + 1.d0/a/a*besjn(1,gamma*a)
  f_15 = -1.d0/a*besjn(1,gamma*a)

  a_10 = gamma/2.d0*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a))
  a_11 = -1.d0/a*besselh(1,2,gamma*a)
  a_12 = -gamma**2/2.d0*besselh(1,2,gamma*a)&
       -gamma**2/4.d0*(besselh(1,2,gamma*a)-besselh(3,2,gamma*a))
  a_13 = -1.d0*gamma/2.d0*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a))
  a_14 = -1.d0/a*gamma/2.d0*(besselh(0,2,gamma*a)-besselh(2,2,gamma*a))&
       + 1.d0/a/a*besselh(1,2,gamma*a)
  a_15 = -1.d0/a*besselh(1,2,gamma*a)

  b_10 = 1.d0/a*besselh(1,2,eta*a)
  b_11 = -eta/2.d0*(besselh(0,2,eta*a)-besselh(2,2,eta*a))
  b_12 = 1.d0/a*eta/2*(besselh(0,2,eta*a)-besselh(2,2,eta*a))&
       -1.d0/a/a*besselh(1,2,eta*a)
  b_13 = -1.d0/a*besselh(1,2,eta*a)
  b_14 = -(-eta**2/2.d0*besselh(1,2,eta*a)-eta**2/4.d0*(besselh(1,2,eta*a)&
       -besselh(3,2,eta*a)))
  b_15 = -eta/2.d0*(besselh(0,2,eta*a)-besselh(2,2,eta*a))

  epsilon_1 = 2.d0
  m11 = (lambda+2.d0*mu)*a_12+lambda/a*(a_10+a_15)
  m12 = (lambda+2.d0*mu)*b_12+lambda/a*(b_10+b_15)
  m21 = mu*(1.d0/a*a_13+a_14-1.d0/a*a_11)
  m22 = mu*(1.d0/a*b_13+b_14-1.d0/a*b_11)

  c11 = -phi_0*epsilon_1*(0.d0,-1.d0)*((lambda+2.d0*mu)*f_12+lambda/a*(f_10+f_15))
  c12 = mu*(-phi_0*epsilon_1*(0.d0,-1.d0)*(1.d0/a*f_13+f_14-1.d0/a*f_11))

  AB1(1) = 1.d0/(m11*m22 - m12*m21)*(m22*c11-m12*c12)
  AB1(2) = 1.d0/(m11*m22 - m12*m21)*(-m21*c11+m11*c12)

  q = q + (phi_0*epsilon_1*(0.d0,-1.d0)*gamma/2.d0*(besjn(0,gamma*r)&
       -besjn(2,gamma*r)) + AB1(1)*gamma/2.d0*(besselh(0,2,gamma*r)&
       -besselh(2,2,gamma*r)) + AB1(2)*besselh(1,2,eta*r)/r)*cos(theta)


  v = (-phi_0*epsilon_1*(0.d0,-1.d0)*besjn(1,gamma*r)/r&
       - AB1(1)*besselh(1,2,gamma*r)/r &
       - AB1(2)*eta/2.d0*(besselh(0,2,eta*r)&
       -besselh(2,2,eta*r)))*sin(theta)

  ns = max(eta+30, gamma+30);

  do n = 2,ns
     f_n0 = gamma/2.d0*(besjn(n-1,gamma*a)-besjn(n+1,gamma*a))
     f_n1 = -dble(n)/a*besjn(n,gamma*a)
     f_n2 = gamma**2/4.d0*(besjn(n-2,gamma*a)&
          -2.d0*besjn(n,gamma*a)+besjn(n+2,gamma*a))
     f_n3 = -dble(n)*gamma/2.d0*(besjn(n-1,gamma*a)-besjn(n+1,gamma*a))
     f_n4 = -dble(n)/a*gamma/2.d0*(besjn(n-1,gamma*a)&
          -besjn(n+1,gamma*a)) + dble(n)/a/a*besjn(n,gamma*a)
     f_n5 = -dble(n)**2/a*besjn(n,gamma*a)

     a_n0 = gamma/2.d0*(besselh(n-1,2,gamma*a)-besselh(n+1,2,gamma*a))
     a_n1 = -dble(n)/a*besselh(n,2,gamma*a)
     a_n2 = gamma**2/4.d0*(besselh(n-2,2,gamma*a)&
          -2.d0*besselh(n,2,gamma*a)+besselh(n+2,2,gamma*a))
     a_n3 = -dble(n)*gamma/2.d0*(besselh(n-1,2,gamma*a)-besselh(n+1,2,gamma*a))
     a_n4 = -dble(n)/a*gamma/2*(besselh(n-1,2,gamma*a)&
          -besselh(n+1,2,gamma*a)) + dble(n)/a/a*besselh(n,2,gamma*a)
     a_n5 = -dble(n)**2/a*besselh(n,2,gamma*a)

     b_n0 = dble(n)/a*besselh(n,2,eta*a)
     b_n1 = -eta/2.d0*(besselh(n-1,2,eta*a)-besselh(n+1,2,eta*a))
     b_n2 = dble(n)/a*eta/2.d0*(besselh(n-1,2,eta*a)-besselh(n+1,2,eta*a))&
          -dble(n)/a/a*besselh(n,2,eta*a)
     b_n3 = -dble(n)**2/a*besselh(n,2,eta*a)
     b_n4 = -eta**2/4.d0*(besselh(n-2,2,eta*a) &
          -2.d0*besselh(n,2,eta*a)+besselh(n+2,2,eta*a))
     b_n5 = -dble(n)*eta/2.d0*(besselh(n-1,2,eta*a)-besselh(n+1,2,eta*a))

     epsilon_n = 2.d0
     m11 = (lambda+2*mu)*a_n2+lambda/a*(a_n0+a_n5)
     m12 = (lambda+2*mu)*b_n2+lambda/a*(b_n0+b_n5)
     m21 = mu*(1.d0/a*a_n3+a_n4-1.d0/a*a_n1)
     m22 = mu*(1.d0/a*b_n3+b_n4-1.d0/a*b_n1)

     cn1 = -phi_0*epsilon_n*(0.d0,-1.d0)**n*((lambda+2.d0*mu)&
          *f_n2+lambda/a*(f_n0+f_n5))
     cn2 = mu*(-phi_0)*epsilon_n*(0.d0,-1.d0)**n*(1.d0/a*f_n3+f_n4-1.d0/a*f_n1)

     ABn(1) = 1.d0/(m11*m22 - m12*m21)*(m22*cn1-m12*cn2)
     ABn(2) = 1.d0/(m11*m22 - m12*m21)*(-m21*cn1+m11*cn2)
     ! Make sure magnitude of coefficients are sufficiently small
     ! max(abs(ABn))
     q = q+(phi_0*epsilon_n*(0.d0,-1.d0)**n*gamma/2.d0*(besjn(n-1,gamma*r)&
          -besjn(n+1,gamma*r)) + ABn(1)*gamma/2.d0*(besselh(n-1,2,gamma*r)&
          -besselh(n+1,2,gamma*r)) &
          + ABn(2)*dble(n)*besselh(n,2,eta*r)/r)*cos(dble(n)*theta)
     v = v + (-dble(n)*phi_0*epsilon_n*(0.d0,-1.d0)**n*besjn(n,gamma*r)/r &
          - ABn(1)*dble(n)*besselh(n,2,gamma*r)/r &
          - ABn(2)*eta/2.d0*(besselh(n-1,2,eta*r)&
          -besselh(n+1,2,eta*r)))*sin(dble(n)*theta);

     ! if(maxval(abs(abn)) .lt. 1.0d-16) exit
     !if(maxval(abs(abn)) .lt. 1.0d-16) exit
  end do
  ! disp('DONE COMPUTING COEFICIENTS')
  du = dreal(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*q-sin(theta)*v))
  dv = dreal(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*q+cos(theta)*v))
  !dut = dreal(omega*(0.d0,1.d0)*exp(omega*(0.d0,1.d0)*t)*(cos(theta)*q-sin(theta)*v))
  !dvt = dreal(omega*(0.d0,1.d0)*exp(omega*(0.d0,1.d0)*t)*(sin(theta)*q+cos(theta)*v))
  ! for GetDP: return imaginary part in dut, dvt
  dut = dimag(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*q-sin(theta)*v))
  dvt = dimag(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*q+cos(theta)*v))

end subroutine cylindrical_cavity
