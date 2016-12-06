! surface_wave_convex This program computes particular solutions to
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

subroutine surface_wave_convex(du,dv,dut,dvt,X,Y,t,mu,c,bi)
  implicit none
  double precision :: x,y,du,dv,dvt,dut,t,mu,c,bi,lambda
  double precision :: r
  double complex   :: B,q1,q2,v1,v2,q,v
  integer, parameter  :: n = 6
  double precision , parameter :: pi = acos(-1.d0)
  double precision :: omega,rho,A,sigma,alpha,beta,ka,kb

  double complex, external :: besselh

  lambda = 1.d0
  A = 1.d0
  rho = 1.d0
  B = (0.d0,1.d0)*bi

  omega = dble(n)*c

  r = sqrt(X**2+Y**2)
  sigma = atan2(Y,X)
  alpha = sqrt((lambda+2.d0*mu)/rho)
  beta = sqrt(mu/rho)
  Ka = omega/alpha
  Kb = omega/beta

  q1 = A*Ka/2.d0*(bessel_jn(n-1,Ka*r)-bessel_jn(n+1,Ka*r))
  v2 = -B*Kb/2.d0*(bessel_jn(n-1,Kb*r)-bessel_jn(n+1,Kb*r))
  if (r.lt.1.d-12) then
     q2 = 0.d0*(0.d0,1.d0)
     v1 = 0.d0*(0.d0,1.d0)
  else
     q2 = B*(0.d0,1.d0)*(dble(n)/r)*bessel_jn(n,Kb*r)
     v1 = A*(0.d0,1.d0)*(dble(n)/r)*bessel_jn(n,Ka*r)
  end if
  Q = (q1+q2)
  V = (v1+v2)

  du = real((cos(sigma)*Q-sin(sigma)*V)*exp((0.d0,1.d0)*(omega*t+n*sigma)))
  dv = real((sin(sigma)*Q+cos(sigma)*V)*exp((0.d0,1.d0)*(omega*t+n*sigma)))

  dut = real(omega*(0.d0,1.d0)*(cos(sigma)*Q-sin(sigma)*V)*exp((0.d0,1.d0)*(omega*t+n*sigma)))
  dvt = real(omega*(0.d0,1.d0)*(sin(sigma)*Q+cos(sigma)*V)*exp((0.d0,1.d0)*(omega*t+n*sigma)))

end subroutine surface_wave_convex
