c-----------------------------------------------------------------------
      subroutine cglt2d(x,y,x1,x2,x3,y1,y2,y3,valr,vali)
c-----------------------------------------------------------------------
      implicit none
      real*8  x,y,x1,x2,x3,y1,y2,y3,valr,vali,tol,c1
      complex*16  z,z1,z2,z3,t1,t2,t3,g
c-----------------------------------------------------------------------
c     CGLT2D : Complex Grad Laplace Triangle 2D
c
c     Computation of the complex valued integral over a triangle 
c
c     Int( 1/(z-z') dz' )
c
c     with  z = x + i * y
c           z'= x' + i * y'
c
c     ref : Timo Tarhasaari
c-----------------------------------------------------------------------
c on entry:
c ========= 
c  x, y    = coord of the computation (destination) point
c  x1, y1  = coord of node 1 of the triangle
c  x2, y2  =               2
c  x3, y3  =               3
c
c on return:
c ==========
c  valr    = real part of the integral
c  vali    = imaginary part of the integral
c-----------------------------------------------------------------------
c     tolerance for vertex coord comparison
      tol = 1.e-16
c     constant 1/(2*Pi)
      c1 = 1.5915494309189534E-01

c     g77 doesn't like real() with complex*16 arguments, so we
c     have to particularize to intrinsic calls (real->dble) to keep 
c     full precision. Same for cmplx->dcmplx and imag->dimag.

      z  = dcmplx(x,y)
      z1 = dcmplx(x1,y1)
      z2 = dcmplx(x2,y2)
      z3 = dcmplx(x3,y3)

      if ((abs(x-x1).le.tol) .and. (abs(y-y1).le.tol)) then
         t1 = log(z-z2) 
         t2 = (z-z3)/(z2-z3) * log((z-z3)/(z-z2)) 
         t3 = log(z-z3) 
         g =    dble(t1)             * (z1-z2)
     &        + dble(t2 + log(z-z2)) * (z2-z3)
     &        + dble(t3)             * (z3-z1)        
      else if ((abs(x-x2).le.tol) .and. (abs(y-y2).le.tol)) then
         t1 = log(z-z1) 
         t2 = log(z-z3) 
         t3 = (z-z1)/(z3-z1) * log((z-z1)/(z-z3))
         g =    dble(t1)             * (z1-z2)
     &        + dble(t2)             * (z2-z3)
     &        + dble(t3 + log(z-z3)) * (z3-z1)        
      else if ((abs(x-x3).le.tol) .and. (abs(y-y3).le.tol)) then
         t1 = (z-z2)/(z1-z2) * log((z-z2)/(z-z1)) 
         t2 = log(z-z2)
         t3 = log(z-z1)
         g =    dble(t1 + log(z-z1)) * (z1-z2)
     &        + dble(t2)             * (z2-z3)
     &        + dble(t3)             * (z3-z1)        
      else
         t1 = (z-z2)/(z1-z2) * log((z-z2)/(z-z1)) 
         t2 = (z-z3)/(z2-z3) * log((z-z3)/(z-z2)) 
         t3 = (z-z1)/(z3-z1) * log((z-z1)/(z-z3)) 
         g =    dble(t1 + log(z-z1)) * (z1-z2)
     &        + dble(t2 + log(z-z2)) * (z2-z3)
     &        + dble(t3 + log(z-z3)) * (z3-z1)
      endif
           
      valr = dble(g)*c1
      vali = dimag(g)*c1
      
      return
      end
c-----------------------------------------------------------------------
c     WARNING: The following routine *does not* perform the change of
c              coordinates on the differential
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine clt2d(x,y,x1,x2,x3,y1,y2,y3,valr,vali)
c-----------------------------------------------------------------------
      implicit none
      real*8  x,y,x1,x2,x3,y1,y2,y3,valr,vali,tol,c1
      complex*16  z,z1,z2,z3,g,zc,ro
c-----------------------------------------------------------------------
c     CLT2D : Complex Laplace Triangle 2D
c
c     Computation of the complex valued integral over a triangle 
c
c     Int( ln(z-z') dz' )
c
c     with  z = x + i * y
c           z'= x' + i * y'
c
c     ref : Timo Tarhasaari
c-----------------------------------------------------------------------
c on entry:
c ========= 
c  x, y    = coord of the computation (destination) point
c  x1, y1  = coord of node 1 of the triangle
c  x2, y2  =               2
c  x3, y3  =               3
c
c on return:
c ==========
c  valr    = real part of the integral
c  vali    = imaginary part of the integral
c-----------------------------------------------------------------------
c     tolerance for vertex coord comparison
      tol = 1.e-16
c     constant 1/(4*Pi)
      c1 = 7.9577471545947668E-02

      zc = dcmplx(x1+x2+x3,y1+y1+y3)/3.0
      ro = dcmplx(x-dble(zc),dimag(zc)-y)/abs(dcmplx(x,y)-zc)
      z  = (dcmplx(x,y)-zc)*ro
      z1 = (dcmplx(x1,y1)-zc)*ro
      z2 = (dcmplx(x2,y2)-zc)*ro
      z3 = (dcmplx(x3,y3)-zc)*ro

      g = dcmplx(-1.5,0.0)

      if (abs(z1-z).gt.tol) then
         g = g + (z-z1)**2/((z1-z2)*(z1-z3)) * log(z-z1)
      endif

      if (abs(z2-z).gt.tol) then
         g = g + (z-z2)**2/((z2-z1)*(z2-z3)) * log(z-z2)
      endif

      if (abs(z3-z).gt.tol) then
         g = g + (z-z3)**2/((z3-z1)*(z3-z2)) * log(z-z3)
      endif

      valr = dble(g)*c1
      vali = dimag(g)*c1
      
      return
      end

c-----------------------------------------------------------------------
c     WARNING: The following routine *does not* perform the change of
c              coordinates on the differential
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine clt2dl(x,y,x1,x2,x3,y1,y2,y3,valr,vali)
c-----------------------------------------------------------------------
      implicit none
      real*8  x,y,x1,x2,x3,y1,y2,y3,valr,vali,tol,c1
      complex*16  z,z1,z2,z3,g,zc,ro
c-----------------------------------------------------------------------
c     CLT2D : Complex Laplace Triangle 2D
c
c     Computation of the complex valued integral over a triangle 
c
c     Int( lambda_1(z') ln(z-z') dz' )
c
c     with  z = x + i * y
c           z'= x' + i * y'
c
c     ref : Timo Tarhasaari
c-----------------------------------------------------------------------
c on entry:
c ========= 
c  x, y    = coord of the computation (destination) point
c  x1, y1  = coord of node 1 of the triangle
c  x2, y2  =               2
c  x3, y3  =               3
c
c on return:
c ==========
c  valr    = real part of the integral
c  vali    = imaginary part of the integral
c-----------------------------------------------------------------------
c     tolerance for vertex coord comparison
      tol = 1.e-16
c     constant 1/(12*Pi)
      c1 = 2.652582384864922E-02

      zc = dcmplx(x1+x2+x3,y1+y1+y3)/3.0
      ro = dcmplx(x-dble(zc),dimag(zc)-y)/abs(dcmplx(x,y)-zc)
      z  = (dcmplx(x,y)-zc)*ro
      z1 = (dcmplx(x1,y1)-zc)*ro
      z2 = (dcmplx(x2,y2)-zc)*ro
      z3 = (dcmplx(x3,y3)-zc)*ro

      g = (11.0*(z3*(z1-z2)+z2*z1)-5.0*z1**2+6.0*z**2-12.0*z*z1)
     &     / (6.0*(z2-z1)*(z3-z1))

      if (abs(z-z1).gt.tol) then
         g = g - (z*(z3+z2-2*z1)-3*z2*z3-z1*z1+2*z1*z3+2*z1*z2)
     &        *(z-z1)*(z-z1)*log(z-z1)/((z1-z2)*(z1-z2)*(z1-z3)*(z1-z3))
      endif

      if (abs(z-z2).gt.tol) then
         g = g +(z-z2)*(z-z2)*(z-z2)*log(z-z2)/((z2-z1)*(z2-z1)*(z3-z2))
      endif

      if (abs(z-z3).gt.tol) then
         g = g +(z-z3)*(z-z3)*(z-z3)*log(z-z3)/((z3-z1)*(z3-z1)*(z2-z3))
      endif
           
      valr = dble(g)*c1
      vali = dimag(g)*c1
      
      return
      end
