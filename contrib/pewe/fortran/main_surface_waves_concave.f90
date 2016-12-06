program main
  
  implicit none
  integer, parameter  :: n = 6
  double precision :: x,y,t
  double precision :: du,dv,dut,dvt
  double complex   :: B,c
  
  B = dcmplx(-2.741262468068052d0,-16.740023608389567d0)
  c = dcmplx(4.000739349461448d0,0.616417207729038d0) / dble(n)
  
  t = 0.0d0
  x = 1.0d0
  y = 1.0d0
  
  call surface_waves_concave(du,dv,dut,dvt,x,y,t,n,c,B)
  write(*,*) 'If correct, this should return: 10.176659421781862, 31.577290806286154'
  write(*,*) x,y,du,dv

  
end program main
