Merge "waveguide2d_mshcut.msh";
CreateTopology;

Include "params.geo";

vol[] = {};         idx_vol[] = {};
sur_bot[] = {};     idx_sur_bot[] = {};
sur_top[] = {};     idx_sur_top[] = {};


// sur_scat[] = {};    idx_sur_scat[] = {};
// sur_inf[] = {};     idx_sur_inf[] = {};
// sur_sym[] = {};     idx_sur_sym[] = {};
sigma_left[] = {};  idx_sigma_left[] = {};
sigma_right[] = {}; idx_sigma_right[] = {};

CreateTopology ;

For i In {1:N_DOM}
  idx_vol[] += #vol[];                 vol[] += Physical Surface{6000 + i};
  idx_sur_bot[] += #sur_bot[];         sur_bot[] += Physical Line{1000 + i};
  idx_sur_top[] += #sur_top[];         sur_top[] += Physical Line{3000 + i};


  // idx_sur_scat[] += #sur_scat[];       sur_scat[] += Physical Surface{1000 + i};
  // idx_sur_inf[] += #sur_inf[];         sur_inf[] += Physical Surface{2000 + i};
  // idx_sur_sym[] += #sur_sym[];         sur_sym[] += Physical Surface{3000 + i};
  idx_sigma_left[] += #sigma_left[];   sigma_left[] += Physical Line{5000 + 1000 * (i-2)};
  idx_sigma_right[] += #sigma_right[]; sigma_right[] += Physical Line{5000 + 1000 * (i-1)};
EndFor
idx_vol[] += #vol[];


idx_sur_bot[] += #sur_bot[];
idx_sur_top[] += #sur_top[];

// idx_sur_scat[] += #sur_scat[];
// idx_sur_inf[] += #sur_inf[];
// idx_sur_sym[] += #sur_sym[];
idx_sigma_left[] += #sigma_left[];
idx_sigma_right[] += #sigma_right[];

Geometry.OrientedPhysicals = 0;

Printf("Writing split meshes to disk... ");

For i In {1:N_DOM}
  idom = i-1;
  Delete Physicals;

  If (i == 1)
    Physical Line(4001) = 4001 ;
  EndIf
  If (i == N_DOM)
    Physical Line(2000+i) = 2000+i ;
  EndIf

  Physical Surface(6000+i) = vol[{idx_vol[i-1]:idx_vol[i]-1}];
  Physical Line(1000+i) = sur_bot[{idx_sur_bot[i-1]:idx_sur_bot[i]-1:1}];
  Physical Line(3000+i) = sur_top[{idx_sur_top[i-1]:idx_sur_top[i]-1:1}];



  // Physical Surface(1000+i) = sur_scat[{idx_sur_scat[i-1]:idx_sur_scat[i]-1:1}];
  // Physical Surface(2000+i) = sur_inf[{idx_sur_inf[i-1]:idx_sur_inf[i]-1:1}];
  // Physical Surface(3000+i) = sur_sym[{idx_sur_sym[i-1]:idx_sur_sym[i]-1:1}];

  Physical Line(-(5000 + 1000 * (i-2))) = sigma_left[{idx_sigma_left[i-1]:idx_sigma_left[i]-1:1}];
  Physical Line(5000 + 1000 * (i-1)) = sigma_right[{idx_sigma_right[i-1]:idx_sigma_right[i]-1:1}];


bnd[] = Boundary{Line{sigma_left[{idx_sigma_left[i-1]:idx_sigma_left[i]-1:1}]};};
  Physical Point(10000+i) = bnd[] ;
  Printf("[left]  idom=%g #bnd=%g ", idom , #bnd[] );

bnd[] = Boundary{Line{sigma_right[{idx_sigma_right[i-1]:idx_sigma_right[i]-1:1}]};};
  Physical Point(20000+i) = bnd[] ;
Printf("[right] idom=%g #bnd=%g ", idom , #bnd[] );

  Save Sprintf("waveguide2d_mshcut%g.msh", idom);
EndFor

Printf("Done.");
