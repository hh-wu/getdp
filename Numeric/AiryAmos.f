      subroutine zairy(zr, zi, id, kode, air, aii, nz, ierr)
c     Airy function,bessel functions of order one third
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, zairy computes the complex airy function ai(z) or
c         its derivative dai(z)/dz on id=0 or id=1 respectively. on
c         kode=2, a scaling option cexp(zta)*ai(z) or cexp(zta)*
c         dai(z)/dz is provided to remove the exponential decay in
c         -pi/3.lt.arg(z).lt.pi/3 and the exponential growth in
c         pi/3.lt.abs(arg(z)).lt.pi where zta=(2/3)*z*csqrt(z).
c
c         while the airy functions ai(z) and dai(z)/dz are analytic in
c         the whole z plane, the corresponding scaled functions defined
c         for kode=2 have a cut along the negative real axis.
c
c         input      zr,zi are double precision
c           zr,zi  - z=cmplx(zr,zi)
c           id     - order of derivative, id=0 or id=1
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             ai=ai(z)                on id=0 or
c                             ai=dai(z)/dz            on id=1
c                        = 2  returns
c                             ai=cexp(zta)*ai(z)       on id=0 or
c                             ai=cexp(zta)*dai(z)/dz   on id=1 where
c                             zta=(2/3)*z*csqrt(z)
c
c         output     air,aii are double precision
c           air,aii- complex answer depending on the choices for id and
c                    kode
c           nz     - underflow indicator
c                    nz= 0   , normal return
c                    nz= 1   , ai=cmplx(0.0d0,0.0d0) due to underflow in
c                              -pi/3.lt.arg(z).lt.pi/3 on kode=1
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, real(zta)
c                            too large on kode=1
c                    ierr=3, cabs(z) large      - computation completed
c                            losses of signifcance by argument reduction
c                            produce less than half of machine accuracy
c                    ierr=4, cabs(z) too large  - no computation
c                            complete loss of accuracy by argument
c                            reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         ai and dai are computed for cabs(z).gt.1.0 from the k bessel
c         functions by
c
c            ai(z)=c*sqrt(z)*k(1/3,zta) , dai(z)=-c*z*k(2/3,zta)
c                           c=1.0/(pi*sqrt(3.0))
c                            zta=(2/3)*z**(3/2)
c
c         with the power series for cabs(z).le.1.0.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z is large, losses
c         of significance by argument reduction occur. consequently, if
c         the magnitude of zeta=(2/3)*z**1.5 exceeds u1=sqrt(0.5/ur),
c         then losses exceeding half precision are likely and an error
c         flag ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         also, if the magnitude of zeta is larger than u2=0.5/ur, then
c         all significance is lost and ierr=4. in order to use the int
c         function, zeta must be further restricted not to exceed the
c         largest integer, u3=i1mach(9). thus, the magnitude of zeta
c         must be restricted by min(u2,u3). on 32 bit machines, u1,u2,
c         and u3 are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single
c         precision arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double
c         precision arithmetic respectively. this makes u2 and u3 limit-
c         ing in their respective arithmetics. this means that the mag-
c         nitude of z cannot exceed 3.1e+4 in single and 2.1e+6 in
c         double precision arithmetic. this also means that one can
c         expect to retain, in the worst cases on 32 bit machines,
c         no digits in single precision and only 7 digits in double
c         precision arithmetic. similar considerations hold for other
c         machines.
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
c***routines called  zacai,zbknu,zexp,zsqrt,i1mach,d1mach
c
c     complex ai,cone,csq,cy,s1,s2,trm1,trm2,z,zta,z3
      double precision aa, ad, aii, air, ak, alim, atrm, az, az3, bk,
     * cc, ck, coef, conei, coner, csqi, csqr, cyi, cyr, c1, c2, dig,
     * dk, d1, d2, elim, fid, fnu, ptr, rl, r1m5, sfac, sti, str,
     * s1i, s1r, s2i, s2r, tol, trm1i, trm1r, trm2i, trm2r, tth, zeroi,
     * zeror, zi, zr, ztai, ztar, z3i, z3r, d1mach, zabs2, alaz, bb
      integer id, ierr, iflag, k, kode, k1, k2, mr, nn, nz, i1mach
      dimension cyr(1), cyi(1)
      data tth, c1, c2, coef /6.66666666666666667d-01,
     * 3.55028053887817240d-01,2.58819403792806799d-01,
     * 1.83776298473930683d-01/
      data zeror, zeroi, coner, conei /0.0d0,0.0d0,1.0d0,0.0d0/
