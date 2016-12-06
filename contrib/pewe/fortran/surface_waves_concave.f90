! surface_waves_concave This program computes particular solutions to
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


subroutine surface_waves_concave(du,dv,dut,dvt,X,Y,t,nmode,c,B)
  !
  implicit none
  integer :: nmode
  double precision :: x,y,du,dv,dvt,dut,t
  double precision :: r
  double complex   :: B,q1,q2,v1,v2,q,v,c,ka,kb,omega
  double precision , parameter :: pi = acos(-1.d0)
  double precision :: A,sigma,alpha,beta,lambda,mu,rho

  integer, parameter  :: n = 10
  integer :: nm,np
  double precision :: ZR, ZI, FNU
  double precision :: CYRP(n), CYRM(n),cyr(n),CYI(n)
  integer  :: KODE, M, NZ, IERR

  r = dsqrt(X**2+Y**2)
  sigma = atan2(Y,X)
  rho    = 1.d0
  lambda = 1.d0
  mu     = 1.d0
  omega = dble(nmode)*c
  alpha = dsqrt((lambda+2.d0*mu)/rho)
  beta = dsqrt(mu/rho)
  Ka = omega/alpha
  Kb = omega/beta
  A = 1.d0

  FNU = 0.d0
  KODE = 1
  M = 2
  nm = nmode-1
  np = nmode+1

  ZR = dreal(Ka*r)
  ZI = dimag(Ka*r)

  call ZBESH(ZR, ZI, FNU, KODE, M, n, CYR, CYI, NZ, IERR)
  q1 = A*Ka/2.d0*(dcmplx(cyr(nm+1),cyi(nm+1))-dcmplx(cyr(np+1),cyi(np+1)))
  v1 = A*(0.d0,1.d0)*(dble(nmode)/r)*dcmplx(cyr(nmode+1),cyi(nmode+1))
  ZR = dreal(Kb*r)
  ZI = dimag(Kb*r)
  call ZBESH(ZR, ZI, FNU, KODE, M, n, CYR, CYI, NZ, IERR)
  q2 = B*(0.d0,1.d0)*(dble(nmode)/r)*dcmplx(cyr(nmode+1),cyi(nmode+1))
  v2 = -B*Kb/2.d0*(dcmplx(cyr(nm+1),cyi(nm+1))-dcmplx(cyr(np+1),cyi(np+1)))

  Q = (q1+q2)
  V = (v1+v2)
  du = dreal((cos(sigma)*Q-sin(sigma)*V)*zexp((0.d0,1.d0)*(omega*t+dble(nmode)*sigma)))
  dv = dreal((sin(sigma)*Q+cos(sigma)*V)*zexp((0.d0,1.d0)*(omega*t+dble(nmode)*sigma)))

  dut = real(omega*(0.d0,1.d0)*(cos(sigma)*Q-sin(sigma)*V)*&
       exp((0.d0,1.d0)*(omega*t+dble(nmode)*sigma)))
  dvt = real(omega*(0.d0,1.d0)*(sin(sigma)*Q+cos(sigma)*V)*&
       exp((0.d0,1.d0)*(omega*t+dble(nmode)*sigma)))

end subroutine surface_waves_concave
