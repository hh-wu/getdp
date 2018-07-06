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
!  boundary) with Padé-localized ABC for an incident P-wave


subroutine cylindrical_walloutabc2pade(du,dv,dut,dvt,X,Y,t,omega,lambda,mu,rho,a,b,L,alpha,eps_p,eps_s)

  implicit none
  integer :: n,ns,j,ind

  double precision :: X,Y,du,dv,dvt,dut,t
  double precision :: r,theta,L,alpha
  double precision :: lambda,mu,rho
  double precision :: cp,cs,omega,kp,ks,a,b
  double precision :: phi_0,epsilon_n,tang,eps_p,eps_s,D1
  double precision cj(floor(L))
  double precision dj(floor(L))
  double precision , parameter :: pi = 4d0*datan(1d0)

  double complex   :: i,p,q,detinv,kpeps,kseps,xip,xis,det,D2,D3,D4
  double complex M(4,4)
  double complex Minv(4,4)
  double complex AB(4)
  double complex F(4)
  double complex Rj(floor(L))
  double complex Sj(floor(L))

  double complex, external :: besselh
  double complex, external :: dr_h
  double complex, external :: dr2_h
  double complex, external :: dr_j

  ! Compute radius r and angle theta
  r = dsqrt(X**2+Y**2)
  theta = datan2(Y,X)
  i=(0.d0,1.d0)
  ! P and S wave speeds
  cp = dsqrt((lambda+2.d0*mu)/rho)
  cs = dsqrt(mu/rho)
  ! To satisfy elastic wave equation
  kp = omega/cp
  ks = omega/cs

  ! Amplitude of incomming wave
  phi_0 = 1
  !Definition of complex constant usefull for the series expansion
  D1 = lambda+2*mu;

  !size of the series
  ns=2*floor(omega);
  do j=0,floor(L)-1
    tang=dtan((pi/(2*L))*(0.5+j));
    cj(j+1)= (1.d0+tang*tang)/L;
    dj(j+1)= (1.d0+tang*tang);
    Rj(j+1)=cmplx(cj(j+1)*dcos(alpha/2.d0),cj(j+1)*dsin(alpha/2.d0));
    Sj(j+1)=cmplx(dj(j+1)*dcos(alpha)+1-dcos(alpha),dj(j+1)*dsin(alpha) - dsin(alpha));
  End do
  !Definition of kpeps et kseps
  kpeps = cmplx(kp, eps_p); 
  kseps = cmplx(ks, eps_s); 
  !-------------------------------
  ! Series expansion of solution -
  !-------------------------------
  ! initialisation of the radial and azimutal part of the solution
  p=0.d0
  q=0.d0
