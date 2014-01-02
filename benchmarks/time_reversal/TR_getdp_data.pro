MENU_BANDWIDTH="/31Broadband signal [k0-dk0, k0+dk0]/";
MENU_MONOCHROMATIC="/31Monochromatic impulse/";
//actual wavenumber (in simulation)
DefineConstant[
  MultiFreq = {0, Choices{0,1}, Label "Multiple frequencies (time consuming!)", Name Str[MENU_INPUT, "/30MultiFreq"]}
  k0 = {10., Min 1., Max 100., Step 0.1, Label "Wavenumber k", Name Str[MENU_INPUT, Str[MENU_MONOCHROMATIC, "1k"]], Visible !MultiFreq}
  lambda0 = {2*Pi/k0, Label "Wavelength", Name Str[MENU_INPUT, Str[MENU_MONOCHROMATIC,"1lambda"]], Visible !MultiFreq, ReadOnly 1}
];
	       
//broadband signals	       
DefineConstant[
  k0 = {10., Min 1., Max 100., Step 0.1, Label "Central wavenumber k0", Name Str[MENU_INPUT, Str[MENU_BANDWIDTH, "2k"]], Visible (MultiFreq), Closed (!MultiFreq)}
  lambda0 = {2*Pi/k0, Label "Wavelength", Name Str[MENU_INPUT, Str[MENU_MONOCHROMATIC,"1lambda"]], Visible !MultiFreq, ReadOnly 1}
  dk0 = {k0/5., Min 0., Max k0-0.1, Step 0.1, Label "Half bandwidth dk0", Name Str[MENU_INPUT, Str[MENU_BANDWIDTH, "3Dk"]], Visible (MultiFreq), Closed (!MultiFreq)}
  nk = {10, Min 2, Max 100, Step 1, Label "Nb. of freq", Name Str[MENU_INPUT, Str[MENU_BANDWIDTH, "4nk"]], Visible (MultiFreq), Closed (!MultiFreq)}
  stepK = {nk==1?dk0:2*dk0/(nk-1), Label "Frequency step (sampling)", Name Str[MENU_INPUT, Str[MENU_BANDWIDTH, "4stepK"]], ReadOnly 1, Visible (MultiFreq), Closed (!MultiFreq)}
  k_max = {k0 + dk0, Label "k_max", Name Str[MENU_INPUT, Str[MENU_BANDWIDTH, "5k_max"]], ReadOnly 1, Visible (MultiFreq), Closed (!MultiFreq)}
  k_min = {k0 - dk0, Label "k_min", Name Str[MENU_INPUT, Str[MENU_BANDWIDTH, "5k_min"]], ReadOnly 1, Visible (MultiFreq), Closed (!MultiFreq)}
];


If(!MultiFreq && k0 > k_dis)
  Printf("Warning: k > kdis !\n");
EndIf

If(MultiFreq && k_max > k_dis)
  Printf("Warning: k_max > kdis !\n");
EndIf