c***first executable statement  zairy
      ierr = 0
      nz=0
      if (id.lt.0 .or. id.gt.1) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (ierr.ne.0) return
      az = zabs2(zr,zi)
      tol = dmax1(d1mach(4),1.0d-18)
      fid = dble(float(id))
      if (az.gt.1.0d0) go to 70
c-----------------------------------------------------------------------
c     power series for cabs(z).le.1.
c-----------------------------------------------------------------------
      s1r = coner
      s1i = conei
      s2r = coner
      s2i = conei
      if (az.lt.tol) go to 170
      aa = az*az
      if (aa.lt.tol/az) go to 40
      trm1r = coner
      trm1i = conei
      trm2r = coner
      trm2i = conei
      atrm = 1.0d0
      str = zr*zr - zi*zi
      sti = zr*zi + zi*zr
      z3r = str*zr - sti*zi
      z3i = str*zi + sti*zr
      az3 = az*aa
      ak = 2.0d0 + fid
      bk = 3.0d0 - fid - fid
      ck = 4.0d0 - fid
      dk = 3.0d0 + fid + fid
      d1 = ak*dk
      d2 = bk*ck
      ad = dmin1(d1,d2)
      ak = 24.0d0 + 9.0d0*fid
      bk = 30.0d0 - 9.0d0*fid
      do 30 k=1,25
        str = (trm1r*z3r-trm1i*z3i)/d1
        trm1i = (trm1r*z3i+trm1i*z3r)/d1
        trm1r = str
        s1r = s1r + trm1r
        s1i = s1i + trm1i
        str = (trm2r*z3r-trm2i*z3i)/d2
        trm2i = (trm2r*z3i+trm2i*z3r)/d2
        trm2r = str
        s2r = s2r + trm2r
        s2i = s2i + trm2i
        atrm = atrm*az3/ad
        d1 = d1 + ak
        d2 = d2 + bk
        ad = dmin1(d1,d2)
        if (atrm.lt.tol*ad) go to 40
        ak = ak + 18.0d0
        bk = bk + 18.0d0
   30 continue
   40 continue
      if (id.eq.1) go to 50
      air = s1r*c1 - c2*(zr*s2r-zi*s2i)
      aii = s1i*c1 - c2*(zr*s2i+zi*s2r)
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      call zexp(ztar, ztai, str, sti)
      ptr = air*str - aii*sti
      aii = air*sti + aii*str
      air = ptr
      return
   50 continue
      air = -s2r*c2
      aii = -s2i*c2
      if (az.le.tol) go to 60
      str = zr*s1r - zi*s1i
      sti = zr*s1i + zi*s1r
      cc = c1/(1.0d0+fid)
      air = air + cc*(str*zr-sti*zi)
      aii = aii + cc*(str*zi+sti*zr)
   60 continue
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      call zexp(ztar, ztai, str, sti)
      ptr = str*air - sti*aii
      aii = str*aii + sti*air
      air = ptr
      return
c-----------------------------------------------------------------------
c     case for cabs(z).gt.1.0
c-----------------------------------------------------------------------
   70 continue
      fnu = (1.0d0+fid)/3.0d0
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0d-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c-----------------------------------------------------------------------
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
      alaz = dlog(az)
c--------------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      aa=0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa=dmin1(aa,bb)
      aa=aa**tth
      if (az.gt.aa) go to 260
      aa=dsqrt(aa)
      if (az.gt.aa) ierr=3
      call zsqrt(zr, zi, csqr, csqi)
      ztar = tth*(zr*csqr-zi*csqi)
      ztai = tth*(zr*csqi+zi*csqr)
c-----------------------------------------------------------------------
c     re(zta).le.0 when re(z).lt.0, especially when im(z) is small
c-----------------------------------------------------------------------
      iflag = 0
      sfac = 1.0d0
      ak = ztai
      if (zr.ge.0.0d0) go to 80
      bk = ztar
      ck = -dabs(bk)
      ztar = ck
      ztai = ak
   80 continue
      if (zi.ne.0.0d0) go to 90
      if (zr.gt.0.0d0) go to 90
      ztar = 0.0d0
      ztai = ak
   90 continue
      aa = ztar
      if (aa.ge.0.0d0 .and. zr.gt.0.0d0) go to 110
      if (kode.eq.2) go to 100
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      if (aa.gt.(-alim)) go to 100
      aa = -aa + 0.25d0*alaz
      iflag = 1
      sfac = tol
      if (aa.gt.elim) go to 270
  100 continue
