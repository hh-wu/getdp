c-----------------------------------------------------------------------
      double precision function dgamln(z,ierr)
c     Logarithm of Gamma function
c     author  Amos, Donald E., Sandia National Laboratories
c
c         dgamln computes the natural log of the gamma function for
c         z.gt.0.  the asymptotic expansion is used to generate values
c         greater than zmin which are adjusted by the recursion
c         g(z+1)=z*g(z) for z.le.zmin.  the function was made as
c         portable as possible by computimg zmin from the number of base
c         10 digits in a word, rln=amax1(-alog10(r1mach(4)),0.5e-18)
c         limited to 18 digits of (relative) accuracy.
c
c         since integer arguments are common, a table look up on 100
c         values is used for speed of execution.
c
c     description of arguments
c
c         input      z is d0uble precision
c           z      - argument, z.gt.0.0d0
c
c         output      dgamln is double precision
c           dgamln  - natural log of the gamma function at z.ne.0.0d0
c           ierr    - error flag
c                     ierr=0, normal return, computation completed
c                     ierr=1, z.le.0.0d0,    no computation
c
c
c***routines called  i1mach,d1mach
      double precision cf, con, fln, fz, gln, rln, s, tlg, trm, tst,
     * t1, wdtol, z, zdmy, zinc, zm, zmin, zp, zsq, d1mach
      integer i, ierr, i1m, k, mz, nz, i1mach
      dimension cf(22), gln(100)
c           lngamma(n), n=1,100
      data gln(1), gln(2), gln(3), gln(4), gln(5), gln(6), gln(7),
     1     gln(8), gln(9), gln(10), gln(11), gln(12), gln(13), gln(14),
     2     gln(15), gln(16), gln(17), gln(18), gln(19), gln(20),
     3     gln(21), gln(22)/
     4     0.00000000000000000d+00,     0.00000000000000000d+00,
     5     6.93147180559945309d-01,     1.79175946922805500d+00,
     6     3.17805383034794562d+00,     4.78749174278204599d+00,
     7     6.57925121201010100d+00,     8.52516136106541430d+00,
     8     1.06046029027452502d+01,     1.28018274800814696d+01,
     9     1.51044125730755153d+01,     1.75023078458738858d+01,
     a     1.99872144956618861d+01,     2.25521638531234229d+01,
     b     2.51912211827386815d+01,     2.78992713838408916d+01,
     c     3.06718601060806728d+01,     3.35050734501368889d+01,
     d     3.63954452080330536d+01,     3.93398841871994940d+01,
     e     4.23356164607534850d+01,     4.53801388984769080d+01/
      data gln(23), gln(24), gln(25), gln(26), gln(27), gln(28),
     1     gln(29), gln(30), gln(31), gln(32), gln(33), gln(34),
     2     gln(35), gln(36), gln(37), gln(38), gln(39), gln(40),
     3     gln(41), gln(42), gln(43), gln(44)/
     4     4.84711813518352239d+01,     5.16066755677643736d+01,
     5     5.47847293981123192d+01,     5.80036052229805199d+01,
     6     6.12617017610020020d+01,     6.45575386270063311d+01,
     7     6.78897431371815350d+01,     7.12570389671680090d+01,
     8     7.46582363488301644d+01,     7.80922235533153106d+01,
     9     8.15579594561150372d+01,     8.50544670175815174d+01,
     a     8.85808275421976788d+01,     9.21361756036870925d+01,
     b     9.57196945421432025d+01,     9.93306124547874269d+01,
     c     1.02968198614513813d+02,     1.06631760260643459d+02,
     d     1.10320639714757395d+02,     1.14034211781461703d+02,
     e     1.17771881399745072d+02,     1.21533081515438634d+02/
      data gln(45), gln(46), gln(47), gln(48), gln(49), gln(50),
     1     gln(51), gln(52), gln(53), gln(54), gln(55), gln(56),
     2     gln(57), gln(58), gln(59), gln(60), gln(61), gln(62),
     3     gln(63), gln(64), gln(65), gln(66)/
     4     1.25317271149356895d+02,     1.29123933639127215d+02,
     5     1.32952575035616310d+02,     1.36802722637326368d+02,
     6     1.40673923648234259d+02,     1.44565743946344886d+02,
     7     1.48477766951773032d+02,     1.52409592584497358d+02,
     8     1.56360836303078785d+02,     1.60331128216630907d+02,
     9     1.64320112263195181d+02,     1.68327445448427652d+02,
     a     1.72352797139162802d+02,     1.76395848406997352d+02,
     b     1.80456291417543771d+02,     1.84533828861449491d+02,
     c     1.88628173423671591d+02,     1.92739047287844902d+02,
     d     1.96866181672889994d+02,     2.01009316399281527d+02,
     e     2.05168199482641199d+02,     2.09342586752536836d+02/
      data gln(67), gln(68), gln(69), gln(70), gln(71), gln(72),
     1     gln(73), gln(74), gln(75), gln(76), gln(77), gln(78),
     2     gln(79), gln(80), gln(81), gln(82), gln(83), gln(84),
     3     gln(85), gln(86), gln(87), gln(88)/
     4     2.13532241494563261d+02,     2.17736934113954227d+02,
     5     2.21956441819130334d+02,     2.26190548323727593d+02,
     6     2.30439043565776952d+02,     2.34701723442818268d+02,
     7     2.38978389561834323d+02,     2.43268849002982714d+02,
     8     2.47572914096186884d+02,     2.51890402209723194d+02,
     9     2.56221135550009525d+02,     2.60564940971863209d+02,
     a     2.64921649798552801d+02,     2.69291097651019823d+02,
     b     2.73673124285693704d+02,     2.78067573440366143d+02,
     c     2.82474292687630396d+02,     2.86893133295426994d+02,
     d     2.91323950094270308d+02,     2.95766601350760624d+02,
     e     3.00220948647014132d+02,     3.04686856765668715d+02/
      data gln(89), gln(90), gln(91), gln(92), gln(93), gln(94),
     1     gln(95), gln(96), gln(97), gln(98), gln(99), gln(100)/
     2     3.09164193580146922d+02,     3.13652829949879062d+02,
     3     3.18152639620209327d+02,     3.22663499126726177d+02,
     4     3.27185287703775217d+02,     3.31717887196928473d+02,
     5     3.36261181979198477d+02,     3.40815058870799018d+02,
     6     3.45379407062266854d+02,     3.49954118040770237d+02,
     7     3.54539085519440809d+02,     3.59134205369575399d+02/
c             coefficients of asymptotic expansion
      data cf(1), cf(2), cf(3), cf(4), cf(5), cf(6), cf(7), cf(8),
     1     cf(9), cf(10), cf(11), cf(12), cf(13), cf(14), cf(15),
     2     cf(16), cf(17), cf(18), cf(19), cf(20), cf(21), cf(22)/
     3     8.33333333333333333d-02,    -2.77777777777777778d-03,
     4     7.93650793650793651d-04,    -5.95238095238095238d-04,
     5     8.41750841750841751d-04,    -1.91752691752691753d-03,
     6     6.41025641025641026d-03,    -2.95506535947712418d-02,
     7     1.79644372368830573d-01,    -1.39243221690590112d+00,
     8     1.34028640441683920d+01,    -1.56848284626002017d+02,
     9     2.19310333333333333d+03,    -3.61087712537249894d+04,
     a     6.91472268851313067d+05,    -1.52382215394074162d+07,
     b     3.82900751391414141d+08,    -1.08822660357843911d+10,
     c     3.47320283765002252d+11,    -1.23696021422692745d+13,
     d     4.88788064793079335d+14,    -2.13203339609193739d+16/
c
c             ln(2*pi)
      data con                    /     1.83787706640934548d+00/
c
c***first executable statement  dgamln
      ierr=0
      if (z.le.0.0d0) go to 70
      if (z.gt.101.0d0) go to 10
      nz = int(sngl(z))
      fz = z - float(nz)
      if (fz.gt.0.0d0) go to 10
      if (nz.gt.100) go to 10
      dgamln = gln(nz)
      return
   10 continue
      wdtol = d1mach(4)
      wdtol = dmax1(wdtol,0.5d-18)
      i1m = i1mach(14)
      rln = d1mach(5)*float(i1m)
      fln = dmin1(rln,20.0d0)
      fln = dmax1(fln,3.0d0)
      fln = fln - 3.0d0
      zm = 1.8000d0 + 0.3875d0*fln
      mz = int(sngl(zm)) + 1
      zmin = float(mz)
      zdmy = z
      zinc = 0.0d0
      if (z.ge.zmin) go to 20
      zinc = zmin - float(nz)
      zdmy = z + zinc
   20 continue
      zp = 1.0d0/zdmy
      t1 = cf(1)*zp
      s = t1
      if (zp.lt.wdtol) go to 40
      zsq = zp*zp
      tst = t1*wdtol
      do 30 k=2,22
        zp = zp*zsq
        trm = cf(k)*zp
        if (dabs(trm).lt.tst) go to 40
        s = s + trm
   30 continue
   40 continue
      if (zinc.ne.0.0d0) go to 50
      tlg = dlog(z)
      dgamln = z*(tlg-1.0d0) + 0.5d0*(con-tlg) + s
      return
   50 continue
      zp = 1.0d0
      nz = int(sngl(zinc))
      do 60 i=1,nz
        zp = zp*(z+float(i-1))
   60 continue
      tlg = dlog(zdmy)
      dgamln = zdmy*(tlg-1.0d0) - dlog(zp) + 0.5d0*(con-tlg) + s
      return
c
c
   70 continue     
      dgamln = d1mach(7)
      ierr=1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine xerror(mess,nmess,l1,l2)
c
c     this is a dummy xerror routine to print error messages with nmess
c     characters. l1 and l2 are dummy parameters to make this call
c     compatible with the slatec xerror routine. this is a fortran 77
c     routine.
c
      character*(*) mess
      nn=nmess/70
      nr=nmess-70*nn
      if(nr.ne.0) nn=nn+1
      k=1
      print 900
  900 format(/)
      do 10 i=1,nn
        kmin=min0(k+69,nmess)
        print *, mess(k:kmin)
        k=k+70
   10 continue
      print 900
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      double precision function zabs2(zr, zi)
c     refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c     zabs2 computes the absolute value or magnitude of a double
c     precision complex variable cmplx(zr,zi)
c
      double precision zr, zi, u, v, q, s
      u = dabs(zr)
      v = dabs(zi)
      s = u + v
c-----------------------------------------------------------------------
c     s*1.0d0 makes an unnormalized underflow on cdc machines into a
c     true floating zero
c-----------------------------------------------------------------------
      s = s*1.0d+0
      if (s.eq.0.0d+0) go to 20
      if (u.gt.v) go to 10
      q = u/v
      zabs2 = v*dsqrt(1.d+0+q*q)
      return
   10 q = v/u
      zabs2 = u*dsqrt(1.d+0+q*q)
      return
   20 zabs2 = 0.0d+0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zacai(zr, zi, fnu, kode, mr, n, yr, yi, nz, rl, tol,
     * elim, alim)
c     Refer to  zairy
c
c     zacai applies the analytic continuation formula
c
c         k(fnu,zn*exp(mp))=k(fnu,zn)*exp(-mp*fnu) - mp*i(fnu,zn)
c                 mp=pi*mr*cmplx(0.0,1.0)
c
c     to continue the k function from the right half to the left
c     half z plane for use with zairy where fnu=1/3 or 2/3 and n=1.
c     zacai is the same as zacon with the parts for larger orders and
c     recurrence removed. a recursive call to zacon can result if zacon
c     is called from zairy.
c
c***routines called  zasyi,zbknu,zmlri,zseri,zs1s2,d1mach,zabs2
c     complex csgn,cspn,c1,c2,y,z,zn,cy
      double precision alim, arg, ascle, az, csgnr, csgni, cspnr,
     * cspni, c1r, c1i, c2r, c2i, cyr, cyi, dfnu, elim, fmr, fnu, pi,
     * rl, sgn, tol, yy, yr, yi, zr, zi, znr, zni, d1mach, zabs2
      integer inu, iuf, kode, mr, n, nn, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2)
      data pi / 3.14159265358979324d0 /
      nz = 0
      znr = -zr
      zni = -zi
      az = zabs2(zr,zi)
      nn = n
      dfnu = fnu + dble(float(n-1))
      if (az.le.2.0d0) go to 10
      if (az*az*0.25d0.gt.dfnu+1.0d0) go to 20
   10 continue
c-----------------------------------------------------------------------
c     power series for the i function
c-----------------------------------------------------------------------
      call zseri(znr, zni, fnu, kode, nn, yr, yi, nw, tol, elim, alim)
      go to 40
   20 continue
      if (az.lt.rl) go to 30
c-----------------------------------------------------------------------
c     asymptotic expansion for large z for the i function
c-----------------------------------------------------------------------
      call zasyi(znr, zni, fnu, kode, nn, yr, yi, nw, rl, tol, elim,
     * alim)
      if (nw.lt.0) go to 80
      go to 40
   30 continue
c-----------------------------------------------------------------------
c     miller algorithm normalized by the series for the i function
c-----------------------------------------------------------------------
      call zmlri(znr, zni, fnu, kode, nn, yr, yi, nw, tol)
      if(nw.lt.0) go to 80
   40 continue
c-----------------------------------------------------------------------
c     analytic continuation to the left half plane for the k function
c-----------------------------------------------------------------------
      call zbknu(znr, zni, fnu, kode, 1, cyr, cyi, nw, tol, elim, alim)
      if (nw.ne.0) go to 80
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
      csgnr = 0.0d0
      csgni = sgn
      if (kode.eq.1) go to 50
      yy = -zni
      csgnr = -csgni*dsin(yy)
      csgni = csgni*dcos(yy)
   50 continue
c-----------------------------------------------------------------------
c     calculate cspn=exp(fnu*pi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*sgn
      cspnr = dcos(arg)
      cspni = dsin(arg)
      if (mod(inu,2).eq.0) go to 60
      cspnr = -cspnr
      cspni = -cspni
   60 continue
      c1r = cyr(1)
      c1i = cyi(1)
      c2r = yr(1)
      c2i = yi(1)
      if (kode.eq.1) go to 70
      iuf = 0
      ascle = 1.0d+3*d1mach(1)/tol
      call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
      nz = nz + nw
   70 continue
      yr(1) = cspnr*c1r - cspni*c1i + csgnr*c2r - csgni*c2i
      yi(1) = cspnr*c1i + cspni*c1r + csgnr*c2i + csgni*c2r
      return
   80 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
      subroutine zacon(zr, zi, fnu, kode, mr, n, yr, yi, nz, rl, fnul,
     * tol, elim, alim)
c     Refer to  zbesk,zbesh
c
c     zacon applies the analytic continuation formula
c
c         k(fnu,zn*exp(mp))=k(fnu,zn)*exp(-mp*fnu) - mp*i(fnu,zn)
c                 mp=pi*mr*cmplx(0.0,1.0)
c
c     to continue the k function from the right half to the left
c     half z plane
c
c***routines called  zbinu,zbknu,zs1s2,d1mach,zabs2,zmlt
c
c     complex ck,cone,cscl,cscr,csgn,cspn,cy,czero,c1,c2,rz,sc1,sc2,st,
c    *s1,s2,y,z,zn
      double precision alim, arg, ascle, as2, azn, bry, bscle, cki,
     * ckr, coner, cpn, cscl, cscr, csgni, csgnr, cspni, cspnr,
     * csr, csrr, cssr, cyi, cyr, c1i, c1m, c1r, c2i, c2r, elim, fmr,
     * fn, fnu, fnul, pi, pti, ptr, razn, rl, rzi, rzr, sc1i, sc1r,
     * sc2i, sc2r, sgn, spn, sti, str, s1i, s1r, s2i, s2r, tol, yi, yr,
     * yy, zeror, zi, zni, znr, zr, d1mach, zabs2
      integer i, inu, iuf, kflag, kode, mr, n, nn, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2), cssr(3), csrr(3), bry(3)
      data pi / 3.14159265358979324d0 /
      data zeror,coner / 0.0d0,1.0d0 /
      nz = 0
      znr = -zr
      zni = -zi
      nn = n
      call zbinu(znr, zni, fnu, kode, nn, yr, yi, nw, rl, fnul, tol,
     * elim, alim)
      if (nw.lt.0) go to 90
c-----------------------------------------------------------------------
c     analytic continuation to the left half plane for the k function
c-----------------------------------------------------------------------
      nn = min0(2,n)
      call zbknu(znr, zni, fnu, kode, nn, cyr, cyi, nw, tol, elim, alim)
      if (nw.ne.0) go to 90
      s1r = cyr(1)
      s1i = cyi(1)
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
      csgnr = zeror
      csgni = sgn
      if (kode.eq.1) go to 10
      yy = -zni
      cpn = dcos(yy)
      spn = dsin(yy)
      call zmlt(csgnr, csgni, cpn, spn, csgnr, csgni)
   10 continue
