//Patch file to avoid GMSH to remesh when the point source is moved AND is not plotted (but chosen as incident wave)
//This file will probably be merged in other files when it will be possible to specify to GMSH to not remesh, even when the geometry changes
DefineConstant[
  r_source = {Xmax+1., Min Xmax + 0.1, Max Xmax + 1000., Step 0.1, Label "Distance from origin", Name Str[MENU_INPUT, Str[MENU_UINC,"/Source coordinate/r"]], Visible (INCIDENT_WAVE == POINTSOURCE)}
  theta_source = {0., Min 0., Max 2*Pi, Step 0.01 , Label "Angle (rad)", Name Str[MENU_INPUT, Str[MENU_UINC,"/Source coordinate/theta"]], Visible (INCIDENT_WAVE == POINTSOURCE)}
  ];