c-----------------------------------------------------------------------
c     cbknu and cacon return exp(zta)*k(fnu,zta) on kode=2
c-----------------------------------------------------------------------
      mr = 1
      if (zi.lt.0.0d0) mr = -1
      call zacai(ztar, ztai, fnu, kode, mr, 1, cyr, cyi, nn, rl, tol,
     * elim, alim)
      if (nn.lt.0) go to 280
      nz = nz + nn
      go to 130
  110 continue
      if (kode.eq.2) go to 120
c-----------------------------------------------------------------------
c     underflow test
c-----------------------------------------------------------------------
      if (aa.lt.alim) go to 120
      aa = -aa - 0.25d0*alaz
      iflag = 2
      sfac = 1.0d0/tol
      if (aa.lt.(-elim)) go to 210
  120 continue
      call zbknu(ztar, ztai, fnu, kode, 1, cyr, cyi, nz, tol, elim,
     * alim)
  130 continue
      s1r = cyr(1)*coef
      s1i = cyi(1)*coef
      if (iflag.ne.0) go to 150
      if (id.eq.1) go to 140
      air = csqr*s1r - csqi*s1i
      aii = csqr*s1i + csqi*s1r
      return
  140 continue
      air = -(zr*s1r-zi*s1i)
      aii = -(zr*s1i+zi*s1r)
      return
  150 continue
      s1r = s1r*sfac
      s1i = s1i*sfac
      if (id.eq.1) go to 160
      str = s1r*csqr - s1i*csqi
      s1i = s1r*csqi + s1i*csqr
      s1r = str
      air = s1r/sfac
      aii = s1i/sfac
      return
  160 continue
      str = -(s1r*zr-s1i*zi)
      s1i = -(s1r*zi+s1i*zr)
      s1r = str
      air = s1r/sfac
      aii = s1i/sfac
      return
  170 continue
      aa = 1.0d+3*d1mach(1)
      s1r = zeror
      s1i = zeroi
      if (id.eq.1) go to 190
      if (az.le.aa) go to 180
      s1r = c2*zr
      s1i = c2*zi
  180 continue
      air = c1 - s1r
      aii = -s1i
      return
  190 continue
      air = -c2
      aii = 0.0d0
      aa = dsqrt(aa)
      if (az.le.aa) go to 200
      s1r = 0.5d0*(zr*zr-zi*zi)
      s1i = zr*zi
  200 continue
      air = air + c1*s1r
      aii = aii + c1*s1i
      return
  210 continue
      nz = 1
      air = zeror
      aii = zeroi
      return
  270 continue
      nz = 0
      ierr=2
      return
  280 continue
      if(nn.eq.(-1)) go to 270
      nz=0
      ierr=5
      return
  260 continue
      ierr=4
      nz=0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbiry(zr, zi, id, kode, bir, bii, ierr)
