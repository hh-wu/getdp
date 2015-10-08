Include "v_data.geo" ;

// characteristic lengths
lcRotor = 5 * mm/ md ;
lcStator = 2 * mm / md;
lcEf = Ef/(5*md);
lcAimant = 2 * mm / md;

// Geometry
Include "v_rotor.geo";
If(Flag_stator)
  Include "v_stator.geo";
EndIf

Geometry.AutoCoherence = 1;
Geometry.OldNewReg = 1; 

//Hide { Point{ Point '*' }; }
//Hide { Line{ Line '*' }; }
//Show { Line{ nicepos_rotor[] }; }
//If(Flag_stator)
//  Show { Line{ nicepos_stator[] }; }
//EndIf

