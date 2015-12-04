MENU_BANDWIDTH="/31Broadband signal [k0-dk0, k0+dk0]/";
MENU_MONOCHROMATIC="/31Monochromatic wave/";

//actual wavenumber (in simulation)
DefineConstant[
  MultiFreq = {0, Choices{0,1},
    Name StrCat[MENU_INPUT, "/30Multiple frequencies (time consuming!)"]}
  k0 = {10., Min 1., Max 100., Step 0.1,
    Name StrCat[MENU_INPUT, MENU_MONOCHROMATIC, "1Wavenumber k"], Visible !MultiFreq}
  lambda0 = {2*Pi/k0,
    Name StrCat[MENU_INPUT, MENU_MONOCHROMATIC,"1Wavelength"], Visible !MultiFreq, ReadOnly 1}
];

//broadband signals
DefineConstant[
  k0 = {10., Min 1., Max 100., Step 0.1,
    Name StrCat[MENU_INPUT, MENU_BANDWIDTH, "2Central wavenumber k0"], Visible (MultiFreq), Closed (!MultiFreq)}
  dk0 = {k0/5., Min 0., Max k0-0.1, Step 0.1,
    Name StrCat[MENU_INPUT, MENU_BANDWIDTH, "3Half bandwidth dk0"], Visible (MultiFreq), Closed (!MultiFreq)}
  nk = {10, Min 2, Max 100, Step 1,
    Name StrCat[MENU_INPUT, MENU_BANDWIDTH, "4Nb. of freq"], Visible (MultiFreq), Closed (!MultiFreq)}
  stepK = {nk==1?dk0:2*dk0/(nk-1),
    Name StrCat[MENU_INPUT, MENU_BANDWIDTH, "4Frequency step (sampling)"], ReadOnly 1, Visible (MultiFreq), Closed (!MultiFreq)}
  k_max = {k0 + dk0,
    Name StrCat[MENU_INPUT, MENU_BANDWIDTH, "5k_max"], ReadOnly 1, Visible (MultiFreq), Closed (!MultiFreq)}
  k_min = {k0 - dk0,
    Name StrCat[MENU_INPUT, MENU_BANDWIDTH, "5k_min"], ReadOnly 1, Visible (MultiFreq), Closed (!MultiFreq)}
];

//Obstacles
DefineConstant[
  linkn_maxmin = {0, Choices {0,1},
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/2Set n_max = n_min"], Visible CLUTTER}
  n_max = {1.3, Min 0.1, Max 10., Step 0.05,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/2Maximum contrast"], Visible CLUTTER, AutoCheck 0}
  n_min = {linkn_maxmin?n_max:0.7, Min 0.1, Max n_max, Step 0.05,
    Name StrCat[MENU_GEO, MENU_OBSTACLES, "/2Minimum contrast"], Visible CLUTTER, ReadOnly linkn_maxmin, AutoCheck 0}
];

If(n_max < n_min)
  Printf("Switching max and min value of contrast");
  n_aux = n_min;
  n_min = n_max;
  n_max = n_aux;
EndIf

If(!MultiFreq && k0 > k_dis)
  Printf("Warning: k > kdis !");
EndIf

If(MultiFreq && k_max > k_dis)
  Printf("Warning: k_max > kdis !");
EndIf
