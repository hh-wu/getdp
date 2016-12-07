double complex function besselh(nu,order,x)
  implicit none
  integer :: nu,order
  double precision :: x
  
  if (order .eq. 1) then
     besselh = complex(besjn(nu,x),besyn(nu,x))
  else
     besselh = complex(besjn(nu,x),-besyn(nu,x))
  end if
end function besselh

double complex  function besselj_p(n,xi,x)
  implicit none
  integer :: n
  double precision :: x,xi
  
  besselj_p= xi/2.d0*(besjn(n-1,x)-besjn(n+1,x))
  
end function besselj_p

double complex function besselj_pp(n,xi,x)
  implicit none
  integer :: n
  double precision :: x,xi
  
  if (n .eq. 1)  then
     besselj_pp = -xi**2/2.d0*besjn(1,x) &
          - xi**2/4.d0*(besjn(1,x)-besjn(3,x))
  else
     besselj_pp = xi**2/4.d0*(besjn(n-2,x)&
          -2.d0*besjn(n,x)&
          +besjn(n+2,x))
  end if
end function besselj_pp

double complex function besselh_p(n,xi,x)
  implicit none
  integer :: n
  double precision :: x,xi
  double complex, external :: besselh
  
  besselh_p = xi/2.d0*(besselh(n-1,2,x)-besselh(n+1,2,x))

end function besselh_p

double complex function besselh_pp(n,xi,x)
  implicit none
  integer :: n
  double precision :: x,xi
  double complex, external :: besselh
  
  if (n.eq.1) then
     besselh_pp = -xi**2/2.d0*besselh(1,2,x)&
          - xi**2/4.d0*(besselh(1,2,x)-besselh(3,2,x))
  else
     besselh_pp = xi**2/4.d0*(besselh(n-2,2,x)&
          -2.d0*besselh(n,2,x)+besselh(n+2,2,x))
  end if
end function besselh_pp