c     Airy function,bessel functions of order one third
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbiry computes the complex airy function bi(z) or
c         its derivative dbi(z)/dz on id=0 or id=1 respectively. on
c         kode=2, a scaling option cexp(-axzta)*bi(z) or cexp(-axzta)*
c         dbi(z)/dz is provided to remove the exponential behavior in
c         both the left and right half planes where
c         zta=(2/3)*z*csqrt(z)=cmplx(xzta,yzta) and axzta=abs(xzta).
c
c         input      zr,zi are double precision
c           zr,zi  - z=cmplx(zr,zi)
c           id     - order of derivative, id=0 or id=1
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             bi=bi(z)                 on id=0 or
c                             bi=dbi(z)/dz             on id=1
c                        = 2  returns
c                             bi=cexp(-axzta)*bi(z)     on id=0 or
c                             bi=cexp(-axzta)*dbi(z)/dz on id=1 where
c                             zta=(2/3)*z*csqrt(z)=cmplx(xzta,yzta)
c                             and axzta=abs(xzta)
c
c         output     bir,bii are double precision
c           bir,bii- complex answer depending on the choices for id and
c                    kode
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, real(z)
c                            too large on kode=1
c                    ierr=3, cabs(z) large      - computation completed
c                            losses of signifcance by argument reduction
c                            produce less than half of machine accuracy
c                    ierr=4, cabs(z) too large  - no computation
c                            complete loss of accuracy by argument
c                            reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c         bi and dbi are computed for cabs(z).gt.1.0 from the i bessel
c         functions by
c
c                bi(z)=c*sqrt(z)*( i(-1/3,zta) + i(1/3,zta) )
c               dbi(z)=c *  z  * ( i(-2/3,zta) + i(2/3,zta) )
c                               c=1.0/sqrt(3.0)
c                             zta=(2/3)*z**(3/2)
c
c         with the power series for cabs(z).le.1.0.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z is large, losses
c         of significance by argument reduction occur. consequently, if
c         the magnitude of zeta=(2/3)*z**1.5 exceeds u1=sqrt(0.5/ur),
c         then losses exceeding half precision are likely and an error
c         flag ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         also, if the magnitude of zeta is larger than u2=0.5/ur, then
c         all significance is lost and ierr=4. in order to use the int
c         function, zeta must be further restricted not to exceed the
c         largest integer, u3=i1mach(9). thus, the magnitude of zeta
c         must be restricted by min(u2,u3). on 32 bit machines, u1,u2,
c         and u3 are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single
c         precision arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double
c         precision arithmetic respectively. this makes u2 and u3 limit-
c         ing in their respective arithmetics. this means that the mag-
c         nitude of z cannot exceed 3.1e+4 in single and 2.1e+6 in
c         double precision arithmetic. this also means that one can
c         expect to retain, in the worst cases on 32 bit machines,
c         no digits in single precision and only 7 digits in double
c         precision arithmetic. similar considerations hold for other
c         machines.
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
c***routines called  zbinu,zabs2,zdiv,zsqrt,d1mach,i1mach
c
c     complex bi,cone,csq,cy,s1,s2,trm1,trm2,z,zta,z3
      double precision aa, ad, ak, alim, atrm, az, az3, bb, bii, bir,
     * bk, cc, ck, coef, conei, coner, csqi, csqr, cyi, cyr, c1, c2,
     * dig, dk, d1, d2, eaa, elim, fid, fmr, fnu, fnul, pi, rl, r1m5,
     * sfac, sti, str, s1i, s1r, s2i, s2r, tol, trm1i, trm1r, trm2i,
     * trm2r, tth, zi, zr, ztai, ztar, z3i, z3r, d1mach, zabs2
      integer id, ierr, k, kode, k1, k2, nz, i1mach
      dimension cyr(2), cyi(2)
      data tth, c1, c2, coef, pi /6.66666666666666667d-01,
     * 6.14926627446000736d-01,4.48288357353826359d-01,
     * 5.77350269189625765d-01,3.14159265358979324d+00/
      data coner, conei /1.0d0,0.0d0/
c
      ierr = 0
      nz=0
      if (id.lt.0 .or. id.gt.1) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (ierr.ne.0) return
      az = zabs2(zr,zi)
      tol = dmax1(d1mach(4),1.0d-18)
      fid = dble(float(id))
      if (az.gt.1.0e0) go to 70
c-----------------------------------------------------------------------
c     power series for cabs(z).le.1.
c-----------------------------------------------------------------------
      s1r = coner
      s1i = conei
      s2r = coner
      s2i = conei
      if (az.lt.tol) go to 130
      aa = az*az
      if (aa.lt.tol/az) go to 40
      trm1r = coner
      trm1i = conei
      trm2r = coner
      trm2i = conei
      atrm = 1.0d0
      str = zr*zr - zi*zi
      sti = zr*zi + zi*zr
      z3r = str*zr - sti*zi
      z3i = str*zi + sti*zr
      az3 = az*aa
      ak = 2.0d0 + fid
      bk = 3.0d0 - fid - fid
      ck = 4.0d0 - fid
      dk = 3.0d0 + fid + fid
      d1 = ak*dk
      d2 = bk*ck
      ad = dmin1(d1,d2)
      ak = 24.0d0 + 9.0d0*fid
      bk = 30.0d0 - 9.0d0*fid
      do 30 k=1,25
        str = (trm1r*z3r-trm1i*z3i)/d1
        trm1i = (trm1r*z3i+trm1i*z3r)/d1
        trm1r = str
        s1r = s1r + trm1r
        s1i = s1i + trm1i
        str = (trm2r*z3r-trm2i*z3i)/d2
        trm2i = (trm2r*z3i+trm2i*z3r)/d2
        trm2r = str
        s2r = s2r + trm2r
        s2i = s2i + trm2i
        atrm = atrm*az3/ad
        d1 = d1 + ak
        d2 = d2 + bk
        ad = dmin1(d1,d2)
        if (atrm.lt.tol*ad) go to 40
        ak = ak + 18.0d0
        bk = bk + 18.0d0
   30 continue
   40 continue
      if (id.eq.1) go to 50
      bir = c1*s1r + c2*(zr*s2r-zi*s2i)
      bii = c1*s1i + c2*(zr*s2i+zi*s2r)
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      aa = ztar
      aa = -dabs(aa)
      eaa = dexp(aa)
      bir = bir*eaa
      bii = bii*eaa
      return
   50 continue
      bir = s2r*c2
      bii = s2i*c2
      if (az.le.tol) go to 60
      cc = c1/(1.0d0+fid)
      str = s1r*zr - s1i*zi
      sti = s1r*zi + s1i*zr
      bir = bir + cc*(str*zr-sti*zi)
      bii = bii + cc*(str*zi+sti*zr)
   60 continue
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      aa = ztar
      aa = -dabs(aa)
      eaa = dexp(aa)
      bir = bir*eaa
      bii = bii*eaa
      return