!$OMP PARALLEL DO PRIVATE(epsilon_n,n,ind,xip,xis,det,D2,D3,D4,detinv,M,Minv,F,AB) REDUCTION(+:p,q)
 do n = 0,ns
    If (n==0) then 
      epsilon_n=1.d0 
    else If (n>0) then 
      epsilon_n=2.d0
    endIf
      xip = 0;
      xis = 0;
      do ind=0,floor(L)-1
       xip = xip + Rj(ind+1)/(Sj(ind+1)-(dble(n)/(kpeps*b))**2); 
       xis = xis + Rj(ind+1)/(Sj(ind+1)-(dble(n)/(kseps*b))**2); 
      end do
    xip=xip/kp;
    xis=xis/ks;
    det = 1 + ((dble(n)/b)**2) * xip * xis; 

    D2 = (rho*(omega**2)*xip * xis) / det;
    D3 = lambda/b - (i*rho*(omega**2)*xip)/det;
    D4 = -mu/b - (i*rho*(omega**2)*xis)/det;

    M(1,1) = dr_h(1,kp,a,n);
    M(1,2) = dr_h(2,kp,a,n); 
    M(1,3) = (dble(n)/a) * besselh(int(n),1,ks*a);
    M(1,4) = (dble(n)/a) * besselh(int(n),2,ks*a);

    M(2,1) = (-dble(n)/a)  * besselh(int(n),1,kp*a);
    M(2,2) = (-dble(n)/a)  * besselh(int(n),2,kp*a);
    M(2,3) = -dr_h(1,ks,a,n);
    M(2,4) = -dr_h(2,ks,a,n);

    M(3,1) = D1*dr2_h(1,kp,b,n) + (D1-D2)*(-(dble(n)/b)**2)*besselh(int(n),1,kp*b)+ D3*dr_h(1,kp,b,n);
    M(3,2) = D1*dr2_h(2,kp,b,n) + (D1-D2)*(-(dble(n)/b)**2)*besselh(int(n),2,kp*b)+ D3*dr_h(2,kp,b,n);

    M(3,3) = D1*(-(dble(n)/(b**2)) *besselh(int(n),1,ks*b) + (dble(n)/b)*dr_h(1,ks,b,n) )&
           + (D1-D2)*(-dble(n)/b)*dr_h(1,ks,b,n) + D3*(dble(n)/b)*besselh(int(n),1,ks*b);      
    M(3,4) = D1*(-(dble(n)/(b**2)) *besselh(int(n),2,ks*b) + (dble(n)/b)*dr_h(2,ks,b,n) )&
           + (D1-D2)*(-dble(n)/b)*dr_h(2,ks,b,n) + D3*(dble(n)/b)*besselh(int(n),2,ks*b);        

    M(4,1) = -mu* (-(dble(n)/(b**2))*besselh(int(n),1,kp*b) + (dble(n)/b)*dr_h(1,kp,b,n) )&
           - (D2-mu)* (dble(n)/b)*dr_h(1,kp,b,n) - D4*(dble(n)/b)*besselh(int(n),1,kp*b);
    M(4,2) = -mu* (-(dble(n)/(b**2))*besselh(int(n),2,kp*b) + (dble(n)/b)*dr_h(2,kp,b,n) )&
           - (D2-mu)* (dble(n)/b)*dr_h(2,kp,b,n) - D4*(dble(n)/b)*besselh(int(n),2,kp*b);

    M(4,3) = -mu*dr2_h(1,ks,b,n) + (D2-mu)*(-(dble(n)/b)**2)*besselh(int(n),1,ks*b)&
           - D4*dr_h(1,ks,b,n);
    M(4,4) = -mu*dr2_h(2,ks,b,n) + (D2-mu)*(-(dble(n)/b)**2)*besselh(int(n),2,ks*b)&
           - D4*dr_h(2,ks,b,n);

    F(1) = -phi_0*epsilon_n* (0d0,-1d0)**n * dr_j(kp,a,n) ;
    F(2) = (dble(n)/a) * phi_0 * epsilon_n* (0d0,-1d0)**n*besjn(n,kp*a);
    F(3) = 0;
    F(4) = 0;

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
    p = p + (AB(1)*dr_h(1,kp,r,n) + AB(2)* dr_h(2,kp,r,n)&
 + (dble(n)/r)*AB(3)*besselh(int(n),1,ks*r)&
          + (dble(n)/r)*AB(4)*besselh(int(n),2,ks*r) )*dcos(n*theta)

    q = q + (- (dble(n)/r)*AB(1)*besselh(int(n),1,kp*r)&
- (dble(n)/r)*AB(2)*besselh(int(n),2,kp*r)&
             - AB(3)*dr_h(1,ks,r,n) - AB(4)*dr_h(2,ks,r,n) )*dsin(n*theta)
  end do

!$OMP END PARALLEL DO
  ! return real part in du,dv
  du = dreal(exp(omega*(0.d0,1.d0)*t)*(dcos(theta)*p-dsin(theta)*q))
  dv = dreal(exp(omega*(0.d0,1.d0)*t)*(dsin(theta)*p+dcos(theta)*q))

  ! return imaginary part in dut, dvt
  dut = dimag(exp(omega*(0.d0,1.d0)*t)*(dcos(theta)*p-dsin(theta)*q))
  dvt = dimag(exp(omega*(0.d0,1.d0)*t)*(dsin(theta)*p+dcos(theta)*q))

end subroutine cylindrical_walloutabc2pade

double complex function dr_j(k,r,n)
  double precision :: k,r
  integer :: n

  If (n==0) Then
    dr_j=-k*besjn(1,k*r);
  elseIf (n>0) Then
    dr_j=0.5*k*(besjn(int(n)-1,k*r)-besjn(int(n)+1,k*r));
  EndIf
  return
end 

double complex function dr_h(l,k,r,n)
  double precision :: k,r
  integer :: n,l
  double complex, external :: besselh
  If (n==0) Then
    dr_h=-k*besselh(1,l,k*r);
  elseIf (n>0) Then
    dr_h=0.5*k*(besselh(int(n)-1,l,k*r)-besselh(int(n)+1,l,k*r));
  EndIf
  return
end 

double complex function dr2_h(l,k,r,n)
  double precision :: k,r
  integer :: n,l
  double complex, external :: besselh

  If (n==0) Then
    dr2_h=-0.5*(k**2) * (besselh(0,l,k*r) - besselh(2,l,k*r) );
  elseIf (n==1) Then
    dr2_h=0.25*(k**2) * (- 3*besselh(1,l,k*r)+besselh(3,l,k*r));
  elseIf (n>1) Then
    dr2_h=0.25*(k**2) * (besselh(int(n)-2,l,k*r)- 2*besselh(int(n),l,k*r)+besselh(int(n)+2,l,k*r));
  EndIf
  return
end
