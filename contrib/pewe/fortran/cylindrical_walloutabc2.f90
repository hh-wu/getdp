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

subroutine cylindrical_walloutabc2(du,dv,dut,dvt,X,Y,t,omega,lambda,mu,rho,a,b)

  implicit none
  double precision :: x,y,du,dv,dvt,dut,t
  double precision :: r,theta
  double precision :: lambda,mu,rho
  double precision :: cp,cs,omega,kp,ks,a,b
  double precision :: phi_0,epsilon_0,epsilon_1

  double precision :: a0_n,a1_n
  double complex M(4,4)
  double complex Minv(4,4)
  double complex AB(4)
  double complex F(4)
  double complex   :: i,p,q,detinv,kpeps,kseps,xip,xis,det

  integer :: n
  double precision , parameter :: pi = acos(-1.d0)

  ! for GetDP
  integer :: ns
 
  double complex, external :: besselh
  t=0
  i = (0.d0,1.d0)
  ! Compute radius r and angle theta
  r = sqrt(X**2+Y**2)
  theta = atan2(Y,X)

  ! P and S wave speeds
  cp = sqrt((lambda+2.d0*mu)/rho)
  cs = sqrt(mu/rho)
  ! To satisfy elastic wave equation
  kp = omega/cp
  ks = omega/cs

  kpeps = kp + i* 0.4*(1.0d0/b)**(2.0d0/3) * kp**(1.0d0/3);
  kseps = ks + i* 0.4*(1.0d0/b)**(2.0d0/3) * ks**(1.0d0/3);

  ! Amplitude of incomming wave
  phi_0 = 1
  ! %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%Series expansion of solution%%%%%%%%%%%
  n = 0
  epsilon_0 = 1

  F(1) = phi_0*epsilon_0*kp*besjn(1,kp*a)
  F(2) = 0

  M(1,1) = -kp*besselh(1,1,kp*a)
  M(1,2) = -kp*besselh(1,2,kp*a)
  M(2,1) = -(lambda+2*mu) * ((kp**2)/2.0d0) * (besselh(0,1,kp*b) - besselh(2,1,kp*b) )&
         - ((lambda/dble(b)) - i*kp*(lambda+2*mu))*kp*besselh(1,1,kp*b)
  M(2,2) = -(lambda+2*mu) * ((kp**2)/2.0d0) * (besselh(0,2,kp*b) - besselh(2,2,kp*b) )&
         - ( (lambda/dble(b)) - i*kp*(lambda+2*mu))*kp*besselh(1,2,kp*b) 

  AB(1) = 1.0d0/(M(1,1)*M(2,2) - M(1,2)*M(2,1))*( M(2,2)*F(1)-M(1,2)*F(2))
  AB(2) = 1.0d0/(M(1,1)*M(2,2) - M(1,2)*M(2,1))*(-M(2,1)*F(1)+M(1,1)*F(2))

  p = -kp*AB(1)*besselh(1,1,kp*r) - kp*AB(2)*besselh(1,2,kp*r)

  q=0
  epsilon_1 = 2.0d0
  ! for GetDP
  ns = 55;

  do n = 1,1

    a0_n = 0
    a1_n = 3

    xip = (1.0d0/kp) * ( 1.0d0/(sqrt(1-(dble(n)**2/((kpeps**2)* b**2 )) ) ));
    xis = (1.0d0/ks) * ( 1.0d0/(sqrt(1-(dble(n)**2/((kseps**2)* b**2 )) ) ));

    det = 1 + ((dble(n)**2)/(b**2)) * xip * xis ;

    M(1,1) = (kp/2.d0) * ( besselh(n-1,1,kp*a)-besselh(n+1,1,kp*a) )
    M(1,2) = (kp/2.d0) * ( besselh(n-1,2,kp*a)-besselh(n+1,2,kp*a) )
    M(1,3) = ( dble(n)/a) * besselh(int(n),1,ks*a)
    M(1,4) = ( dble(n)/a) * besselh(int(n),2,ks*a)

    M(2,1) = (-dble(n)/a)  * besselh(int(n),1,kp*a)
    M(2,2) = (-dble(n)/a)  * besselh(int(n),2,kp*a)
    M(2,3) = (-ks/2.d0) * ( besselh(n-1,1,ks*a)-besselh(n+1,1,ks*a) )
    M(2,4) = (-ks/2.d0) * ( besselh(n-1,2,ks*a)-besselh(n+1,2,ks*a) )

    M(3,1) = (lambda + 2*mu) * ((kp**2)/4.d0) * (- a1_n*besselh(int(n),1,kp*b)+besselh(n+2,1,kp*b))&
           + (lambda-((rho*xip*xis*omega**2)/ det) + 2*mu)&
           *(-dble(n)**2)/(b**2) * besselh(int(n),1,kp*b)&
           + (lambda/dble(b))-( (i*rho*xip*omega**2)/det )&
           *(kp/2.d0)*(besselh(n-1,1,kp*b)-besselh(n+1,1,kp*b))
    M(3,2) = (lambda + 2*mu) * ((kp**2)/4.d0) * (- a1_n*besselh(int(n),2,kp*b)+besselh(n+2,2,kp*b))&
           + (lambda-((rho*xip*xis*omega**2)/(det)) + 2*mu)&
           *(-dble(n)**2)/(b**2) * besselh(int(n),2,kp*b)&
           + (lambda/dble(b))-( (i*rho*xip*omega**2)/det )&
           *(kp/2.d0)*(besselh(n-1,2,kp*b)-besselh(n+1,2,kp*b))
    M(3,3) = (rho*xip*xis*omega**2/det)*(dble(n)*ks/(2*b))&
             *( besselh(n-1, 1 ,ks*b) - besselh(n+1,1,ks*b) )&
           + (-2*mu/dble(b) -(i*rho*xip*omega**2)/(det) )*(dble(n)/b)*besselh(int(n),1,ks*b)

    M(3,4) = (rho*xip*xis*omega**2/det)*(dble(n)*ks/(2*b))*(besselh(n-1,2,ks*b)-besselh(n+1,2,ks*b))&
            + (-2*mu/dble(b) -(i*rho*xip*omega**2)/(det) )*(dble(n)/b)*besselh(int(n),2,ks*b)



    M(4,1) = (-(rho*xip*xis*omega**2)/det ) * (dble(n)*kp)/(2*b) * (besselh(n-1,1,kp*b) - besselh(n+1,1,kp*b))&
           + ((2*mu/dble(b)) + (i*rho*xis*omega**2)/det ) * (dble(n)/b) * besselh(int(n),1,kp*b)

    M(4,2) = (-(rho*xip*xis*omega**2)/det ) * (dble(n)*kp)/(2*b) * (besselh(n-1,2,kp*b) - besselh(n+1,2,kp*b))&
           + ((2*mu/dble(b)) + (i*rho*xis*omega**2)/det ) * (dble(n)/b) * besselh(int(n),2,kp*b)

    M(4,3) = -mu*(ks**2/4.0d0) * (-a1_n*besselh(int(n),1,ks*b)+besselh(n+2,1,ks*b))&
           + (mu - (rho*xip*xis*omega**2)/det) * (dble(n)**2/b**2) * besselh(int(n),1,ks*b)&
           + ((mu/dble(b)) + (i*rho*xis*omega**2)/det) * (ks/2.d0) * (besselh(n-1,1,ks*b)-besselh(n+1,1,ks*b))

    M(4,4) = -mu*(ks**2/4.0d0) * (-a1_n*besselh(int(n),2,ks*b)+besselh(n+2,2,ks*b))&
           + (mu - (rho*xip*xis*omega**2)/det) * (dble(n)**2/b**2) * besselh(int(n),2,ks*b)&
           + ((mu/dble(b)) + (i*rho*xis*omega**2)/det) * (ks/2.d0) * (besselh(n-1,2,ks*b)-besselh(n+1,2,ks*b))

    F(1) = -phi_0*epsilon_1* (0.d0,-1.d0)**n * (kp/2.d0) * (besjn(n-1,kp*a)-besjn(n+1,kp*a))
    F(2) = (dble(n)/a) * phi_0 * epsilon_1* (0.d0,-1.d0)**n *besjn(n,kp*a)

    F(3) = 0
    F(4) = 0
    !F(3) = (phi_0*epsilon_1* (-i)**n) * (-(lambda+2*mu) * (kp**2/4.d0) * (-a1_n*besjn(n,ks*b)+besjn(n+2,ks*b))&
    !     + (lambda*dble(n)**2/b**2) * besjn(n,kp*b)&
    !     - ((lambda/b)-i*kp*(lambda+2*mu))* (kp/2.d0) * (besjn(n-1,kp*b)-besjn(n+1,kp*b)) )
    !F(4) = (phi_0*epsilon_1* (-i)**n) * ((mu*dble(n)/b) * kp * (besjn(n-1,kp*b)-besjn(n+1,kp*b))&
    !     - ((mu/b)-i*ks*mu)* (dble(n)/b)* besjn(n,kp*b) )

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
    p = p + ( AB(1)*(kp/2.d0)*(besselh(n-1,1,kp*r)-besselh(n+1,1,kp*r))&
      + AB(2)*(kp/2.d0)*(besselh(n-1,2,kp*r)-besselh(n+1,2,kp*r))&
      + (dble(n)/r)*AB(3)*besselh(int(n),1,ks*r) + (dble(n)/r)*AB(4)*besselh(int(n),2,ks*r) )*cos(dble(n)*theta)

    q = q + ( - (dble(n)/r)*AB(1)*besselh(int(n),1,kp*r) &
       - (dble(n)/r)*AB(2)*besselh(int(n),2,kp*r) - AB(3)*(ks/2.d0)*(besselh(n-1,1,ks*r)&
       -besselh(n+1,1,ks*r)) - AB(4)*(ks/2.d0)*(besselh(n-1,2,ks*r)-besselh(n+1,2,ks*r)) )*sin(dble(n)*theta)
  end do
  a0_n = 1
  a1_n = 2
  ! for GetDP: instead of 2:24