c-----------------------------------------------------------------------
c     case for cabs(z).gt.1.0
c-----------------------------------------------------------------------
   70 continue
      fnu = (1.0d0+fid)/3.0d0
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
c     test for range
c-----------------------------------------------------------------------
      aa=0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa=dmin1(aa,bb)
      aa=aa**tth
      if (az.gt.aa) go to 260
      aa=dsqrt(aa)
      if (az.gt.aa) ierr=3
      call zsqrt(zr, zi, csqr, csqi)
      ztar = tth*(zr*csqr-zi*csqi)
      ztai = tth*(zr*csqi+zi*csqr)
c-----------------------------------------------------------------------
c     re(zta).le.0 when re(z).lt.0, especially when im(z) is small
c-----------------------------------------------------------------------
      sfac = 1.0d0
      ak = ztai
      if (zr.ge.0.0d0) go to 80
      bk = ztar
      ck = -dabs(bk)
      ztar = ck
      ztai = ak
   80 continue
      if (zi.ne.0.0d0 .or. zr.gt.0.0d0) go to 90
      ztar = 0.0d0
      ztai = ak
   90 continue
      aa = ztar
      if (kode.eq.2) go to 100
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      bb = dabs(aa)
      if (bb.lt.alim) go to 100
      bb = bb + 0.25d0*dlog(az)
      sfac = tol
      if (bb.gt.elim) go to 190
  100 continue
      fmr = 0.0d0
      if (aa.ge.0.0d0 .and. zr.gt.0.0d0) go to 110
      fmr = pi
      if (zi.lt.0.0d0) fmr = -pi
      ztar = -ztar
      ztai = -ztai
  110 continue
c-----------------------------------------------------------------------
c     aa=factor for analytic continuation of i(fnu,zta)
c     kode=2 returns exp(-abs(xzta))*i(fnu,zta) from cbesi
c-----------------------------------------------------------------------
      call zbinu(ztar, ztai, fnu, kode, 1, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      if (nz.lt.0) go to 200
      aa = fmr*fnu
      z3r = sfac
      str = dcos(aa)
      sti = dsin(aa)
      s1r = (str*cyr(1)-sti*cyi(1))*z3r
      s1i = (str*cyi(1)+sti*cyr(1))*z3r
      fnu = (2.0d0-fid)/3.0d0
      call zbinu(ztar, ztai, fnu, kode, 2, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      cyr(1) = cyr(1)*z3r
      cyi(1) = cyi(1)*z3r
      cyr(2) = cyr(2)*z3r
      cyi(2) = cyi(2)*z3r
c-----------------------------------------------------------------------
c     backward recur one step for orders -1/3 or -2/3
c-----------------------------------------------------------------------
      call zdiv(cyr(1), cyi(1), ztar, ztai, str, sti)
      s2r = (fnu+fnu)*str + cyr(2)
      s2i = (fnu+fnu)*sti + cyi(2)
      aa = fmr*(fnu-1.0d0)
      str = dcos(aa)
      sti = dsin(aa)
      s1r = coef*(s1r+s2r*str-s2i*sti)
      s1i = coef*(s1i+s2r*sti+s2i*str)
      if (id.eq.1) go to 120
      str = csqr*s1r - csqi*s1i
      s1i = csqr*s1i + csqi*s1r
      s1r = str
      bir = s1r/sfac
      bii = s1i/sfac
      return
  120 continue
      str = zr*s1r - zi*s1i
      s1i = zr*s1i + zi*s1r
      s1r = str
      bir = s1r/sfac
      bii = s1i/sfac
      return
  130 continue
      aa = c1*(1.0d0-fid) + fid*c2
      bir = aa
      bii = 0.0d0
      return
  190 continue
      ierr=2
      nz=0
      return
  200 continue
      if(nz.eq.(-1)) go to 190
      nz=0
      ierr=5
      return
  260 continue
      ierr=4
      nz=0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------






