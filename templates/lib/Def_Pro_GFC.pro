

/////
Macro Def_Group_Function_Constraint

Printf("Call Def_Group_Function_Constraint (iP=%g)", iP);

Dim_Pro~{iP} = i_Dim;

CoefGeo~{iP} = coefGeo;
If (Exists(coefGeo_L~{i_Dim}))
  CoefGeo_L~{iP} = coefGeo_L~{i_Dim};
EndIf

Group {
  DomainCC~{iP} = Region[{}];
  DomainC~{iP} = Region[{}];
  DomainS0~{iP} = Region[{}];
  DomainS~{iP} = Region[{}];
  Sur_FluxTube~{iP} = Region[{}];
  CutLine_FluxTube~{iP} = Region[{}];
  SkinDomain_Surf~{iP} = Region[{}];
  Surface_Ga0~{iP} = Region[{}];
  Surface_Gh0~{iP} = Region[{}]; // for nxh BC, not needed for zero nxh
}

Call Def_Group_Function_Constraint_Init;

// Define all the master regions
For i_r_ In {0:#r_master~{iP}()-1}
  r_ = r_master~{iP}(i_r_);
  CallTest(type_model_r~{r_}) Def_GFC_r;
EndFor

// To remember for PostOperation
For i_r_ In {0:#r_master_store_data~{iP}()-1}
  r_ = r_master_store_data~{iP}(i_r_);
  Call Def_Type_Model_Source_r_p;
EndFor


Freq~{iP} = Freq;


//+++ Before generalization (Macro to be defined in particular data .pro file
Call Def_Group_Function_Constraint_PLUS;


Constraint{

  { Name MagneticVectorPotential_1~{iP};
    Case {
      { Region Surface_Ga0~{iP}; Value 0.; }
    }
  }

}

newSP = newSP+1;

Return


//
// Save types of model and source per region and problem
// IN : r_, iP, type_model_r~{r_}, type_source_r~{r_}
// OUT: type_model_r~{r_}~{iP}, type_source_r~{r_}~{iP}, type_constraint_r~{r_}~{iP}
Macro Def_Type_Model_Source_r_p

type_model_r~{r_}~{iP} = type_model_r~{r_};
DefineConstant[ type_source_r~{r_} = T_SOURCE_NONE ];
type_source_r~{r_}~{iP} = type_source_r~{r_};
type_constraint_r~{r_}~{iP} = type_constraint_r~{r_};

Return


//
Macro Def_GFC_r

// Possible slave regions in list slave_region~{r_}(), with default model types in list slave_region_model~{r_}()
If (type_model_r~{r_} && Exists(slave_region~{r_}))
  For i_slave_ In {0:#slave_region~{r_}()-1}
    r_slave_ = slave_region~{r_}(i_slave_);
    DefineConstant[ flag_r_has_r~{r_}~{r_slave_} = flag~{r_slave_} ];

   //++++
   If (Exists(type_model_r~{r_slave_}))
    If (!type_model_r~{r_slave_})
      type_model_r~{r_slave_} = slave_region_model~{r_}(i_slave_);
    EndIf
   EndIf
   If (Exists(type_constraint_r~{r_slave_}))
    If (!type_constraint_r~{r_slave_})
      type_constraint_r~{r_slave_} = slave_region_constraint~{r_}(i_slave_);
    EndIf
   EndIf

    If (!flag_r_has_r~{r_}~{r_slave_})
      Group {
        S2N[name_Region~{r_}]~{iP} += #(REF_+r_slave_); // slave region in master region
      }
    Else
      If (type_model_r~{r_} > 0)
        Group {
          S2N[name_Region~{r_slave_}]~{iP} += #(REF_+r_slave_); // slave region itself
        }

        r_save_ = r_; r_ = r_slave_;
        Call Def_GFC_r_per_model;
        r_ = r_save_;

      Else
        Group {
          S2N[name_Region~{-type_model_r~{r_}}]~{iP} += #(REF_+r_slave_);
        }
        //+++ Should be recursive
      EndIf

    EndIf
  EndFor
EndIf


If (type_model_r~{r_} > 0)
  Call Def_Group_r;
  Call Def_GFC_r_per_model;

ElseIf (type_model_r~{r_} < 0)
  Call Def_Group_r;
  Group {
    S2N[name_Region~{-type_model_r~{r_}}]~{iP} += Region[S2N[name_Region~{r_}]~{iP}];
  }
  //+++ Should be recursive

EndIf

Return


//
Macro Def_Group_r

Group {
  If (!nb_subRegions~{i_Dim}~{r_})
    S2N[name_Region~{r_}]~{iP} += #(REF_+r_);
  Else
    sub_regions~{r_}~{iP}() = {}; 
    For i_sub_ In {0:nb_subRegions~{i_Dim}~{r_}-1}
      sub_regions~{r_}~{iP}() += (i_sub_+1)*DIM_SUB + r_;
      type_model_r~{(i_sub_+1)*DIM_SUB + r_} = type_model_r~{r_}; //+++
      SUB_ = (i_sub_+1)*DIM_SUB;
      REF_SUB_ = REF_ + SUB_;
      S2N[name_Region~{r_}]~{iP} += #(REF_SUB_+r_);
      S2N[name_Region~{r_+SUB_}]~{iP} = #(REF_SUB_+r_);
    EndFor
  EndIf
}

Return



//
Macro Def_GFC_r_per_model

If (type_model_r~{r_} == T_MODEL_MAG)
  Group { // region with possible added slave regions
    DomainCC~{iP} += Region[{S2N[name_Region~{r_}]~{iP}}];
  }
  Function {
    nu~{iP}[S2N[name_Region~{r_}]~{iP}] = 1/(mur~{r_}*mu0);
    If (type_source_r~{r_} == T_SOURCE_COIL)
      sigma~{iP}[S2N[name_Region~{r_}]~{iP}] = sigma~{r_};
    ElseIf (Exists(coefGeo~{r_}))
      CoefGeos~{iP}[S2N[name_Region~{r_}]~{iP}] = coefGeo~{r_};
    EndIf
  }

ElseIf (type_model_r~{r_} == T_MODEL_MAG_ELE)
  Group {
    DomainC~{iP} += Region[{S2N[name_Region~{r_}]~{iP}}];
  }
  Function {
    nu~{iP}[S2N[name_Region~{r_}]~{iP}] = 1/(mur~{r_}*mu0);
    sigma~{iP}[S2N[name_Region~{r_}]~{iP}] = sigma~{r_};
    If (Exists(coefGeo~{r_}))
      CoefGeos~{iP}[S2N[name_Region~{r_}]~{iP}] = coefGeo~{r_} * sign_branch~{r_};
    EndIf
  }
  Constraint{
    { Append;
      Name Current~{iP};
      Case {
        If (type_constraint_r~{r_} == T_CONSTRAINT_CURRENT)
          { Region S2N[name_Region~{r_}]~{iP}; Value val_current~{r_}~{iP};
            TimeFunction F_Cos_wt_p[]{2*Pi*Freq, val_phase~{r_}~{iP}}; }
        EndIf
      }
    }
    { Append;
      Name Voltage~{iP};
      Case {
        If (type_constraint_r~{r_} == T_CONSTRAINT_VOLTAGE)
          { Region S2N[name_Region~{r_}]~{iP}; Value val_voltage~{r_}~{iP};
            TimeFunction F_Cos_wt_p[]{2*Pi*Freq, val_phase~{r_}~{iP}}; }
        EndIf
      }
    }
  }

ElseIf (type_model_r~{r_} == T_MODEL_MAG_PERFECT)
  Group {
    For i_skin_ In {0:#skin_region~{r_}()-1}
      Surface_Gh0~{iP} += Region[{(REF_+skin_region~{r_}(i_skin_))}];
    EndFor
  }
  Function {
  }

ElseIf (type_model_r~{r_} == T_MODEL_ELE_PERFECT)
  Group {
  /*
    For i_skin_ In {0:#skin_region~{r_}()-1}
      SkinDomainC_Perfect~{iP} += Region[{(REF_+skin_region~{r_}(i_skin_))}];
    EndFor
  */
  }
  Function {
  }

EndIf


If (type_source_r~{r_} == T_SOURCE_COIL_S0)
  Group {
    DomainS0~{iP} += Region[{S2N[name_Region~{r_}]~{iP}}];
  }
  Function {
    If (type_constraint_r~{r_} == T_CONSTRAINT_CURRENT)
      js0~{iP}[S2N[name_Region~{r_}]~{iP}] =
        val_current~{r_}~{iP} / SurfaceArea[] * Vector[0,0,sign_branch~{r_}]
        * F_Cos_wt_p[]{2*Pi*Freq, val_phase~{r_}~{iP}};
    EndIf
  }

ElseIf (type_source_r~{r_} == T_SOURCE_COIL)
  Group {
    DomainS~{iP} += Region[{S2N[name_Region~{r_}]~{iP}}];
  }
  Function {
    Ns~{iP}[S2N[name_Region~{r_}]~{iP}] = nb_turns~{r_};
    Sc~{iP}[S2N[name_Region~{r_}]~{iP}] = SurfaceArea[];
    SignBranch~{iP}[S2N[name_Region~{r_}]~{iP}] = sign_branch~{r_};
    If (Exists(coefGeo~{r_}))
      CoefGeos~{iP}[S2N[name_Region~{r_}]~{iP}] = coefGeo~{r_} * sign_branch~{r_};
    EndIf

    If (Exists(coefGeo_L~{i_Dim}~{r_}))
      CoefGeos_L~{iP}[S2N[name_Region~{r_}]~{iP}] = coefGeo_L~{i_Dim}~{r_};
    EndIf
    If (Exists(coefGeo_L_Corrected~{i_Dim}~{r_}))
      CoefGeos_L_Corrected~{iP}[S2N[name_Region~{r_}]~{iP}] = coefGeo_L_Corrected~{i_Dim}~{r_};
    EndIf

    js0~{iP}[S2N[name_Region~{r_}]~{iP}] =
      Ns~{iP}[]/Sc~{iP}[] * Vector[ 0, 0, SignBranch~{iP}[] ];
  }

  Constraint{
    { Append;
      Name Current~{iP};
      Case {
        If (type_constraint_r~{r_} == T_CONSTRAINT_CURRENT)
          { Region S2N[name_Region~{r_}]~{iP}; Value val_current~{r_}~{iP};
            TimeFunction F_Cos_wt_p[]{2*Pi*Freq, val_phase~{r_}~{iP}}; }
        EndIf
      }
    }
    { Append;
      Name Voltage~{iP};
      Case {
        If (type_constraint_r~{r_} == T_CONSTRAINT_VOLTAGE)
          { Region S2N[name_Region~{r_}]~{iP}; Value val_voltage~{r_}~{iP};
            TimeFunction F_Cos_wt_p[]{2*Pi*Freq, val_phase~{r_}~{iP}}; }
        EndIf
      }
    }
  }

EndIf

//+++ Before generalization (Macro to be defined in particular data .pro file
Call Def_GFC_r_per_model_PLUS;

Return