!$OMP PARALLEL DO PRIVATE(n,xip,xis,det,detinv,M,Minv,F,AB) REDUCTION(+:p,q)
 do n = 2,ns
    xip = (1.0d0/kp) * ( 1.0d0/(sqrt(1-(dble(n)**2/((kpeps**2)* b**2 )) ) ));
    xis = (1.0d0/ks) * ( 1.0d0/(sqrt(1-(dble(n)**2/((kseps**2)* b**2 )) ) ));

    det = 1 + ((dble(n)**2)/(b**2)) * xip * xis ;

    M(1,1) = (kp/2.d0) * ( besselh(n-1,1,kp*a)-besselh(n+1,1,kp*a) )
    M(1,2) = (kp/2.d0) * ( besselh(n-1,2,kp*a)-besselh(n+1,2,kp*a) )
    M(1,3) = ( dble(n)/a) * besselh(int(n),1,ks*a)
    M(1,4) = ( dble(n)/a) * besselh(int(n),2,ks*a)

    M(2,1) = (-dble(n)/a)  * besselh(int(n),1,kp*a)
    M(2,2) = (-dble(n)/a)  * besselh(int(n),2,kp*a)
    M(2,3) = (-ks/2.d0) * ( besselh(n-1,1,ks*a)-besselh(n+1,1,ks*a) )
    M(2,4) = (-ks/2.d0) * ( besselh(n-1,2,ks*a)-besselh(n+1,2,ks*a) )

    M(3,1) = (lambda + 2*mu) * ((kp**2)/4.d0) * (a0_n*besselh(n-2,1,kp*b)&
           - a1_n*besselh(int(n),1,kp*b)+besselh(n+2,1,kp*b))&
           + (lambda-((rho*xip*xis*omega**2)/(det) + 2*mu)&
           *(-dble(n)**2)/(b**2) * besselh(int(n),1,kp*b)&
           + (lambda/dble(b))-( (i*rho*xip*omega**2)/ det) )&
           *(kp/2.d0)*(besselh(n-1,1,kp*b)-besselh(n+1,1,kp*b))
    M(3,2) = (lambda + 2*mu) * ((kp**2)/4.d0) * (a0_n*besselh(n-2,2,kp*b)&
           - a1_n*besselh(int(n),2,kp*b)+besselh(n+2,2,kp*b))&
           + (lambda-((rho*xip*xis*omega**2)/(det)) + 2*mu)&
           *(-dble(n)**2)/(b**2) * besselh(int(n),2,kp*b)&
           + ((lambda/dble(b))-( (i*rho*xip*omega**2)/(det) ) )&
           *(kp/2.d0)*(besselh(n-1,2,kp*b)-besselh(n+1,2,kp*b))

    M(3,3) = (rho*xip*xis*omega**2/det)*(dble(n)*ks/(2*b))*(besselh(n-1,1,ks*b)-besselh(n+1,1,ks*b))&
           + (-2*mu/dble(b) -(i*rho*xip*omega**2)/(det) )*(dble(n)/b)*besselh(int(n),1,ks*b)

    M(3,4) = (rho*xip*xis*omega**2/det)*(dble(n)*ks/(2*b))*(besselh(n-1,2,ks*b)-besselh(n+1,2,ks*b))&
           + (-2*mu/dble(b) -(i*rho*xip*omega**2)/(det) )*(dble(n)/b)*besselh(int(n),2,ks*b)

    M(4,1) = (-(rho*xip*xis*omega**2)/det ) * (dble(n)*kp)/(2*b) * (besselh(n-1,1,kp*b) - besselh(n+1,1,kp*b))&
           + ((2*mu/dble(b)) + (i*rho*xis*omega**2)/det ) * (dble(n)/b) * besselh(int(n),1,kp*b)

    M(4,2) = (-(rho*xip*xis*omega**2)/det ) * (dble(n)*kp)/(2*b) * (besselh(n-1,2,kp*b) - besselh(n+1,2,kp*b))&
           + ((2*mu/dble(b)) + (i*rho*xis*omega**2)/det ) * (dble(n)/b) * besselh(int(n),2,kp*b)

    M(4,3) = -mu*(ks**2/4.0d0) * (a0_n*besselh(n-2,1,ks*b) -a1_n*besselh(int(n),1,ks*b)+besselh(n+2,1,ks*b))&
           + (mu - (rho*xip*xis*omega**2)/det) * (dble(n)**2/b**2) * besselh(int(n),1,ks*b)&
           + ((mu/dble(b)) + (i*rho*xis*omega**2)/det) * (ks/2.d0) * (besselh(n-1,1,ks*b)-besselh(n+1,1,ks*b))

    M(4,4) = -mu*(ks**2/4.0d0) * (a0_n*besselh(n-2,2,ks*b) -a1_n*besselh(int(n),2,ks*b)+besselh(n+2,2,ks*b))&
           + (mu - (rho*xip*xis*omega**2)/det) * (dble(n)**2/b**2) * besselh(int(n),2,ks*b)&
           + ((mu/dble(b)) + (i*rho*xis*omega**2)/det) * (ks/2.d0) * (besselh(n-1,2,ks*b)-besselh(n+1,2,ks*b))

    F(1) = -phi_0*epsilon_1* (0.d0,-1.d0)**n * (kp/2.d0) * (besjn(n-1,kp*a)-besjn(n+1,kp*a))
    F(2) = (dble(n)/a) * phi_0 * epsilon_1* (0.d0,-1.d0)**n *besjn(n,kp*a)

    F(3) = 0
    F(4) = 0
    !F(3) = (phi_0*epsilon_1* (-i)**n) * (-(lambda+2*mu) * (kp**2/4.d0) * (a0_n*besjn(n-2,ks*b)-a1_n*besjn(n,ks*b)+besjn(n+2,ks*b))&
    !     + (lambda*dble(n)**2/b**2) * besjn(n,kp*b)&
    !     - ((lambda/b)-i*kp*(lambda+2*mu))* (kp/2.d0) * (besjn(n-1,kp*b)-besjn(n+1,kp*b)) )
    !F(4) = (phi_0*epsilon_1* (-i)**n) * ((mu*dble(n)/b) * kp * (besjn(n-1,kp*b)-besjn(n+1,kp*b))&
    !     - ((mu/b)-i*ks*mu)* (dble(n)/b)* besjn(n,kp*b) )

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
    p = p + (AB(1)*(kp/2.d0)*(besselh(n-1,1,kp*r)-besselh(n+1,1,kp*r))&
      + AB(2)*(kp/2.d0)*(besselh(n-1,2,kp*r)-besselh(n+1,2,kp*r))&
      + (dble(n)/r)*AB(3)*besselh(int(n),1,ks*r) + (dble(n)/r)*AB(4)*besselh(int(n),2,ks*r) )*cos(dble(n)*theta)

    q = q + (- (dble(n)/r)*AB(1)*besselh(int(n),1,kp*r) &
       - (dble(n)/r)*AB(2)*besselh(int(n),2,kp*r) - AB(3)*(ks/2.d0)*(besselh(n-1,1,ks*r)&
       -besselh(n+1,1,ks*r)) - AB(4)*(ks/2.d0)*(besselh(n-1,2,ks*r)-besselh(n+1,2,ks*r)) )*sin(dble(n)*theta)
  end do
!$OMP END PARALLEL DO

  ! disp('DONE COMPUTING COEFICIENTS')
  du = dreal(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
  dv = dreal(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))

  ! for GetDP: return imaginary part in dut, dvt
  dut = dimag(exp(omega*(0.d0,1.d0)*t)*(cos(theta)*p-sin(theta)*q))
  dvt = dimag(exp(omega*(0.d0,1.d0)*t)*(sin(theta)*p+cos(theta)*q))

end subroutine cylindrical_walloutabc2
