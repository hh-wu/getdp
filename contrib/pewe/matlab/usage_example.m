   [x,y] = meshgrid(linspace(-3,3,201));
   
    %Scattering from a cylindrical cavity
    [du, dv] = cylindrical_cavity(x,y,0,4*pi,1,1,1);  
    z = sqrt(du.^2+dv.^2);
    mask = 1.0*(x.^2+y.^2 >= 1); 
    subplot(1,4,1)
    surf(x,y,z./mask)
    shading interp

    axis([-3 3 -3 3])
    view(0,90)

    %Scattering from a cylindrical inclusion
    [du, dv,du_p, dv_p] = cylindrical_inclusion(x,y,x,y,0,4*pi,1,1,1,1/2,1/10,1); 
    
    z = sqrt(du.^2+dv.^2);
    z_p = sqrt(du_p.^2+dv_p.^2);
    mask = 1.0*(x.^2+y.^2 >= 1);
    mask_p = 1.0*(x.^2+y.^2 < 1);
    subplot(1,4,2)
    surf(x,y,z./mask)
    hold on
    surf(x,y,z_p./mask_p)
    shading interp
   
    axis([-3 3 -3 3])
    view(0,90)
  

    %surface waves on a convex boundary
    c = 6.712844035888430/6;
    B = 0.259859421131935i;
    [du0,dv0] = surface_wave_convex(x,y,1,1,c,B);
    subplot(1,4,3)
    z = sqrt(du0.^2+dv0.^2);
    mask = 1.0*(x.^2+y.^2 <= 1); 
    surf(x,y,z./mask)
    shading interp
   
    axis([-3 3 -3 3])
    view(0,90)

    %surface waves on a concave boundary
    subplot(1,4,4)
    c = (4.000739349461448 + 0.616417207729038i)/6;
    B = -2.741262468068052 - 16.740023608389567i;
    [du, dv] = surface_waves_concave(x,y,0,6,c,B); 
    z = sqrt(du.^2+dv.^2);
    mask = 1.0*(x.^2+y.^2 >= 1); 
    surf(x,y,z./mask)
    shading interp    
   
    axis([-3 3 -3 3])
    view(0,90)

    pause
    
    
    
    
    
  
      