c $Id: solsph.f,v 1.2 2000-09-07 18:56:37 geuzaine Exp $
c     -------------------------------------------------------
c     Probleme de la sphere (solution analytique) 
c     Calcul de l'induction 
c     -------------------------------------------------------
      
      subroutine solsph(x,y,z,sxr,sxi,syr,syi,szr,szi
     &     ,mur,sigma,freq,r0)
      
      implicit none
      integer fphi
      real*8  x,y,z,sxr,sxi,syr,syi,szr,szi,mur,sigma,freq,r0
      real*8  mu0,omega,pi,r,theta,phi,ctheta,stheta,vaux
     &     ,delta
      complex k,kr0,a,kr,d,b,sx,sy,sz,br,bt
     &     ,cbessj0,cbessj1,cbessj2,deltai,ri,ai,r0i
      
      pi    = 3.1415926536
      mu0   = 4.e-7*pi
      omega = 2.*pi*freq
      
      r = sqrt(x*x+y*y+z*z)
      if (r/r0.le.1.e-6) then
         sxr = 0.
         sxi = 0.
         syr = 0.
         syi = 0.
         szr = 0.
         szi = 0.
         return
      endif
      
      theta  = acos(z/r)
      ctheta = cos(theta)
      stheta = sin(theta)
      
      if (sqrt(x*x+y*y)/r0.le.1.e-6) then
         fphi=1                 ! flag phi indefini !
      else
         fphi=0
         phi = atan2(y,x)
         if (phi.lt.0.) then
            phi=phi+2.*3.1415926536
         endif
      endif
      
c     ----- dynamique
      
      if (freq.ge.1.e-8) then
         
         delta = sqrt(2./(2.*3.1415926536*freq*mur*mu0*sigma))
         deltai = cmplx(delta)
         k  = (1.,-1.)/deltai      
         r0i = cmplx(r0)
         kr0 = k * r0i
         d = cbessj1(kr0) * (1.-1./mur) + kr0 * cbessj0(kr0) / mur
         ai = cmplx(1.5*r0) 
         a =  ai/ d
         b = (r0*r0*r0) / d *
     &        ( cbessj1(kr0) * (1.+0.5/mur)
     &        - kr0*cbessj0(kr0) * 0.5/mur )
         ri = cmplx(r)
         kr = k * ri
         
         if (r.le.r0) then
            
            br = 2.*a * ctheta / r * cbessj1(kr)
            bt = -a * stheta / (2.*r)*(cbessj1(kr)
     &           + kr * (cbessj0(kr)-cbessj2(kr)) )
            
         else
            
            br =  ctheta * ( 1. + 2.*b/r**3 )
            bt = -stheta * ( 1. -    b/r**3 )
            
         endif
         
         
         if (fphi.eq.0) then
            sx = (br*stheta*cos(phi)+bt*ctheta*cos(phi))   
            sy = (br*stheta*sin(phi)+bt*ctheta*sin(phi))
            sz = ( (br*ctheta-bt*stheta)               )
            sxr = real (sx)
            sxi = imag (sx)
            syr = real (sy)
            syi = imag (sy)
            szr = real (sz)
            szi = imag (sz)
         else
            sxr = 0.
            sxi = 0.
            syr = 0.
            syi = 0.
            sz = br*ctheta
            szr = real (sz)
            szi = imag (sz)
         endif
         
c     ----- statique
         
      else
         
         if (r.le.r0) then
            sxr = 0.
            sxi = 0.
            syr = 0.
            syi = 0.
            sz = cmplx( 3./(1.+2./mur))
            szr = real (sz)
            szi = imag (sz)
            
         else
            vaux = (mur-1.)/(mur+2.)*(r0/r)**3
            br = cmplx(ctheta * 2. * vaux )
            bt = cmplx(stheta * vaux)
            
            if (fphi.eq.0) then
               sx = (br*stheta*cos(phi)+bt*ctheta*cos(phi))
               sy = (br*stheta*sin(phi)+bt*ctheta*sin(phi))
               sz = (br*ctheta-bt*stheta) + 1.
               sxr = real (sx)
               sxi = imag (sx)
               syr = real (sy)
               syi = imag (sy)
               szr = real (sz)
               szi = imag (sz)
            else
               sxr = 0.
               sxi = 0.
               syr = 0.
               syi = 0.
               sz = br*ctheta + 1.
               szr = real (sz)
               szi = imag (sz)
            endif
            
         endif
         
      endif
      
      return
      end