c-----------------------------------------------------------------------
c     calculate cspn=exp(fnu*pi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*sgn
      cpn = dcos(arg)
      spn = dsin(arg)
      cspnr = cpn
      cspni = spn
      if (mod(inu,2).eq.0) go to 20
      cspnr = -cspnr
      cspni = -cspni
   20 continue
      iuf = 0
      c1r = s1r
      c1i = s1i
      c2r = yr(1)
      c2i = yi(1)
      ascle = 1.0d+3*d1mach(1)/tol
      if (kode.eq.1) go to 30
      call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
      nz = nz + nw
      sc1r = c1r
      sc1i = c1i
   30 continue
      call zmlt(cspnr, cspni, c1r, c1i, str, sti)
      call zmlt(csgnr, csgni, c2r, c2i, ptr, pti)
      yr(1) = str + ptr
      yi(1) = sti + pti
      if (n.eq.1) return
      cspnr = -cspnr
      cspni = -cspni
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = s2r
      c1i = s2i
      c2r = yr(2)
      c2i = yi(2)
      if (kode.eq.1) go to 40
      call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
      nz = nz + nw
      sc2r = c1r
      sc2i = c1i
   40 continue
      call zmlt(cspnr, cspni, c1r, c1i, str, sti)
      call zmlt(csgnr, csgni, c2r, c2i, ptr, pti)
      yr(2) = str + ptr
      yi(2) = sti + pti
      if (n.eq.2) return
      cspnr = -cspnr
      cspni = -cspni
      azn = zabs2(znr,zni)
      razn = 1.0d0/azn
      str = znr*razn
      sti = -zni*razn
      rzr = (str+str)*razn
      rzi = (sti+sti)*razn
      fn = fnu + 1.0d0
      ckr = fn*rzr
      cki = fn*rzi
c-----------------------------------------------------------------------
c     scale near exponent extremes during recurrence on k functions
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      cscr = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = cscr
      csrr(1) = cscr
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = ascle
      bry(2) = 1.0d0/ascle
      bry(3) = d1mach(2)
      as2 = zabs2(s2r,s2i)
      kflag = 2
      if (as2.gt.bry(1)) go to 50
      kflag = 1
      go to 60
   50 continue
      if (as2.lt.bry(2)) go to 60
      kflag = 3
   60 continue
      bscle = bry(kflag)
      s1r = s1r*cssr(kflag)
      s1i = s1i*cssr(kflag)
      s2r = s2r*cssr(kflag)
      s2i = s2i*cssr(kflag)
      csr = csrr(kflag)
      do 80 i=3,n
        str = s2r
        sti = s2i
        s2r = ckr*str - cki*sti + s1r
        s2i = ckr*sti + cki*str + s1i
        s1r = str
        s1i = sti
        c1r = s2r*csr
        c1i = s2i*csr
        str = c1r
        sti = c1i
        c2r = yr(i)
        c2i = yi(i)
        if (kode.eq.1) go to 70
        if (iuf.lt.0) go to 70
        call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
        nz = nz + nw
        sc1r = sc2r
        sc1i = sc2i
        sc2r = c1r
        sc2i = c1i
        if (iuf.ne.3) go to 70
        iuf = -4
        s1r = sc1r*cssr(kflag)
        s1i = sc1i*cssr(kflag)
        s2r = sc2r*cssr(kflag)
        s2i = sc2i*cssr(kflag)
        str = sc2r
        sti = sc2i
   70   continue
        ptr = cspnr*c1r - cspni*c1i
        pti = cspnr*c1i + cspni*c1r
        yr(i) = ptr + csgnr*c2r - csgni*c2i
        yi(i) = pti + csgnr*c2i + csgni*c2r
        ckr = ckr + rzr
        cki = cki + rzi
        cspnr = -cspnr
        cspni = -cspni
        if (kflag.ge.3) go to 80
        ptr = dabs(c1r)
        pti = dabs(c1i)
        c1m = dmax1(ptr,pti)
        if (c1m.le.bscle) go to 80
        kflag = kflag + 1
        bscle = bry(kflag)
        s1r = s1r*csr
        s1i = s1i*csr
        s2r = str
        s2i = sti
        s1r = s1r*cssr(kflag)
        s1i = s1i*cssr(kflag)
        s2r = s2r*cssr(kflag)
        s2i = s2i*cssr(kflag)
        csr = csrr(kflag)
   80 continue
      return
   90 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zdiv(ar, ai, br, bi, cr, ci)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex divide c=a/b.
c
c***routines called  zabs2
c
      double precision ar, ai, br, bi, cr, ci, bm, ca, cb, cc, cd
      double precision zabs2
      bm = 1.0d0/zabs2(br,bi)
      cc = br*bm
      cd = bi*bm
      ca = (ar*cc+ai*cd)*bm
      cb = (ai*cc-ar*cd)*bm
      cr = ca
      ci = cb
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zexp(ar, ai, br, bi)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex exponential function b=exp(a)
c
      double precision ar, ai, br, bi, zm, ca, cb
      zm = dexp(ar)
      ca = zm*dcos(ai)
      cb = zm*dsin(ai)
      br = ca
      bi = cb
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zkscl(zrr,zri,fnu,n,yr,yi,nz,rzr,rzi,ascle,tol,elim)
c     modified for g77
      EXTERNAL zlog
c     refer to  zbesk
c
c     set k functions to zero on underflow, continue recurrence
c     on scaled functions until two members come on scale, then
c     return with min(nz+2,n) values scaled by 1/tol.
c
c     routines called  zuchk,zabs2,zlog
c
c     complex ck,cs,cy,czero,rz,s1,s2,y,zr,zd,celm
      double precision acs, as, ascle, cki, ckr, csi, csr, cyi,
     * cyr, elim, fn, fnu, rzi, rzr, str, s1i, s1r, s2i,
     * s2r, tol, yi, yr, zeroi, zeror, zri, zrr, zabs2,
     * zdr, zdi, celmr, elm, helim, alas
      integer i, ic, idum, kk, n, nn, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2)
      data zeror,zeroi / 0.0d0 , 0.0d0 /
c
      nz = 0
      ic = 0
      nn = min0(2,n)
      do 10 i=1,nn
        s1r = yr(i)
        s1i = yi(i)
        cyr(i) = s1r
        cyi(i) = s1i
        as = zabs2(s1r,s1i)
        acs = -zrr + dlog(as)
        nz = nz + 1
        yr(i) = zeror
        yi(i) = zeroi
        if (acs.lt.(-elim)) go to 10
        call zlog(s1r, s1i, csr, csi, idum)
        csr = csr - zrr
        csi = csi - zri
        str = dexp(csr)/tol
        csr = str*dcos(csi)
        csi = str*dsin(csi)
        call zuchk(csr, csi, nw, ascle, tol)
        if (nw.ne.0) go to 10
        yr(i) = csr
        yi(i) = csi
        ic = i
        nz = nz - 1
   10 continue
      if (n.eq.1) return
      if (ic.gt.1) go to 20
      yr(1) = zeror
      yi(1) = zeroi
      nz = 2
   20 continue
      if (n.eq.2) return
      if (nz.eq.0) return
      fn = fnu + 1.0d0
      ckr = fn*rzr
      cki = fn*rzi
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      helim = 0.5d0*elim
      elm = dexp(-elim)
      celmr = elm
      zdr = zrr
      zdi = zri
c
c     find two consecutive y values on scale. scale recurrence if
c     s2 gets larger than exp(elim/2)
c
      do 30 i=3,n
        kk = i
        csr = s2r
        csi = s2i
        s2r = ckr*csr - cki*csi + s1r
        s2i = cki*csr + ckr*csi + s1i
        s1r = csr
        s1i = csi
        ckr = ckr + rzr
        cki = cki + rzi
        as = zabs2(s2r,s2i)
        alas = dlog(as)
        acs = -zdr + alas
        nz = nz + 1
        yr(i) = zeror
        yi(i) = zeroi
        if (acs.lt.(-elim)) go to 25
        call zlog(s2r, s2i, csr, csi, idum)
        csr = csr - zdr
        csi = csi - zdi
        str = dexp(csr)/tol
        csr = str*dcos(csi)
        csi = str*dsin(csi)
        call zuchk(csr, csi, nw, ascle, tol)
        if (nw.ne.0) go to 25
        yr(i) = csr
        yi(i) = csi
        nz = nz - 1
        if (ic.eq.kk-1) go to 40
        ic = kk
        go to 30
   25   continue
        if(alas.lt.helim) go to 30
        zdr = zdr - elim
        s1r = s1r*celmr
        s1i = s1i*celmr
        s2r = s2r*celmr
        s2i = s2i*celmr
   30 continue
      nz = n
      if(ic.eq.n) nz=n-1
      go to 45
   40 continue
      nz = kk - 2
   45 continue
      do 50 i=1,nz
        yr(i) = zeror
        yi(i) = zeroi
   50 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zlog(ar, ai, br, bi, ierr)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex logarithm b=clog(a)
c     ierr=0,normal return      ierr=1, z=cmplx(0.0,0.0)
c***routines called  zabs2
      double precision ar, ai, br, bi, zm, dtheta, dpi, dhpi
      double precision zabs2
      data dpi , dhpi  / 3.141592653589793238462643383d+0,
     1                   1.570796326794896619231321696d+0/
c
      ierr=0
      if (ar.eq.0.0d+0) go to 10
      if (ai.eq.0.0d+0) go to 20
      dtheta = datan(ai/ar)
      if (dtheta.le.0.0d+0) go to 40
      if (ar.lt.0.0d+0) dtheta = dtheta - dpi
      go to 50
   10 if (ai.eq.0.0d+0) go to 60
      bi = dhpi
      br = dlog(dabs(ai))
      if (ai.lt.0.0d+0) bi = -bi
      return
   20 if (ar.gt.0.0d+0) go to 30
      br = dlog(dabs(ar))
      bi = dpi
      return
   30 br = dlog(ar)
      bi = 0.0d+0
      return
   40 if (ar.lt.0.0d+0) dtheta = dtheta + dpi
   50 zm = zabs2(ar,ai)
      br = dlog(zm)
      bi = dtheta
      return
   60 continue
      ierr=1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zmlt(ar, ai, br, bi, cr, ci)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex multiply, c=a*b.
c
      double precision ar, ai, br, bi, cr, ci, ca, cb
      ca = ar*br - ai*bi
      cb = ar*bi + ai*br
      cr = ca
      ci = cb
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zrati(zr, zi, fnu, n, cyr, cyi, tol)
c     Refer to  zbesi,zbesk,zbesh
c
c     zrati computes ratios of i bessel functions by backward
c     recurrence.  the starting index is determined by forward
c     recurrence as described in j. res. of nat. bur. of standards-b,
c     mathematical sciences, vol 77b, p111-114, september, 1973,
c     bessel functions i and j of complex argument and integer order,
c     by d. j. sookne.
c
c***routines called  zabs2,zdiv
c     complex z,cy(1),cone,czero,p1,p2,t1,rz,pt,cdfnu
      double precision ak, amagz, ap1, ap2, arg, az, cdfnui, cdfnur,
     * conei, coner, cyi, cyr, czeroi, czeror, dfnu, fdnu, flam, fnu,
     * fnup, pti, ptr, p1i, p1r, p2i, p2r, rak, rap1, rho, rt2, rzi,
     * rzr, test, test1, tol, tti, ttr, t1i, t1r, zi, zr, zabs2
      integer i, id, idnu, inu, itime, k, kk, magz, n
      dimension cyr(n), cyi(n)
      data czeror,czeroi,coner,conei,rt2/
     1 0.0d0, 0.0d0, 1.0d0, 0.0d0, 1.41421356237309505d0 /
      az = zabs2(zr,zi)
      inu = int(sngl(fnu))
      idnu = inu + n - 1
      magz = int(sngl(az))
      amagz = dble(float(magz+1))
      fdnu = dble(float(idnu))
      fnup = dmax1(amagz,fdnu)
      id = idnu - magz - 1
      itime = 1
      k = 1
      ptr = 1.0d0/az
      rzr = ptr*(zr+zr)*ptr
      rzi = -ptr*(zi+zi)*ptr
      t1r = rzr*fnup
      t1i = rzi*fnup
      p2r = -t1r
      p2i = -t1i
      p1r = coner
      p1i = conei
      t1r = t1r + rzr
      t1i = t1i + rzi
      if (id.gt.0) id = 0
      ap2 = zabs2(p2r,p2i)
      ap1 = zabs2(p1r,p1i)
c-----------------------------------------------------------------------
c     the overflow test on k(fnu+i-1,z) before the call to cbknu
c     guarantees that p2 is on scale. scale test1 and all subsequent
c     p2 values by ap1 to ensure that an overflow does not occur
c     prematurely.
c-----------------------------------------------------------------------
      arg = (ap2+ap2)/(ap1*tol)
      test1 = dsqrt(arg)
      test = test1
      rap1 = 1.0d0/ap1
      p1r = p1r*rap1
      p1i = p1i*rap1
      p2r = p2r*rap1
      p2i = p2i*rap1
      ap2 = ap2*rap1
   10 continue
      k = k + 1
      ap1 = ap2
      ptr = p2r
      pti = p2i
      p2r = p1r - (t1r*ptr-t1i*pti)
      p2i = p1i - (t1r*pti+t1i*ptr)
      p1r = ptr
      p1i = pti
      t1r = t1r + rzr
      t1i = t1i + rzi
      ap2 = zabs2(p2r,p2i)
      if (ap1.le.test) go to 10
      if (itime.eq.2) go to 20
      ak = zabs2(t1r,t1i)*0.5d0
      flam = ak + dsqrt(ak*ak-1.0d0)
      rho = dmin1(ap2/ap1,flam)
      test = test1*dsqrt(rho/(rho*rho-1.0d0))
      itime = 2
      go to 10
   20 continue
      kk = k + 1 - id
      ak = dble(float(kk))
      t1r = ak
      t1i = czeroi
      dfnu = fnu + dble(float(n-1))
      p1r = 1.0d0/ap2
      p1i = czeroi
      p2r = czeror
      p2i = czeroi
      do 30 i=1,kk
        ptr = p1r
        pti = p1i
        rap1 = dfnu + t1r
        ttr = rzr*rap1
        tti = rzi*rap1
        p1r = (ptr*ttr-pti*tti) + p2r
        p1i = (ptr*tti+pti*ttr) + p2i
        p2r = ptr
        p2i = pti
        t1r = t1r - coner
   30 continue
      if (p1r.ne.czeror .or. p1i.ne.czeroi) go to 40
      p1r = tol
      p1i = tol
   40 continue
      call zdiv(p2r, p2i, p1r, p1i, cyr(n), cyi(n))
      if (n.eq.1) return
      k = n - 1
      ak = dble(float(k))
      t1r = ak
      t1i = czeroi
      cdfnur = fnu*rzr
      cdfnui = fnu*rzi
      do 60 i=2,n
        ptr = cdfnur + (t1r*rzr-t1i*rzi) + cyr(k+1)
        pti = cdfnui + (t1r*rzi+t1i*rzr) + cyi(k+1)
        ak = zabs2(ptr,pti)
        if (ak.ne.czeror) go to 50
        ptr = tol
        pti = tol
        ak = tol*rt2
   50   continue
        rak = coner/ak
        cyr(k) = rak*ptr*rak
        cyi(k) = -rak*pti*rak
        t1r = t1r - coner
        k = k - 1
   60 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zs1s2(zrr, zri, s1r, s1i, s2r, s2i, nz, ascle, alim,
     * iuf)
c     modified for g77
      EXTERNAL zexp
      EXTERNAL zlog
c     Refer to  zbesk,zairy
c
c     zs1s2 tests for a possible underflow resulting from the
c     addition of the i and k functions in the analytic con-
c     tinuation formula where s1=k function and s2=i function.
c     on kode=1 the i and k functions are different orders of
c     magnitude, but for kode=2 they can be of the same order
c     of magnitude and the maximum must be at least one
c     precision above the underflow limit.
c
c***routines called  zabs2,zexp,zlog
c     complex czero,c1,s1,s1d,s2,zr
      double precision aa, alim, aln, ascle, as1, as2, c1i, c1r, s1di,
     * s1dr, s1i, s1r, s2i, s2r, zeroi, zeror, zri, zrr, zabs2
      integer iuf, idum, nz
      data zeror,zeroi  / 0.0d0 , 0.0d0 /
      nz = 0
      as1 = zabs2(s1r,s1i)
      as2 = zabs2(s2r,s2i)
      if (s1r.eq.0.0d0 .and. s1i.eq.0.0d0) go to 10
      if (as1.eq.0.0d0) go to 10
      aln = -zrr - zrr + dlog(as1)
      s1dr = s1r
      s1di = s1i
      s1r = zeror
      s1i = zeroi
      as1 = zeror
      if (aln.lt.(-alim)) go to 10
      call zlog(s1dr, s1di, c1r, c1i, idum)
      c1r = c1r - zrr - zrr
      c1i = c1i - zri - zri
      call zexp(c1r, c1i, s1r, s1i)
      as1 = zabs2(s1r,s1i)
      iuf = iuf + 1
   10 continue
      aa = dmax1(as1,as2)
      if (aa.gt.ascle) return
      s1r = zeror
      s1i = zeroi
      s2r = zeror
      s2i = zeroi
      nz = 1
      iuf = 0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zshch(zr, zi, cshr, cshi, cchr, cchi)
