      subroutine zbesj(zr, zi, fnu, kode, n, cyr, cyi, nz, ierr)
c     j-Bessel function of complex argument and first kind
c Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbesj computes an n member  sequence of complex
c         bessel functions cy(i)=j(fnu+i-1,z) for real, nonnegative
c         orders fnu+i-1, i=1,...,n and complex z in the cut plane
c         -pi.lt.arg(z).le.pi. on kode=2, cbesj returns the scaled
c         functions
c
c         cy(i)=exp(-abs(y))*j(fnu+i-1,z)   i = 1,...,n , y=aimag(z)
c
c         which remove the exponential growth in both the upper and
c         lower half planes for z to infinity.
c
c         Input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi),  -pi.lt.arg(z).le.pi
c           fnu    - order of initial j function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(i)=j(fnu+i-1,z), i=1,...,n
c                        = 2  returns
c                             cy(i)=j(fnu+i-1,z)exp(-abs(y)), i=1,...,n
c           n      - number of members of the sequence, n.ge.1
c
c         Output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(i)=j(fnu+i-1,z)  or
c                    cy(i)=j(fnu+i-1,z)exp(-abs(y))  i=1,...,n
c                    depending on kode, y=aimag(z).
c           nz     - number of components set to zero due to underflow,
c                    nz= 0   , normal return
c                    nz.gt.0 , last nz components of cy set  zero due
c                              to underflow, cy(i)=cmplx(0.0d0,0.0d0),
c                              i = n-nz+1,...,n
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, aimag(z)
c                            too large on kode=1
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the formula
c
c         j(fnu,z)=exp( fnu*pi*i/2)*i(fnu,-i*z)    aimag(z).ge.0.0
c
c         j(fnu,z)=exp(-fnu*pi*i/2)*i(fnu, i*z)    aimag(z).lt.0.0
c
c         where i**2 = -1 and i(fnu,z) is the i bessel function.
c
c         for negative orders,the formula
c
c              j(-fnu,z) = j(fnu,z)*cos(pi*fnu) - y(fnu,z)*sin(pi*fnu)
c
c         can be used. however,for large orders close to integers, the
c         the function changes radically. when fnu is a large positive
c         integer,the magnitude of j(-fnu,z)=j(fnu,z)*cos(pi*fnu) is a
c         large negative power of ten. but when fnu is not an integer,
c         y(fnu,z) dominates in magnitude with a large positive power of
c         ten and the most that the second term can be reduced is by
c         unit roundoff from the coefficient. thus, wide changes can
c         occur within unit roundoff of a large integer for fnu. here,
c         large means fnu.gt.cabs(z).
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zbinu,i1mach,d1mach
c
c     complex ci,csgn,cy,z,zn
      double precision aa, alim, arg, cii, csgni, csgnr, cyi, cyr, dig,
     * elim, fnu, fnul, hpi, rl, r1m5, str, tol, zi, zni, znr, zr,
     * d1mach, bb, fn, az, zabs2, ascle, rtol, atol, sti
      integer i, ierr, inu, inuh, ir, k, kode, k1, k2, n, nl, nz, i1mach
      dimension cyr(n), cyi(n)
      data hpi /1.57079632679489662d0/

c      write(*,*)'zr, zi, fnu, kode, n, nz',zr, zi, fnu, kode, n,nz
c      write(*,*)'cyr',(cyr(i),i=1,n) 
c      write(*,*)'cyi',(cyi(i),i=1,n) 
      
