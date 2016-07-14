Include "Lib_Ele_Circuit.pro";

Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Call Lib_Ele_Circuit;

Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    // Macro that does not involve MagDyn_a
    Call Lib_Ele_Circuit_FO;

    // TODO: Append should be allowed here
    Equation {
      GlobalEquation {
        Type Network; NameOfConstraint ElectricalCircuit~{iP};

        { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir~{iP}; }

        If (Exists(Lib_MagDyn_av_MassiveCond))
         If (Flag_Lib~{iP}~{Lib_MagDyn_av_MassiveCond})
          Call Lib_MagDyn_av_MassiveCond_FO_GE_for~{Lib_MagDyn_av_CircuitCoupling};
         EndIf
        EndIf

        If (Exists(Lib_MagDyn_av_CoilCond))
         If (Flag_Lib~{iP}~{Lib_MagDyn_av_CoilCond})
           Call Lib_MagDyn_av_CoilCond_FO_GE_for~{Lib_MagDyn_av_CircuitCoupling};
         EndIf
        EndIf

      }
    }
  }
}

PostProcessing {
  {
    Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};

    Call Lib_Ele_Circuit_PP;
  }
}

Return
