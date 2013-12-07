//actual wavenumber (in simulation)
DefineConstant[
  k = {10., Min 1., Max 100., Step 0.1, Label "Wavenumber k", Name Str[MENU_INPUT, "0"]}
];
lambda = 2*Pi/k;
If(k > k_dis)
  Printf("Warning: k > kdis !\n");
EndIf
// Max value of absorbing coefficient
// AlphaX = k_w + i SigmaX
SigmaXmax = 100;
SigmaYmax = 100;
