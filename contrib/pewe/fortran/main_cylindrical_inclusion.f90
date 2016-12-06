program main
  
  implicit none
  double precision :: x,y,t
  double precision :: du,dv,dut,dvt
  double precision :: mu,lambda,rho,omega
  double precision :: mu_p,lambda_p,rho_p
  double precision , parameter :: pi = acos(-1.d0)
  
  ! Lame parameters and density
  lambda = 1.d0
  mu     = 1.d0
  rho    = 1.d0
  lambda_p = 0.5d0
  mu_p     = 0.1d0
  rho_p    = 1.d0
  ! Temporal frequency
  omega = 4.d0*pi
  x = 1.2d0
  y = 1.1d0
  t = 0.d0
  call cylindrical_inclusion(du,dv,dut,dvt,X,Y,t,omega,&
     lambda,mu,rho,lambda_p,mu_p,rho_p)
  write(*,*) 'If correct, this should return: -4.3939418223794062 0.55917854820107560'
  write(*,*) x,y,du,dv
  x = .1d0
  y = .2d0
  t = 0.d0
  call cylindrical_inclusion(du,dv,dut,dvt,X,Y,t,omega,&
     lambda,mu,rho,lambda_p,mu_p,rho_p)
  write(*,*) 'If correct, this should return: -4.3939418223794062 0.55917854820107560'
  
  write(*,*) x,y,du,dv
  
end program main
