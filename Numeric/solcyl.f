c $Id: solcyl.f,v 1.2 2000-09-07 18:56:37 geuzaine Exp $
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
         
         t = atan2(y,x)
         
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
