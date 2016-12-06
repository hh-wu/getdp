program main
  
  implicit none
  double precision :: x,y,t
  double precision :: du,dv,dut,dvt
  double precision :: mu,lambda,rho,omega
  double precision , parameter :: pi = acos(-1.d0)
  
  ! Lame parameters and density
  lambda = 1.d0
  mu     = 1.d0
  rho    = 1.d0
  ! Temporal frequency
  omega = 4.d0*pi
  x = 2.d0
  y = 1.2d0
  t = 0.d0
  
  call cylindrical_cavity(du,dv,dut,dvt,X,Y,t,omega,lambda,mu,rho)
  write(*,*) 'If correct, this should return: -4.3939418223794062 0.55917854820107560'
  
  write(*,*) x,y,du,dv
  
end program main
