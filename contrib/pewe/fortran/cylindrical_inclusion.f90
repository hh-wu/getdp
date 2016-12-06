! cylindrical_inclusion This program computes particular solutions to
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

subroutine cylindrical_inclusion(du,dv,dut,dvt,X,Y,t,omega,&
     lambda,mu,rho,lambda_p,mu_p,rho_p)
  implicit none
  double precision :: x,y,du,dv,dvt,dut,t
  double precision :: r,theta
  double precision :: lambda,mu,rho,lambda_p,mu_p,rho_p
  double precision :: cp,cs,cp_p,cs_p,omega,gamma,eta,a,eta_p,gamma_p
  double precision :: phi_0,f_00,f_02,epsilon_0,epsilon_1,c01,c02
  double precision :: epsilon_n
  double complex   :: mat(4,4),b(4),ff(4),f,abcd(4),q,p,q_p,p_p,work(16)
  integer :: n,info,ipiv(4)
  double precision , parameter :: pi = acos(-1.d0)
  double complex, external :: besselh
  double complex, external :: besselh_p
  double complex, external :: besselh_pp
  double complex, external :: besselj_p
  double complex, external :: besselj_pp

  ! Computes displacement field (du(x,y,t),dy(x,y,t))
  ! of incoming P waves, scattered P waves and scattered S waves at
  ! time t = 0. Solution at other times are given by
  ! du(x,y,t) = du(x,y,0)*exp(1i*omega*t),
  ! dv(x,y,t) = dv(x,y,0)*exp(1i*omega*t).

  ! Compute radius r and angle theta
  r = sqrt(X**2+Y**2)
  theta = atan2(Y,X)

  if (r .le. 1d-13) then
     r = 1.d-13
  end if
  ! Lame parameters and density
  ! P and S wave speeds
  cp = sqrt((lambda+2.d0*mu)/rho)
  cs = sqrt(mu/rho)
  ! Lame parameters and density
  ! P and S wave speeds
  cp_p = sqrt((lambda_p+2.d0*mu_p)/rho_p)
  cs_p = sqrt(mu_p/rho_p)
  ! Temporal frequency
  omega = 4.d0*pi
  !omega = 1.d0*pi

  ! To satisfy elastic wave equation
  gamma = omega/cp
  eta   = omega/cs
  gamma_p = omega/cp_p
  eta_p = omega/cs_p

  ! Radius of cylinder
  a = 1.d0
  ! Amplitude of incomming wave
  phi_0 = 1.d0

  ff(1) = -gamma*bessel_jn(1,gamma*a)
  ff(2) = 0.d0
  ff(3) = (lambda+2.d0*mu)*(-gamma**2/2.d0*(bessel_jn(0,gamma*a)&
       -bessel_jn(2,gamma*a))) &
       + lambda*(1.d0/a*(-gamma*bessel_jn(1,gamma*a)))
  ff(4) = 0.d0

  mat(1,1) = -gamma*besselh(1,2,gamma*a)
  mat(2,1) = 0.d0
  mat(3,1) = (lambda+2.d0*mu)*(-gamma**2/2.d0*(besselh(0,2,gamma*a)&
       -besselh(2,2,gamma*a))) &
       + lambda*(1.d0/a*(-gamma*besselh(1,2,gamma*a)))
  mat(4,1) = 0.d0

  mat(1,2) = 0.d0
  mat(2,2) = eta*besselh(1,2,eta*a)
  mat(3,2) = 0.d0
  mat(4,2) = mu*(1.d0/a*(-eta)*besselh(1,2,eta*a) &
       + eta**2/2.d0*(besselh(0,2,eta*a)-besselh(2,2,eta*a)))

  mat(1,3) = gamma_p*bessel_jn(1,gamma_p*a)
  mat(2,3) = 0.d0
  mat(3,3) = -(lambda_p+2.d0*mu_p)*(&
       -gamma_p**2/2.d0*(bessel_jn(0,gamma_p*a)&
       -bessel_jn(2,gamma_p*a)))&
       -lambda_p*(1.d0/a*(-gamma_p*bessel_jn(1,gamma_p*a)))
  mat(4,3) = 0.d0

  mat(1,4) = 0.d0
  mat(2,4) = -eta_p*bessel_jn(1,eta_p*a)
  mat(3,4) = 0.d0
  mat(4,4) = -mu_p*(1.d0/a*(-eta_p)*bessel_jn(1,eta_p*a) &
       + eta_p**2/2.d0*(bessel_jn(0,eta_p*a) - bessel_jn(2,eta_p*a)))

  epsilon_n = 1.d0
  F = phi_0*(0.d0,-1.d0)**0*epsilon_n
  b = -F*ff
  call zgesv(4, 1, mat, 4, ipiv, B, 4, INFO)
  ABCD = b
  if( r.gt. 1.d0) then
     p = F*(-gamma)*bessel_jn(1,gamma*r) &
          + ABCD(1)*(-gamma)*(besselh(1,2,gamma*r))
     q = 0.d0
  else
     p_p = ABCD(3)*(-gamma_p)*bessel_jn(1,gamma_p*r)
     q_p = 0.d0
  end if

  n = 1
  ff(1) = besselj_p(n,gamma,gamma*a)
  ff(2) = -dble(n)/a*bessel_jn(n,gamma*a)
  ff(3) = (lambda+2.d0*mu)*besselj_pp(n,gamma,gamma*a)&
       +lambda*(1.d0/a*besselj_p(n,gamma,gamma*a)&
       -(dble(n)/a)**2*bessel_jn(n,gamma*a))
  ff(4) = 2.d0*mu*(dble(n)/a**2*bessel_jn(n,gamma*a)&
       -dble(n)/a*besselj_p(n,gamma,gamma*a))

  mat(1,1) = besselh_p(n,gamma,gamma*a)
  mat(2,1) = -dble(n)/a*besselh(n,2,gamma*a)
  mat(3,1) = (lambda+2.d0*mu)*besselh_pp(n,gamma,gamma*a)&
       +lambda*(1.d0/a*besselh_p(n,gamma,gamma*a)&
       -(dble(n)/a)**2*besselh(n,2,gamma*a))
  mat(4,1) = 2.d0*mu*(dble(n)/a**2*besselh(n,2,gamma*a)&
       -dble(n)/a*besselh_p(n,gamma,gamma*a))

  mat(1,2) = dble(n)/a*besselh(n,2,eta*a)
  mat(2,2) = -besselh_p(n,eta,eta*a)
  mat(3,2) = (lambda+2.d0*mu)*(dble(n)/a*besselh_p(n,eta,eta*a)&
       -dble(n)/a**2*besselh(n,2,eta*a))&
       +lambda*(dble(n)/a**2*besselh(n,2,eta*a)&
       -dble(n)/a*besselh_p(n,eta,eta*a))
  mat(4,2) = mu*(1.d0/a*besselh_p(n,eta,eta*a)&
       -besselh_pp(n,eta,eta*a)-dble(n)**2/a*besselh(n,2,eta*a))

  mat(1,3) = -besselj_p(n,gamma_p,gamma_p*a)
  mat(2,3) = dble(n)/a*bessel_jn(n,gamma_p*a)
  mat(3,3) = -(lambda_p+2.d0*mu_p)*besselj_pp(n,gamma_p,gamma_p*a)&
       -lambda_p*(1.d0/a*besselj_p(n,gamma_p,gamma_p*a)&
       -(dble(n)/a)**2*bessel_jn(n,gamma_p*a))
  mat(4,3) = -2.d0*mu_p*(dble(n)/a**2*bessel_jn(n,gamma_p*a)&
       -dble(n)/a*besselj_p(n,gamma_p,gamma_p*a))

  mat(1,4) = -dble(n)/a*bessel_jn(n,eta_p*a)
  mat(2,4) = besselj_p(n,eta_p,eta_p*a)
  mat(3,4) = -(lambda_p+2.d0*mu_p)*(dble(n)/a*besselj_p(n,eta_p,eta_p*a)&
       -dble(n)/a**2*bessel_jn(n,eta_p*a))&
       -lambda_p*(dble(n)/a**2*bessel_jn(n,eta_p*a)&
       -dble(n)/a*besselj_p(n,eta_p,eta_p*a))
  mat(4,4) = -mu_p*(1.d0/a*besselj_p(n,eta_p,eta_p*a)&
       -besselj_pp(n,eta_p,eta_p*a)-dble(n)**2/a*bessel_jn(n,eta_p*a))


  epsilon_n = 2
  F = phi_0*(0.d0,-1.d0)**n*dble(epsilon_n)

  b = -F*ff

  call zgesv(4, 1, mat, 4, ipiv, B, 4, INFO)
  ABCD = b
  if( r.gt. 1.d0) then
     p = p + (F*besselj_p(n,gamma,gamma*r) &
          + ABCD(1)*besselh_p(n,gamma,gamma*r) &
          + ABCD(2)*dble(n)/r*besselh(n,2,eta*r))*cos(dble(n)*theta)
     q = q + (-F*dble(n)/r*bessel_jn(n,gamma*r) &
          - dble(n)/r*ABCD(1)*besselh(n,2,gamma*r) &
          - ABCD(2)*besselh_p(n,eta,eta*r))*sin(dble(n)*theta)
  else
     p_p = p_p + (ABCD(3)*besselj_p(n,gamma_p,gamma_p*r) &
          + ABCD(4)*dble(n)/(r)*bessel_jn(n,eta_p*r))*cos(dble(n)*theta)
     q_p = q_p + (-dble(n)/(r)*ABCD(3)*bessel_jn(n,gamma_p*r) &
          - ABCD(4)*besselj_p(n,eta_p,eta_p*r))*sin(dble(n)*theta)
  end if
  do n = 2,24

     ff(1) = besselj_p(n,gamma,gamma*a)
     ff(2) = -dble(n)/a*bessel_jn(n,gamma*a)
     ff(3) = (lambda+2.d0*mu)*besselj_pp(n,gamma,gamma*a)&
          +lambda*(1.d0/a*besselj_p(n,gamma,gamma*a)&
          -(dble(n)/a)**2*bessel_jn(n,gamma*a))
     ff(4) = 2.d0*mu*(dble(n)/a**2*bessel_jn(n,gamma*a)&
          -dble(n)/a*besselj_p(n,gamma,gamma*a))

     mat(1,1) = besselh_p(n,gamma,gamma*a)
     mat(2,1) = -dble(n)/a*besselh(n,2,gamma*a)
     mat(3,1) = (lambda+2.d0*mu)*besselh_pp(n,gamma,gamma*a)&
          +lambda*(1.d0/a*besselh_p(n,gamma,gamma*a)&
          -(dble(n)/a)**2*besselh(n,2,gamma*a))
     mat(4,1) = 2.d0*mu*(dble(n)/a**2*besselh(n,2,gamma*a)&
          -dble(n)/a*besselh_p(n,gamma,gamma*a))

     mat(1,2) = dble(n)/a*besselh(n,2,eta*a)
     mat(2,2) = -besselh_p(n,eta,eta*a)
     mat(3,2) = (lambda+2.d0*mu)*(dble(n)/a*besselh_p(n,eta,eta*a)&
          -dble(n)/a**2*besselh(n,2,eta*a))&
          +lambda*(dble(n)/a**2*besselh(n,2,eta*a)&
          -dble(n)/a*besselh_p(n,eta,eta*a))
     mat(4,2) = mu*(1.d0/a*besselh_p(n,eta,eta*a)&
          -besselh_pp(n,eta,eta*a)&
          -dble(n)**2/a*besselh(n,2,eta*a))

     mat(1,3) = -besselj_p(n,gamma_p,gamma_p*a)
     mat(2,3) = dble(n)/a*bessel_jn(n,gamma_p*a)
     mat(3,3) = -(lambda_p+2.d0*mu_p)*besselj_pp(n,gamma_p,gamma_p*a)&
          -lambda_p*(1.d0/a*besselj_p(n,gamma_p,gamma_p*a)&
          -(dble(n)/a)**2*bessel_jn(n,gamma_p*a))
     mat(4,3) = -2.d0*mu_p*(dble(n)/a**2*bessel_jn(n,gamma_p*a)&
          -dble(n)/a*besselj_p(n,gamma_p,gamma_p*a))

     mat(1,4) = -dble(n)/a*bessel_jn(n,eta_p*a)
     mat(2,4) = besselj_p(n,eta_p,eta_p*a)
     mat(3,4) = -(lambda_p+2.d0*mu_p)*(dble(n)/a*besselj_p(n,eta_p,eta_p*a)&
          -dble(n)/a**2*bessel_jn(n,eta_p*a))&
          -lambda_p*(dble(n)/a**2*bessel_jn(n,eta_p*a)&
          -dble(n)/a*besselj_p(n,eta_p,eta_p*a))
     mat(4,4) = -mu_p*(1.d0/a*besselj_p(n,eta_p,eta_p*a)&
          -besselj_pp(n,eta_p,eta_p*a)&
          -dble(n)**2/a*bessel_jn(n,eta_p*a))

     epsilon_n = 2.d0
     F = phi_0*(0.d0,-1.d0)**n*epsilon_n

     b = -F*ff
     call zgesv(4, 1, mat, 4, ipiv, B, 4, INFO)
     if( info.ne. 0) write(*,*),n,info
     ABCD = b
     if( r.gt. 1.d0) then
        p = p + (F*besselj_p(n,gamma,gamma*r) &
             + ABCD(1)*besselh_p(n,gamma,gamma*r) &
             + ABCD(2)*dble(n)/r*besselh(n,2,eta*r))*cos(dble(n)*theta)
        q = q + (-F*dble(n)/r*bessel_jn(n,gamma*r) &
             - dble(n)/r*ABCD(1)*besselh(n,2,gamma*r) &
             - ABCD(2)*besselh_p(n,eta,eta*r))*sin(dble(n)*theta)
     else
        p_p = p_p + (ABCD(3)*besselj_p(n,gamma_p,gamma_p*r) &
             + ABCD(4)*dble(n)/(r)*bessel_jn(n,eta_p*r))*cos(n*theta)
        q_p = q_p + (-dble(n)/(r)*ABCD(3)*bessel_jn(n,gamma_p*r) &
             - ABCD(4)*besselj_p(n,eta_p,eta_p*r))*sin(n*theta)
     end if
  end do

  ! du = (cos(theta).*p-sin(theta).*q)
  ! dv = (sin(theta).*p+cos(theta).*q)
  ! du_p = (cos(theta).*p_p-sin(theta).*q_p)
  ! dv_p = (sin(theta).*p_p+cos(theta).*q_p)

  if( r.gt. 1.d0) then
     du = real(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
     dv = real(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))
     dut = real(omega*(0.d0,1.d0)*exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
     dvt = real(omega*(0.d0,1.d0)*exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))
  else
     du = real(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p_p-sin(theta)*q_p))
     dv = real(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p_p+cos(theta)*q_p))
     dut = real(omega*(0.d0,1.d0)*exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p_p-sin(theta)*q_p))
     dvt = real(omega*(0.d0,1.d0)*exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p_p+cos(theta)*q_p))
  end if

end subroutine cylindrical_inclusion
