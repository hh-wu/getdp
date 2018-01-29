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
!


!  Modified by Vanessa Mattesi for inclusion in GetDP:
!
!  Exact solution for a cylindrical wall (zero displacement on the
!  boundary).

subroutine cylindrical_walloutabc(du,dv,dut,dvt,X,Y,t,omega,lambda,mu,rho,a,b)

  implicit none
  double precision :: x,y,du,dv,dvt,dut,t
  double precision :: r,theta
  double precision :: lambda,mu,rho
  double precision :: cp,cs,omega,kp,ks,a,b
  double precision :: phi_0,epsilon_n,C1

  double precision :: a0_n,a1_n
  double complex M(4,4)
  double complex Minv(4,4)
  double complex AB(4)
  double complex F(4)
  double complex   :: i,p,q,detinv
  double complex   :: C2
  double complex   :: C3
  integer :: n
  double precision , parameter :: pi = acos(-1.d0)

  ! for GetDP
  integer :: ns
 
  double complex, external :: besselh  !besselh(order n,kind 1 or 2,k*r) Hankel function of order n of the first or second kind of argument (kr)
  double complex, external :: dr_h     !dr_h(kind 1 or 2,k,r,n) derivative of the Hankel function of order n of the first or second kind of argument (kr)
  double complex, external :: dr2_h    !dr2_h(kind 1 or 2,k,r,n) second derivative of the Hankel function of order n of the first or second kind of argument (kr)
  double complex, external :: dr_j     !dr_j(k,r,n) derivative of the bessel function of first kind of order n of argument (kr)

  t=0
  i = (0.d0,1.d0)
  ! Compute radius r and angle theta
  r = sqrt(X**2+Y**2)
  theta = atan2(Y,X)
  C1 = lambda+2*mu


  ! P and S wave speeds
  cp = sqrt((lambda+2.d0*mu)/rho)
  cs = sqrt(mu/rho)
  ! To satisfy elastic wave equation
  kp = omega/cp
  ks = omega/cs

  ! Amplitude of incomming wave
  phi_0 = 1
  ns = 2*floor(omega);
  !-------------------------------
  ! Series expansion of solution -
  !-------------------------------
  ! initialisation of the radial and azimutal part of the solution
  p=0.d0
  q=0.d0