c
      ierr = 0
      nz=0
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu.
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      rl = 1.2d0*dig + 3.0d0
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
c-----------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      fn = fnu+dble(float(n-1))
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
c-----------------------------------------------------------------------
c     calculate csgn=exp(fnu*hpi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      cii = 1.0d0
      inu = int(sngl(fnu))
      inuh = inu/2
      ir = inu - 2*inuh
      arg = (fnu-dble(float(inu-ir)))*hpi
      csgnr = dcos(arg)
      csgni = dsin(arg)
      if (mod(inuh,2).eq.0) go to 40
      csgnr = -csgnr
      csgni = -csgni
   40 continue
c-----------------------------------------------------------------------
c     zn is in the right half plane
c-----------------------------------------------------------------------
      znr = zi
      zni = -zr
      if (zi.ge.0.0d0) go to 50
      znr = -znr
      zni = -zni
      csgni = -csgni
      cii = -cii
   50 continue
      call zbinu(znr, zni, fnu, kode, n, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      if (nz.lt.0) go to 130
      nl = n - nz
      if (nl.eq.0) return
      rtol = 1.0d0/tol
      ascle = d1mach(1)*rtol*1.0d+3
      do 60 i=1,nl
c       str = cyr(i)*csgnr - cyi(i)*csgni
c       cyi(i) = cyr(i)*csgni + cyi(i)*csgnr
c       cyr(i) = str
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 55
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   55   continue
        str = aa*csgnr - bb*csgni
        sti = aa*csgni + bb*csgnr
        cyr(i) = str*atol
        cyi(i) = sti*atol
        str = -csgni*cii
        csgni = csgnr*cii
        csgnr = str
   60 continue
      return
  130 continue
      if(nz.eq.(-2)) go to 140
      nz = 0
      ierr = 2
      return
  140 continue
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesy(zr, zi, fnu, kode, n, cyr, cyi, nz, cwrkr, cwrki,
     *                 ierr)
c     y-Bessel function of complex argument and of second kind
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbesy computes an n member sequence of complex
c         bessel functions cy(i)=y(fnu+i-1,z) for real, nonnegative
c         orders fnu+i-1, i=1,...,n and complex z in the cut plane
c         -pi.lt.arg(z).le.pi. on kode=2, cbesy returns the scaled
c         functions
c
c         cy(i)=exp(-abs(y))*y(fnu+i-1,z)   i = 1,...,n , y=aimag(z)
c
c         which remove the exponential growth in both the upper and
c         lower half planes for z to infinity.
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi), z.ne.cmplx(0.0d0,0.0d0),
c                    -pi.lt.arg(z).le.pi
c           fnu    - order of initial y function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(i)=y(fnu+i-1,z), i=1,...,n
c                        = 2  returns
c                             cy(i)=y(fnu+i-1,z)*exp(-abs(y)), i=1,...,n
c                             where y=aimag(z)
c           n      - number of members of the sequence, n.ge.1
c           cwrkr, - double precision work vectors of dimension at
c           cwrki    at least n
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(i)=y(fnu+i-1,z)  or
c                    cy(i)=y(fnu+i-1,z)*exp(-abs(y))  i=1,...,n
c                    depending on kode.
c           nz     - nz=0 , a normal return
c                    nz.gt.0 , nz components of cy set to zero due to
c                    underflow (generally on kode=2)
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, fnu is
c                            too large or cabs(z) is too small or both
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the formula
c
c         y(fnu,z)=0.5*(h(1,fnu,z)-h(2,fnu,z))/i
c
c         where i**2 = -1 and the hankel bessel functions h(1,fnu,z)
c         and h(2,fnu,z) are calculated in cbesh.
c
c         for negative orders,the formula
c
c         y(-fnu,z) = y(fnu,z)*cos(pi*fnu) + j(fnu,z)*sin(pi*fnu)
c
c         can be used. however,for large orders close to half odd
c         integers the function changes radically. when fnu is a large
c         positive half odd integer,the magnitude of y(-fnu,z)=j(fnu,z)*
c         sin(pi*fnu) is a large negative power of ten. but when fnu is
c         not a half odd integer, y(fnu,z) dominates in magnitude with a
c         large positive power of ten and the most that the second term
c         can be reduced is by unit roundoff from the coefficient. thus,
c         wide changes can occur within unit roundoff of a large half
c         odd integer. here, large means fnu.gt.cabs(z).
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zbesh,i1mach,d1mach
c
c     complex cwrk,cy,c1,c2,ex,hci,z,zu,zv
      double precision cwrki, cwrkr, cyi, cyr, c1i, c1r, c2i, c2r,
     * elim, exi, exr, ey, fnu, hcii, sti, str, tay, zi, zr, dexp,
     * d1mach, ascle, rtol, atol, aa, bb, tol
      integer i, ierr, k, kode, k1, k2, n, nz, nz1, nz2, i1mach
      dimension cyr(n), cyi(n), cwrkr(n), cwrki(n)
c     
      ierr = 0
      nz=0
      if (zr.eq.0.0d0 .and. zi.eq.0.0d0) ierr=1
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
      hcii = 0.5d0
      call zbesh(zr, zi, fnu, kode, 1, n, cyr, cyi, nz1, ierr)
      if (ierr.ne.0.and.ierr.ne.3) go to 170
      call zbesh(zr, zi, fnu, kode, 2, n, cwrkr, cwrki, nz2, ierr)
      if (ierr.ne.0.and.ierr.ne.3) go to 170
      nz = min0(nz1,nz2)
      if (kode.eq.2) go to 60
      do 50 i=1,n
        str = cwrkr(i) - cyr(i)
        sti = cwrki(i) - cyi(i)
        cyr(i) = -sti*hcii
        cyi(i) = str*hcii
   50 continue
      return
   60 continue
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      k = min0(iabs(k1),iabs(k2))
      r1m5 = d1mach(5)
c-----------------------------------------------------------------------
c     elim is the approximate exponential under- and overflow limit
c-----------------------------------------------------------------------
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      exr = dcos(zr)
      exi = dsin(zr)
      ey = 0.0d0
      tay = dabs(zi+zi)
      if (tay.lt.elim) ey = dexp(-tay)
      if (zi.lt.0.0d0) go to 90
      c1r = exr*ey
      c1i = exi*ey
      c2r = exr
      c2i = -exi
   70 continue
      nz = 0
      rtol = 1.0d0/tol
      ascle = d1mach(1)*rtol*1.0d+3
      do 80 i=1,n
c       str = c1r*cyr(i) - c1i*cyi(i)
c       sti = c1r*cyi(i) + c1i*cyr(i)
c       str = -str + c2r*cwrkr(i) - c2i*cwrki(i)
c       sti = -sti + c2r*cwrki(i) + c2i*cwrkr(i)
c       cyr(i) = -sti*hcii
c       cyi(i) = str*hcii
        aa = cwrkr(i)
        bb = cwrki(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 75
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   75   continue
        str = (aa*c2r - bb*c2i)*atol
        sti = (aa*c2i + bb*c2r)*atol
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 85
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   85   continue
        str = str - (aa*c1r - bb*c1i)*atol
        sti = sti - (aa*c1i + bb*c1r)*atol
        cyr(i) = -sti*hcii
        cyi(i) =  str*hcii
        if (str.eq.0.0d0 .and. sti.eq.0.0d0 .and. ey.eq.0.0d0) nz = nz
     *   + 1
   80 continue
      return
   90 continue
      c1r = exr
      c1i = exi
      c2r = exr*ey
      c2i = -exi*ey
      go to 70
  170 continue
      nz = 0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesh(zr, zi, fnu, kode, m, n, cyr, cyi, nz, ierr)
c     h-Bessel functions of complex argument and third kind,hankel functions
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, zbesh computes an n member sequence of complex
c         hankel (bessel) functions cy(j)=h(m,fnu+j-1,z) for kinds m=1
c         or 2, real, nonnegative orders fnu+j-1, j=1,...,n, and complex
c         z.ne.cmplx(0.0,0.0) in the cut plane -pi.lt.arg(z).le.pi.
c         on kode=2, zbesh returns the scaled hankel functions
c
c         cy(i)=exp(-mm*z*i)*h(m,fnu+j-1,z)       mm=3-2*m,   i**2=-1.
c
c         which removes the exponential behavior in both the upper and
c         lower half planes.
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi), z.ne.cmplx(0.0d0,0.0d0),
c                    -pt.lt.arg(z).le.pi
c           fnu    - order of initial h function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(j)=h(m,fnu+j-1,z),   j=1,...,n
c                        = 2  returns
c                             cy(j)=h(m,fnu+j-1,z)*exp(-i*z*(3-2m))
c                                  j=1,...,n  ,  i**2=-1
c           m      - kind of hankel function, m=1 or 2
c           n      - number of members in the sequence, n.ge.1
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(j)=h(m,fnu+j-1,z)  or
c                    cy(j)=h(m,fnu+j-1,z)*exp(-i*z*(3-2m))  j=1,...,n
c                    depending on kode, i**2=-1.
c           nz     - number of components set to zero due to underflow,
c                    nz= 0   , normal return
c                    nz.gt.0 , first nz components of cy set to zero due
c                              to underflow, cy(j)=cmplx(0.0d0,0.0d0)
c                              j=1,...,nz when y.gt.0.0 and m=1 or
c                              y.lt.0.0 and m=2. for the complmentary
c                              half planes, nz states only the number
c                              of underflows.
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, fnu too
c                            large or cabs(z) too small or both
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the relation
c
c         h(m,fnu,z)=(1/mp)*exp(-mp*fnu)*k(fnu,z*exp(-mp))
c             mp=mm*hpi*i,  mm=3-2*m,  hpi=pi/2,  i**2=-1
c
c         for m=1 or 2 where the k bessel function is computed for the
c         right half plane re(z).ge.0.0. the k function is continued
c         to the left half plane by the relation
c
c         k(fnu,z*exp(mp)) = exp(-mp*fnu)*k(fnu,z)-mp*i(fnu,z)
c         mp=mr*pi*i, mr=+1 or -1, re(z).gt.0, i**2=-1
c
c         where i(fnu,z) is the i bessel function.
c
c         exponential decay of h(m,fnu,z) occurs in the upper half z
c         plane for m=1 and the lower half z plane for m=2.  exponential
c         growth occurs in the complementary half planes.  scaling
c         by exp(-mm*z*i) removes the exponential behavior in the
c         whole z plane for z to infinity.
c
c         for negative orders,the formulae
c
c               h(1,-fnu,z) = h(1,fnu,z)*cexp( pi*fnu*i)
c               h(2,-fnu,z) = h(2,fnu,z)*cexp(-pi*fnu*i)
c                         i**2=-1
c
c         can be used.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0d-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zacon,zbknu,zbunk,zuoik,zabs2,i1mach,d1mach
c
c     complex cy,z,zn,zt,csgn
      double precision aa, alim, aln, arg, az, cyi, cyr, dig, elim,
     * fmm, fn, fnu, fnul, hpi, rhpi, rl, r1m5, sgn, str, tol, ufl, zi,
     * zni, znr, zr, zti, d1mach, zabs2, bb, ascle, rtol, atol, sti,
     * csgnr, csgni
      integer i, ierr, inu, inuh, ir, k, kode, k1, k2, m,
     * mm, mr, n, nn, nuf, nw, nz, i1mach
      dimension cyr(n), cyi(n)
      data hpi /1.57079632679489662d0/
c
      ierr = 0
      nz=0
      if (zr.eq.0.0d0 .and. zi.eq.0.0d0) ierr=1
      if (fnu.lt.0.0d0) ierr=1
      if (m.lt.1 .or. m.gt.2) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
      nn = n
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
      rl = 1.2d0*dig + 3.0d0
      fn = fnu + dble(float(nn-1))
      mm = 3 - m - m
      fmm = dble(float(mm))
      znr = fmm*zi
      zni = -fmm*zr
c-----------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
c-----------------------------------------------------------------------
c     overflow test on the last member of the sequence
c-----------------------------------------------------------------------
      ufl = d1mach(1)*1.0d+3
      if (az.lt.ufl) go to 230
      if (fnu.gt.fnul) go to 90
      if (fn.le.1.0d0) go to 70
      if (fn.gt.2.0d0) go to 60
      if (az.gt.tol) go to 70
      arg = 0.5d0*az
      aln = -fn*dlog(arg)
      if (aln.gt.elim) go to 230
      go to 70
   60 continue
      call zuoik(znr, zni, fnu, kode, 2, nn, cyr, cyi, nuf, tol, elim,
     * alim)
      if (nuf.lt.0) go to 230
      nz = nz + nuf
      nn = nn - nuf
c-----------------------------------------------------------------------
c     here nn=n or nn=0 since nuf=0,nn, or -1 on return from cuoik
c     if nuf=nn, then cy(i)=czero for all i
c-----------------------------------------------------------------------
      if (nn.eq.0) go to 140
   70 continue
      if ((znr.lt.0.0d0) .or. (znr.eq.0.0d0 .and. zni.lt.0.0d0 .and.
     * m.eq.2)) go to 80
c-----------------------------------------------------------------------
c     right half plane computation, xn.ge.0. .and. (xn.ne.0. .or.
c     yn.ge.0. .or. m=1)
c-----------------------------------------------------------------------
      call zbknu(znr, zni, fnu, kode, nn, cyr, cyi, nz, tol, elim, alim)
      go to 110
c-----------------------------------------------------------------------
c     left half plane computation
c-----------------------------------------------------------------------
   80 continue
      mr = -mm
      call zacon(znr, zni, fnu, kode, mr, nn, cyr, cyi, nw, rl, fnul,
     * tol, elim, alim)
      if (nw.lt.0) go to 240
      nz=nw
      go to 110
   90 continue
c-----------------------------------------------------------------------
c     uniform asymptotic expansions for fnu.gt.fnul
c-----------------------------------------------------------------------
      mr = 0
      if ((znr.ge.0.0d0) .and. (znr.ne.0.0d0 .or. zni.ge.0.0d0 .or.
     * m.ne.2)) go to 100
      mr = -mm
      if (znr.ne.0.0d0 .or. zni.ge.0.0d0) go to 100
      znr = -znr
      zni = -zni
  100 continue
      call zbunk(znr, zni, fnu, kode, mr, nn, cyr, cyi, nw, tol, elim,
     * alim)
      if (nw.lt.0) go to 240
      nz = nz + nw
  110 continue
c-----------------------------------------------------------------------
c     h(m,fnu,z) = -fmm*(i/hpi)*(zt**fnu)*k(fnu,-z*zt)
c
c     zt=exp(-fmm*hpi*i) = cmplx(0.0,-fmm), fmm=3-2*m, m=1,2
c-----------------------------------------------------------------------
      sgn = dsign(hpi,-fmm)
c-----------------------------------------------------------------------
c     calculate exp(fnu*hpi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      inuh = inu/2
      ir = inu - 2*inuh
      arg = (fnu-dble(float(inu-ir)))*sgn
      rhpi = 1.0d0/sgn
c     zni = rhpi*dcos(arg)
c     znr = -rhpi*dsin(arg)
      csgni = rhpi*dcos(arg)
      csgnr = -rhpi*dsin(arg)
      if (mod(inuh,2).eq.0) go to 120
c     znr = -znr
c     zni = -zni
      csgnr = -csgnr
      csgni = -csgni
  120 continue
      zti = -fmm
      rtol = 1.0d0/tol
      ascle = ufl*rtol
      do 130 i=1,nn
c       str = cyr(i)*znr - cyi(i)*zni
c       cyi(i) = cyr(i)*zni + cyi(i)*znr
c       cyr(i) = str
c       str = -zni*zti
c       zni = znr*zti
c       znr = str
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 135
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
  135 continue
      str = aa*csgnr - bb*csgni
      sti = aa*csgni + bb*csgnr
      cyr(i) = str*atol
      cyi(i) = sti*atol
      str = -csgni*zti
      csgni = csgnr*zti
      csgnr = str
  130 continue
      return
  140 continue
      if (znr.lt.0.0d0) go to 230
      return
  230 continue
      nz=0
      ierr=2
      return
  240 continue
      if(nw.eq.(-1)) go to 230
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesi(zr, zi, fnu, kode, n, cyr, cyi, nz, ierr)
c     i-Bessel function,complex bessel function,
c     modified bessel function of the first kind
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, zbesi computes an n member sequence of complex
c         bessel functions cy(j)=i(fnu+j-1,z) for real, nonnegative
c         orders fnu+j-1, j=1,...,n and complex z in the cut plane
c         -pi.lt.arg(z).le.pi. on kode=2, zbesi returns the scaled
c         functions
c
c         cy(j)=exp(-abs(x))*i(fnu+j-1,z)   j = 1,...,n , x=real(z)
c
c         with the exponential growth removed in both the left and
c         right half planes for z to infinity. definitions and notation
c         are found in the nbs handbook of mathematical functions
c         (ref. 1).
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi),  -pi.lt.arg(z).le.pi
c           fnu    - order of initial i function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(j)=i(fnu+j-1,z), j=1,...,n
c                        = 2  returns
c                             cy(j)=i(fnu+j-1,z)*exp(-abs(x)), j=1,...,n
c           n      - number of members of the sequence, n.ge.1
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(j)=i(fnu+j-1,z)  or
c                    cy(j)=i(fnu+j-1,z)*exp(-abs(x))  j=1,...,n
c                    depending on kode, x=real(z)
c           nz     - number of components set to zero due to underflow,
c                    nz= 0   , normal return
c                    nz.gt.0 , last nz components of cy set to zero
c                              to underflow, cy(j)=cmplx(0.0d0,0.0d0)
c                              j = n-nz+1,...,n
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, real(z) too
c                            large on kode=1
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the power series for
c         small cabs(z), the asymptotic expansion for large cabs(z),
c         the miller algorithm normalized by the wronskian and a
c         neumann series for imtermediate magnitudes, and the
c         uniform asymptotic expansions for i(fnu,z) and j(fnu,z)
c         for large orders. backward recurrence is used to generate
c         sequences or reduce orders when necessary.
c
c         the calculations above are done in the right half plane and
c         continued into the left half plane by the formula
c
c         i(fnu,z*exp(m*pi)) = exp(m*pi*fnu)*i(fnu,z)  real(z).gt.0.0
c                       m = +i or -i,  i**2=-1
c
c         for negative orders,the formula
c
c              i(-fnu,z) = i(fnu,z) + (2/pi)*sin(pi*fnu)*k(fnu,z)
c
c         can be used. however,for large orders close to integers, the
c         the function changes radically. when fnu is a large positive
c         integer,the magnitude of i(-fnu,z)=i(fnu,z) is a large
c         negative power of ten. but when fnu is not an integer,
c         k(fnu,z) dominates in magnitude with a large positive power of
c         ten and the most that the second term can be reduced is by
c         unit roundoff from the coefficient. thus, wide changes can
c         occur within unit roundoff of a large integer for fnu. here,
c         large means fnu.gt.cabs(z).
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zbinu,i1mach,d1mach
c     complex cone,csgn,cw,cy,czero,z,zn
      double precision aa, alim, arg, conei, coner, csgni, csgnr, cyi,
     * cyr, dig, elim, fnu, fnul, pi, rl, r1m5, str, tol, zi, zni, znr,
     * zr, d1mach, az, bb, fn, zabs2, ascle, rtol, atol, sti
      integer i, ierr, inu, k, kode, k1,k2,n,nz,nn, i1mach
      dimension cyr(n), cyi(n)
      data pi /3.14159265358979324d0/
      data coner, conei /1.0d0,0.0d0/
c
      ierr = 0
      nz=0
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu.
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      rl = 1.2d0*dig + 3.0d0
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
c-----------------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      fn = fnu+dble(float(n-1))
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
      znr = zr
      zni = zi
      csgnr = coner
      csgni = conei
      if (zr.ge.0.0d0) go to 40
      znr = -zr
      zni = -zi
c-----------------------------------------------------------------------
c     calculate csgn=exp(fnu*pi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*pi
      if (zi.lt.0.0d0) arg = -arg
      csgnr = dcos(arg)
      csgni = dsin(arg)
      if (mod(inu,2).eq.0) go to 40
      csgnr = -csgnr
      csgni = -csgni
   40 continue
      call zbinu(znr, zni, fnu, kode, n, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      if (nz.lt.0) go to 120
      if (zr.ge.0.0d0) return
c-----------------------------------------------------------------------
c     analytic continuation to the left half plane
c-----------------------------------------------------------------------
      nn = n - nz
      if (nn.eq.0) return
      rtol = 1.0d0/tol
      ascle = d1mach(1)*rtol*1.0d+3
      do 50 i=1,nn
c       str = cyr(i)*csgnr - cyi(i)*csgni
c       cyi(i) = cyr(i)*csgni + cyi(i)*csgnr
c       cyr(i) = str
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 55
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   55   continue
        str = aa*csgnr - bb*csgni
        sti = aa*csgni + bb*csgnr
        cyr(i) = str*atol
        cyi(i) = sti*atol
        csgnr = -csgnr
        csgni = -csgni
   50 continue
      return
  120 continue
      if(nz.eq.(-2)) go to 130
      nz = 0
      ierr=2
      return
  130 continue
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesk(zr, zi, fnu, kode, n, cyr, cyi, nz, ierr)
c     k-Bessel function,complex bessel function,
c     modified bessel function of the second kind,
c     bessel function of the third kind
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbesk computes an n member sequence of complex
c         bessel functions cy(j)=k(fnu+j-1,z) for real, nonnegative
c         orders fnu+j-1, j=1,...,n and complex z.ne.cmplx(0.0,0.0)
c         in the cut plane -pi.lt.arg(z).le.pi. on kode=2, cbesk
c         returns the scaled k functions,
c
c         cy(j)=exp(z)*k(fnu+j-1,z) , j=1,...,n,
c
c         which remove the exponential behavior in both the left and
c         right half planes for z to infinity.
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi), z.ne.cmplx(0.0d0,0.0d0),
c                    -pi.lt.arg(z).le.pi
c           fnu    - order of initial k function, fnu.ge.0.0d0
c           n      - number of members of the sequence, n.ge.1
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(i)=k(fnu+i-1,z), i=1,...,n
c                        = 2  returns
c                             cy(i)=k(fnu+i-1,z)*exp(z), i=1,...,n
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(i)=k(fnu+i-1,z), i=1,...,n or
c                    cy(i)=k(fnu+i-1,z)*exp(z), i=1,...,n
c                    depending on kode
c           nz     - number of components set to zero due to underflow.
c                    nz= 0   , normal return
c                    nz.gt.0 , first nz components of cy set to zero due
c                              to underflow, cy(i)=cmplx(0.0d0,0.0d0),
c                              i=1,...,n when x.ge.0.0. when x.lt.0.0
c                              nz states only the number of underflows
c                              in the sequence.
c
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, fnu is
c                            too large or cabs(z) is too small or both
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         equations of the reference are implemented for small orders
c         dnu and dnu+1.0 in the right half plane x.ge.0.0. forward
c         recurrence generates higher orders. k is continued to the left
c         half plane by the relation
c
c         k(fnu,z*exp(mp)) = exp(-mp*fnu)*k(fnu,z)-mp*i(fnu,z)
c         mp=mr*pi*i, mr=+1 or -1, re(z).gt.0, i**2=-1
c
c         where i(fnu,z) is the i bessel function.
c
c         for large orders, fnu.gt.fnul, the k function is computed
c         by means of its uniform asymptotic expansions.
c
c         for negative orders, the formula
c
c                       k(-fnu,z) = k(fnu,z)
c
c         can be used.
c
c         cbesk assumes that a significant digit sinh(x) function is
c         available.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zacon,zbknu,zbunk,zuoik,zabs2,i1mach,d1mach
c
c     complex cy,z
      double precision aa, alim, aln, arg, az, cyi, cyr, dig, elim, fn,
     * fnu, fnul, rl, r1m5, tol, ufl, zi, zr, d1mach, zabs2, bb
      integer ierr, k, kode, k1, k2, mr, n, nn, nuf, nw, nz, i1mach
      dimension cyr(n), cyi(n)
c
      ierr = 0
      nz=0
      if (zi.eq.0.0e0 .and. zr.eq.0.0e0) ierr=1
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
      nn = n
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
      rl = 1.2d0*dig + 3.0d0
c-----------------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      fn = fnu + dble(float(nn-1))
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
c-----------------------------------------------------------------------
c     overflow test on the last member of the sequence
c-----------------------------------------------------------------------
c     ufl = dexp(-elim)
      ufl = d1mach(1)*1.0d+3
      if (az.lt.ufl) go to 180
      if (fnu.gt.fnul) go to 80
      if (fn.le.1.0d0) go to 60
      if (fn.gt.2.0d0) go to 50
      if (az.gt.tol) go to 60
      arg = 0.5d0*az
      aln = -fn*dlog(arg)
      if (aln.gt.elim) go to 180
      go to 60
   50 continue
      call zuoik(zr, zi, fnu, kode, 2, nn, cyr, cyi, nuf, tol, elim,
     * alim)
      if (nuf.lt.0) go to 180
      nz = nz + nuf
      nn = nn - nuf
c-----------------------------------------------------------------------
c     here nn=n or nn=0 since nuf=0,nn, or -1 on return from cuoik
c     if nuf=nn, then cy(i)=czero for all i
c-----------------------------------------------------------------------
      if (nn.eq.0) go to 100
   60 continue
      if (zr.lt.0.0d0) go to 70
c-----------------------------------------------------------------------
c     right half plane computation, real(z).ge.0.
c-----------------------------------------------------------------------
      call zbknu(zr, zi, fnu, kode, nn, cyr, cyi, nw, tol, elim, alim)
      if (nw.lt.0) go to 200
      nz=nw
      return
c-----------------------------------------------------------------------
c     left half plane computation
c     pi/2.lt.arg(z).le.pi and -pi.lt.arg(z).lt.-pi/2.
c-----------------------------------------------------------------------
   70 continue
      if (nz.ne.0) go to 180
      mr = 1
      if (zi.lt.0.0d0) mr = -1
      call zacon(zr, zi, fnu, kode, mr, nn, cyr, cyi, nw, rl, fnul,
     * tol, elim, alim)
      if (nw.lt.0) go to 200
      nz=nw
      return
c-----------------------------------------------------------------------
c     uniform asymptotic expansions for fnu.gt.fnul
c-----------------------------------------------------------------------
   80 continue
      mr = 0
      if (zr.ge.0.0d0) go to 90
      mr = 1
      if (zi.lt.0.0d0) mr = -1
   90 continue
      call zbunk(zr, zi, fnu, kode, mr, nn, cyr, cyi, nw, tol, elim,
     * alim)
      if (nw.lt.0) go to 200
      nz = nz + nw
      return
  100 continue
      if (zr.lt.0.0d0) go to 180
      return
  180 continue
      nz = 0
      ierr=2
      return
  200 continue
      if(nw.eq.(-1)) go to 180
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zasyi(zr, zi, fnu, kode, n, yr, yi, nz, rl, tol, elim,
     * alim)
c     modified for g77
      EXTERNAL zsqrt
      EXTERNAL zexp
c     Refer to  zbesi,zbesk
c
c     zasyi computes the i bessel function for real(z).ge.0.0 by
c     means of the asymptotic expansion for large cabs(z) in the
c     region cabs(z).gt.max(rl,fnu*fnu/2). nz=0 is a normal return.
c     nz.lt.0 indicates an overflow on kode=1.
c
c***routines called  d1mach,zabs2,zdiv,zexp,zmlt,zsqrt
c
c     complex ak1,ck,cone,cs1,cs2,cz,czero,dk,ez,p1,rz,s2,y,z
      double precision aa, aez, ak, ak1i, ak1r, alim, arg, arm, atol,
     * az, bb, bk, cki, ckr, conei, coner, cs1i, cs1r, cs2i, cs2r, czi,
     * czr, dfnu, dki, dkr, dnu2, elim, ezi, ezr, fdn, fnu, pi, p1i,
     * p1r, raz, rl, rtpi, rtr1, rzi, rzr, s, sgn, sqk, sti, str, s2i,
     * s2r, tol, tzi, tzr, yi, yr, zeroi, zeror, zi, zr, d1mach, zabs2
      integer i, ib, il, inu, j, jl, k, kode, koded, m, n, nn, nz
      dimension yr(n), yi(n)
      data pi, rtpi  /3.14159265358979324d0 , 0.159154943091895336d0 /
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
c
      nz = 0
      az = zabs2(zr,zi)
      arm = 1.0d+3*d1mach(1)
      rtr1 = dsqrt(arm)
      il = min0(2,n)
      dfnu = fnu + dble(float(n-il))
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      raz = 1.0d0/az
      str = zr*raz
      sti = -zi*raz
      ak1r = rtpi*str*raz
      ak1i = rtpi*sti*raz
      call zsqrt(ak1r, ak1i, ak1r, ak1i)
      czr = zr
      czi = zi
      if (kode.ne.2) go to 10
      czr = zeror
      czi = zi
   10 continue
      if (dabs(czr).gt.elim) go to 100
      dnu2 = dfnu + dfnu
      koded = 1
      if ((dabs(czr).gt.alim) .and. (n.gt.2)) go to 20
      koded = 0
      call zexp(czr, czi, str, sti)
      call zmlt(ak1r, ak1i, str, sti, ak1r, ak1i)
   20 continue
      fdn = 0.0d0
      if (dnu2.gt.rtr1) fdn = dnu2*dnu2
      ezr = zr*8.0d0
      ezi = zi*8.0d0
c-----------------------------------------------------------------------
c     when z is imaginary, the error test must be made relative to the
c     first reciprocal power since this is the leading term of the
c     expansion for the imaginary part.
c-----------------------------------------------------------------------
      aez = 8.0d0*az
      s = tol/aez
      jl = int(sngl(rl+rl)) + 2
      p1r = zeror
      p1i = zeroi
      if (zi.eq.0.0d0) go to 30
c-----------------------------------------------------------------------
c     calculate exp(pi*(0.5+fnu+n-il)*i) to minimize losses of
c     significance when fnu or n is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*pi
      inu = inu + n - il
      ak = -dsin(arg)
      bk = dcos(arg)
      if (zi.lt.0.0d0) bk = -bk
      p1r = ak
      p1i = bk
      if (mod(inu,2).eq.0) go to 30
      p1r = -p1r
      p1i = -p1i
   30 continue
      do 70 k=1,il
        sqk = fdn - 1.0d0
        atol = s*dabs(sqk)
        sgn = 1.0d0
        cs1r = coner
        cs1i = conei
        cs2r = coner
        cs2i = conei
        ckr = coner
        cki = conei
        ak = 0.0d0
        aa = 1.0d0
        bb = aez
        dkr = ezr
        dki = ezi
        do 40 j=1,jl
          call zdiv(ckr, cki, dkr, dki, str, sti)
          ckr = str*sqk
          cki = sti*sqk
          cs2r = cs2r + ckr
          cs2i = cs2i + cki
          sgn = -sgn
          cs1r = cs1r + ckr*sgn
          cs1i = cs1i + cki*sgn
          dkr = dkr + ezr
          dki = dki + ezi
          aa = aa*dabs(sqk)/bb
          bb = bb + aez
          ak = ak + 8.0d0
          sqk = sqk - ak
          if (aa.le.atol) go to 50
   40   continue
        go to 110
   50   continue
        s2r = cs1r
        s2i = cs1i
        if (zr+zr.ge.elim) go to 60
        tzr = zr + zr
        tzi = zi + zi
        call zexp(-tzr, -tzi, str, sti)
        call zmlt(str, sti, p1r, p1i, str, sti)
        call zmlt(str, sti, cs2r, cs2i, str, sti)
        s2r = s2r + str
        s2i = s2i + sti
   60   continue
        fdn = fdn + 8.0d0*dfnu + 4.0d0
        p1r = -p1r
        p1i = -p1i
        m = n - il + k
        yr(m) = s2r*ak1r - s2i*ak1i
        yi(m) = s2r*ak1i + s2i*ak1r
   70 continue
      if (n.le.2) return
      nn = n
      k = nn - 2
      ak = dble(float(k))
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      ib = 3
      do 80 i=ib,nn
        yr(k) = (ak+fnu)*(rzr*yr(k+1)-rzi*yi(k+1)) + yr(k+2)
        yi(k) = (ak+fnu)*(rzr*yi(k+1)+rzi*yr(k+1)) + yi(k+2)
        ak = ak - 1.0d0
        k = k - 1
   80 continue
      if (koded.eq.0) return
      call zexp(czr, czi, ckr, cki)
      do 90 i=1,nn
        str = yr(i)*ckr - yi(i)*cki
        yi(i) = yr(i)*cki + yi(i)*ckr
        yr(i) = str
   90 continue
      return
  100 continue
      nz = -1
      return
  110 continue
      nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbinu(zr, zi, fnu, kode, n, cyr, cyi, nz, rl, fnul,
     * tol, elim, alim)
c***refer to  zbesh,zbesi,zbesj,zbesk,zairy,zbiry
c
c     zbinu computes the i function in the right half z plane
c
c***routines called  zabs2,zasyi,zbuni,zmlri,zseri,zuoik,zwrsk
c
      double precision alim, az, cwi, cwr, cyi, cyr, dfnu, elim, fnu,
     * fnul, rl, tol, zeroi, zeror, zi, zr, zabs2
      integer i, inw, kode, n, nlast, nn, nui, nw, nz
      dimension cyr(n), cyi(n), cwr(2), cwi(2)
      data zeror,zeroi / 0.0d0, 0.0d0 /
c
      nz = 0
      az = zabs2(zr,zi)
      nn = n
      dfnu = fnu + dble(float(n-1))
      if (az.le.2.0d0) go to 10
      if (az*az*0.25d0.gt.dfnu+1.0d0) go to 20
   10 continue
c-----------------------------------------------------------------------
c     power series
c-----------------------------------------------------------------------
      call zseri(zr, zi, fnu, kode, nn, cyr, cyi, nw, tol, elim, alim)
      inw = iabs(nw)
      nz = nz + inw
      nn = nn - inw
      if (nn.eq.0) return
      if (nw.ge.0) go to 120
      dfnu = fnu + dble(float(nn-1))
   20 continue
      if (az.lt.rl) go to 40
      if (dfnu.le.1.0d0) go to 30
      if (az+az.lt.dfnu*dfnu) go to 50
c-----------------------------------------------------------------------
c     asymptotic expansion for large z
c-----------------------------------------------------------------------
   30 continue
      call zasyi(zr, zi, fnu, kode, nn, cyr, cyi, nw, rl, tol, elim,
     * alim)
      if (nw.lt.0) go to 130
      go to 120
   40 continue
      if (dfnu.le.1.0d0) go to 70
   50 continue
c-----------------------------------------------------------------------
c     overflow and underflow test on i sequence for miller algorithm
c-----------------------------------------------------------------------
      call zuoik(zr, zi, fnu, kode, 1, nn, cyr, cyi, nw, tol, elim,
     * alim)
      if (nw.lt.0) go to 130
      nz = nz + nw
      nn = nn - nw
      if (nn.eq.0) return
      dfnu = fnu+dble(float(nn-1))
      if (dfnu.gt.fnul) go to 110
      if (az.gt.fnul) go to 110
   60 continue
      if (az.gt.rl) go to 80
   70 continue
c-----------------------------------------------------------------------
c     miller algorithm normalized by the series
c-----------------------------------------------------------------------
      call zmlri(zr, zi, fnu, kode, nn, cyr, cyi, nw, tol)
      if(nw.lt.0) go to 130
      go to 120
   80 continue
c-----------------------------------------------------------------------
c     miller algorithm normalized by the wronskian
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
c     overflow test on k functions used in wronskian
c-----------------------------------------------------------------------
      call zuoik(zr, zi, fnu, kode, 2, 2, cwr, cwi, nw, tol, elim,
     * alim)
      if (nw.ge.0) go to 100
      nz = nn
      do 90 i=1,nn
        cyr(i) = zeror
        cyi(i) = zeroi
   90 continue
      return
  100 continue
      if (nw.gt.0) go to 130
      call zwrsk(zr, zi, fnu, kode, nn, cyr, cyi, nw, cwr, cwi, tol,
     * elim, alim)
      if (nw.lt.0) go to 130
      go to 120
  110 continue
c-----------------------------------------------------------------------
c     increment fnu+nn-1 up to fnul, compute and recur backward
c-----------------------------------------------------------------------
      nui = int(sngl(fnul-dfnu)) + 1
      nui = max0(nui,0)
      call zbuni(zr, zi, fnu, kode, nn, cyr, cyi, nw, nui, nlast, fnul,
     * tol, elim, alim)
      if (nw.lt.0) go to 130
      nz = nz + nw
      if (nlast.eq.0) go to 120
      nn = nlast
      go to 60
  120 continue
      return
  130 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbknu(zr, zi, fnu, kode, n, yr, yi, nz, tol, elim,
     * alim)
c     modified for g77
      EXTERNAL zsqrt
      EXTERNAL zexp
      EXTERNAL zlog
c     Refer to  zbesi,zbesk,zairy,zbesh
c
c     zbknu computes the k bessel function in the right half z plane.
c
c***routines called  dgamln,i1mach,d1mach,zkscl,zshch,zuchk,zabs2,zdiv,
c                    zexp,zlog,zmlt,zsqrt
c
      double precision aa, ak, alim, ascle, a1, a2, bb, bk, bry, caz,
     * cbi, cbr, cc, cchi, cchr, cki, ckr, coefi, coefr, conei, coner,
     * crscr, csclr, cshi, cshr, csi, csr, csrr, cssr, ctwor,
     * czeroi, czeror, czi, czr, dnu, dnu2, dpi, elim, etest, fc, fhs,
     * fi, fk, fks, fmui, fmur, fnu, fpi, fr, g1, g2, hpi, pi, pr, pti,
     * ptr, p1i, p1r, p2i, p2m, p2r, qi, qr, rak, rcaz, rthpi, rzi,
     * rzr, r1, s, smui, smur, spi, sti, str, s1i, s1r, s2i, s2r, tm,
     * tol, tth, t1, t2, yi, yr, zi, zr, dgamln, d1mach, zabs2, elm,
     * celmr, zdr, zdi, as, alas, helim, cyr, cyi
      integer i, iflag, inu, k, kflag, kk, kmax, kode, koded, n, nz,
     * idum, i1mach, j, ic, inub, nw
      dimension yr(n), yi(n), cc(8), cssr(3), csrr(3), bry(3), cyr(2),
     * cyi(2)
c     complex z,y,a,b,rz,smu,fu,fmu,f,flrz,cz,s1,s2,csh,cch
c     complex ck,p,q,coef,p1,p2,cbk,pt,czero,cone,ctwo,st,ez,cs,dk
c
      data kmax / 30 /
      data czeror,czeroi,coner,conei,ctwor,r1/
     1  0.0d0 , 0.0d0 , 1.0d0 , 0.0d0 , 2.0d0 , 2.0d0 /
      data dpi, rthpi, spi ,hpi, fpi, tth /
     1     3.14159265358979324d0,       1.25331413731550025d0,
     2     1.90985931710274403d0,       1.57079632679489662d0,
     3     1.89769999331517738d0,       6.66666666666666666d-01/
      data cc(1), cc(2), cc(3), cc(4), cc(5), cc(6), cc(7), cc(8)/
     1     5.77215664901532861d-01,    -4.20026350340952355d-02,
     2    -4.21977345555443367d-02,     7.21894324666309954d-03,
     3    -2.15241674114950973d-04,    -2.01348547807882387d-05,
     4     1.13302723198169588d-06,     6.11609510448141582d-09/
c
      caz = zabs2(zr,zi)
      csclr = 1.0d0/tol
      crscr = tol
      cssr(1) = csclr
      cssr(2) = 1.0d0
      cssr(3) = crscr
      csrr(1) = crscr
      csrr(2) = 1.0d0
      csrr(3) = csclr
      bry(1) = 1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      nz = 0
      iflag = 0
      koded = kode
      rcaz = 1.0d0/caz
      str = zr*rcaz
      sti = -zi*rcaz
      rzr = (str+str)*rcaz
      rzi = (sti+sti)*rcaz
      inu = int(sngl(fnu+0.5d0))
      dnu = fnu - dble(float(inu))
      if (dabs(dnu).eq.0.5d0) go to 110
      dnu2 = 0.0d0
      if (dabs(dnu).gt.tol) dnu2 = dnu*dnu
      if (caz.gt.r1) go to 110
c-----------------------------------------------------------------------
c     series for cabs(z).le.r1
c-----------------------------------------------------------------------
      fc = 1.0d0
      call zlog(rzr, rzi, smur, smui, idum)
      fmur = smur*dnu
      fmui = smui*dnu
      call zshch(fmur, fmui, cshr, cshi, cchr, cchi)
      if (dnu.eq.0.0d0) go to 10
      fc = dnu*dpi
      fc = fc/dsin(fc)
      smur = cshr/dnu
      smui = cshi/dnu
   10 continue
      a2 = 1.0d0 + dnu
c-----------------------------------------------------------------------
c     gam(1-z)*gam(1+z)=pi*z/sin(pi*z), t1=1/gam(1-dnu), t2=1/gam(1+dnu)
c-----------------------------------------------------------------------
      t2 = dexp(-dgamln(a2,idum))
      t1 = 1.0d0/(t2*fc)
      if (dabs(dnu).gt.0.1d0) go to 40
c-----------------------------------------------------------------------
c     series for f0 to resolve indeterminacy for small abs(dnu)
c-----------------------------------------------------------------------
      ak = 1.0d0
      s = cc(1)
      do 20 k=2,8
        ak = ak*dnu2
        tm = cc(k)*ak
        s = s + tm
        if (dabs(tm).lt.tol) go to 30
   20 continue
   30 g1 = -s
      go to 50
   40 continue
      g1 = (t1-t2)/(dnu+dnu)
   50 continue
      g2 = (t1+t2)*0.5d0
      fr = fc*(cchr*g1+smur*g2)
      fi = fc*(cchi*g1+smui*g2)
      call zexp(fmur, fmui, str, sti)
      pr = 0.5d0*str/t2
      pi = 0.5d0*sti/t2
      call zdiv(0.5d0, 0.0d0, str, sti, ptr, pti)
      qr = ptr/t1
      qi = pti/t1
      s1r = fr
      s1i = fi
      s2r = pr
      s2i = pi
      ak = 1.0d0
      a1 = 1.0d0
      ckr = coner
      cki = conei
      bk = 1.0d0 - dnu2
      if (inu.gt.0 .or. n.gt.1) go to 80
c-----------------------------------------------------------------------
c     generate k(fnu,z), 0.0d0 .le. fnu .lt. 0.5d0 and n=1
c-----------------------------------------------------------------------
      if (caz.lt.tol) go to 70
      call zmlt(zr, zi, zr, zi, czr, czi)
      czr = 0.25d0*czr
      czi = 0.25d0*czi
      t1 = 0.25d0*caz*caz
   60 continue
      fr = (fr*ak+pr+qr)/bk
      fi = (fi*ak+pi+qi)/bk
      str = 1.0d0/(ak-dnu)
      pr = pr*str
      pi = pi*str
      str = 1.0d0/(ak+dnu)
      qr = qr*str
      qi = qi*str
      str = ckr*czr - cki*czi
      rak = 1.0d0/ak
      cki = (ckr*czi+cki*czr)*rak
      ckr = str*rak
      s1r = ckr*fr - cki*fi + s1r
      s1i = ckr*fi + cki*fr + s1i
      a1 = a1*t1*rak
      bk = bk + ak + ak + 1.0d0
      ak = ak + 1.0d0
      if (a1.gt.tol) go to 60
   70 continue
      yr(1) = s1r
      yi(1) = s1i
      if (koded.eq.1) return
      call zexp(zr, zi, str, sti)
      call zmlt(s1r, s1i, str, sti, yr(1), yi(1))
      return
c-----------------------------------------------------------------------
c     generate k(dnu,z) and k(dnu+1,z) for forward recurrence
c-----------------------------------------------------------------------
   80 continue
      if (caz.lt.tol) go to 100
      call zmlt(zr, zi, zr, zi, czr, czi)
      czr = 0.25d0*czr
      czi = 0.25d0*czi
      t1 = 0.25d0*caz*caz
   90 continue
      fr = (fr*ak+pr+qr)/bk
      fi = (fi*ak+pi+qi)/bk
      str = 1.0d0/(ak-dnu)
      pr = pr*str
      pi = pi*str
      str = 1.0d0/(ak+dnu)
      qr = qr*str
      qi = qi*str
      str = ckr*czr - cki*czi
      rak = 1.0d0/ak
      cki = (ckr*czi+cki*czr)*rak
      ckr = str*rak
      s1r = ckr*fr - cki*fi + s1r
      s1i = ckr*fi + cki*fr + s1i
      str = pr - fr*ak
      sti = pi - fi*ak
      s2r = ckr*str - cki*sti + s2r
      s2i = ckr*sti + cki*str + s2i
      a1 = a1*t1*rak
      bk = bk + ak + ak + 1.0d0
      ak = ak + 1.0d0
      if (a1.gt.tol) go to 90
  100 continue
      kflag = 2
      a1 = fnu + 1.0d0
      ak = a1*dabs(smur)
      if (ak.gt.alim) kflag = 3
      str = cssr(kflag)
      p2r = s2r*str
      p2i = s2i*str
      call zmlt(p2r, p2i, rzr, rzi, s2r, s2i)
      s1r = s1r*str
      s1i = s1i*str
      if (koded.eq.1) go to 210
      call zexp(zr, zi, fr, fi)
      call zmlt(s1r, s1i, fr, fi, s1r, s1i)
      call zmlt(s2r, s2i, fr, fi, s2r, s2i)
      go to 210
c-----------------------------------------------------------------------
c     iflag=0 means no underflow occurred
c     iflag=1 means an underflow occurred- computation proceeds with
c     koded=2 and a test for on scale values is made during forward
c     recursion
c-----------------------------------------------------------------------
  110 continue
      call zsqrt(zr, zi, str, sti)
      call zdiv(rthpi, czeroi, str, sti, coefr, coefi)
      kflag = 2
      if (koded.eq.2) go to 120
      if (zr.gt.alim) go to 290
c     blank line
      str = dexp(-zr)*cssr(kflag)
      sti = -str*dsin(zi)
      str = str*dcos(zi)
      call zmlt(coefr, coefi, str, sti, coefr, coefi)
  120 continue
      if (dabs(dnu).eq.0.5d0) go to 300
c-----------------------------------------------------------------------
c     miller algorithm for cabs(z).gt.r1
c-----------------------------------------------------------------------
      ak = dcos(dpi*dnu)
      ak = dabs(ak)
      if (ak.eq.czeror) go to 300
      fhs = dabs(0.25d0-dnu2)
      if (fhs.eq.czeror) go to 300
c-----------------------------------------------------------------------
c     compute r2=f(e). if cabs(z).ge.r2, use forward recurrence to
c     determine the backward index k. r2=f(e) is a straight line on
c     12.le.e.le.60. e is computed from 2**(-e)=b**(1-i1mach(14))=
c     tol where b is the base of the arithmetic.
c-----------------------------------------------------------------------
      t1 = dble(float(i1mach(14)-1))
      t1 = t1*d1mach(5)*3.321928094d0
      t1 = dmax1(t1,12.0d0)
      t1 = dmin1(t1,60.0d0)
      t2 = tth*t1 - 6.0d0
      if (zr.ne.0.0d0) go to 130
      t1 = hpi
      go to 140
  130 continue
      t1 = datan(zi/zr)
      t1 = dabs(t1)
  140 continue
      if (t2.gt.caz) go to 170
c-----------------------------------------------------------------------
c     forward recurrence loop when cabs(z).ge.r2
c-----------------------------------------------------------------------
      etest = ak/(dpi*caz*tol)
      fk = coner
      if (etest.lt.coner) go to 180
      fks = ctwor
      ckr = caz + caz + ctwor
      p1r = czeror
      p2r = coner
      do 150 i=1,kmax
        ak = fhs/fks
        cbr = ckr/(fk+coner)
        ptr = p2r
        p2r = cbr*p2r - p1r*ak
        p1r = ptr
        ckr = ckr + ctwor
        fks = fks + fk + fk + ctwor
        fhs = fhs + fk + fk
        fk = fk + coner
        str = dabs(p2r)*fk
        if (etest.lt.str) go to 160
  150 continue
      go to 310
  160 continue
      fk = fk + spi*t1*dsqrt(t2/caz)
      fhs = dabs(0.25d0-dnu2)
      go to 180
  170 continue
c-----------------------------------------------------------------------
c     compute backward index k for cabs(z).lt.r2
c-----------------------------------------------------------------------
      a2 = dsqrt(caz)
      ak = fpi*ak/(tol*dsqrt(a2))
      aa = 3.0d0*t1/(1.0d0+caz)
      bb = 14.7d0*t1/(28.0d0+caz)
      ak = (dlog(ak)+caz*dcos(aa)/(1.0d0+0.008d0*caz))/dcos(bb)
      fk = 0.12125d0*ak*ak/caz + 1.5d0
  180 continue
c-----------------------------------------------------------------------
c     backward recurrence loop for miller algorithm
c-----------------------------------------------------------------------
      k = int(sngl(fk))
      fk = dble(float(k))
      fks = fk*fk
      p1r = czeror
      p1i = czeroi
      p2r = tol
      p2i = czeroi
      csr = p2r
      csi = p2i
      do 190 i=1,k
        a1 = fks - fk
        ak = (fks+fk)/(a1+fhs)
        rak = 2.0d0/(fk+coner)
        cbr = (fk+zr)*rak
        cbi = zi*rak
        ptr = p2r
        pti = p2i
        p2r = (ptr*cbr-pti*cbi-p1r)*ak
        p2i = (pti*cbr+ptr*cbi-p1i)*ak
        p1r = ptr
        p1i = pti
        csr = csr + p2r
        csi = csi + p2i
        fks = a1 - fk + coner
        fk = fk - coner
  190 continue
c-----------------------------------------------------------------------
c     compute (p2/cs)=(p2/cabs(cs))*(conjg(cs)/cabs(cs)) for better
c     scaling
c-----------------------------------------------------------------------
      tm = zabs2(csr,csi)
      ptr = 1.0d0/tm
      s1r = p2r*ptr
      s1i = p2i*ptr
      csr = csr*ptr
      csi = -csi*ptr
      call zmlt(coefr, coefi, s1r, s1i, str, sti)
      call zmlt(str, sti, csr, csi, s1r, s1i)
      if (inu.gt.0 .or. n.gt.1) go to 200
      zdr = zr
      zdi = zi
      if(iflag.eq.1) go to 270
      go to 240
  200 continue
c-----------------------------------------------------------------------
c     compute p1/p2=(p1/cabs(p2)*conjg(p2)/cabs(p2) for scaling
c-----------------------------------------------------------------------
      tm = zabs2(p2r,p2i)
      ptr = 1.0d0/tm
      p1r = p1r*ptr
      p1i = p1i*ptr
      p2r = p2r*ptr
      p2i = -p2i*ptr
      call zmlt(p1r, p1i, p2r, p2i, ptr, pti)
      str = dnu + 0.5d0 - ptr
      sti = -pti
      call zdiv(str, sti, zr, zi, str, sti)
      str = str + 1.0d0
      call zmlt(str, sti, s1r, s1i, s2r, s2i)
c-----------------------------------------------------------------------
c     forward recursion on the three term recursion with relation with
c     scaling near exponent extremes on kflag=1 or kflag=3
c-----------------------------------------------------------------------
  210 continue
      str = dnu + 1.0d0
      ckr = str*rzr
      cki = str*rzi
      if (n.eq.1) inu = inu - 1
      if (inu.gt.0) go to 220
      if (n.gt.1) go to 215
      s1r = s2r
      s1i = s2i
  215 continue
      zdr = zr
      zdi = zi
      if(iflag.eq.1) go to 270
      go to 240
  220 continue
      inub = 1
      if(iflag.eq.1) go to 261
  225 continue
      p1r = csrr(kflag)
      ascle = bry(kflag)
      do 230 i=inub,inu
        str = s2r
        sti = s2i
        s2r = ckr*str - cki*sti + s1r
        s2i = ckr*sti + cki*str + s1i
        s1r = str
        s1i = sti
        ckr = ckr + rzr
        cki = cki + rzi
        if (kflag.ge.3) go to 230
        p2r = s2r*p1r
        p2i = s2i*p1r
        str = dabs(p2r)
        sti = dabs(p2i)
        p2m = dmax1(str,sti)
        if (p2m.le.ascle) go to 230
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*p1r
        s1i = s1i*p1r
        s2r = p2r
        s2i = p2i
        str = cssr(kflag)
        s1r = s1r*str
        s1i = s1i*str
        s2r = s2r*str
        s2i = s2i*str
        p1r = csrr(kflag)
  230 continue
      if (n.ne.1) go to 240
      s1r = s2r
      s1i = s2i
  240 continue
      str = csrr(kflag)
      yr(1) = s1r*str
      yi(1) = s1i*str
      if (n.eq.1) return
      yr(2) = s2r*str
      yi(2) = s2i*str
      if (n.eq.2) return
      kk = 2
  250 continue
      kk = kk + 1
      if (kk.gt.n) return
      p1r = csrr(kflag)
      ascle = bry(kflag)
      do 260 i=kk,n
        p2r = s2r
        p2i = s2i
        s2r = ckr*p2r - cki*p2i + s1r
        s2i = cki*p2r + ckr*p2i + s1i
        s1r = p2r
        s1i = p2i
        ckr = ckr + rzr
        cki = cki + rzi
        p2r = s2r*p1r
        p2i = s2i*p1r
        yr(i) = p2r
        yi(i) = p2i
        if (kflag.ge.3) go to 260
        str = dabs(p2r)
        sti = dabs(p2i)
        p2m = dmax1(str,sti)
        if (p2m.le.ascle) go to 260
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*p1r
        s1i = s1i*p1r
        s2r = p2r
        s2i = p2i
        str = cssr(kflag)
        s1r = s1r*str
        s1i = s1i*str
        s2r = s2r*str
        s2i = s2i*str
        p1r = csrr(kflag)
  260 continue
      return
c-----------------------------------------------------------------------
c     iflag=1 cases, forward recurrence on scaled values on underflow
c-----------------------------------------------------------------------
  261 continue
      helim = 0.5d0*elim
      elm = dexp(-elim)
      celmr = elm
      ascle = bry(1)
      zdr = zr
      zdi = zi
      ic = -1
      j = 2
      do 262 i=1,inu
        str = s2r
        sti = s2i
        s2r = str*ckr-sti*cki+s1r
        s2i = sti*ckr+str*cki+s1i
        s1r = str
        s1i = sti
        ckr = ckr+rzr
        cki = cki+rzi
        as = zabs2(s2r,s2i)
        alas = dlog(as)
        p2r = -zdr+alas
        if(p2r.lt.(-elim)) go to 263
        call zlog(s2r,s2i,str,sti,idum)
        p2r = -zdr+str
        p2i = -zdi+sti
        p2m = dexp(p2r)/tol
        p1r = p2m*dcos(p2i)
        p1i = p2m*dsin(p2i)
        call zuchk(p1r,p1i,nw,ascle,tol)
        if(nw.ne.0) go to 263
        j = 3 - j
        cyr(j) = p1r
        cyi(j) = p1i
        if(ic.eq.(i-1)) go to 264
        ic = i
        go to 262
  263   continue
        if(alas.lt.helim) go to 262
        zdr = zdr-elim
        s1r = s1r*celmr
        s1i = s1i*celmr
        s2r = s2r*celmr
        s2i = s2i*celmr
  262 continue
      if(n.ne.1) go to 270
      s1r = s2r
      s1i = s2i
      go to 270
  264 continue
      kflag = 1
      inub = i+1
      s2r = cyr(j)
      s2i = cyi(j)
      j = 3 - j
      s1r = cyr(j)
      s1i = cyi(j)
      if(inub.le.inu) go to 225
      if(n.ne.1) go to 240
      s1r = s2r
      s1i = s2i
      go to 240
  270 continue
      yr(1) = s1r
      yi(1) = s1i
      if(n.eq.1) go to 280
      yr(2) = s2r
      yi(2) = s2i
  280 continue
      ascle = bry(1)
      call zkscl(zdr,zdi,fnu,n,yr,yi,nz,rzr,rzi,ascle,tol,elim)
      inu = n - nz
      if (inu.le.0) return
      kk = nz + 1
      s1r = yr(kk)
      s1i = yi(kk)
      yr(kk) = s1r*csrr(1)
      yi(kk) = s1i*csrr(1)
      if (inu.eq.1) return
      kk = nz + 2
      s2r = yr(kk)
      s2i = yi(kk)
      yr(kk) = s2r*csrr(1)
      yi(kk) = s2i*csrr(1)
      if (inu.eq.2) return
      t2 = fnu + dble(float(kk-1))
      ckr = t2*rzr
      cki = t2*rzi
      kflag = 1
      go to 250
  290 continue
c-----------------------------------------------------------------------
c     scale by dexp(z), iflag = 1 cases
c-----------------------------------------------------------------------
      koded = 2
      iflag = 1
      kflag = 2
      go to 120
c-----------------------------------------------------------------------
c     fnu=half odd integer case, dnu=-0.5
c-----------------------------------------------------------------------
  300 continue
      s1r = coefr
      s1i = coefi
      s2r = coefr
      s2i = coefi
      go to 210
c
c
  310 continue
      nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbuni(zr, zi, fnu, kode, n, yr, yi, nz, nui, nlast,
     * fnul, tol, elim, alim)
c     Refer to  zbesi,zbesk
c
c     zbuni computes the i bessel function for large cabs(z).gt.
c     fnul and fnu+n-1.lt.fnul. the order is increased from
c     fnu+n-1 greater than fnul by adding nui and computing
c     according to the uniform asymptotic expansion for i(fnu,z)
c     on iform=1 and the expansion for j(fnu,z) on iform=2
c
c***routines called  zuni1,zuni2,zabs2,d1mach
c
c     complex cscl,cscr,cy,rz,st,s1,s2,y,z
      double precision alim, ax, ay, csclr, cscrr, cyi, cyr, dfnu,
     * elim, fnu, fnui, fnul, gnu, raz, rzi, rzr, sti, str, s1i, s1r,
     * s2i, s2r, tol, yi, yr, zi, zr, zabs2, ascle, bry, c1r, c1i, c1m,
     * d1mach
      integer i, iflag, iform, k, kode, n, nl, nlast, nui, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2), bry(3)
      nz = 0
      ax = dabs(zr)*1.7321d0
      ay = dabs(zi)
      iform = 1
      if (ay.gt.ax) iform = 2
      if (nui.eq.0) go to 60
      fnui = dble(float(nui))
      dfnu = fnu + dble(float(n-1))
      gnu = dfnu + fnui
      if (iform.eq.2) go to 10
c-----------------------------------------------------------------------
c     asymptotic expansion for i(fnu,z) for large fnu applied in
c     -pi/3.le.arg(z).le.pi/3
c-----------------------------------------------------------------------
      call zuni1(zr, zi, gnu, kode, 2, cyr, cyi, nw, nlast, fnul, tol,
     * elim, alim)
      go to 20
   10 continue
c-----------------------------------------------------------------------
c     asymptotic expansion for j(fnu,z*exp(m*hpi)) for large fnu
c     applied in pi/3.lt.abs(arg(z)).le.pi/2 where m=+i or -i
c     and hpi=pi/2
c-----------------------------------------------------------------------
      call zuni2(zr, zi, gnu, kode, 2, cyr, cyi, nw, nlast, fnul, tol,
     * elim, alim)
   20 continue
      if (nw.lt.0) go to 50
      if (nw.ne.0) go to 90
      str = zabs2(cyr(1),cyi(1))
c----------------------------------------------------------------------
c     scale backward recurrence, bry(3) is defined but never used
c----------------------------------------------------------------------
      bry(1)=1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = bry(2)
      iflag = 2
      ascle = bry(2)
      csclr = 1.0d0
      if (str.gt.bry(1)) go to 21
      iflag = 1
      ascle = bry(1)
      csclr = 1.0d0/tol
      go to 25
   21 continue
      if (str.lt.bry(2)) go to 25
      iflag = 3
      ascle=bry(3)
      csclr = tol
   25 continue
      cscrr = 1.0d0/csclr
      s1r = cyr(2)*csclr
      s1i = cyi(2)*csclr
      s2r = cyr(1)*csclr
      s2i = cyi(1)*csclr
      raz = 1.0d0/zabs2(zr,zi)
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      do 30 i=1,nui
        str = s2r
        sti = s2i
        s2r = (dfnu+fnui)*(rzr*str-rzi*sti) + s1r
        s2i = (dfnu+fnui)*(rzr*sti+rzi*str) + s1i
        s1r = str
        s1i = sti
        fnui = fnui - 1.0d0
        if (iflag.ge.3) go to 30
        str = s2r*cscrr
        sti = s2i*cscrr
        c1r = dabs(str)
        c1i = dabs(sti)
        c1m = dmax1(c1r,c1i)
        if (c1m.le.ascle) go to 30
        iflag = iflag+1
        ascle = bry(iflag)
        s1r = s1r*cscrr
        s1i = s1i*cscrr
        s2r = str
        s2i = sti
        csclr = csclr*tol
        cscrr = 1.0d0/csclr
        s1r = s1r*csclr
        s1i = s1i*csclr
        s2r = s2r*csclr
        s2i = s2i*csclr
   30 continue
      yr(n) = s2r*cscrr
      yi(n) = s2i*cscrr
      if (n.eq.1) return
      nl = n - 1
      fnui = dble(float(nl))
      k = nl
      do 40 i=1,nl
        str = s2r
        sti = s2i
        s2r = (fnu+fnui)*(rzr*str-rzi*sti) + s1r
        s2i = (fnu+fnui)*(rzr*sti+rzi*str) + s1i
        s1r = str
        s1i = sti
        str = s2r*cscrr
        sti = s2i*cscrr
        yr(k) = str
        yi(k) = sti
        fnui = fnui - 1.0d0
        k = k - 1
        if (iflag.ge.3) go to 40
        c1r = dabs(str)
        c1i = dabs(sti)
        c1m = dmax1(c1r,c1i)
        if (c1m.le.ascle) go to 40
        iflag = iflag+1
        ascle = bry(iflag)
        s1r = s1r*cscrr
        s1i = s1i*cscrr
        s2r = str
        s2i = sti
        csclr = csclr*tol
        cscrr = 1.0d0/csclr
        s1r = s1r*csclr
        s1i = s1i*csclr
        s2r = s2r*csclr
        s2i = s2i*csclr
   40 continue
      return
   50 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
   60 continue
      if (iform.eq.2) go to 70
c-----------------------------------------------------------------------
c     asymptotic expansion for i(fnu,z) for large fnu applied in
c     -pi/3.le.arg(z).le.pi/3
c-----------------------------------------------------------------------
      call zuni1(zr, zi, fnu, kode, n, yr, yi, nw, nlast, fnul, tol,
     * elim, alim)
      go to 80
   70 continue
c-----------------------------------------------------------------------
c     asymptotic expansion for j(fnu,z*exp(m*hpi)) for large fnu
c     applied in pi/3.lt.abs(arg(z)).le.pi/2 where m=+i or -i
c     and hpi=pi/2
c-----------------------------------------------------------------------
      call zuni2(zr, zi, fnu, kode, n, yr, yi, nw, nlast, fnul, tol,
     * elim, alim)
   80 continue
      if (nw.lt.0) go to 50
      nz = nw
      return
   90 continue
      nlast = n
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbunk(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim,
     * alim)
c     Refer to  zbesk,zbesh
c
c     zbunk computes the k bessel function for fnu.gt.fnul.
c     according to the uniform asymptotic expansion for k(fnu,z)
c     in zunk1 and the expansion for h(2,fnu,z) in zunk2
c
c***routines called  zunk1,zunk2
c
c     complex y,z
      double precision alim, ax, ay, elim, fnu, tol, yi, yr, zi, zr
      integer kode, mr, n, nz
      dimension yr(n), yi(n)
      nz = 0
      ax = dabs(zr)*1.7321d0
      ay = dabs(zi)
      if (ay.gt.ax) go to 10
c-----------------------------------------------------------------------
c     asymptotic expansion for k(fnu,z) for large fnu applied in
c     -pi/3.le.arg(z).le.pi/3
c-----------------------------------------------------------------------
      call zunk1(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim, alim)
      go to 20
   10 continue
c-----------------------------------------------------------------------
c     asymptotic expansion for h(2,fnu,z*exp(m*hpi)) for large fnu
c     applied in pi/3.lt.abs(arg(z)).le.pi/2 where m=+i or -i
c     and hpi=pi/2
c-----------------------------------------------------------------------
      call zunk2(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim, alim)
   20 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zmlri(zr, zi, fnu, kode, n, yr, yi, nz, tol)
c     modified for g77
      EXTERNAL zexp
      EXTERNAL zlog
c     Refer to  zbesi,zbesk
c
c     zmlri computes the i bessel function for re(z).ge.0.0 by the
c     miller algorithm normalized by a neumann series.
c
c***routines called  dgamln,d1mach,zabs2,zexp,zlog,zmlt
c
c     complex ck,cnorm,cone,ctwo,czero,pt,p1,p2,rz,sum,y,z
      double precision ack, ak, ap, at, az, bk, cki, ckr, cnormi,
     * cnormr, conei, coner, fkap, fkk, flam, fnf, fnu, pti, ptr, p1i,
     * p1r, p2i, p2r, raz, rho, rho2, rzi, rzr, scle, sti, str, sumi,
     * sumr, tfnf, tol, tst, yi, yr, zeroi, zeror, zi, zr, dgamln,
     * d1mach, zabs2
      integer i, iaz, idum, ifnu, inu, itime, k, kk, km, kode, m, n, nz
      dimension yr(n), yi(n)
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
      scle = d1mach(1)/tol
      nz=0
      az = zabs2(zr,zi)
      iaz = int(sngl(az))
      ifnu = int(sngl(fnu))
      inu = ifnu + n - 1
      at = dble(float(iaz)) + 1.0d0
      raz = 1.0d0/az
      str = zr*raz
      sti = -zi*raz
      ckr = str*at*raz
      cki = sti*at*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      p1r = zeror
      p1i = zeroi
      p2r = coner
      p2i = conei
      ack = (at+1.0d0)*raz
      rho = ack + dsqrt(ack*ack-1.0d0)
      rho2 = rho*rho
      tst = (rho2+rho2)/((rho2-1.0d0)*(rho-1.0d0))
      tst = tst/tol
c-----------------------------------------------------------------------
c     compute relative truncation error index for series
c-----------------------------------------------------------------------
      ak = at
      do 10 i=1,80
        ptr = p2r
        pti = p2i
        p2r = p1r - (ckr*ptr-cki*pti)
        p2i = p1i - (cki*ptr+ckr*pti)
        p1r = ptr
        p1i = pti
        ckr = ckr + rzr
        cki = cki + rzi
        ap = zabs2(p2r,p2i)
        if (ap.gt.tst*ak*ak) go to 20
        ak = ak + 1.0d0
   10 continue
      go to 110
   20 continue
      i = i + 1
      k = 0
      if (inu.lt.iaz) go to 40
c-----------------------------------------------------------------------
c     compute relative truncation error for ratios
c-----------------------------------------------------------------------
      p1r = zeror
      p1i = zeroi
      p2r = coner
      p2i = conei
      at = dble(float(inu)) + 1.0d0
      str = zr*raz
      sti = -zi*raz
      ckr = str*at*raz
      cki = sti*at*raz
      ack = at*raz
      tst = dsqrt(ack/tol)
      itime = 1
      do 30 k=1,80
        ptr = p2r
        pti = p2i
        p2r = p1r - (ckr*ptr-cki*pti)
        p2i = p1i - (ckr*pti+cki*ptr)
        p1r = ptr
        p1i = pti
        ckr = ckr + rzr
        cki = cki + rzi
        ap = zabs2(p2r,p2i)
        if (ap.lt.tst) go to 30
        if (itime.eq.2) go to 40
        ack = zabs2(ckr,cki)
        flam = ack + dsqrt(ack*ack-1.0d0)
        fkap = ap/zabs2(p1r,p1i)
        rho = dmin1(flam,fkap)
        tst = tst*dsqrt(rho/(rho*rho-1.0d0))
        itime = 2
   30 continue
      go to 110
   40 continue
c-----------------------------------------------------------------------
c     backward recurrence and sum normalizing relation
c-----------------------------------------------------------------------
      k = k + 1
      kk = max0(i+iaz,k+inu)
      fkk = dble(float(kk))
      p1r = zeror
      p1i = zeroi
c-----------------------------------------------------------------------
c     scale p2 and sum by scle
c-----------------------------------------------------------------------
      p2r = scle
      p2i = zeroi
      fnf = fnu - dble(float(ifnu))
      tfnf = fnf + fnf
      bk = dgamln(fkk+tfnf+1.0d0,idum) - dgamln(fkk+1.0d0,idum) -
     * dgamln(tfnf+1.0d0,idum)
      bk = dexp(bk)
      sumr = zeror
      sumi = zeroi
      km = kk - inu
      do 50 i=1,km
        ptr = p2r
        pti = p2i
        p2r = p1r + (fkk+fnf)*(rzr*ptr-rzi*pti)
        p2i = p1i + (fkk+fnf)*(rzi*ptr+rzr*pti)
        p1r = ptr
        p1i = pti
        ak = 1.0d0 - tfnf/(fkk+tfnf)
        ack = bk*ak
        sumr = sumr + (ack+bk)*p1r
        sumi = sumi + (ack+bk)*p1i
        bk = ack
        fkk = fkk - 1.0d0
   50 continue
      yr(n) = p2r
      yi(n) = p2i
      if (n.eq.1) go to 70
      do 60 i=2,n
        ptr = p2r
        pti = p2i
        p2r = p1r + (fkk+fnf)*(rzr*ptr-rzi*pti)
        p2i = p1i + (fkk+fnf)*(rzi*ptr+rzr*pti)
        p1r = ptr
        p1i = pti
        ak = 1.0d0 - tfnf/(fkk+tfnf)
        ack = bk*ak
        sumr = sumr + (ack+bk)*p1r
        sumi = sumi + (ack+bk)*p1i
        bk = ack
        fkk = fkk - 1.0d0
        m = n - i + 1
        yr(m) = p2r
        yi(m) = p2i
   60 continue
   70 continue
      if (ifnu.le.0) go to 90
      do 80 i=1,ifnu
        ptr = p2r
        pti = p2i
        p2r = p1r + (fkk+fnf)*(rzr*ptr-rzi*pti)
        p2i = p1i + (fkk+fnf)*(rzr*pti+rzi*ptr)
        p1r = ptr
        p1i = pti
        ak = 1.0d0 - tfnf/(fkk+tfnf)
        ack = bk*ak
        sumr = sumr + (ack+bk)*p1r
        sumi = sumi + (ack+bk)*p1i
        bk = ack
        fkk = fkk - 1.0d0
   80 continue
   90 continue
      ptr = zr
      pti = zi
      if (kode.eq.2) ptr = zeror
      call zlog(rzr, rzi, str, sti, idum)
      p1r = -fnf*str + ptr
      p1i = -fnf*sti + pti
      ap = dgamln(1.0d0+fnf,idum)
      ptr = p1r - ap
      pti = p1i
c-----------------------------------------------------------------------
c     the division cexp(pt)/(sum+p2) is altered to avoid overflow
c     in the denominator by squaring large quantities
c-----------------------------------------------------------------------
      p2r = p2r + sumr
      p2i = p2i + sumi
      ap = zabs2(p2r,p2i)
      p1r = 1.0d0/ap
      call zexp(ptr, pti, str, sti)
      ckr = str*p1r
      cki = sti*p1r
      ptr = p2r*p1r
      pti = -p2i*p1r
      call zmlt(ckr, cki, ptr, pti, cnormr, cnormi)
      do 100 i=1,n
        str = yr(i)*cnormr - yi(i)*cnormi
        yi(i) = yr(i)*cnormi + yi(i)*cnormr
        yr(i) = str
  100 continue
      return
  110 continue
      nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zseri(zr, zi, fnu, kode, n, yr, yi, nz, tol, elim,
     * alim)
c     modified for g77
      EXTERNAL zlog
c     Refer to  zbesi,zbesk
c
c     zseri computes the i bessel function for real(z).ge.0.0 by
c     means of the power series for large cabs(z) in the
c     region cabs(z).le.2*sqrt(fnu+1). nz=0 is a normal return.
c     nz.gt.0 means that the last nz components were set to zero
c     due to underflow. nz.lt.0 means underflow occurred, but the
c     condition cabs(z).le.2*sqrt(fnu+1) was violated and the
c     computation must be completed in another routine with n=n-abs(nz).
c
c***routines called  dgamln,d1mach,zuchk,zabs2,zdiv,zlog,zmlt
c
c     complex ak1,ck,coef,cone,crsc,cscl,cz,czero,hz,rz,s1,s2,y,z
      double precision aa, acz, ak, ak1i, ak1r, alim, arm, ascle, atol,
     * az, cki, ckr, coefi, coefr, conei, coner, crscr, czi, czr, dfnu,
     * elim, fnu, fnup, hzi, hzr, raz, rs, rtr1, rzi, rzr, s, ss, sti,
     * str, s1i, s1r, s2i, s2r, tol, yi, yr, wi, wr, zeroi, zeror, zi,
     * zr, dgamln, d1mach, zabs2
      integer i, ib, idum, iflag, il, k, kode, l, m, n, nn, nz, nw
      dimension yr(n), yi(n), wr(2), wi(2)
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
c
      nz = 0
      az = zabs2(zr,zi)
      if (az.eq.0.0d0) go to 160
      arm = 1.0d+3*d1mach(1)
      rtr1 = dsqrt(arm)
      crscr = 1.0d0
      iflag = 0
      if (az.lt.arm) go to 150
      hzr = 0.5d0*zr
      hzi = 0.5d0*zi
      czr = zeror
      czi = zeroi
      if (az.le.rtr1) go to 10
      call zmlt(hzr, hzi, hzr, hzi, czr, czi)
   10 continue
      acz = zabs2(czr,czi)
      nn = n
      call zlog(hzr, hzi, ckr, cki, idum)
   20 continue
      dfnu = fnu + dble(float(nn-1))
      fnup = dfnu + 1.0d0
c-----------------------------------------------------------------------
c     underflow test
c-----------------------------------------------------------------------
      ak1r = ckr*dfnu
      ak1i = cki*dfnu
      ak = dgamln(fnup,idum)
      ak1r = ak1r - ak
      if (kode.eq.2) ak1r = ak1r - zr
      if (ak1r.gt.(-elim)) go to 40
   30 continue
      nz = nz + 1
      yr(nn) = zeror
      yi(nn) = zeroi
      if (acz.gt.dfnu) go to 190
      nn = nn - 1
      if (nn.eq.0) return
      go to 20
   40 continue
      if (ak1r.gt.(-alim)) go to 50
      iflag = 1
      ss = 1.0d0/tol
      crscr = tol
      ascle = arm*ss
   50 continue
      aa = dexp(ak1r)
      if (iflag.eq.1) aa = aa*ss
      coefr = aa*dcos(ak1i)
      coefi = aa*dsin(ak1i)
      atol = tol*acz/fnup
      il = min0(2,nn)
      do 90 i=1,il
        dfnu = fnu + dble(float(nn-i))
        fnup = dfnu + 1.0d0
        s1r = coner
        s1i = conei
        if (acz.lt.tol*fnup) go to 70
        ak1r = coner
        ak1i = conei
        ak = fnup + 2.0d0
        s = fnup
        aa = 2.0d0
   60   continue
        rs = 1.0d0/s
        str = ak1r*czr - ak1i*czi
        sti = ak1r*czi + ak1i*czr
        ak1r = str*rs
        ak1i = sti*rs
        s1r = s1r + ak1r
        s1i = s1i + ak1i
        s = s + ak
        ak = ak + 2.0d0
        aa = aa*acz*rs
        if (aa.gt.atol) go to 60
   70   continue
        s2r = s1r*coefr - s1i*coefi
        s2i = s1r*coefi + s1i*coefr
        wr(i) = s2r
        wi(i) = s2i
        if (iflag.eq.0) go to 80
        call zuchk(s2r, s2i, nw, ascle, tol)
        if (nw.ne.0) go to 30
   80   continue
        m = nn - i + 1
        yr(m) = s2r*crscr
        yi(m) = s2i*crscr
        if (i.eq.il) go to 90
        call zdiv(coefr, coefi, hzr, hzi, str, sti)
        coefr = str*dfnu
        coefi = sti*dfnu
   90 continue
      if (nn.le.2) return
      k = nn - 2
      ak = dble(float(k))
      raz = 1.0d0/az
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      if (iflag.eq.1) go to 120
      ib = 3
  100 continue
      do 110 i=ib,nn
        yr(k) = (ak+fnu)*(rzr*yr(k+1)-rzi*yi(k+1)) + yr(k+2)
        yi(k) = (ak+fnu)*(rzr*yi(k+1)+rzi*yr(k+1)) + yi(k+2)
        ak = ak - 1.0d0
        k = k - 1
  110 continue
      return
c-----------------------------------------------------------------------
c     recur backward with scaled values
c-----------------------------------------------------------------------
  120 continue
c-----------------------------------------------------------------------
c     exp(-alim)=exp(-elim)/tol=approx. one precision above the
c     underflow limit = ascle = d1mach(1)*ss*1.0d+3
c-----------------------------------------------------------------------
      s1r = wr(1)
      s1i = wi(1)
      s2r = wr(2)
      s2i = wi(2)
      do 130 l=3,nn
        ckr = s2r
        cki = s2i
        s2r = s1r + (ak+fnu)*(rzr*ckr-rzi*cki)
        s2i = s1i + (ak+fnu)*(rzr*cki+rzi*ckr)
        s1r = ckr
        s1i = cki
        ckr = s2r*crscr
        cki = s2i*crscr
        yr(k) = ckr
        yi(k) = cki
        ak = ak - 1.0d0
        k = k - 1
        if (zabs2(ckr,cki).gt.ascle) go to 140
  130 continue
      return
  140 continue
      ib = l + 1
      if (ib.gt.nn) return
      go to 100
  150 continue
      nz = n
      if (fnu.eq.0.0d0) nz = nz - 1
  160 continue
      yr(1) = zeror
      yi(1) = zeroi
      if (fnu.ne.0.0d0) go to 170
      yr(1) = coner
      yi(1) = conei
  170 continue
      if (n.eq.1) return
      do 180 i=2,n
        yr(i) = zeror
        yi(i) = zeroi
  180 continue
      return
c-----------------------------------------------------------------------
c     return with nz.lt.0 if cabs(z*z/4).gt.fnu+n-nz-1 complete
c     the calculation in cbinu with n=n-iabs(nz)
c-----------------------------------------------------------------------
  190 continue
      nz = -nz
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zwrsk(zrr, zri, fnu, kode, n, yr, yi, nz, cwr, cwi,
     * tol, elim, alim)
c     refer to  zbesi,zbesk
c
c     zwrsk computes the i bessel function for re(z).ge.0.0 by
c     normalizing the i function ratios from zrati by the wronskian
c
c***routines called  d1mach,zbknu,zrati,zabs2
c     complex cinu,cscl,ct,cw,c1,c2,rct,st,y,zr
      double precision act, acw, alim, ascle, cinui, cinur, csclr, cti,
     * ctr, cwi, cwr, c1i, c1r, c2i, c2r, elim, fnu, pti, ptr, ract,
     * sti, str, tol, yi, yr, zri, zrr, zabs2, d1mach
      integer i, kode, n, nw, nz
      dimension yr(n), yi(n), cwr(2), cwi(2)
c-----------------------------------------------------------------------
c     i(fnu+i-1,z) by backward recurrence for ratios
c     y(i)=i(fnu+i,z)/i(fnu+i-1,z) from crati normalized by the
c     wronskian with k(fnu,z) and k(fnu+1,z) from cbknu.
c-----------------------------------------------------------------------
      nz = 0
      call zbknu(zrr, zri, fnu, kode, 2, cwr, cwi, nw, tol, elim, alim)
      if (nw.ne.0) go to 50
      call zrati(zrr, zri, fnu, n, yr, yi, tol)
c-----------------------------------------------------------------------
c     recur forward on i(fnu+1,z) = r(fnu,z)*i(fnu,z),
c     r(fnu+j-1,z)=y(j),  j=1,...,n
c-----------------------------------------------------------------------
      cinur = 1.0d0
      cinui = 0.0d0
      if (kode.eq.1) go to 10
      cinur = dcos(zri)
      cinui = dsin(zri)
   10 continue
c-----------------------------------------------------------------------
c     on low exponent machines the k functions can be close to both
c     the under and overflow limits and the normalization must be
c     scaled to prevent over or underflow. cuoik has determined that
c     the result is on scale.
c-----------------------------------------------------------------------
      acw = zabs2(cwr(2),cwi(2))
      ascle = 1.0d+3*d1mach(1)/tol
      csclr = 1.0d0
      if (acw.gt.ascle) go to 20
      csclr = 1.0d0/tol
      go to 30
   20 continue
      ascle = 1.0d0/ascle
      if (acw.lt.ascle) go to 30
      csclr = tol
   30 continue
      c1r = cwr(1)*csclr
      c1i = cwi(1)*csclr
      c2r = cwr(2)*csclr
      c2i = cwi(2)*csclr
      str = yr(1)
      sti = yi(1)
c-----------------------------------------------------------------------
c     cinu=cinu*(conjg(ct)/cabs(ct))*(1.0d0/cabs(ct) prevents
c     under- or overflow prematurely by squaring cabs(ct)
c-----------------------------------------------------------------------
      ptr = str*c1r - sti*c1i
      pti = str*c1i + sti*c1r
      ptr = ptr + c2r
      pti = pti + c2i
      ctr = zrr*ptr - zri*pti
      cti = zrr*pti + zri*ptr
      act = zabs2(ctr,cti)
      ract = 1.0d0/act
      ctr = ctr*ract
      cti = -cti*ract
      ptr = cinur*ract
      pti = cinui*ract
      cinur = ptr*ctr - pti*cti
      cinui = ptr*cti + pti*ctr
      yr(1) = cinur*csclr
      yi(1) = cinui*csclr
      if (n.eq.1) return
      do 40 i=2,n
        ptr = str*cinur - sti*cinui
        cinui = str*cinui + sti*cinur
        cinur = ptr
        str = yr(i)
        sti = yi(i)
        yr(i) = cinur*csclr
        yi(i) = cinui*csclr
   40 continue
      return
   50 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------









