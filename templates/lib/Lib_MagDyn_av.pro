/*
  MagDyn_av
    Magnetodynamics - Magnetic vector potential and
    electric scalar potential a-v formulation,
    with massive and stranded inductors
    and electrical circuit coupling
*/

/* I N P U T
   ---------
  A problem index ~{.} is associated with each Group, Function, Constraint, Parameter
  (Entries between [] will be added/defined later)

  GlobalGroup :
  -----------

  DomainS              Stranded inductor regions (Sources)
 [DomainV              All regions in movement (for speed term)]

  Function :
  --------

 [Velocity[]               Velocity of regions]

  Constraint :
  ----------

  Voltage                  Fixed voltage
  Current                  Fixed current

  Convention: voltage and current are given the same reference direction
              (e.g., leads to 'voltage+resistance*current=0' in a resistance)

  Parameters :
  ----------

  CoefGeos[]               In case of some symmetries (e.g. 2*Pi for Axi)
  CoefGeo                  Single value considered in any CoefGeos[.] if
                           Flag_CoefGeos == 0
  Flag_CoefGeos            see above

  FE_Degree                Interpolation degree of 'a', if > 1, change the number
                           of Gauss integration points

  ... TODO: to be extended
*/

DefineConstant[ iP = 1 ];
DefineConstant[ Process_Lib~{iP} = 1 ];

// INIT

DefineConstant[ Flag_SP = 0 ];

// Libs (base and extensions) for a-formulation
add_Lib() = Str[];

add_Lib() += Str["Lib_MagDyn_a"]; // Level 000 (base Lib)

add_Lib() += Str["Lib_MagDyn_av_ThermalCoupling"]; // Level xxx

add_Lib() += Str["Lib_MagDyn_av_MassiveCond"]; // Level 400
add_Lib() += Str["Lib_MagDyn_av_CoilCond"];    // Level 600

add_Lib() += Str["Lib_MagDyn_av_SurfaceImpedance"]; // Level 410, needs level 400

add_Lib() += Str["Lib_MagDyn_av_FluxTube"]; // Level 200

add_Lib() += Str["Lib_MagDyn_av_PerfectCond"]; // Level 210, needs level 200

add_Lib() += Str["Lib_MagDyn_av_HigherOrderFEs"]; // Level 700

add_Lib() += Str["Lib_MagDyn_av_CircuitCoupling"]; // Level 800

// Subproblems
If (Flag_SP)
  add_Lib() += Str["Lib_MagDyn_av_SP"];
EndIf


// Load all Libs (their Macro to be called later for each problem iP)
_save_Process~{LevelInclude} = Process_Lib~{iP}; Process_Lib~{iP} = 0; // For base Lib
For i_Lib In {0:#add_Lib()-1}
  S2N[Str[add_Lib(i_Lib)]] = i_Lib; // Constant Names from Lib Names
EndFor
For i_Lib In {0:#add_Lib()-1}
  Include StrCat[add_Lib(i_Lib), ".pro"];
EndFor
Process_Lib~{iP} = _save_Process~{LevelInclude}; // For this master Lib


/////
Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

DefineConstant[
  FE_Degree~{iP} = 1
, Flag_CircuitCoupling~{iP} = 0
, Flag_MagDyn_Thermal_Coupling~{iP} = 0
];

// Possible changes of default Flags
DefineConstant[
  Flag_Lib~{iP}~{Lib_MagDyn_av_HigherOrderFEs} = (FE_Degree~{iP} >= 2)
, Flag_Lib~{iP}~{Lib_MagDyn_av_CircuitCoupling} = Flag_CircuitCoupling~{iP}
, Flag_Lib~{iP}~{Lib_MagDyn_av_ThermalCoupling} = Flag_MagDyn_Thermal_Coupling~{iP}
];

// Default Flag_Lib
For i_Lib In {0:#add_Lib()-1}
  DefineConstant[ Flag_Lib~{iP}~{i_Lib} = 1 ];
EndFor


// All Libs
For i_Lib In {0:#add_Lib()-1}
  CallTest(Flag_Lib~{iP}~{i_Lib}) Str[add_Lib(i_Lib)];
EndFor


// Last definitions!
//
Group {
  DefineGroup[ Surface_Local_BFs~{iP}, Surface_Global_BFs~{iP}, Surface_SkinC_BFs~{iP} ];
  Surface_Specific_BFs~{iP} = Region[ {Surface_Local_BFs~{iP}, Surface_Global_BFs~{iP}} ];

  DomainWithSurf~{iP} += Region[ {Surface_Specific_BFs~{iP}, Surface_SkinC_BFs~{iP}} ];
  //+++ With static Group, DomainWithSurf~{iP} must be alone in Support (not in RHS Group, which is the case in all Libs); will be solved with dynamic Group
}

FunctionSpace {
  {
    Append;
    Name Hcurl_a~{iP}; Type Form1P;

    BasisFunction {
      { Append; //+++ To change Entity
        Name s_n; //NameOfCoef a_n; Function BF_PerpendicularEdge;
        // Support DomainWithSurf~{iP};
        Entity NodesOf[All, Not {Surface_Specific_BFs~{iP}}];
      }
    }
  }
}


Return


//
CallTest(Process_Lib~{iP}) BaseFileName;
