c $Id: Analytic_SphCylLF.f,v 1.2 2003-03-22 03:30:15 geuzaine Exp $
c
c Copyright (C) 1997-2003 P. Dular, C. Geuzaine
c
c This program is free software; you can redistribute it and/or modify
c it under the terms of the GNU General Public License as published by
c the Free Software Foundation; either version 2 of the License, or
c (at your option) any later version.
c
c This program is distributed in the hope that it will be useful,
c but WITHOUT ANY WARRANTY; without even the implied warranty of
c MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
c GNU General Public License for more details.
c
c You should have received a copy of the GNU General Public License
c along with this program; if not, write to the Free Software
c Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
c USA.
c
c Please report all bugs and problems to "getdp@geuz.org".
c
c -- cbessjo (bessel spherique d'ordre 0)

      FUNCTION cbessj0(z)

      IMPLICIT NONE
      COMPLEX cbessj0,z

      cbessj0 = CSIN(z) / z

      RETURN
      END

c -- cbessj1 (bessel spherique d'ordre 1)

      FUNCTION cbessj1(z)

      IMPLICIT NONE
      COMPLEX cbessj1,z

      cbessj1 = ( CSIN(z) / z - CCOS(z) ) / z

      RETURN
      END

c -- cbessj2 (bessel spherique d'ordre 2)

      FUNCTION cbessj2(z)

      IMPLICIT NONE
      COMPLEX cbessj2,z

      cbessj2 =  ( CSIN(z) * (3./(z*z)-1.) - CCOS(z) * 3./z ) / z

      RETURN
      END

c     -------------------------------------------------------
c     Probleme du cylindre (solution analytique)
c     Calcul de l'induction
c     -------------------------------------------------------
      
      subroutine solcyl(x,y,sxr,sxi,syr,syi
     &     ,bs,mur,sigma,freq,r0)
      
      implicit none
      
      real*8 x,y,r0,mur,mu0,sigma,freq,bs,delta
     &     ,sxr,sxi,syr,syi,vaux
      complex z,c,c1,k,ri,a,bsi,muri,r0i,j1,j1p,j2
     &     ,j0,deltai,del,mat(2,2),b(3),br,bt
     &     ,cbessj0,cbessj1,cbessj2,sx,sy,dadx,dady,dadr,dadt
      real*8 t,r
      
      r = sqrt(x*x+y*y)
      if (r/r0.le.1.e-6) then
         sxr = 0.
         sxi = 0.
         syr = 0.
         syi = 0.
         return
      endif

      mu0 = 4.e-7 * 3.1415926536
      t = atan2(y,x)
      
c     ----- dynamique
      
      if (freq.ge.1.e-8) then
         
         delta = sqrt(2./(2.*3.1415926536*freq*mur*mu0*sigma))
         
         bsi    = cmplx(bs)
         muri   = cmplx(mur)
         r0i    = cmplx(r0)
         deltai = cmplx(delta)
         
         k  = (1.,-1.)/deltai
         z = k*r0i
         
         j0  =  cbessj0(z)
         j1  =  cbessj1(z)
         j2  =  cbessj2(z)
         j1p = (.5,0.0)*(j0-j2)
         
         ri = cmplx(r)
         z = k*ri
         
         mat(1,1)= (-1.0,0.0)/r0i
         mat(1,2)= j1
         mat(2,1)= muri/(r0i*r0i)
         mat(2,2)= k*j1p
         b(1)    = bsi*r0i
         b(2)    = bsi*muri
         
         del = mat(1,1)  * mat(2,2) - mat(1,2) * mat(2,1)
         c   = (b(1)     * mat(2,2) - b(2)     * mat(1,2)) /del
         c1  = (mat(1,1) * b(2)     - mat(2,1) * b(1)    ) /del  
         
         if(r.gt.r0)then
            a = ( bsi * ri + (c/ri) ) * cmplx(cos(t)) 
            dadr = ( bsi - c/(ri*ri) ) * cmplx(cos(t))
            dadt = - (bsi + (c/(ri*ri))) * cmplx(sin(t))
         else if (r.ne.0.0)then
            a = c1 * cmplx(cos(t))*cbessj1(k*ri)
            dadr  = c1 * cmplx(cos(t)) * k * 0.5 * (cbessj0(k*ri)
     &           -cbessj2(k*ri))
            dadt = - (c1 * cmplx(cos(t))*cbessj1(k*ri)/ri) * sin(t)
         else
            a = (0.0,0.0)
         endif
         dadx = dadr * cos (t) - dadt * sin(t)
         dady = dadr * sin (t) + dadt * cos(t)
         sxr = real (dady) 
         sxi = imag (dady)
         syr = - real (dadx) 
         syi = - imag (dadx)
         
         
c     ----- statique
         
      else
         
         if (r.le.r0) then
            sxr = 0.0
            sxi = 0.0
            sy = cmplx(2./(1.+1./mur))
            syr = real (sy)
            syi = imag (sy)
            
         else 
            vaux = (mur-1.)/(mur+1.)*(r0/r)**2
            br = cmplx(sin(t) * (1+vaux))
            bt = cmplx(cos(t) * (1-vaux))            
            sx = br*cos(t)-bt*sin(t)
            sy = br*sin(t)+bt*cos(t)
            sxr = real (sx)
            sxi = imag (sx)
            syr = real (sy)
            syi = imag (sy)
            
         endif
      
      endif
      
      return
      end

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