!$OMP PARALLEL DO PRIVATE(epsilon_n,n,M,Minv,detinv,AB,F) REDUCTION(+:p,q)
  do n = 0,ns
    If(n.eq.0) Then
      epsilon_n = 1.d0;
      elseIf (n>0) Then
      epsilon_n = 2.d0;
    Endif
    C2 = cmplx((lambda/b),-kp*(lambda+2*mu))
    C3 = cmplx((mu/b), ks*mu)
    M(1,1) = dr_h(1,kp,a,n)
    M(1,2) = dr_h(2,kp,a,n)
    M(1,3) = ( dble(n)/a) * besselh(int(n),1,ks*a)
    M(1,4) = ( dble(n)/a) * besselh(int(n),2,ks*a)

    M(2,1) = (-dble(n)/a)  * besselh(int(n),1,kp*a)
    M(2,2) = (-dble(n)/a)  * besselh(int(n),2,kp*a)
    M(2,3) = -dr_h(1,ks,a,n)
    M(2,4) = -dr_h(2,ks,a,n)

    M(3,1) = C1 * dr2_h(1,kp,b,int(n)) - (lambda*(n**2)/b**2) * besselh(int(n),1,kp*b)&
           + C2* dr_h(1,kp,b,n)    

    M(3,2) = C1* dr2_h(2,kp,b,int(n)) - (lambda*(n**2)/b**2) * besselh(int(n),2,kp*b)&
           + C2* dr_h(2,kp,b,n)

    M(3,3) = C1 * (-(dble(n)/b**2)*besselh(int(n),1,ks*b)+ (dble(n)/b)* dr_h(1,ks,b,int(n)) )&
           - (lambda*n)/(b) * dr_h(1,ks,b,int(n)) + C2*(dble(n)/b)*besselh(int(n),1,ks*b) 

    M(3,4) = C1 * (-(dble(n)/b**2)*besselh(int(n),2,ks*b)+ (dble(n)/b)* dr_h(2,ks,b,int(n)) )&
           - (lambda*n)/(b) * dr_h(2,ks,b,int(n)) + C2*(dble(n)/b)*besselh(int(n),2,ks*b)   

    M(4,1) = -mu*(-(dble(n)/b**2)*besselh(int(n),1,kp*b))&
           - 2*mu*(dble(n)/b)* dr_h(1,kp,b,int(n)) + C3 *(dble(n)/b)* besselh(int(n),1,kp*b)

    M(4,2) = -mu*(-(dble(n)/b**2)*besselh(int(n),2,kp*b))&
           - 2*mu*(dble(n)/b)* dr_h(2,kp,b,int(n)) + C3*(dble(n)/b)* besselh(int(n),2,kp*b)


    M(4,3) = -mu*((dble(n)/b)**2) * besselh(int(n),1,ks*b) - mu* dr2_h(1,ks,b,int(n))&
           + C3 * dr_h(1,ks,b,int(n))

    M(4,4) = -mu*((dble(n)/b)**2) * besselh(int(n),2,ks*b) - mu* dr2_h(2,ks,b,int(n))&
           + C3 * dr_h(2,ks,b,int(n))

    F(1) = -phi_0*epsilon_n * (0.d0,-1.d0)**n * dr_j(kp,a,int(n))
    F(2) = (dble(n)/a) * phi_0 * epsilon_n* (0.d0,-1.d0)**n *besjn(int(n),kp*a)

    F(3) = 0
    F(4) = 0

    ! Calculate the inverse determinant of the matrix
    detinv = &
      1/(M(1,1)*(M(2,2)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))+M(2,3)&
      *(M(3,4)*M(4,2)-M(3,2)*M(4,4))+M(2,4)*(M(3,2)*M(4,3)-M(3,3)*M(4,2)))&
       - M(1,2)*(M(2,1)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))+M(2,3)&
      *(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(2,4)*(M(3,1)*M(4,3)-M(3,3)*M(4,1)))&
       + M(1,3)*(M(2,1)*(M(3,2)*M(4,4)-M(3,4)*M(4,2))+M(2,2)&
      *(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(2,4)*(M(3,1)*M(4,2)-M(3,2)*M(4,1)))&
       - M(1,4)*(M(2,1)*(M(3,2)*M(4,3)-M(3,3)*M(4,2))+M(2,2)&
      *(M(3,3)*M(4,1)-M(3,1)*M(4,3))+M(2,3)*(M(3,1)*M(4,2)-M(3,2)*M(4,1))))

    ! Calculate the inverse of the matrix B=M^{-1}
    Minv(1,1) = detinv*(M(2,2)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))&
     +M(2,3)*(M(3,4)*M(4,2)-M(3,2)*M(4,4))+M(2,4)*(M(3,2)*M(4,3)-M(3,3)*M(4,2)))
    Minv(2,1) = detinv*(M(2,1)*(M(3,4)*M(4,3)-M(3,3)*M(4,4))&
     +M(2,3)*(M(3,1)*M(4,4)-M(3,4)*M(4,1))+M(2,4)*(M(3,3)*M(4,1)-M(3,1)*M(4,3)))
    Minv(3,1) = detinv*(M(2,1)*(M(3,2)*M(4,4)-M(3,4)*M(4,2))&
     +M(2,2)*(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(2,4)*(M(3,1)*M(4,2)-M(3,2)*M(4,1)))
    Minv(4,1) = detinv*(M(2,1)*(M(3,3)*M(4,2)-M(3,2)*M(4,3))&
     +M(2,2)*(M(3,1)*M(4,3)-M(3,3)*M(4,1))+M(2,3)*(M(3,2)*M(4,1)-M(3,1)*M(4,2)))
    Minv(1,2) = detinv*(M(1,2)*(M(3,4)*M(4,3)-M(3,3)*M(4,4))&
     +M(1,3)*(M(3,2)*M(4,4)-M(3,4)*M(4,2))+M(1,4)*(M(3,3)*M(4,2)-M(3,2)*M(4,3)))
    Minv(2,2) = detinv*(M(1,1)*(M(3,3)*M(4,4)-M(3,4)*M(4,3))&
     +M(1,3)*(M(3,4)*M(4,1)-M(3,1)*M(4,4))+M(1,4)*(M(3,1)*M(4,3)-M(3,3)*M(4,1)))
    Minv(3,2) = detinv*(M(1,1)*(M(3,4)*M(4,2)-M(3,2)*M(4,4))&
     +M(1,2)*(M(3,1)*M(4,4)-M(3,4)*M(4,1))+M(1,4)*(M(3,2)*M(4,1)-M(3,1)*M(4,2)))
    Minv(4,2) = detinv*(M(1,1)*(M(3,2)*M(4,3)-M(3,3)*M(4,2))&
     +M(1,2)*(M(3,3)*M(4,1)-M(3,1)*M(4,3))+M(1,3)*(M(3,1)*M(4,2)-M(3,2)*M(4,1)))
    Minv(1,3) = detinv*(M(1,2)*(M(2,3)*M(4,4)-M(2,4)*M(4,3))&
     +M(1,3)*(M(2,4)*M(4,2)-M(2,2)*M(4,4))+M(1,4)*(M(2,2)*M(4,3)-M(2,3)*M(4,2)))
    Minv(2,3) = detinv*(M(1,1)*(M(2,4)*M(4,3)-M(2,3)*M(4,4))&
     +M(1,3)*(M(2,1)*M(4,4)-M(2,4)*M(4,1))+M(1,4)*(M(2,3)*M(4,1)-M(2,1)*M(4,3)))
    Minv(3,3) = detinv*(M(1,1)*(M(2,2)*M(4,4)-M(2,4)*M(4,2))&
     +M(1,2)*(M(2,4)*M(4,1)-M(2,1)*M(4,4))+M(1,4)*(M(2,1)*M(4,2)-M(2,2)*M(4,1)))
    Minv(4,3) = detinv*(M(1,1)*(M(2,3)*M(4,2)-M(2,2)*M(4,3))&
     +M(1,2)*(M(2,1)*M(4,3)-M(2,3)*M(4,1))+M(1,3)*(M(2,2)*M(4,1)-M(2,1)*M(4,2)))
    Minv(1,4) = detinv*(M(1,2)*(M(2,4)*M(3,3)-M(2,3)*M(3,4))&
     +M(1,3)*(M(2,2)*M(3,4)-M(2,4)*M(3,2))+M(1,4)*(M(2,3)*M(3,2)-M(2,2)*M(3,3)))
    Minv(2,4) = detinv*(M(1,1)*(M(2,3)*M(3,4)-M(2,4)*M(3,3))&
     +M(1,3)*(M(2,4)*M(3,1)-M(2,1)*M(3,4))+M(1,4)*(M(2,1)*M(3,3)-M(2,3)*M(3,1)))
    Minv(3,4) = detinv*(M(1,1)*(M(2,4)*M(3,2)-M(2,2)*M(3,4))&
     +M(1,2)*(M(2,1)*M(3,4)-M(2,4)*M(3,1))+M(1,4)*(M(2,2)*M(3,1)-M(2,1)*M(3,2)))
    Minv(4,4) = detinv*(M(1,1)*(M(2,2)*M(3,3)-M(2,3)*M(3,2))&
     +M(1,2)*(M(2,3)*M(3,1)-M(2,1)*M(3,3))+M(1,3)*(M(2,1)*M(3,2)-M(2,2)*M(3,1)))

    ! Compute AB = M^{-1}F
    AB(1) = Minv(1,1)*F(1) + Minv(1,2)*F(2) + Minv(1,3)*F(3) + Minv(1,4)*F(4)
    AB(2) = Minv(2,1)*F(1) + Minv(2,2)*F(2) + Minv(2,3)*F(3) + Minv(2,4)*F(4)
    AB(3) = Minv(3,1)*F(1) + Minv(3,2)*F(2) + Minv(3,3)*F(3) + Minv(3,4)*F(4)
    AB(4) = Minv(4,1)*F(1) + Minv(4,2)*F(2) + Minv(4,3)*F(3) + Minv(4,4)*F(4)  

    ! Compute p and q
    p = p + (AB(1)*dr_h(1,kp,r,int(n)) + AB(2)*dr_h(2,kp,r,int(n))&
 + (dble(n)/r)*AB(3)*besselh(int(n),1,ks*r)&
      + (dble(n)/r)*AB(4)*besselh(int(n),2,ks*r) )*dcos(n*theta)

    q = q + (- (dble(n)/r)*AB(1)*besselh(int(n),1,kp*r)&
 - (dble(n)/r)*AB(2)*besselh(int(n),2,kp*r)&
      - AB(3)*dr_h(1,ks,r,int(n))- AB(4)*dr_h(2,ks,r,int(n)) )*dsin(n*theta)

  end do
!$OMP END PARALLEL DO

  ! disp('DONE COMPUTING COEFICIENTS')
  du = dreal(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
  dv = dreal(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))

  ! for GetDP: return imaginary part in dut, dvt
  dut = dimag(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
  dvt = dimag(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))

end subroutine cylindrical_walloutabc