c     Refer to  zbesk,zbesh
c
c     zshch computes the complex hyperbolic functions csh=sinh(x+i*y)
c     and cch=cosh(x+i*y), where i**2=-1.
c
      double precision cchi, cchr, ch, cn, cshi, cshr, sh, sn, zi, zr,
     * dcosh, dsinh
      sh = dsinh(zr)
      ch = dcosh(zr)
      sn = dsin(zi)
      cn = dcos(zi)
      cshr = sh*cn
      cshi = ch*sn
      cchr = ch*cn
      cchi = sh*sn
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zsqrt(ar, ai, br, bi)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex square root, b=csqrt(a)
c
c***routines called  zabs2
c
      double precision ar, ai, br, bi, zm, dtheta, dpi, drt
      double precision zabs2
      data drt , dpi / 7.071067811865475244008443621d-1,
     1                 3.141592653589793238462643383d+0/
      zm = zabs2(ar,ai)
      zm = dsqrt(zm)
      if (ar.eq.0.0d+0) go to 10
      if (ai.eq.0.0d+0) go to 20
      dtheta = datan(ai/ar)
      if (dtheta.le.0.0d+0) go to 40
      if (ar.lt.0.0d+0) dtheta = dtheta - dpi
      go to 50
   10 if (ai.gt.0.0d+0) go to 60
      if (ai.lt.0.0d+0) go to 70
      br = 0.0d+0
      bi = 0.0d+0
      return
   20 if (ar.gt.0.0d+0) go to 30
      br = 0.0d+0
      bi = dsqrt(dabs(ar))
      return
   30 br = dsqrt(ar)
      bi = 0.0d+0
      return
   40 if (ar.lt.0.0d+0) dtheta = dtheta + dpi
   50 dtheta = dtheta*0.5d+0
      br = zm*dcos(dtheta)
      bi = zm*dsin(dtheta)
      return
   60 br = zm*drt
      bi = zm*drt
      return
   70 br = zm*drt
      bi = -zm*drt
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuchk(yr, yi, nz, ascle, tol)
c     refer to zseri,zuoik,zunk1,zunk2,zuni1,zuni2,zkscl
c
c      y enters as a scaled quantity whose magnitude is greater than
c      exp(-alim)=ascle=1.0e+3*d1mach(1)/tol. the test is made to see
c      if the magnitude of the real or imaginary part would underflow
c      when y is scaled (by tol) to its proper value. y is accepted
c      if the underflow is at least one precision below the magnitude
c      of the largest component; otherwise the phase angle does not have
c      absolute accuracy and an underflow is assumed.
c
c     complex y
      double precision ascle, ss, st, tol, wr, wi, yr, yi
      integer nz
      nz = 0
      wr = dabs(yr)
      wi = dabs(yi)
      st = dmin1(wr,wi)
      if (st.gt.ascle) return
      ss = dmax1(wr,wi)
      st = st/tol
      if (ss.lt.st) nz = 1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunhj(zr, zi, fnu, ipmtr, tol, phir, phii, argr, argi,
     * zeta1r, zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
c     modified for g77
      EXTERNAL zsqrt
      EXTERNAL zlog
c     refer to  zbesi,zbesk
c
c         zunhj computes parameters for bessel functions c(fnu,z) =
c         j(fnu,z), y(fnu,z) or h(i,fnu,z) i=1,2 for large orders fnu
c         by means of the uniform asymptotic expansion
c
c         c(fnu,z)=c1*phi*( asum*airy(arg) + c2*bsum*dairy(arg) )
c
c         for proper choices of c1, c2, airy and dairy where airy is
c         an airy function and dairy is its derivative.
c
c               (2/3)*fnu*zeta**1.5 = zeta1-zeta2,
c
c         zeta1=0.5*fnu*clog((1+w)/(1-w)), zeta2=fnu*w for scaling
c         purposes in airy functions from cairy or cbiry.
c
c         mconj=sign of aimag(z), but is ambiguous when z is real and
c         must be specified. ipmtr=0 returns all parameters. ipmtr=
c         1 computes all except asum and bsum.
c
c***routines called  zabs2,zdiv,zlog,zsqrt,d1mach
c     complex arg,asum,bsum,cfnu,cone,cr,czero,dr,p,phi,przth,ptfn,
c    *rfn13,rtzta,rzth,suma,sumb,tfn,t2,up,w,w2,z,za,zb,zc,zeta,zeta1,
c    *zeta2,zth
      double precision alfa, ang, ap, ar, argi, argr, asumi, asumr,
     * atol, aw2, azth, beta, br, bsumi, bsumr, btol, c, conei, coner,
     * cri, crr, dri, drr, ex1, ex2, fnu, fn13, fn23, gama, gpi, hpi,
     * phii, phir, pi, pp, pr, przthi, przthr, ptfni, ptfnr, raw, raw2,
     * razth, rfnu, rfnu2, rfn13, rtzti, rtztr, rzthi, rzthr, sti, str,
     * sumai, sumar, sumbi, sumbr, test, tfni, tfnr, thpi, tol, tzai,
     * tzar, t2i, t2r, upi, upr, wi, wr, w2i, w2r, zai, zar, zbi, zbr,
     * zci, zcr, zeroi, zeror, zetai, zetar, zeta1i, zeta1r, zeta2i,
     * zeta2r, zi, zr, zthi, zthr, zabs2, ac, d1mach
      integer ias, ibs, ipmtr, is, j, jr, ju, k, kmax, kp1, ks, l, lr,
     * lrp1, l1, l2, m, idum
      dimension ar(14), br(14), c(105), alfa(180), beta(210), gama(30),
     * ap(30), pr(30), pi(30), upr(14), upi(14), crr(14), cri(14),
     * drr(14), dri(14)
      data ar(1), ar(2), ar(3), ar(4), ar(5), ar(6), ar(7), ar(8),
     1     ar(9), ar(10), ar(11), ar(12), ar(13), ar(14)/
     2     1.00000000000000000d+00,     1.04166666666666667d-01,
     3     8.35503472222222222d-02,     1.28226574556327160d-01,
     4     2.91849026464140464d-01,     8.81627267443757652d-01,
     5     3.32140828186276754d+00,     1.49957629868625547d+01,
     6     7.89230130115865181d+01,     4.74451538868264323d+02,
     7     3.20749009089066193d+03,     2.40865496408740049d+04,
     8     1.98923119169509794d+05,     1.79190200777534383d+06/
      data br(1), br(2), br(3), br(4), br(5), br(6), br(7), br(8),
     1     br(9), br(10), br(11), br(12), br(13), br(14)/
     2     1.00000000000000000d+00,    -1.45833333333333333d-01,
     3    -9.87413194444444444d-02,    -1.43312053915895062d-01,
     4    -3.17227202678413548d-01,    -9.42429147957120249d-01,
     5    -3.51120304082635426d+00,    -1.57272636203680451d+01,
     6    -8.22814390971859444d+01,    -4.92355370523670524d+02,
     7    -3.31621856854797251d+03,    -2.48276742452085896d+04,
     8    -2.04526587315129788d+05,    -1.83844491706820990d+06/
      data c(1), c(2), c(3), c(4), c(5), c(6), c(7), c(8), c(9), c(10),
     1     c(11), c(12), c(13), c(14), c(15), c(16), c(17), c(18),
     2     c(19), c(20), c(21), c(22), c(23), c(24)/
     3     1.00000000000000000d+00,    -2.08333333333333333d-01,
     4     1.25000000000000000d-01,     3.34201388888888889d-01,
     5    -4.01041666666666667d-01,     7.03125000000000000d-02,
     6    -1.02581259645061728d+00,     1.84646267361111111d+00,
     7    -8.91210937500000000d-01,     7.32421875000000000d-02,
     8     4.66958442342624743d+00,    -1.12070026162229938d+01,
     9     8.78912353515625000d+00,    -2.36408691406250000d+00,
     a     1.12152099609375000d-01,    -2.82120725582002449d+01,
     b     8.46362176746007346d+01,    -9.18182415432400174d+01,
     c     4.25349987453884549d+01,    -7.36879435947963170d+00,
     d     2.27108001708984375d-01,     2.12570130039217123d+02,
     e    -7.65252468141181642d+02,     1.05999045252799988d+03/
      data c(25), c(26), c(27), c(28), c(29), c(30), c(31), c(32),
     1     c(33), c(34), c(35), c(36), c(37), c(38), c(39), c(40),
     2     c(41), c(42), c(43), c(44), c(45), c(46), c(47), c(48)/
     3    -6.99579627376132541d+02,     2.18190511744211590d+02,
     4    -2.64914304869515555d+01,     5.72501420974731445d-01,
     5    -1.91945766231840700d+03,     8.06172218173730938d+03,
     6    -1.35865500064341374d+04,     1.16553933368645332d+04,
     7    -5.30564697861340311d+03,     1.20090291321635246d+03,
     8    -1.08090919788394656d+02,     1.72772750258445740d+00,
     9     2.02042913309661486d+04,    -9.69805983886375135d+04,
     a     1.92547001232531532d+05,    -2.03400177280415534d+05,
     b     1.22200464983017460d+05,    -4.11926549688975513d+04,
     c     7.10951430248936372d+03,    -4.93915304773088012d+02,
     d     6.07404200127348304d+00,    -2.42919187900551333d+05,
     e     1.31176361466297720d+06,    -2.99801591853810675d+06/
      data c(49), c(50), c(51), c(52), c(53), c(54), c(55), c(56),
     1     c(57), c(58), c(59), c(60), c(61), c(62), c(63), c(64),
     2     c(65), c(66), c(67), c(68), c(69), c(70), c(71), c(72)/
     3     3.76327129765640400d+06,    -2.81356322658653411d+06,
     4     1.26836527332162478d+06,    -3.31645172484563578d+05,
     5     4.52187689813627263d+04,    -2.49983048181120962d+03,
     6     2.43805296995560639d+01,     3.28446985307203782d+06,
     7    -1.97068191184322269d+07,     5.09526024926646422d+07,
     8    -7.41051482115326577d+07,     6.63445122747290267d+07,
     9    -3.75671766607633513d+07,     1.32887671664218183d+07,
     a    -2.78561812808645469d+06,     3.08186404612662398d+05,
     b    -1.38860897537170405d+04,     1.10017140269246738d+02,
     c    -4.93292536645099620d+07,     3.25573074185765749d+08,
     d    -9.39462359681578403d+08,     1.55359689957058006d+09,
     e    -1.62108055210833708d+09,     1.10684281682301447d+09/
      data c(73), c(74), c(75), c(76), c(77), c(78), c(79), c(80),
     1     c(81), c(82), c(83), c(84), c(85), c(86), c(87), c(88),
     2     c(89), c(90), c(91), c(92), c(93), c(94), c(95), c(96)/
     3    -4.95889784275030309d+08,     1.42062907797533095d+08,
     4    -2.44740627257387285d+07,     2.24376817792244943d+06,
     5    -8.40054336030240853d+04,     5.51335896122020586d+02,
     6     8.14789096118312115d+08,    -5.86648149205184723d+09,
     7     1.86882075092958249d+10,    -3.46320433881587779d+10,
     8     4.12801855797539740d+10,    -3.30265997498007231d+10,
     9     1.79542137311556001d+10,    -6.56329379261928433d+09,
     a     1.55927986487925751d+09,    -2.25105661889415278d+08,
     b     1.73951075539781645d+07,    -5.49842327572288687d+05,
     c     3.03809051092238427d+03,    -1.46792612476956167d+10,
     d     1.14498237732025810d+11,    -3.99096175224466498d+11,
     e     8.19218669548577329d+11,    -1.09837515608122331d+12/
      data c(97), c(98), c(99), c(100), c(101), c(102), c(103), c(104),
     1     c(105)/
     2     1.00815810686538209d+12,    -6.45364869245376503d+11,
     3     2.87900649906150589d+11,    -8.78670721780232657d+10,
     4     1.76347306068349694d+10,    -2.16716498322379509d+09,
     5     1.43157876718888981d+08,    -3.87183344257261262d+06,
     6     1.82577554742931747d+04/
      data alfa(1), alfa(2), alfa(3), alfa(4), alfa(5), alfa(6),
     1     alfa(7), alfa(8), alfa(9), alfa(10), alfa(11), alfa(12),
     2     alfa(13), alfa(14), alfa(15), alfa(16), alfa(17), alfa(18),
     3     alfa(19), alfa(20), alfa(21), alfa(22)/
     4    -4.44444444444444444d-03,    -9.22077922077922078d-04,
     5    -8.84892884892884893d-05,     1.65927687832449737d-04,
     6     2.46691372741792910d-04,     2.65995589346254780d-04,
     7     2.61824297061500945d-04,     2.48730437344655609d-04,
     8     2.32721040083232098d-04,     2.16362485712365082d-04,
     9     2.00738858762752355d-04,     1.86267636637545172d-04,
     a     1.73060775917876493d-04,     1.61091705929015752d-04,
     b     1.50274774160908134d-04,     1.40503497391269794d-04,
     c     1.31668816545922806d-04,     1.23667445598253261d-04,
     d     1.16405271474737902d-04,     1.09798298372713369d-04,
     e     1.03772410422992823d-04,     9.82626078369363448d-05/
      data alfa(23), alfa(24), alfa(25), alfa(26), alfa(27), alfa(28),
     1     alfa(29), alfa(30), alfa(31), alfa(32), alfa(33), alfa(34),
     2     alfa(35), alfa(36), alfa(37), alfa(38), alfa(39), alfa(40),
     3     alfa(41), alfa(42), alfa(43), alfa(44)/
     4     9.32120517249503256d-05,     8.85710852478711718d-05,
     5     8.42963105715700223d-05,     8.03497548407791151d-05,
     6     7.66981345359207388d-05,     7.33122157481777809d-05,
     7     7.01662625163141333d-05,     6.72375633790160292d-05,
     8     6.93735541354588974d-04,     2.32241745182921654d-04,
     9    -1.41986273556691197d-05,    -1.16444931672048640d-04,
     a    -1.50803558053048762d-04,    -1.55121924918096223d-04,
     b    -1.46809756646465549d-04,    -1.33815503867491367d-04,
     c    -1.19744975684254051d-04,    -1.06184319207974020d-04,
     d    -9.37699549891194492d-05,    -8.26923045588193274d-05,
     e    -7.29374348155221211d-05,    -6.44042357721016283d-05/
      data alfa(45), alfa(46), alfa(47), alfa(48), alfa(49), alfa(50),
     1     alfa(51), alfa(52), alfa(53), alfa(54), alfa(55), alfa(56),
     2     alfa(57), alfa(58), alfa(59), alfa(60), alfa(61), alfa(62),
     3     alfa(63), alfa(64), alfa(65), alfa(66)/
     4    -5.69611566009369048d-05,    -5.04731044303561628d-05,
     5    -4.48134868008882786d-05,    -3.98688727717598864d-05,
     6    -3.55400532972042498d-05,    -3.17414256609022480d-05,
     7    -2.83996793904174811d-05,    -2.54522720634870566d-05,
     8    -2.28459297164724555d-05,    -2.05352753106480604d-05,
     9    -1.84816217627666085d-05,    -1.66519330021393806d-05,
     a    -1.50179412980119482d-05,    -1.35554031379040526d-05,
     b    -1.22434746473858131d-05,    -1.10641884811308169d-05,
     c    -3.54211971457743841d-04,    -1.56161263945159416d-04,
     d     3.04465503594936410d-05,     1.30198655773242693d-04,
     e     1.67471106699712269d-04,     1.70222587683592569d-04/
      data alfa(67), alfa(68), alfa(69), alfa(70), alfa(71), alfa(72),
     1     alfa(73), alfa(74), alfa(75), alfa(76), alfa(77), alfa(78),
     2     alfa(79), alfa(80), alfa(81), alfa(82), alfa(83), alfa(84),
     3     alfa(85), alfa(86), alfa(87), alfa(88)/
     4     1.56501427608594704d-04,     1.36339170977445120d-04,
     5     1.14886692029825128d-04,     9.45869093034688111d-05,
     6     7.64498419250898258d-05,     6.07570334965197354d-05,
     7     4.74394299290508799d-05,     3.62757512005344297d-05,
     8     2.69939714979224901d-05,     1.93210938247939253d-05,
     9     1.30056674793963203d-05,     7.82620866744496661d-06,
     a     3.59257485819351583d-06,     1.44040049814251817d-07,
     b    -2.65396769697939116d-06,    -4.91346867098485910d-06,
     c    -6.72739296091248287d-06,    -8.17269379678657923d-06,
     d    -9.31304715093561232d-06,    -1.02011418798016441d-05,
     e    -1.08805962510592880d-05,    -1.13875481509603555d-05/
      data alfa(89), alfa(90), alfa(91), alfa(92), alfa(93), alfa(94),
     1     alfa(95), alfa(96), alfa(97), alfa(98), alfa(99), alfa(100),
     2     alfa(101), alfa(102), alfa(103), alfa(104), alfa(105),
     3     alfa(106), alfa(107), alfa(108), alfa(109), alfa(110)/
     4    -1.17519675674556414d-05,    -1.19987364870944141d-05,
     5     3.78194199201772914d-04,     2.02471952761816167d-04,
     6    -6.37938506318862408d-05,    -2.38598230603005903d-04,
     7    -3.10916256027361568d-04,    -3.13680115247576316d-04,
     8    -2.78950273791323387d-04,    -2.28564082619141374d-04,
     9    -1.75245280340846749d-04,    -1.25544063060690348d-04,
     a    -8.22982872820208365d-05,    -4.62860730588116458d-05,
     b    -1.72334302366962267d-05,     5.60690482304602267d-06,
     c     2.31395443148286800d-05,     3.62642745856793957d-05,
     d     4.58006124490188752d-05,     5.24595294959114050d-05,
     e     5.68396208545815266d-05,     5.94349820393104052d-05/
      data alfa(111), alfa(112), alfa(113), alfa(114), alfa(115),
     1     alfa(116), alfa(117), alfa(118), alfa(119), alfa(120),
     2     alfa(121), alfa(122), alfa(123), alfa(124), alfa(125),
     3     alfa(126), alfa(127), alfa(128), alfa(129), alfa(130)/
     4     6.06478527578421742d-05,     6.08023907788436497d-05,
     5     6.01577894539460388d-05,     5.89199657344698500d-05,
     6     5.72515823777593053d-05,     5.52804375585852577d-05,
     7     5.31063773802880170d-05,     5.08069302012325706d-05,
     8     4.84418647620094842d-05,     4.60568581607475370d-05,
     9    -6.91141397288294174d-04,    -4.29976633058871912d-04,
     a     1.83067735980039018d-04,     6.60088147542014144d-04,
     b     8.75964969951185931d-04,     8.77335235958235514d-04,
     c     7.49369585378990637d-04,     5.63832329756980918d-04,
     d     3.68059319971443156d-04,     1.88464535514455599d-04/
      data alfa(131), alfa(132), alfa(133), alfa(134), alfa(135),
     1     alfa(136), alfa(137), alfa(138), alfa(139), alfa(140),
     2     alfa(141), alfa(142), alfa(143), alfa(144), alfa(145),
     3     alfa(146), alfa(147), alfa(148), alfa(149), alfa(150)/
     4     3.70663057664904149d-05,    -8.28520220232137023d-05,
     5    -1.72751952869172998d-04,    -2.36314873605872983d-04,
     6    -2.77966150694906658d-04,    -3.02079514155456919d-04,
     7    -3.12594712643820127d-04,    -3.12872558758067163d-04,
     8    -3.05678038466324377d-04,    -2.93226470614557331d-04,
     9    -2.77255655582934777d-04,    -2.59103928467031709d-04,
     a    -2.39784014396480342d-04,    -2.20048260045422848d-04,
     b    -2.00443911094971498d-04,    -1.81358692210970687d-04,
     c    -1.63057674478657464d-04,    -1.45712672175205844d-04,
     d    -1.29425421983924587d-04,    -1.14245691942445952d-04/
      data alfa(151), alfa(152), alfa(153), alfa(154), alfa(155),
     1     alfa(156), alfa(157), alfa(158), alfa(159), alfa(160),
     2     alfa(161), alfa(162), alfa(163), alfa(164), alfa(165),
     3     alfa(166), alfa(167), alfa(168), alfa(169), alfa(170)/
     4     1.92821964248775885d-03,     1.35592576302022234d-03,
     5    -7.17858090421302995d-04,    -2.58084802575270346d-03,
     6    -3.49271130826168475d-03,    -3.46986299340960628d-03,
     7    -2.82285233351310182d-03,    -1.88103076404891354d-03,
     8    -8.89531718383947600d-04,     3.87912102631035228d-06,
     9     7.28688540119691412d-04,     1.26566373053457758d-03,
     a     1.62518158372674427d-03,     1.83203153216373172d-03,
     b     1.91588388990527909d-03,     1.90588846755546138d-03,
     c     1.82798982421825727d-03,     1.70389506421121530d-03,
     d     1.55097127171097686d-03,     1.38261421852276159d-03/
      data alfa(171), alfa(172), alfa(173), alfa(174), alfa(175),
     1     alfa(176), alfa(177), alfa(178), alfa(179), alfa(180)/
     2     1.20881424230064774d-03,     1.03676532638344962d-03,
     3     8.71437918068619115d-04,     7.16080155297701002d-04,
     4     5.72637002558129372d-04,     4.42089819465802277d-04,
     5     3.24724948503090564d-04,     2.20342042730246599d-04,
     6     1.28412898401353882d-04,     4.82005924552095464d-05/
      data beta(1), beta(2), beta(3), beta(4), beta(5), beta(6),
     1     beta(7), beta(8), beta(9), beta(10), beta(11), beta(12),
     2     beta(13), beta(14), beta(15), beta(16), beta(17), beta(18),
     3     beta(19), beta(20), beta(21), beta(22)/
     4     1.79988721413553309d-02,     5.59964911064388073d-03,
     5     2.88501402231132779d-03,     1.80096606761053941d-03,
     6     1.24753110589199202d-03,     9.22878876572938311d-04,
     7     7.14430421727287357d-04,     5.71787281789704872d-04,
     8     4.69431007606481533d-04,     3.93232835462916638d-04,
     9     3.34818889318297664d-04,     2.88952148495751517d-04,
     a     2.52211615549573284d-04,     2.22280580798883327d-04,
     b     1.97541838033062524d-04,     1.76836855019718004d-04,
     c     1.59316899661821081d-04,     1.44347930197333986d-04,
     d     1.31448068119965379d-04,     1.20245444949302884d-04,
     e     1.10449144504599392d-04,     1.01828770740567258d-04/
      data beta(23), beta(24), beta(25), beta(26), beta(27), beta(28),
     1     beta(29), beta(30), beta(31), beta(32), beta(33), beta(34),
     2     beta(35), beta(36), beta(37), beta(38), beta(39), beta(40),
     3     beta(41), beta(42), beta(43), beta(44)/
     4     9.41998224204237509d-05,     8.74130545753834437d-05,
     5     8.13466262162801467d-05,     7.59002269646219339d-05,
     6     7.09906300634153481d-05,     6.65482874842468183d-05,
     7     6.25146958969275078d-05,     5.88403394426251749d-05,
     8    -1.49282953213429172d-03,    -8.78204709546389328d-04,
     9    -5.02916549572034614d-04,    -2.94822138512746025d-04,
     a    -1.75463996970782828d-04,    -1.04008550460816434d-04,
     b    -5.96141953046457895d-05,    -3.12038929076098340d-05,
     c    -1.26089735980230047d-05,    -2.42892608575730389d-07,
     d     8.05996165414273571d-06,     1.36507009262147391d-05,
     e     1.73964125472926261d-05,     1.98672978842133780d-05/
      data beta(45), beta(46), beta(47), beta(48), beta(49), beta(50),
     1     beta(51), beta(52), beta(53), beta(54), beta(55), beta(56),
     2     beta(57), beta(58), beta(59), beta(60), beta(61), beta(62),
     3     beta(63), beta(64), beta(65), beta(66)/
     4     2.14463263790822639d-05,     2.23954659232456514d-05,
     5     2.28967783814712629d-05,     2.30785389811177817d-05,
     6     2.30321976080909144d-05,     2.28236073720348722d-05,
     7     2.25005881105292418d-05,     2.20981015361991429d-05,
     8     2.16418427448103905d-05,     2.11507649256220843d-05,
     9     2.06388749782170737d-05,     2.01165241997081666d-05,
     a     1.95913450141179244d-05,     1.90689367910436740d-05,
     b     1.85533719641636667d-05,     1.80475722259674218d-05,
     c     5.52213076721292790d-04,     4.47932581552384646d-04,
     d     2.79520653992020589d-04,     1.52468156198446602d-04,
     e     6.93271105657043598d-05,     1.76258683069991397d-05/
      data beta(67), beta(68), beta(69), beta(70), beta(71), beta(72),
     1     beta(73), beta(74), beta(75), beta(76), beta(77), beta(78),
     2     beta(79), beta(80), beta(81), beta(82), beta(83), beta(84),
     3     beta(85), beta(86), beta(87), beta(88)/
     4    -1.35744996343269136d-05,    -3.17972413350427135d-05,
     5    -4.18861861696693365d-05,    -4.69004889379141029d-05,
     6    -4.87665447413787352d-05,    -4.87010031186735069d-05,
     7    -4.74755620890086638d-05,    -4.55813058138628452d-05,
     8    -4.33309644511266036d-05,    -4.09230193157750364d-05,
     9    -3.84822638603221274d-05,    -3.60857167535410501d-05,
     a    -3.37793306123367417d-05,    -3.15888560772109621d-05,
     b    -2.95269561750807315d-05,    -2.75978914828335759d-05,
     c    -2.58006174666883713d-05,    -2.41308356761280200d-05,
     d    -2.25823509518346033d-05,    -2.11479656768912971d-05,
     e    -1.98200638885294927d-05,    -1.85909870801065077d-05/
      data beta(89), beta(90), beta(91), beta(92), beta(93), beta(94),
     1     beta(95), beta(96), beta(97), beta(98), beta(99), beta(100),
     2     beta(101), beta(102), beta(103), beta(104), beta(105),
     3     beta(106), beta(107), beta(108), beta(109), beta(110)/
     4    -1.74532699844210224d-05,    -1.63997823854497997d-05,
     5    -4.74617796559959808d-04,    -4.77864567147321487d-04,
     6    -3.20390228067037603d-04,    -1.61105016119962282d-04,
     7    -4.25778101285435204d-05,     3.44571294294967503d-05,
     8     7.97092684075674924d-05,     1.03138236708272200d-04,
     9     1.12466775262204158d-04,     1.13103642108481389d-04,
     a     1.08651634848774268d-04,     1.01437951597661973d-04,
     b     9.29298396593363896d-05,     8.40293133016089978d-05,
     c     7.52727991349134062d-05,     6.69632521975730872d-05,
     d     5.92564547323194704d-05,     5.22169308826975567d-05,
     e     4.58539485165360646d-05,     4.01445513891486808d-05/
      data beta(111), beta(112), beta(113), beta(114), beta(115),
     1     beta(116), beta(117), beta(118), beta(119), beta(120),
     2     beta(121), beta(122), beta(123), beta(124), beta(125),
     3     beta(126), beta(127), beta(128), beta(129), beta(130)/
     4     3.50481730031328081d-05,     3.05157995034346659d-05,
     5     2.64956119950516039d-05,     2.29363633690998152d-05,
     6     1.97893056664021636d-05,     1.70091984636412623d-05,
     7     1.45547428261524004d-05,     1.23886640995878413d-05,
     8     1.04775876076583236d-05,     8.79179954978479373d-06,
     9     7.36465810572578444d-04,     8.72790805146193976d-04,
     a     6.22614862573135066d-04,     2.85998154194304147d-04,
     b     3.84737672879366102d-06,    -1.87906003636971558d-04,
     c    -2.97603646594554535d-04,    -3.45998126832656348d-04,
     d    -3.53382470916037712d-04,    -3.35715635775048757d-04/
      data beta(131), beta(132), beta(133), beta(134), beta(135),
     1     beta(136), beta(137), beta(138), beta(139), beta(140),
     2     beta(141), beta(142), beta(143), beta(144), beta(145),
     3     beta(146), beta(147), beta(148), beta(149), beta(150)/
     4    -3.04321124789039809d-04,    -2.66722723047612821d-04,
     5    -2.27654214122819527d-04,    -1.89922611854562356d-04,
     6    -1.55058918599093870d-04,    -1.23778240761873630d-04,
     7    -9.62926147717644187d-05,    -7.25178327714425337d-05,
     8    -5.22070028895633801d-05,    -3.50347750511900522d-05,
     9    -2.06489761035551757d-05,    -8.70106096849767054d-06,
     a     1.13698686675100290d-06,     9.16426474122778849d-06,
     b     1.56477785428872620d-05,     2.08223629482466847d-05,
     c     2.48923381004595156d-05,     2.80340509574146325d-05,
     d     3.03987774629861915d-05,     3.21156731406700616d-05/
      data beta(151), beta(152), beta(153), beta(154), beta(155),
     1     beta(156), beta(157), beta(158), beta(159), beta(160),
     2     beta(161), beta(162), beta(163), beta(164), beta(165),
     3     beta(166), beta(167), beta(168), beta(169), beta(170)/
     4    -1.80182191963885708d-03,    -2.43402962938042533d-03,
     5    -1.83422663549856802d-03,    -7.62204596354009765d-04,
     6     2.39079475256927218d-04,     9.49266117176881141d-04,
     7     1.34467449701540359d-03,     1.48457495259449178d-03,
     8     1.44732339830617591d-03,     1.30268261285657186d-03,
     9     1.10351597375642682d-03,     8.86047440419791759d-04,
     a     6.73073208165665473d-04,     4.77603872856582378d-04,
     b     3.05991926358789362d-04,     1.60315694594721630d-04,
     c     4.00749555270613286d-05,    -5.66607461635251611d-05,
     d    -1.32506186772982638d-04,    -1.90296187989614057d-04/
      data beta(171), beta(172), beta(173), beta(174), beta(175),
     1     beta(176), beta(177), beta(178), beta(179), beta(180),
     2     beta(181), beta(182), beta(183), beta(184), beta(185),
     3     beta(186), beta(187), beta(188), beta(189), beta(190)/
     4    -2.32811450376937408d-04,    -2.62628811464668841d-04,
     5    -2.82050469867598672d-04,    -2.93081563192861167d-04,
     6    -2.97435962176316616d-04,    -2.96557334239348078d-04,
     7    -2.91647363312090861d-04,    -2.83696203837734166d-04,
     8    -2.73512317095673346d-04,    -2.61750155806768580d-04,
     9     6.38585891212050914d-03,     9.62374215806377941d-03,
     a     7.61878061207001043d-03,     2.83219055545628054d-03,
     b    -2.09841352012720090d-03,    -5.73826764216626498d-03,
     c    -7.70804244495414620d-03,    -8.21011692264844401d-03,
     d    -7.65824520346905413d-03,    -6.47209729391045177d-03/
      data beta(191), beta(192), beta(193), beta(194), beta(195),
     1     beta(196), beta(197), beta(198), beta(199), beta(200),
     2     beta(201), beta(202), beta(203), beta(204), beta(205),
     3     beta(206), beta(207), beta(208), beta(209), beta(210)/
     4    -4.99132412004966473d-03,    -3.45612289713133280d-03,
     5    -2.01785580014170775d-03,    -7.59430686781961401d-04,
     6     2.84173631523859138d-04,     1.10891667586337403d-03,
     7     1.72901493872728771d-03,     2.16812590802684701d-03,
     8     2.45357710494539735d-03,     2.61281821058334862d-03,
     9     2.67141039656276912d-03,     2.65203073395980430d-03,
     a     2.57411652877287315d-03,     2.45389126236094427d-03,
     b     2.30460058071795494d-03,     2.13684837686712662d-03,
     c     1.95896528478870911d-03,     1.77737008679454412d-03,
     d     1.59690280765839059d-03,     1.42111975664438546d-03/
      data gama(1), gama(2), gama(3), gama(4), gama(5), gama(6),
     1     gama(7), gama(8), gama(9), gama(10), gama(11), gama(12),
     2     gama(13), gama(14), gama(15), gama(16), gama(17), gama(18),
     3     gama(19), gama(20), gama(21), gama(22)/
     4     6.29960524947436582d-01,     2.51984209978974633d-01,
     5     1.54790300415655846d-01,     1.10713062416159013d-01,
     6     8.57309395527394825d-02,     6.97161316958684292d-02,
     7     5.86085671893713576d-02,     5.04698873536310685d-02,
     8     4.42600580689154809d-02,     3.93720661543509966d-02,
     9     3.54283195924455368d-02,     3.21818857502098231d-02,
     a     2.94646240791157679d-02,     2.71581677112934479d-02,
     b     2.51768272973861779d-02,     2.34570755306078891d-02,
     c     2.19508390134907203d-02,     2.06210828235646240d-02,
     d     1.94388240897880846d-02,     1.83810633800683158d-02,
     e     1.74293213231963172d-02,     1.65685837786612353d-02/
      data gama(23), gama(24), gama(25), gama(26), gama(27), gama(28),
     1     gama(29), gama(30)/
     2     1.57865285987918445d-02,     1.50729501494095594d-02,
     3     1.44193250839954639d-02,     1.38184805735341786d-02,
     4     1.32643378994276568d-02,     1.27517121970498651d-02,
     5     1.22761545318762767d-02,     1.18338262398482403d-02/
      data ex1, ex2, hpi, gpi, thpi /
     1     3.33333333333333333d-01,     6.66666666666666667d-01,
     2     1.57079632679489662d+00,     3.14159265358979324d+00,
     3     4.71238898038468986d+00/
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
c
      rfnu = 1.0d0/fnu
c-----------------------------------------------------------------------
c     overflow test (z/fnu too small)
c-----------------------------------------------------------------------
      test = d1mach(1)*1.0d+3
      ac = fnu*test
      if (dabs(zr).gt.ac .or. dabs(zi).gt.ac) go to 15
      zeta1r = 2.0d0*dabs(dlog(test))+fnu
      zeta1i = 0.0d0
      zeta2r = fnu
      zeta2i = 0.0d0
      phir = 1.0d0
      phii = 0.0d0
      argr = 1.0d0
      argi = 0.0d0
      return
   15 continue
      zbr = zr*rfnu
      zbi = zi*rfnu
      rfnu2 = rfnu*rfnu
c-----------------------------------------------------------------------
c     compute in the fourth quadrant
c-----------------------------------------------------------------------
      fn13 = fnu**ex1
      fn23 = fn13*fn13
      rfn13 = 1.0d0/fn13
      w2r = coner - zbr*zbr + zbi*zbi
      w2i = conei - zbr*zbi - zbr*zbi
      aw2 = zabs2(w2r,w2i)
      if (aw2.gt.0.25d0) go to 130
c-----------------------------------------------------------------------
c     power series for cabs(w2).le.0.25d0
c-----------------------------------------------------------------------
      k = 1
      pr(1) = coner
      pi(1) = conei
      sumar = gama(1)
      sumai = zeroi
      ap(1) = 1.0d0
      if (aw2.lt.tol) go to 20
      do 10 k=2,30
        pr(k) = pr(k-1)*w2r - pi(k-1)*w2i
        pi(k) = pr(k-1)*w2i + pi(k-1)*w2r
        sumar = sumar + pr(k)*gama(k)
        sumai = sumai + pi(k)*gama(k)
        ap(k) = ap(k-1)*aw2
        if (ap(k).lt.tol) go to 20
   10 continue
      k = 30
   20 continue
      kmax = k
      zetar = w2r*sumar - w2i*sumai
      zetai = w2r*sumai + w2i*sumar
      argr = zetar*fn23
      argi = zetai*fn23
      call zsqrt(sumar, sumai, zar, zai)
      call zsqrt(w2r, w2i, str, sti)
      zeta2r = str*fnu
      zeta2i = sti*fnu
      str = coner + ex2*(zetar*zar-zetai*zai)
      sti = conei + ex2*(zetar*zai+zetai*zar)
      zeta1r = str*zeta2r - sti*zeta2i
      zeta1i = str*zeta2i + sti*zeta2r
      zar = zar + zar
      zai = zai + zai
      call zsqrt(zar, zai, str, sti)
      phir = str*rfn13
      phii = sti*rfn13
      if (ipmtr.eq.1) go to 120
c-----------------------------------------------------------------------
c     sum series for asum and bsum
c-----------------------------------------------------------------------
      sumbr = zeror
      sumbi = zeroi
      do 30 k=1,kmax
        sumbr = sumbr + pr(k)*beta(k)
        sumbi = sumbi + pi(k)*beta(k)
   30 continue
      asumr = zeror
      asumi = zeroi
      bsumr = sumbr
      bsumi = sumbi
      l1 = 0
      l2 = 30
      btol = tol*(dabs(bsumr)+dabs(bsumi))
      atol = tol
      pp = 1.0d0
      ias = 0
      ibs = 0
      if (rfnu2.lt.tol) go to 110
      do 100 is=2,7
        atol = atol/rfnu2
        pp = pp*rfnu2
        if (ias.eq.1) go to 60
        sumar = zeror
        sumai = zeroi
        do 40 k=1,kmax
          m = l1 + k
          sumar = sumar + pr(k)*alfa(m)
          sumai = sumai + pi(k)*alfa(m)
          if (ap(k).lt.atol) go to 50
   40   continue
   50   continue
        asumr = asumr + sumar*pp
        asumi = asumi + sumai*pp
        if (pp.lt.tol) ias = 1
   60   continue
        if (ibs.eq.1) go to 90
        sumbr = zeror
        sumbi = zeroi
        do 70 k=1,kmax
          m = l2 + k
          sumbr = sumbr + pr(k)*beta(m)
          sumbi = sumbi + pi(k)*beta(m)
          if (ap(k).lt.atol) go to 80
   70   continue
   80   continue
        bsumr = bsumr + sumbr*pp
        bsumi = bsumi + sumbi*pp
        if (pp.lt.btol) ibs = 1
   90   continue
        if (ias.eq.1 .and. ibs.eq.1) go to 110
        l1 = l1 + 30
        l2 = l2 + 30
  100 continue
  110 continue
      asumr = asumr + coner
      pp = rfnu*rfn13
      bsumr = bsumr*pp
      bsumi = bsumi*pp
  120 continue
      return
c-----------------------------------------------------------------------
c     cabs(w2).gt.0.25d0
c-----------------------------------------------------------------------
  130 continue
      call zsqrt(w2r, w2i, wr, wi)
      if (wr.lt.0.0d0) wr = 0.0d0
      if (wi.lt.0.0d0) wi = 0.0d0
      str = coner + wr
      sti = wi
      call zdiv(str, sti, zbr, zbi, zar, zai)
      call zlog(zar, zai, zcr, zci, idum)
      if (zci.lt.0.0d0) zci = 0.0d0
      if (zci.gt.hpi) zci = hpi
      if (zcr.lt.0.0d0) zcr = 0.0d0
      zthr = (zcr-wr)*1.5d0
      zthi = (zci-wi)*1.5d0
      zeta1r = zcr*fnu
      zeta1i = zci*fnu
      zeta2r = wr*fnu
      zeta2i = wi*fnu
      azth = zabs2(zthr,zthi)
      ang = thpi
      if (zthr.ge.0.0d0 .and. zthi.lt.0.0d0) go to 140
      ang = hpi
      if (zthr.eq.0.0d0) go to 140
      ang = datan(zthi/zthr)
      if (zthr.lt.0.0d0) ang = ang + gpi
  140 continue
      pp = azth**ex2
      ang = ang*ex2
      zetar = pp*dcos(ang)
      zetai = pp*dsin(ang)
      if (zetai.lt.0.0d0) zetai = 0.0d0
      argr = zetar*fn23
      argi = zetai*fn23
      call zdiv(zthr, zthi, zetar, zetai, rtztr, rtzti)
      call zdiv(rtztr, rtzti, wr, wi, zar, zai)
      tzar = zar + zar
      tzai = zai + zai
      call zsqrt(tzar, tzai, str, sti)
      phir = str*rfn13
      phii = sti*rfn13
      if (ipmtr.eq.1) go to 120
      raw = 1.0d0/dsqrt(aw2)
      str = wr*raw
      sti = -wi*raw
      tfnr = str*rfnu*raw
      tfni = sti*rfnu*raw
      razth = 1.0d0/azth
      str = zthr*razth
      sti = -zthi*razth
      rzthr = str*razth*rfnu
      rzthi = sti*razth*rfnu
      zcr = rzthr*ar(2)
      zci = rzthi*ar(2)
      raw2 = 1.0d0/aw2
      str = w2r*raw2
      sti = -w2i*raw2
      t2r = str*raw2
      t2i = sti*raw2
      str = t2r*c(2) + c(3)
      sti = t2i*c(2)
      upr(2) = str*tfnr - sti*tfni
      upi(2) = str*tfni + sti*tfnr
      bsumr = upr(2) + zcr
      bsumi = upi(2) + zci
      asumr = zeror
      asumi = zeroi
      if (rfnu.lt.tol) go to 220
      przthr = rzthr
      przthi = rzthi
      ptfnr = tfnr
      ptfni = tfni
      upr(1) = coner
      upi(1) = conei
      pp = 1.0d0
      btol = tol*(dabs(bsumr)+dabs(bsumi))
      ks = 0
      kp1 = 2
      l = 3
      ias = 0
      ibs = 0
      do 210 lr=2,12,2
        lrp1 = lr + 1
c-----------------------------------------------------------------------
c     compute two additional cr, dr, and up for two more terms in
c     next suma and sumb
c-----------------------------------------------------------------------
        do 160 k=lr,lrp1
          ks = ks + 1
          kp1 = kp1 + 1
          l = l + 1
          zar = c(l)
          zai = zeroi
          do 150 j=2,kp1
            l = l + 1
            str = zar*t2r - t2i*zai + c(l)
            zai = zar*t2i + zai*t2r
            zar = str
  150     continue
          str = ptfnr*tfnr - ptfni*tfni
          ptfni = ptfnr*tfni + ptfni*tfnr
          ptfnr = str
          upr(kp1) = ptfnr*zar - ptfni*zai
          upi(kp1) = ptfni*zar + ptfnr*zai
          crr(ks) = przthr*br(ks+1)
          cri(ks) = przthi*br(ks+1)
          str = przthr*rzthr - przthi*rzthi
          przthi = przthr*rzthi + przthi*rzthr
          przthr = str
          drr(ks) = przthr*ar(ks+2)
          dri(ks) = przthi*ar(ks+2)
  160   continue
        pp = pp*rfnu2
        if (ias.eq.1) go to 180
        sumar = upr(lrp1)
        sumai = upi(lrp1)
        ju = lrp1
        do 170 jr=1,lr
          ju = ju - 1
          sumar = sumar + crr(jr)*upr(ju) - cri(jr)*upi(ju)
          sumai = sumai + crr(jr)*upi(ju) + cri(jr)*upr(ju)
  170   continue
        asumr = asumr + sumar
        asumi = asumi + sumai
        test = dabs(sumar) + dabs(sumai)
        if (pp.lt.tol .and. test.lt.tol) ias = 1
  180   continue
        if (ibs.eq.1) go to 200
        sumbr = upr(lr+2) + upr(lrp1)*zcr - upi(lrp1)*zci
        sumbi = upi(lr+2) + upr(lrp1)*zci + upi(lrp1)*zcr
        ju = lrp1
        do 190 jr=1,lr
          ju = ju - 1
          sumbr = sumbr + drr(jr)*upr(ju) - dri(jr)*upi(ju)
          sumbi = sumbi + drr(jr)*upi(ju) + dri(jr)*upr(ju)
  190   continue
        bsumr = bsumr + sumbr
        bsumi = bsumi + sumbi
        test = dabs(sumbr) + dabs(sumbi)
        if (pp.lt.btol .and. test.lt.btol) ibs = 1
  200   continue
        if (ias.eq.1 .and. ibs.eq.1) go to 220
  210 continue
  220 continue
      asumr = asumr + coner
      str = -bsumr*rfn13
      sti = -bsumi*rfn13
      call zdiv(str, sti, rtztr, rtzti, bsumr, bsumi)
      go to 120
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuni1(zr, zi, fnu, kode, n, yr, yi, nz, nlast, fnul,
     * tol, elim, alim)
c     refer to  zbesi,zbesk
c
c     zuni1 computes i(fnu,z)  by means of the uniform asymptotic
c     expansion for i(fnu,z) in -pi/3.le.arg z.le.pi/3.
c
c     fnul is the smallest order permitted for the asymptotic
c     expansion. nlast=0 means all of the y values were set.
c     nlast.ne.0 is the number left to be computed by another
c     formula for orders fnu to fnu+nlast-1 because fnu+nlast-1.lt.fnul.
c     y(i)=czero for i=nlast+1,n
c
c***routines called  zuchk,zunik,zuoik,d1mach,zabs2
c     complex cfn,cone,crsc,cscl,csr,css,cwrk,czero,c1,c2,phi,rz,sum,s1,
c    *s2,y,z,zeta1,zeta2
      double precision alim, aphi, ascle, bry, coner, crsc,
     * cscl, csrr, cssr, cwrki, cwrkr, c1r, c2i, c2m, c2r, elim, fn,
     * fnu, fnul, phii, phir, rast, rs1, rzi, rzr, sti, str, sumi,
     * sumr, s1i, s1r, s2i, s2r, tol, yi, yr, zeroi, zeror, zeta1i,
     * zeta1r, zeta2i, zeta2r, zi, zr, cyr, cyi, d1mach, zabs2
      integer i, iflag, init, k, kode, m, n, nd, nlast, nn, nuf, nw, nz
      dimension bry(3), yr(n), yi(n), cwrkr(16), cwrki(16), cssr(3),
     * csrr(3), cyr(2), cyi(2)
      data zeror,zeroi,coner / 0.0d0, 0.0d0, 1.0d0 /
c
      nz = 0
      nd = n
      nlast = 0
c-----------------------------------------------------------------------
c     computed values with exponents between alim and elim in mag-
c     nitude are scaled to keep intermediate arithmetic on scale,
c     exp(alim)=exp(elim)*tol
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
c-----------------------------------------------------------------------
c     check for underflow and overflow on first member
c-----------------------------------------------------------------------
      fn = dmax1(fnu,1.0d0)
      init = 0
      call zunik(zr, zi, fn, 1, 1, tol, init, phir, phii, zeta1r,
     * zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
      if (kode.eq.1) go to 10
      str = zr + zeta2r
      sti = zi + zeta2i
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = -zeta1r + str
      s1i = -zeta1i + sti
      go to 20
   10 continue
      s1r = -zeta1r + zeta2r
      s1i = -zeta1i + zeta2i
   20 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 130
   30 continue
      nn = min0(2,nd)
      do 80 i=1,nn
        fn = fnu + dble(float(nd-i))
        init = 0
        call zunik(zr, zi, fn, 1, 0, tol, init, phir, phii, zeta1r,
     *   zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
        if (kode.eq.1) go to 40
        str = zr + zeta2r
        sti = zi + zeta2i
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zeta1r + str
        s1i = -zeta1i + sti + zi
        go to 50
   40   continue
        s1r = -zeta1r + zeta2r
        s1i = -zeta1i + zeta2i
   50   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 110
        if (i.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 60
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phir,phii)
        rs1 = rs1 + dlog(aphi)
        if (dabs(rs1).gt.elim) go to 110
        if (i.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 60
        if (i.eq.1) iflag = 3
   60   continue
c-----------------------------------------------------------------------
c     scale s1 if cabs(s1).lt.ascle
c-----------------------------------------------------------------------
        s2r = phir*sumr - phii*sumi
        s2i = phir*sumi + phii*sumr
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 70
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 110
   70   continue
        cyr(i) = s2r
        cyi(i) = s2i
        m = nd - i + 1
        yr(m) = s2r*csrr(iflag)
        yi(m) = s2i*csrr(iflag)
   80 continue
      if (nd.le.2) go to 100
      rast = 1.0d0/zabs2(zr,zi)
      str = zr*rast
      sti = -zi*rast
      rzr = (str+str)*rast
      rzi = (sti+sti)*rast
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(iflag)
      ascle = bry(iflag)
      k = nd - 2
      fn = dble(float(k))
      do 90 i=3,nd
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fnu+fn)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fnu+fn)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(k) = c2r
        yi(k) = c2i
        k = k - 1
        fn = fn - 1.0d0
        if (iflag.ge.3) go to 90
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 90
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        c1r = csrr(iflag)
   90 continue
  100 continue
      return
c-----------------------------------------------------------------------
c     set underflow and update parameters
c-----------------------------------------------------------------------
  110 continue
      if (rs1.gt.0.0d0) go to 120
      yr(nd) = zeror
      yi(nd) = zeroi
      nz = nz + 1
      nd = nd - 1
      if (nd.eq.0) go to 100
      call zuoik(zr, zi, fnu, kode, 1, nd, yr, yi, nuf, tol, elim, alim)
      if (nuf.lt.0) go to 120
      nd = nd - nuf
      nz = nz + nuf
      if (nd.eq.0) go to 100
      fn = fnu + dble(float(nd-1))
      if (fn.ge.fnul) go to 30
      nlast = nd
      return
  120 continue
      nz = -1
      return
  130 continue
      if (rs1.gt.0.0d0) go to 120
      nz = n
      do 140 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
  140 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuni2(zr, zi, fnu, kode, n, yr, yi, nz, nlast, fnul,
     * tol, elim, alim)
c     refer to  zbesi,zbesk
c
c     zuni2 computes i(fnu,z) in the right half plane by means of
c     uniform asymptotic expansion for j(fnu,zn) where zn is z*i
c     or -z*i and zn is in the right half plane also.
c
c     fnul is the smallest order permitted for the asymptotic
c     expansion. nlast=0 means all of the y values were set.
c     nlast.ne.0 is the number left to be computed by another
c     formula for orders fnu to fnu+nlast-1 because fnu+nlast-1.lt.fnul.
c     y(i)=czero for i=nlast+1,n
c
c***routines called  zairy,zuchk,zunhj,zuoik,d1mach,zabs2
c     complex ai,arg,asum,bsum,cfn,ci,cid,cip,cone,crsc,cscl,csr,css,
c    *czero,c1,c2,dai,phi,rz,s1,s2,y,z,zb,zeta1,zeta2,zn
      double precision aarg, aic, aii, air, alim, ang, aphi, argi,
     * argr, ascle, asumi, asumr, bry, bsumi, bsumr, cidi, cipi, cipr,
     * coner, crsc, cscl, csrr, cssr, c1r, c2i, c2m, c2r, daii,
     * dair, elim, fn, fnu, fnul, hpi, phii, phir, rast, raz, rs1, rzi,
     * rzr, sti, str, s1i, s1r, s2i, s2r, tol, yi, yr, zbi, zbr, zeroi,
     * zeror, zeta1i, zeta1r, zeta2i, zeta2r, zi, zni, znr, zr, cyr,
     * cyi, d1mach, zabs2, car, sar
      integer i, iflag, in, inu, j, k, kode, n, nai, nd, ndai, nlast,
     * nn, nuf, nw, nz, idum
      dimension bry(3), yr(n), yi(n), cipr(4), cipi(4), cssr(3),
     * csrr(3), cyr(2), cyi(2)
      data zeror,zeroi,coner / 0.0d0, 0.0d0, 1.0d0 /
      data cipr(1),cipi(1),cipr(2),cipi(2),cipr(3),cipi(3),cipr(4),
     * cipi(4)/ 1.0d0,0.0d0, 0.0d0,1.0d0, -1.0d0,0.0d0, 0.0d0,-1.0d0/
      data hpi, aic  /
     1      1.57079632679489662d+00,     1.265512123484645396d+00/
c
      nz = 0
      nd = n
      nlast = 0
c-----------------------------------------------------------------------
c     computed values with exponents between alim and elim in mag-
c     nitude are scaled to keep intermediate arithmetic on scale,
c     exp(alim)=exp(elim)*tol
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
c-----------------------------------------------------------------------
c     zn is in the right half plane after rotation by ci or -ci
c-----------------------------------------------------------------------
      znr = zi
      zni = -zr
      zbr = zr
      zbi = zi
      cidi = -coner
      inu = int(sngl(fnu))
      ang = hpi*(fnu-dble(float(inu)))
      c2r = dcos(ang)
      c2i = dsin(ang)
      car = c2r
      sar = c2i
      in = inu + n - 1
      in = mod(in,4) + 1
      str = c2r*cipr(in) - c2i*cipi(in)
      c2i = c2r*cipi(in) + c2i*cipr(in)
      c2r = str
      if (zi.gt.0.0d0) go to 10
      znr = -znr
      zbi = -zbi
      cidi = -cidi
      c2i = -c2i
   10 continue
c-----------------------------------------------------------------------
c     check for underflow and overflow on first member
c-----------------------------------------------------------------------
      fn = dmax1(fnu,1.0d0)
      call zunhj(znr, zni, fn, 1, tol, phir, phii, argr, argi, zeta1r,
     * zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
      if (kode.eq.1) go to 20
      str = zbr + zeta2r
      sti = zbi + zeta2i
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = -zeta1r + str
      s1i = -zeta1i + sti
      go to 30
   20 continue
      s1r = -zeta1r + zeta2r
      s1i = -zeta1i + zeta2i
   30 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 150
   40 continue
      nn = min0(2,nd)
      do 90 i=1,nn
        fn = fnu + dble(float(nd-i))
        call zunhj(znr, zni, fn, 0, tol, phir, phii, argr, argi,
     *   zeta1r, zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
        if (kode.eq.1) go to 50
        str = zbr + zeta2r
        sti = zbi + zeta2i
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zeta1r + str
        s1i = -zeta1i + sti + dabs(zi)
        go to 60
   50   continue
        s1r = -zeta1r + zeta2r
        s1i = -zeta1i + zeta2i
   60   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 120
        if (i.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 70
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
        aphi = zabs2(phir,phii)
        aarg = zabs2(argr,argi)
        rs1 = rs1 + dlog(aphi) - 0.25d0*dlog(aarg) - aic
        if (dabs(rs1).gt.elim) go to 120
        if (i.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 70
        if (i.eq.1) iflag = 3
   70   continue
c-----------------------------------------------------------------------
c     scale s1 to keep intermediate arithmetic on scale near
c     exponent extremes
c-----------------------------------------------------------------------
        call zairy(argr, argi, 0, 2, air, aii, nai, idum)
        call zairy(argr, argi, 1, 2, dair, daii, ndai, idum)
        str = dair*bsumr - daii*bsumi
        sti = dair*bsumi + daii*bsumr
        str = str + (air*asumr-aii*asumi)
        sti = sti + (air*asumi+aii*asumr)
        s2r = phir*str - phii*sti
        s2i = phir*sti + phii*str
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 80
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 120
   80   continue
        if (zi.le.0.0d0) s2i = -s2i
        str = s2r*c2r - s2i*c2i
        s2i = s2r*c2i + s2i*c2r
        s2r = str
        cyr(i) = s2r
        cyi(i) = s2i
        j = nd - i + 1
        yr(j) = s2r*csrr(iflag)
        yi(j) = s2i*csrr(iflag)
        str = -c2i*cidi
        c2i = c2r*cidi
        c2r = str
   90 continue
      if (nd.le.2) go to 110
      raz = 1.0d0/zabs2(zr,zi)
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(iflag)
      ascle = bry(iflag)
      k = nd - 2
      fn = dble(float(k))
      do 100 i=3,nd
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fnu+fn)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fnu+fn)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(k) = c2r
        yi(k) = c2i
        k = k - 1
        fn = fn - 1.0d0
        if (iflag.ge.3) go to 100
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 100
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        c1r = csrr(iflag)
  100 continue
  110 continue
      return
  120 continue
      if (rs1.gt.0.0d0) go to 140
c-----------------------------------------------------------------------
c     set underflow and update parameters
c-----------------------------------------------------------------------
      yr(nd) = zeror
      yi(nd) = zeroi
      nz = nz + 1
      nd = nd - 1
      if (nd.eq.0) go to 110
      call zuoik(zr, zi, fnu, kode, 1, nd, yr, yi, nuf, tol, elim, alim)
      if (nuf.lt.0) go to 140
      nd = nd - nuf
      nz = nz + nuf
      if (nd.eq.0) go to 110
      fn = fnu + dble(float(nd-1))
      if (fn.lt.fnul) go to 130
c      fn = cidi
c      j = nuf + 1
c      k = mod(j,4) + 1
c      s1r = cipr(k)
c      s1i = cipi(k)
c      if (fn.lt.0.0d0) s1i = -s1i
c      str = c2r*s1r - c2i*s1i
c      c2i = c2r*s1i + c2i*s1r
c      c2r = str
      in = inu + nd - 1
      in = mod(in,4) + 1
      c2r = car*cipr(in) - sar*cipi(in)
      c2i = car*cipi(in) + sar*cipr(in)
      if (zi.le.0.0d0) c2i = -c2i
      go to 40
  130 continue
      nlast = nd
      return
  140 continue
      nz = -1
      return
  150 continue
      if (rs1.gt.0.0d0) go to 140
      nz = n
      do 160 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
  160 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunik(zrr, zri, fnu, ikflg, ipmtr, tol, init, phir,
     * phii, zeta1r, zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
c     modified for g77
      EXTERNAL zsqrt
      EXTERNAL zlog
c     Refer to  zbesi,zbesk
c
c        zunik computes parameters for the uniform asymptotic
c        expansions of the i and k functions on ikflg= 1 or 2
c        respectively by
c
c        w(fnu,zr) = phi*exp(zeta)*sum
c
c        where       zeta=-zeta1 + zeta2       or
c                          zeta1 - zeta2
c
c        the first call must have init=0. subsequent calls with the
c        same zr and fnu will return the i or k function on ikflg=
c        1 or 2 with no change in init. cwrk is a complex work
c        array. ipmtr=0 computes all parameters. ipmtr=1 computes phi,
c        zeta1,zeta2.
c
c***routines called  zdiv,zlog,zsqrt,d1mach
c     complex cfn,con,cone,crfn,cwrk,czero,phi,s,sr,sum,t,t2,zeta1,
c    *zeta2,zn,zr
      double precision ac, c, con, conei, coner, crfni, crfnr, cwrki,
     * cwrkr, fnu, phii, phir, rfn, si, sr, sri, srr, sti, str, sumi,
     * sumr, test, ti, tol, tr, t2i, t2r, zeroi, zeror, zeta1i, zeta1r,
     * zeta2i, zeta2r, zni, znr, zri, zrr, d1mach
      integer i, idum, ikflg, init, ipmtr, j, k, l
      dimension c(120), cwrkr(16), cwrki(16), con(2)
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
      data con(1), con(2)  /
     1 3.98942280401432678d-01,  1.25331413731550025d+00 /
      data c(1), c(2), c(3), c(4), c(5), c(6), c(7), c(8), c(9), c(10),
     1     c(11), c(12), c(13), c(14), c(15), c(16), c(17), c(18),
     2     c(19), c(20), c(21), c(22), c(23), c(24)/
     3     1.00000000000000000d+00,    -2.08333333333333333d-01,
     4     1.25000000000000000d-01,     3.34201388888888889d-01,
     5    -4.01041666666666667d-01,     7.03125000000000000d-02,
     6    -1.02581259645061728d+00,     1.84646267361111111d+00,
     7    -8.91210937500000000d-01,     7.32421875000000000d-02,
     8     4.66958442342624743d+00,    -1.12070026162229938d+01,
     9     8.78912353515625000d+00,    -2.36408691406250000d+00,
     a     1.12152099609375000d-01,    -2.82120725582002449d+01,
     b     8.46362176746007346d+01,    -9.18182415432400174d+01,
     c     4.25349987453884549d+01,    -7.36879435947963170d+00,
     d     2.27108001708984375d-01,     2.12570130039217123d+02,
     e    -7.65252468141181642d+02,     1.05999045252799988d+03/
      data c(25), c(26), c(27), c(28), c(29), c(30), c(31), c(32),
     1     c(33), c(34), c(35), c(36), c(37), c(38), c(39), c(40),
     2     c(41), c(42), c(43), c(44), c(45), c(46), c(47), c(48)/
     3    -6.99579627376132541d+02,     2.18190511744211590d+02,
     4    -2.64914304869515555d+01,     5.72501420974731445d-01,
     5    -1.91945766231840700d+03,     8.06172218173730938d+03,
     6    -1.35865500064341374d+04,     1.16553933368645332d+04,
     7    -5.30564697861340311d+03,     1.20090291321635246d+03,
     8    -1.08090919788394656d+02,     1.72772750258445740d+00,
     9     2.02042913309661486d+04,    -9.69805983886375135d+04,
     a     1.92547001232531532d+05,    -2.03400177280415534d+05,
     b     1.22200464983017460d+05,    -4.11926549688975513d+04,
     c     7.10951430248936372d+03,    -4.93915304773088012d+02,
     d     6.07404200127348304d+00,    -2.42919187900551333d+05,
     e     1.31176361466297720d+06,    -2.99801591853810675d+06/
      data c(49), c(50), c(51), c(52), c(53), c(54), c(55), c(56),
     1     c(57), c(58), c(59), c(60), c(61), c(62), c(63), c(64),
     2     c(65), c(66), c(67), c(68), c(69), c(70), c(71), c(72)/
     3     3.76327129765640400d+06,    -2.81356322658653411d+06,
     4     1.26836527332162478d+06,    -3.31645172484563578d+05,
     5     4.52187689813627263d+04,    -2.49983048181120962d+03,
     6     2.43805296995560639d+01,     3.28446985307203782d+06,
     7    -1.97068191184322269d+07,     5.09526024926646422d+07,
     8    -7.41051482115326577d+07,     6.63445122747290267d+07,
     9    -3.75671766607633513d+07,     1.32887671664218183d+07,
     a    -2.78561812808645469d+06,     3.08186404612662398d+05,
     b    -1.38860897537170405d+04,     1.10017140269246738d+02,
     c    -4.93292536645099620d+07,     3.25573074185765749d+08,
     d    -9.39462359681578403d+08,     1.55359689957058006d+09,
     e    -1.62108055210833708d+09,     1.10684281682301447d+09/
      data c(73), c(74), c(75), c(76), c(77), c(78), c(79), c(80),
     1     c(81), c(82), c(83), c(84), c(85), c(86), c(87), c(88),
     2     c(89), c(90), c(91), c(92), c(93), c(94), c(95), c(96)/
     3    -4.95889784275030309d+08,     1.42062907797533095d+08,
     4    -2.44740627257387285d+07,     2.24376817792244943d+06,
     5    -8.40054336030240853d+04,     5.51335896122020586d+02,
     6     8.14789096118312115d+08,    -5.86648149205184723d+09,
     7     1.86882075092958249d+10,    -3.46320433881587779d+10,
     8     4.12801855797539740d+10,    -3.30265997498007231d+10,
     9     1.79542137311556001d+10,    -6.56329379261928433d+09,
     a     1.55927986487925751d+09,    -2.25105661889415278d+08,
     b     1.73951075539781645d+07,    -5.49842327572288687d+05,
     c     3.03809051092238427d+03,    -1.46792612476956167d+10,
     d     1.14498237732025810d+11,    -3.99096175224466498d+11,
     e     8.19218669548577329d+11,    -1.09837515608122331d+12/
      data c(97), c(98), c(99), c(100), c(101), c(102), c(103), c(104),
     1     c(105), c(106), c(107), c(108), c(109), c(110), c(111),
     2     c(112), c(113), c(114), c(115), c(116), c(117), c(118)/
     3     1.00815810686538209d+12,    -6.45364869245376503d+11,
     4     2.87900649906150589d+11,    -8.78670721780232657d+10,
     5     1.76347306068349694d+10,    -2.16716498322379509d+09,
     6     1.43157876718888981d+08,    -3.87183344257261262d+06,
     7     1.82577554742931747d+04,     2.86464035717679043d+11,
     8    -2.40629790002850396d+12,     9.10934118523989896d+12,
     9    -2.05168994109344374d+13,     3.05651255199353206d+13,
     a    -3.16670885847851584d+13,     2.33483640445818409d+13,
     b    -1.23204913055982872d+13,     4.61272578084913197d+12,
     c    -1.19655288019618160d+12,     2.05914503232410016d+11,
     d    -2.18229277575292237d+10,     1.24700929351271032d+09/
      data c(119), c(120)/
     1    -2.91883881222208134d+07,     1.18838426256783253d+05/
c
      if (init.ne.0) go to 40
c-----------------------------------------------------------------------
c     initialize all variables
c-----------------------------------------------------------------------
      rfn = 1.0d0/fnu
c-----------------------------------------------------------------------
c     overflow test (zr/fnu too small)
c-----------------------------------------------------------------------
      test = d1mach(1)*1.0d+3
      ac = fnu*test
      if (dabs(zrr).gt.ac .or. dabs(zri).gt.ac) go to 15
      zeta1r = 2.0d0*dabs(dlog(test))+fnu
      zeta1i = 0.0d0
      zeta2r = fnu
      zeta2i = 0.0d0
      phir = 1.0d0
      phii = 0.0d0
      return
   15 continue
      tr = zrr*rfn
      ti = zri*rfn
      sr = coner + (tr*tr-ti*ti)
      si = conei + (tr*ti+ti*tr)
      call zsqrt(sr, si, srr, sri)
      str = coner + srr
      sti = conei + sri
      call zdiv(str, sti, tr, ti, znr, zni)
      call zlog(znr, zni, str, sti, idum)
      zeta1r = fnu*str
      zeta1i = fnu*sti
      zeta2r = fnu*srr
      zeta2i = fnu*sri
      call zdiv(coner, conei, srr, sri, tr, ti)
      srr = tr*rfn
      sri = ti*rfn
      call zsqrt(srr, sri, cwrkr(16), cwrki(16))
      phir = cwrkr(16)*con(ikflg)
      phii = cwrki(16)*con(ikflg)
      if (ipmtr.ne.0) return
      call zdiv(coner, conei, sr, si, t2r, t2i)
      cwrkr(1) = coner
      cwrki(1) = conei
      crfnr = coner
      crfni = conei
      ac = 1.0d0
      l = 1
      do 20 k=2,15
        sr = zeror
        si = zeroi
        do 10 j=1,k
          l = l + 1
          str = sr*t2r - si*t2i + c(l)
          si = sr*t2i + si*t2r
          sr = str
   10   continue
        str = crfnr*srr - crfni*sri
        crfni = crfnr*sri + crfni*srr
        crfnr = str
        cwrkr(k) = crfnr*sr - crfni*si
        cwrki(k) = crfnr*si + crfni*sr
        ac = ac*rfn
        test = dabs(cwrkr(k)) + dabs(cwrki(k))
        if (ac.lt.tol .and. test.lt.tol) go to 30
   20 continue
      k = 15
   30 continue
      init = k
   40 continue
      if (ikflg.eq.2) go to 60
c-----------------------------------------------------------------------
c     compute sum for the i function
c-----------------------------------------------------------------------
      sr = zeror
      si = zeroi
      do 50 i=1,init
        sr = sr + cwrkr(i)
        si = si + cwrki(i)
   50 continue
      sumr = sr
      sumi = si
      phir = cwrkr(16)*con(1)
      phii = cwrki(16)*con(1)
      return
   60 continue
c-----------------------------------------------------------------------
c     compute sum for the k function
c-----------------------------------------------------------------------
      sr = zeror
      si = zeroi
      tr = coner
      do 70 i=1,init
        sr = sr + tr*cwrkr(i)
        si = si + tr*cwrki(i)
        tr = -tr
   70 continue
      sumr = sr
      sumi = si
      phir = cwrkr(16)*con(2)
      phii = cwrki(16)*con(2)
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunk1(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim,
     * alim)
c     refer to  zbesk
c
c     zunk1 computes k(fnu,z) and its analytic continuation from the
c     right half plane to the left half plane by means of the
c     uniform asymptotic expansion.
c     mr indicates the direction of rotation for analytic continuation.
c     nz=-1 means an overflow will occur
c
c***routines called  zkscl,zs1s2,zuchk,zunik,d1mach,zabs2
c     complex cfn,ck,cone,crsc,cs,cscl,csgn,cspn,csr,css,cwrk,cy,czero,
c    *c1,c2,phi,phid,rz,sum,sumd,s1,s2,y,z,zeta1,zeta1d,zeta2,zeta2d,zr
      double precision alim, ang, aphi, asc, ascle, bry, cki, ckr,
     * coner, crsc, cscl, csgni, cspni, cspnr, csr, csrr, cssr,
     * cwrki, cwrkr, cyi, cyr, c1i, c1r, c2i, c2m, c2r, elim, fmr, fn,
     * fnf, fnu, phidi, phidr, phii, phir, pi, rast, razr, rs1, rzi,
     * rzr, sgn, sti, str, sumdi, sumdr, sumi, sumr, s1i, s1r, s2i,
     * s2r, tol, yi, yr, zeroi, zeror, zeta1i, zeta1r, zeta2i, zeta2r,
     * zet1di, zet1dr, zet2di, zet2dr, zi, zr, zri, zrr, d1mach, zabs2
      integer i, ib, iflag, ifn, il, init, inu, iuf, k, kdflg, kflag,
     * kk, kode, mr, n, nw, nz, initd, ic, ipard, j
      dimension bry(3), init(2), yr(n), yi(n), sumr(2), sumi(2),
     * zeta1r(2), zeta1i(2), zeta2r(2), zeta2i(2), cyr(2), cyi(2),
     * cwrkr(16,3), cwrki(16,3), cssr(3), csrr(3), phir(2), phii(2)
      data zeror,zeroi,coner / 0.0d0, 0.0d0, 1.0d0 /
      data pi / 3.14159265358979324d0 /
c
      kdflg = 1
      nz = 0
c-----------------------------------------------------------------------
c     exp(-alim)=exp(-elim)/tol=approx. one precision greater than
c     the underflow limit
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      zrr = zr
      zri = zi
      if (zr.ge.0.0d0) go to 10
      zrr = -zr
      zri = -zi
   10 continue
      j = 2
      do 70 i=1,n
c-----------------------------------------------------------------------
c     j flip flops between 1 and 2 in j = 3 - j
c-----------------------------------------------------------------------
        j = 3 - j
        fn = fnu + dble(float(i-1))
        init(j) = 0
        call zunik(zrr, zri, fn, 2, 0, tol, init(j), phir(j), phii(j),
     *   zeta1r(j), zeta1i(j), zeta2r(j), zeta2i(j), sumr(j), sumi(j),
     *   cwrkr(1,j), cwrki(1,j))
        if (kode.eq.1) go to 20
        str = zrr + zeta2r(j)
        sti = zri + zeta2i(j)
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = zeta1r(j) - str
        s1i = zeta1i(j) - sti
        go to 30
   20   continue
        s1r = zeta1r(j) - zeta2r(j)
        s1i = zeta1i(j) - zeta2i(j)
   30   continue
        rs1 = s1r
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        if (dabs(rs1).gt.elim) go to 60
        if (kdflg.eq.1) kflag = 2
        if (dabs(rs1).lt.alim) go to 40
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phir(j),phii(j))
        rs1 = rs1 + dlog(aphi)
        if (dabs(rs1).gt.elim) go to 60
        if (kdflg.eq.1) kflag = 1
        if (rs1.lt.0.0d0) go to 40
        if (kdflg.eq.1) kflag = 3
   40   continue
c-----------------------------------------------------------------------
c     scale s1 to keep intermediate arithmetic on scale near
c     exponent extremes
c-----------------------------------------------------------------------
        s2r = phir(j)*sumr(j) - phii(j)*sumi(j)
        s2i = phir(j)*sumi(j) + phii(j)*sumr(j)
        str = dexp(s1r)*cssr(kflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s1r*s2i + s2r*s1i
        s2r = str
        if (kflag.ne.1) go to 50
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 60
   50   continue
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        yr(i) = s2r*csrr(kflag)
        yi(i) = s2i*csrr(kflag)
        if (kdflg.eq.2) go to 75
        kdflg = 2
        go to 70
   60   continue
        if (rs1.gt.0.0d0) go to 300
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
        if (zr.lt.0.0d0) go to 300
        kdflg = 1
        yr(i)=zeror
        yi(i)=zeroi
        nz=nz+1
        if (i.eq.1) go to 70
        if ((yr(i-1).eq.zeror).and.(yi(i-1).eq.zeroi)) go to 70
        yr(i-1)=zeror
        yi(i-1)=zeroi
        nz=nz+1
   70 continue
      i = n
   75 continue
      razr = 1.0d0/zabs2(zrr,zri)
      str = zrr*razr
      sti = -zri*razr
      rzr = (str+str)*razr
      rzi = (sti+sti)*razr
      ckr = fn*rzr
      cki = fn*rzi
      ib = i + 1
      if (n.lt.ib) go to 160
c-----------------------------------------------------------------------
c     test last member for underflow and overflow. set sequence to zero
c     on underflow.
c-----------------------------------------------------------------------
      fn = fnu + dble(float(n-1))
      ipard = 1
      if (mr.ne.0) ipard = 0
      initd = 0
      call zunik(zrr, zri, fn, 2, ipard, tol, initd, phidr, phidi,
     * zet1dr, zet1di, zet2dr, zet2di, sumdr, sumdi, cwrkr(1,3),
     * cwrki(1,3))
      if (kode.eq.1) go to 80
      str = zrr + zet2dr
      sti = zri + zet2di
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = zet1dr - str
      s1i = zet1di - sti
      go to 90
   80 continue
      s1r = zet1dr - zet2dr
      s1i = zet1di - zet2di
   90 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 95
      if (dabs(rs1).lt.alim) go to 100
c----------------------------------------------------------------------------
c     refine estimate and test
c-------------------------------------------------------------------------
      aphi = zabs2(phidr,phidi)
      rs1 = rs1+dlog(aphi)
      if (dabs(rs1).lt.elim) go to 100
   95 continue
      if (dabs(rs1).gt.0.0d0) go to 300
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
      if (zr.lt.0.0d0) go to 300
      nz = n
      do 96 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
   96 continue
      return
c---------------------------------------------------------------------------
c     forward recur for remainder of the sequence
c----------------------------------------------------------------------------
  100 continue
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(kflag)
      ascle = bry(kflag)
      do 120 i=ib,n
        c2r = s2r
        c2i = s2i
        s2r = ckr*c2r - cki*c2i + s1r
        s2i = ckr*c2i + cki*c2r + s1i
        s1r = c2r
        s1i = c2i
        ckr = ckr + rzr
        cki = cki + rzi
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(i) = c2r
        yi(i) = c2i
        if (kflag.ge.3) go to 120
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 120
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(kflag)
        s1i = s1i*cssr(kflag)
        s2r = s2r*cssr(kflag)
        s2i = s2i*cssr(kflag)
        c1r = csrr(kflag)
  120 continue
  160 continue
      if (mr.eq.0) return
c-----------------------------------------------------------------------
c     analytic continuation for re(z).lt.0.0d0
c-----------------------------------------------------------------------
      nz = 0
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
c-----------------------------------------------------------------------
c     cspn and csgn are coeff of k and i functions resp.
c-----------------------------------------------------------------------
      csgni = sgn
      inu = int(sngl(fnu))
      fnf = fnu - dble(float(inu))
      ifn = inu + n - 1
      ang = fnf*sgn
      cspnr = dcos(ang)
      cspni = dsin(ang)
      if (mod(ifn,2).eq.0) go to 170
      cspnr = -cspnr
      cspni = -cspni
  170 continue
      asc = bry(1)
      iuf = 0
      kk = n
      kdflg = 1
      ib = ib - 1
      ic = ib - 1
      do 270 k=1,n
        fn = fnu + dble(float(kk-1))
c-----------------------------------------------------------------------
c     logic to sort out cases whose parameters were set for the k
c     function above
c-----------------------------------------------------------------------
        m=3
        if (n.gt.2) go to 175
  172   continue
        initd = init(j)
        phidr = phir(j)
        phidi = phii(j)
        zet1dr = zeta1r(j)
        zet1di = zeta1i(j)
        zet2dr = zeta2r(j)
        zet2di = zeta2i(j)
        sumdr = sumr(j)
        sumdi = sumi(j)
        m = j
        j = 3 - j
        go to 180
  175   continue
        if ((kk.eq.n).and.(ib.lt.n)) go to 180
        if ((kk.eq.ib).or.(kk.eq.ic)) go to 172
        initd = 0
  180   continue
        call zunik(zrr, zri, fn, 1, 0, tol, initd, phidr, phidi,
     *   zet1dr, zet1di, zet2dr, zet2di, sumdr, sumdi,
     *   cwrkr(1,m), cwrki(1,m))
        if (kode.eq.1) go to 200
        str = zrr + zet2dr
        sti = zri + zet2di
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zet1dr + str
        s1i = -zet1di + sti
        go to 210
  200   continue
        s1r = -zet1dr + zet2dr
        s1i = -zet1di + zet2di
  210   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 260
        if (kdflg.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 220
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phidr,phidi)
        rs1 = rs1 + dlog(aphi)
        if (dabs(rs1).gt.elim) go to 260
        if (kdflg.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 220
        if (kdflg.eq.1) iflag = 3
  220   continue
        str = phidr*sumdr - phidi*sumdi
        sti = phidr*sumdi + phidi*sumdr
        s2r = -csgni*sti
        s2i = csgni*str
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 230
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.eq.0) go to 230
        s2r = zeror
        s2i = zeroi
  230   continue
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        c2r = s2r
        c2i = s2i
        s2r = s2r*csrr(iflag)
        s2i = s2i*csrr(iflag)
c-----------------------------------------------------------------------
c     add i and k functions, k sequence in y(i), i=1,n
c-----------------------------------------------------------------------
        s1r = yr(kk)
        s1i = yi(kk)
        if (kode.eq.1) go to 250
        call zs1s2(zrr, zri, s1r, s1i, s2r, s2i, nw, asc, alim, iuf)
        nz = nz + nw
  250   continue
        yr(kk) = s1r*cspnr - s1i*cspni + s2r
        yi(kk) = cspnr*s1i + cspni*s1r + s2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        if (c2r.ne.0.0d0 .or. c2i.ne.0.0d0) go to 255
        kdflg = 1
        go to 270
  255   continue
        if (kdflg.eq.2) go to 275
        kdflg = 2
        go to 270
  260   continue
        if (rs1.gt.0.0d0) go to 300
        s2r = zeror
        s2i = zeroi
        go to 230
  270 continue
      k = n
  275 continue
      il = n - k
      if (il.eq.0) return
c-----------------------------------------------------------------------
c     recur backward for remainder of i sequence and add in the
c     k functions, scaling the i sequence during recurrence to keep
c     intermediate arithmetic on scale near exponent extremes.
c-----------------------------------------------------------------------
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      csr = csrr(iflag)
      ascle = bry(iflag)
      fn = dble(float(inu+il))
      do 290 i=1,il
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fn+fnf)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fn+fnf)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        fn = fn - 1.0d0
        c2r = s2r*csr
        c2i = s2i*csr
        ckr = c2r
        cki = c2i
        c1r = yr(kk)
        c1i = yi(kk)
        if (kode.eq.1) go to 280
        call zs1s2(zrr, zri, c1r, c1i, c2r, c2i, nw, asc, alim, iuf)
        nz = nz + nw
  280   continue
        yr(kk) = c1r*cspnr - c1i*cspni + c2r
        yi(kk) = c1r*cspni + c1i*cspnr + c2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        if (iflag.ge.3) go to 290
        c2r = dabs(ckr)
        c2i = dabs(cki)
        c2m = dmax1(c2r,c2i)
        if (c2m.le.ascle) go to 290
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*csr
        s1i = s1i*csr
        s2r = ckr
        s2i = cki
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        csr = csrr(iflag)
  290 continue
      return
  300 continue
      nz = -1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunk2(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim,
     * alim)
c     refer to  zbesk
c
c     zunk2 computes k(fnu,z) and its analytic continuation from the
c     right half plane to the left half plane by means of the
c     uniform asymptotic expansions for h(kind,fnu,zn) and j(fnu,zn)
c     where zn is in the right half plane, kind=(3-mr)/2, mr=+1 or
c     -1. here zn=zr*i or -zr*i where zr=z if z is in the right
c     half plane or zr=-z if z is in the left half plane. mr indic-
c     ates the direction of rotation for analytic continuation.
c     nz=-1 means an overflow will occur
c
c***routines called  zairy,zkscl,zs1s2,zuchk,zunhj,d1mach,zabs2
c     complex ai,arg,argd,asum,asumd,bsum,bsumd,cfn,ci,cip,ck,cone,crsc,
c    *cr1,cr2,cs,cscl,csgn,cspn,csr,css,cy,czero,c1,c2,dai,phi,phid,rz,
c    *s1,s2,y,z,zb,zeta1,zeta1d,zeta2,zeta2d,zn,zr
      double precision aarg, aic, aii, air, alim, ang, aphi, argdi,
     * argdr, argi, argr, asc, ascle, asumdi, asumdr, asumi, asumr,
     * bry, bsumdi, bsumdr, bsumi, bsumr, car, cipi, cipr, cki, ckr,
     * coner, crsc, cr1i, cr1r, cr2i, cr2r, cscl, csgni, csi,
     * cspni, cspnr, csr, csrr, cssr, cyi, cyr, c1i, c1r, c2i, c2m,
     * c2r, daii, dair, elim, fmr, fn, fnf, fnu, hpi, phidi, phidr,
     * phii, phir, pi, pti, ptr, rast, razr, rs1, rzi, rzr, sar, sgn,
     * sti, str, s1i, s1r, s2i, s2r, tol, yi, yr, yy, zbi, zbr, zeroi,
     * zeror, zeta1i, zeta1r, zeta2i, zeta2r, zet1di, zet1dr, zet2di,
     * zet2dr, zi, zni, znr, zr, zri, zrr, d1mach, zabs2
      integer i, ib, iflag, ifn, il, in, inu, iuf, k, kdflg, kflag, kk,
     * kode, mr, n, nai, ndai, nw, nz, idum, j, ipard, ic
      dimension bry(3), yr(n), yi(n), asumr(2), asumi(2), bsumr(2),
     * bsumi(2), phir(2), phii(2), argr(2), argi(2), zeta1r(2),
     * zeta1i(2), zeta2r(2), zeta2i(2), cyr(2), cyi(2), cipr(4),
     * cipi(4), cssr(3), csrr(3)
      data zeror,zeroi,coner,cr1r,cr1i,cr2r,cr2i /
     1         0.0d0, 0.0d0, 1.0d0,
     1 1.0d0,1.73205080756887729d0 , -0.5d0,-8.66025403784438647d-01 /
      data hpi, pi, aic /
     1     1.57079632679489662d+00,     3.14159265358979324d+00,
     1     1.26551212348464539d+00/
      data cipr(1),cipi(1),cipr(2),cipi(2),cipr(3),cipi(3),cipr(4),
     * cipi(4) /
     1  1.0d0,0.0d0 ,  0.0d0,-1.0d0 ,  -1.0d0,0.0d0 ,  0.0d0,1.0d0 /
c
      kdflg = 1
      nz = 0
c-----------------------------------------------------------------------
c     exp(-alim)=exp(-elim)/tol=approx. one precision greater than
c     the underflow limit
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      zrr = zr
      zri = zi
      if (zr.ge.0.0d0) go to 10
      zrr = -zr
      zri = -zi
   10 continue
      yy = zri
      znr = zri
      zni = -zrr
      zbr = zrr
      zbi = zri
      inu = int(sngl(fnu))
      fnf = fnu - dble(float(inu))
      ang = -hpi*fnf
      car = dcos(ang)
      sar = dsin(ang)
      c2r = hpi*sar
      c2i = -hpi*car
      kk = mod(inu,4) + 1
      str = c2r*cipr(kk) - c2i*cipi(kk)
      sti = c2r*cipi(kk) + c2i*cipr(kk)
      csr = cr1r*str - cr1i*sti
      csi = cr1r*sti + cr1i*str
      if (yy.gt.0.0d0) go to 20
      znr = -znr
      zbi = -zbi
   20 continue
c-----------------------------------------------------------------------
c     k(fnu,z) is computed from h(2,fnu,-i*z) where z is in the first
c     quadrant. fourth quadrant values (yy.le.0.0e0) are computed by
c     conjugation since the k function is real on the positive real axis
c-----------------------------------------------------------------------
      j = 2
      do 80 i=1,n
c-----------------------------------------------------------------------
c     j flip flops between 1 and 2 in j = 3 - j
c-----------------------------------------------------------------------
        j = 3 - j
        fn = fnu + dble(float(i-1))
        call zunhj(znr, zni, fn, 0, tol, phir(j), phii(j), argr(j),
     *   argi(j), zeta1r(j), zeta1i(j), zeta2r(j), zeta2i(j), asumr(j),
     *   asumi(j), bsumr(j), bsumi(j))
        if (kode.eq.1) go to 30
        str = zbr + zeta2r(j)
        sti = zbi + zeta2i(j)
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = zeta1r(j) - str
        s1i = zeta1i(j) - sti
        go to 40
   30   continue
        s1r = zeta1r(j) - zeta2r(j)
        s1i = zeta1i(j) - zeta2i(j)
   40   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 70
        if (kdflg.eq.1) kflag = 2
        if (dabs(rs1).lt.alim) go to 50
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phir(j),phii(j))
        aarg = zabs2(argr(j),argi(j))
        rs1 = rs1 + dlog(aphi) - 0.25d0*dlog(aarg) - aic
        if (dabs(rs1).gt.elim) go to 70
        if (kdflg.eq.1) kflag = 1
        if (rs1.lt.0.0d0) go to 50
        if (kdflg.eq.1) kflag = 3
   50   continue
c-----------------------------------------------------------------------
c     scale s1 to keep intermediate arithmetic on scale near
c     exponent extremes
c-----------------------------------------------------------------------
        c2r = argr(j)*cr2r - argi(j)*cr2i
        c2i = argr(j)*cr2i + argi(j)*cr2r
        call zairy(c2r, c2i, 0, 2, air, aii, nai, idum)
        call zairy(c2r, c2i, 1, 2, dair, daii, ndai, idum)
        str = dair*bsumr(j) - daii*bsumi(j)
        sti = dair*bsumi(j) + daii*bsumr(j)
        ptr = str*cr2r - sti*cr2i
        pti = str*cr2i + sti*cr2r
        str = ptr + (air*asumr(j)-aii*asumi(j))
        sti = pti + (air*asumi(j)+aii*asumr(j))
        ptr = str*phir(j) - sti*phii(j)
        pti = str*phii(j) + sti*phir(j)
        s2r = ptr*csr - pti*csi
        s2i = ptr*csi + pti*csr
        str = dexp(s1r)*cssr(kflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s1r*s2i + s2r*s1i
        s2r = str
        if (kflag.ne.1) go to 60
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 70
   60   continue
        if (yy.le.0.0d0) s2i = -s2i
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        yr(i) = s2r*csrr(kflag)
        yi(i) = s2i*csrr(kflag)
        str = csi
        csi = -csr
        csr = str
        if (kdflg.eq.2) go to 85
        kdflg = 2
        go to 80
   70   continue
        if (rs1.gt.0.0d0) go to 320
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
        if (zr.lt.0.0d0) go to 320
        kdflg = 1
        yr(i)=zeror
        yi(i)=zeroi
        nz=nz+1
        str = csi
        csi =-csr
        csr = str
        if (i.eq.1) go to 80
        if ((yr(i-1).eq.zeror).and.(yi(i-1).eq.zeroi)) go to 80
        yr(i-1)=zeror
        yi(i-1)=zeroi
        nz=nz+1
   80 continue
      i = n
   85 continue
      razr = 1.0d0/zabs2(zrr,zri)
      str = zrr*razr
      sti = -zri*razr
      rzr = (str+str)*razr
      rzi = (sti+sti)*razr
      ckr = fn*rzr
      cki = fn*rzi
      ib = i + 1
      if (n.lt.ib) go to 180
c-----------------------------------------------------------------------
c     test last member for underflow and overflow. set sequence to zero
c     on underflow.
c-----------------------------------------------------------------------
      fn = fnu + dble(float(n-1))
      ipard = 1
      if (mr.ne.0) ipard = 0
      call zunhj(znr, zni, fn, ipard, tol, phidr, phidi, argdr, argdi,
     * zet1dr, zet1di, zet2dr, zet2di, asumdr, asumdi, bsumdr, bsumdi)
      if (kode.eq.1) go to 90
      str = zbr + zet2dr
      sti = zbi + zet2di
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = zet1dr - str
      s1i = zet1di - sti
      go to 100
   90 continue
      s1r = zet1dr - zet2dr
      s1i = zet1di - zet2di
  100 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 105
      if (dabs(rs1).lt.alim) go to 120
c----------------------------------------------------------------------------
c     refine estimate and test
c-------------------------------------------------------------------------
      aphi = zabs2(phidr,phidi)
      rs1 = rs1+dlog(aphi)
      if (dabs(rs1).lt.elim) go to 120
  105 continue
      if (rs1.gt.0.0d0) go to 320
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
      if (zr.lt.0.0d0) go to 320
      nz = n
      do 106 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
  106 continue
      return
  120 continue
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(kflag)
      ascle = bry(kflag)
      do 130 i=ib,n
        c2r = s2r
        c2i = s2i
        s2r = ckr*c2r - cki*c2i + s1r
        s2i = ckr*c2i + cki*c2r + s1i
        s1r = c2r
        s1i = c2i
        ckr = ckr + rzr
        cki = cki + rzi
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(i) = c2r
        yi(i) = c2i
        if (kflag.ge.3) go to 130
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 130
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(kflag)
        s1i = s1i*cssr(kflag)
        s2r = s2r*cssr(kflag)
        s2i = s2i*cssr(kflag)
        c1r = csrr(kflag)
  130 continue
  180 continue
      if (mr.eq.0) return
c-----------------------------------------------------------------------
c     analytic continuation for re(z).lt.0.0d0
c-----------------------------------------------------------------------
      nz = 0
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
c-----------------------------------------------------------------------
c     cspn and csgn are coeff of k and i funcions resp.
c-----------------------------------------------------------------------
      csgni = sgn
      if (yy.le.0.0d0) csgni = -csgni
      ifn = inu + n - 1
      ang = fnf*sgn
      cspnr = dcos(ang)
      cspni = dsin(ang)
      if (mod(ifn,2).eq.0) go to 190
      cspnr = -cspnr
      cspni = -cspni
  190 continue
c-----------------------------------------------------------------------
c     cs=coeff of the j function to get the i function. i(fnu,z) is
c     computed from exp(i*fnu*hpi)*j(fnu,-i*z) where z is in the first
c     quadrant. fourth quadrant values (yy.le.0.0e0) are computed by
c     conjugation since the i function is real on the positive real axis
c-----------------------------------------------------------------------
      csr = sar*csgni
      csi = car*csgni
      in = mod(ifn,4) + 1
      c2r = cipr(in)
      c2i = cipi(in)
      str = csr*c2r + csi*c2i
      csi = -csr*c2i + csi*c2r
      csr = str
      asc = bry(1)
      iuf = 0
      kk = n
      kdflg = 1
      ib = ib - 1
      ic = ib - 1
      do 290 k=1,n
        fn = fnu + dble(float(kk-1))
c-----------------------------------------------------------------------
c     logic to sort out cases whose parameters were set for the k
c     function above
c-----------------------------------------------------------------------
        if (n.gt.2) go to 175
  172   continue
        phidr = phir(j)
        phidi = phii(j)
        argdr = argr(j)
        argdi = argi(j)
        zet1dr = zeta1r(j)
        zet1di = zeta1i(j)
        zet2dr = zeta2r(j)
        zet2di = zeta2i(j)
        asumdr = asumr(j)
        asumdi = asumi(j)
        bsumdr = bsumr(j)
        bsumdi = bsumi(j)
        j = 3 - j
        go to 210
  175   continue
        if ((kk.eq.n).and.(ib.lt.n)) go to 210
        if ((kk.eq.ib).or.(kk.eq.ic)) go to 172
        call zunhj(znr, zni, fn, 0, tol, phidr, phidi, argdr,
     *   argdi, zet1dr, zet1di, zet2dr, zet2di, asumdr,
     *   asumdi, bsumdr, bsumdi)
  210   continue
        if (kode.eq.1) go to 220
        str = zbr + zet2dr
        sti = zbi + zet2di
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zet1dr + str
        s1i = -zet1di + sti
        go to 230
  220   continue
        s1r = -zet1dr + zet2dr
        s1i = -zet1di + zet2di
  230   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 280
        if (kdflg.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 240
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phidr,phidi)
        aarg = zabs2(argdr,argdi)
        rs1 = rs1 + dlog(aphi) - 0.25d0*dlog(aarg) - aic
        if (dabs(rs1).gt.elim) go to 280
        if (kdflg.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 240
        if (kdflg.eq.1) iflag = 3
  240   continue
        call zairy(argdr, argdi, 0, 2, air, aii, nai, idum)
        call zairy(argdr, argdi, 1, 2, dair, daii, ndai, idum)
        str = dair*bsumdr - daii*bsumdi
        sti = dair*bsumdi + daii*bsumdr
        str = str + (air*asumdr-aii*asumdi)
        sti = sti + (air*asumdi+aii*asumdr)
        ptr = str*phidr - sti*phidi
        pti = str*phidi + sti*phidr
        s2r = ptr*csr - pti*csi
        s2i = ptr*csi + pti*csr
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 250
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.eq.0) go to 250
        s2r = zeror
        s2i = zeroi
  250   continue
        if (yy.le.0.0d0) s2i = -s2i
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        c2r = s2r
        c2i = s2i
        s2r = s2r*csrr(iflag)
        s2i = s2i*csrr(iflag)
c-----------------------------------------------------------------------
c     add i and k functions, k sequence in y(i), i=1,n
c-----------------------------------------------------------------------
        s1r = yr(kk)
        s1i = yi(kk)
        if (kode.eq.1) go to 270
        call zs1s2(zrr, zri, s1r, s1i, s2r, s2i, nw, asc, alim, iuf)
        nz = nz + nw
  270   continue
        yr(kk) = s1r*cspnr - s1i*cspni + s2r
        yi(kk) = s1r*cspni + s1i*cspnr + s2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        str = csi
        csi = -csr
        csr = str
        if (c2r.ne.0.0d0 .or. c2i.ne.0.0d0) go to 255
        kdflg = 1
        go to 290
  255   continue
        if (kdflg.eq.2) go to 295
        kdflg = 2
        go to 290
  280   continue
        if (rs1.gt.0.0d0) go to 320
        s2r = zeror
        s2i = zeroi
        go to 250
  290 continue
      k = n
  295 continue
      il = n - k
      if (il.eq.0) return
c-----------------------------------------------------------------------
c     recur backward for remainder of i sequence and add in the
c     k functions, scaling the i sequence during recurrence to keep
c     intermediate arithmetic on scale near exponent extremes.
c-----------------------------------------------------------------------
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      csr = csrr(iflag)
      ascle = bry(iflag)
      fn = dble(float(inu+il))
      do 310 i=1,il
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fn+fnf)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fn+fnf)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        fn = fn - 1.0d0
        c2r = s2r*csr
        c2i = s2i*csr
        ckr = c2r
        cki = c2i
        c1r = yr(kk)
        c1i = yi(kk)
        if (kode.eq.1) go to 300
        call zs1s2(zrr, zri, c1r, c1i, c2r, c2i, nw, asc, alim, iuf)
        nz = nz + nw
  300   continue
        yr(kk) = c1r*cspnr - c1i*cspni + c2r
        yi(kk) = c1r*cspni + c1i*cspnr + c2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        if (iflag.ge.3) go to 310
        c2r = dabs(ckr)
        c2i = dabs(cki)
        c2m = dmax1(c2r,c2i)
        if (c2m.le.ascle) go to 310
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*csr
        s1i = s1i*csr
        s2r = ckr
        s2i = cki
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        csr = csrr(iflag)
  310 continue
      return
  320 continue
      nz = -1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuoik(zr, zi, fnu, kode, ikflg, n, yr, yi, nuf, tol,
     * elim, alim)
c     modified for g77
      EXTERNAL zlog
c     refer to  zbesi,zbesk,zbesh
c
c     zuoik computes the leading terms of the uniform asymptotic
c     expansions for the i and k functions and compares them
c     (in logarithmic form) to alim and elim for over and underflow
c     where alim.lt.elim. if the magnitude, based on the leading
c     exponential, is less than alim or greater than -alim, then
c     the result is on scale. if not, then a refined test using other
c     multipliers (in logarithmic form) is made based on elim. here
c     exp(-elim)=smallest machine number*1.0e+3 and exp(-alim)=
c     exp(-elim)/tol
c
c     ikflg=1 means the i sequence is tested
c          =2 means the k sequence is tested
c     nuf = 0 means the last member of the sequence is on scale
c         =-1 means an overflow would occur
c     ikflg=1 and nuf.gt.0 means the last nuf y values were set to zero
c             the first n-nuf values must be set by another routine
c     ikflg=2 and nuf.eq.n means all y values were set to zero
c     ikflg=2 and 0.lt.nuf.lt.n not considered. y must be set by
c             another routine
c
c***routines called  zuchk,zunhj,zunik,d1mach,zabs2,zlog
c     complex arg,asum,bsum,cwrk,cz,czero,phi,sum,y,z,zb,zeta1,zeta2,zn,
c    *zr
      double precision aarg, aic, alim, aphi, argi, argr, asumi, asumr,
     * ascle, ax, ay, bsumi, bsumr, cwrki, cwrkr, czi, czr, elim, fnn,
     * fnu, gnn, gnu, phii, phir, rcz, str, sti, sumi, sumr, tol, yi,
     * yr, zbi, zbr, zeroi, zeror, zeta1i, zeta1r, zeta2i, zeta2r, zi,
     * zni, znr, zr, zri, zrr, d1mach, zabs2
      integer i, idum, iform, ikflg, init, kode, n, nn, nuf, nw
      dimension yr(n), yi(n), cwrkr(16), cwrki(16)
      data zeror,zeroi / 0.0d0, 0.0d0 /
      data aic / 1.265512123484645396d+00 /
      nuf = 0
      nn = n
      zrr = zr
      zri = zi
      if (zr.ge.0.0d0) go to 10
      zrr = -zr
      zri = -zi
   10 continue
      zbr = zrr
      zbi = zri
      ax = dabs(zr)*1.7321d0
      ay = dabs(zi)
      iform = 1
      if (ay.gt.ax) iform = 2
      gnu = dmax1(fnu,1.0d0)
      if (ikflg.eq.1) go to 20
      fnn = dble(float(nn))
      gnn = fnu + fnn - 1.0d0
      gnu = dmax1(gnn,fnn)
   20 continue
c-----------------------------------------------------------------------
c     only the magnitude of arg and phi are needed along with the
c     real parts of zeta1, zeta2 and zb. no attempt is made to get
c     the sign of the imaginary part correct.
c-----------------------------------------------------------------------
      if (iform.eq.2) go to 30
      init = 0
      call zunik(zrr, zri, gnu, ikflg, 1, tol, init, phir, phii,
     * zeta1r, zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      go to 50
   30 continue
      znr = zri
      zni = -zrr
      if (zi.gt.0.0d0) go to 40
      znr = -znr
   40 continue
      call zunhj(znr, zni, gnu, 1, tol, phir, phii, argr, argi, zeta1r,
     * zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      aarg = zabs2(argr,argi)
   50 continue
      if (kode.eq.1) go to 60
      czr = czr - zbr
      czi = czi - zbi
   60 continue
      if (ikflg.eq.1) go to 70
      czr = -czr
      czi = -czi
   70 continue
      aphi = zabs2(phir,phii)
      rcz = czr
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      if (rcz.gt.elim) go to 210
      if (rcz.lt.alim) go to 80
      rcz = rcz + dlog(aphi)
      if (iform.eq.2) rcz = rcz - 0.25d0*dlog(aarg) - aic
      if (rcz.gt.elim) go to 210
      go to 130
   80 continue
c-----------------------------------------------------------------------
c     underflow test
c-----------------------------------------------------------------------
      if (rcz.lt.(-elim)) go to 90
      if (rcz.gt.(-alim)) go to 130
      rcz = rcz + dlog(aphi)
      if (iform.eq.2) rcz = rcz - 0.25d0*dlog(aarg) - aic
      if (rcz.gt.(-elim)) go to 110
   90 continue
      do 100 i=1,nn
        yr(i) = zeror
        yi(i) = zeroi
  100 continue
      nuf = nn
      return
  110 continue
      ascle = 1.0d+3*d1mach(1)/tol
      call zlog(phir, phii, str, sti, idum)
      czr = czr + str
      czi = czi + sti
      if (iform.eq.1) go to 120
      call zlog(argr, argi, str, sti, idum)
      czr = czr - 0.25d0*str - aic
      czi = czi - 0.25d0*sti
  120 continue
      ax = dexp(rcz)/tol
      ay = czi
      czr = ax*dcos(ay)
      czi = ax*dsin(ay)
      call zuchk(czr, czi, nw, ascle, tol)
      if (nw.ne.0) go to 90
  130 continue
      if (ikflg.eq.2) return
      if (n.eq.1) return
c-----------------------------------------------------------------------
c     set underflows on i sequence
c-----------------------------------------------------------------------
  140 continue
      gnu = fnu + dble(float(nn-1))
      if (iform.eq.2) go to 150
      init = 0
      call zunik(zrr, zri, gnu, ikflg, 1, tol, init, phir, phii,
     * zeta1r, zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      go to 160
  150 continue
      call zunhj(znr, zni, gnu, 1, tol, phir, phii, argr, argi, zeta1r,
     * zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      aarg = zabs2(argr,argi)
  160 continue
      if (kode.eq.1) go to 170
      czr = czr - zbr
      czi = czi - zbi
  170 continue
      aphi = zabs2(phir,phii)
      rcz = czr
      if (rcz.lt.(-elim)) go to 180
      if (rcz.gt.(-alim)) return
      rcz = rcz + dlog(aphi)
      if (iform.eq.2) rcz = rcz - 0.25d0*dlog(aarg) - aic
      if (rcz.gt.(-elim)) go to 190
  180 continue
      yr(nn) = zeror
      yi(nn) = zeroi
      nn = nn - 1
      nuf = nuf + 1
      if (nn.eq.0) return
      go to 140
  190 continue
      ascle = 1.0d+3*d1mach(1)/tol
      call zlog(phir, phii, str, sti, idum)
      czr = czr + str
      czi = czi + sti
      if (iform.eq.1) go to 200
      call zlog(argr, argi, str, sti, idum)
      czr = czr - 0.25d0*str - aic
      czi = czi - 0.25d0*sti
  200 continue
      ax = dexp(rcz)/tol
      ay = czi
      czr = ax*dcos(ay)
      czi = ax*dsin(ay)
      call zuchk(czr, czi, nw, ascle, tol)
      if (nw.ne.0) go to 180
      return
  210 continue
      nuf = -1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------

















