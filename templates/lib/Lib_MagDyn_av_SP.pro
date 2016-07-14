// Modules for Subproblems

DefineConstant[ nbP = 1 ];

// Types of models
T_MODEL_NONE = 0; // For an inexisting region (0 needed)
T_MODEL_MAG = 1; T_MODEL_NO_COND_EC = T_MODEL_MAG;
T_MODEL_MAG_ELE = 2; T_MODEL_COND_EC = T_MODEL_MAG_ELE;
T_MODEL_MAG_PERFECT = 3;
T_MODEL_ELE_PERFECT = 4;
T_MODEL_ELE_CIR = 5;

// Types of sources (per problem) (bitwise shift operator to be used!)
SOURCE_VOLUME         = (1<<0); // 1
SOURCE_SURFACE_WEAK   = (1<<1); // 2
SOURCE_SURFACE_STRONG = (1<<2); // 4
SOURCE_SURFACE_STRONG_WEAK = (SOURCE_SURFACE_STRONG | SOURCE_SURFACE_WEAK); // 6 (both strong and weak SS)

// Types of sources (per region)
t_=-1;
t_=t_+1; T_SOURCE_NONE = t_;
t_=t_+1; T_SOURCE_COIL_S0 = t_;
t_=t_+1; T_SOURCE_COIL = t_;
t_=t_+1; T_SOURCE_IDEAL_FLUX_TUBE = t_;
t_=t_+1; T_SOURCE_EXTERN = t_;

t_=t_+1; T_SOURCE_CHANGE_REGION_VIA_VS = t_; SOURCE_FOR~{t_} = SOURCE_VOLUME;
// Both [n.b]!=0 and [nxh]!=0 to be corrected
t_=t_+1; T_SOURCE_CHANGE_REGION_VIA_SS = t_; SOURCE_FOR~{t_} = SOURCE_SURFACE_STRONG_WEAK;
// Only [n.b]!=0 to be corrected, because [nxh]=0
t_=t_+1; T_SOURCE_MAG_PERFECT_TO_REAL = t_; SOURCE_FOR~{t_} = SOURCE_SURFACE_STRONG;
// Only [nxh]!=0 to be corrected, because [n.b]=0
t_=t_+1; T_SOURCE_IFT_TO_RFT = t_; SOURCE_FOR~{t_} = SOURCE_SURFACE_STRONG_WEAK;
t_=t_+1; T_SOURCE_ELE_PERFECT_TO_REAL = t_; SOURCE_FOR~{t_} = SOURCE_SURFACE_WEAK;
t_=t_+1; T_SOURCE_NEXT_DIMENSION = t_; SOURCE_FOR~{t_} = SOURCE_SURFACE_WEAK;


// Types of constraint (per region)
t_=-1;
t_=t_+1; T_CONSTRAINT_NONE = t_;
t_=t_+1; T_CONSTRAINT_CURRENT = t_;
t_=t_+1; T_CONSTRAINT_VOLTAGE = t_;
t_=t_+1; T_CONSTRAINT_MMF = t_;
t_=t_+1; T_CONSTRAINT_MAGNETIC_FLUX = t_;
t_=t_+1; T_CONSTRAINT_CIRCUIT_COUPLING = t_;



/////
Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

Group {
  DefineGroup[ SkinDomain_Surf~{iP}, Surface_Local_BFs~{iP} ];
  Surface_Local_BFs~{iP} += Region[{SkinDomain_Surf~{iP}}];

  DefineConstant[ Nb_Source~{iP} = 0 ];
  For iS In {1:Nb_Source~{iP}}
    DefineConstant[
      Num_Source~{iP}~{iS}() = {},
      Type_Source~{iP}~{iS} = 0,
      Sign_Source~{iP}~{iS} = 1,
      Last_Source~{iP}~{iS} = 0,
      Flag_Projection~{iP}~{iS} = 0
    ];
  EndFor

  //+++ TODO: how to do in another way?
  DefineConstant[ flag_NoFTinSubSpace_a_ss~{iP} = 1 ];

  Domain_VS~{iP} = Region[{}]; DomainC_VS~{iP} = Region[{}];
  Surface_SS~{iP} = Region[{}];
  For iS In {1:Nb_Source~{iP}}
    If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG_WEAK)
      DefineGroup[Domain_SS~{iP}~{iS}, DomainC_SS~{iP}~{iS}];
      Surface_SS~{iP} += Region[ Surface_SS~{iP}~{iS} ];
      Domain_SS_TL~{iP}~{iS} =
        ElementsOf[Domain_SS~{iP}~{iS},
                   OnOneSideOf Surface_SS~{iP}~{iS}];
      DomainC_SS_TL~{iP}~{iS} =
        ElementsOf[DomainC_SS~{iP}~{iS},
                   OnOneSideOf Surface_SS~{iP}~{iS}];
    ElseIf (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
      DefineGroup[Domain_VS~{iP}~{iS}, DomainC_VS~{iP}~{iS}];
      Domain_VS~{iP} += Region[ Domain_VS~{iP}~{iS} ];
      DomainC_VS~{iP} += Region[ DomainC_VS~{iP}~{iS} ];
    EndIf
  EndFor

  Surface_Local_BFs~{iP} += Region[{Surface_SS~{iP}}];
}


FunctionSpace {
  {
    Append;
    Name Hcurl_a~{iP}; Type Form1P;

    BasisFunction {
       { Name s_n_ss; NameOfCoef a_n_ss; Function BF_PerpendicularEdge;
         Support DomainWithSurf~{iP};
         Entity NodesOf[Surface_SS~{iP}, Not {Surface_Global_BFs~{iP}}];
       }

       { Name s_n_surf; NameOfCoef a_n_surf; Function BF_PerpendicularEdge;
         Support DomainWithSurf~{iP};
         Entity NodesOf[SkinDomain_Surf~{iP}, Not {Surface_SS~{iP}, Surface_Global_BFs~{iP}}];
       }
    }
    SubSpace {
      { Name a_ss; NameOfBasisFunction {s_n_ss, s_n_surf}; }
      //++++      If (Flag_Lib~{T_MAGDYN_AV_FLUX_TUBE}~{iP})
      //+++ Needed for IFT TO RFT (when no projection)... but not for IFT 1D TO 2D (thus when projection)?
      If (flag_NoFTinSubSpace_a_ss~{iP})
        { Append; Name a_ss; NameOfBasisFunction {s_ft}; }
      EndIf
    }
    Constraint {
      { NameOfCoef a_n_ss;
        EntityType Auto; NameOfConstraint MagneticVectorPotential~{1}~{iP}; }
      { NameOfCoef a_n_surf;
        EntityType Auto; NameOfConstraint MagneticVectorPotential~{1}~{iP}; }
    }
  }
}


// PROJECTION
For iS In {1:Nb_Source~{iP}}
If (Flag_Projection~{iP}~{iS})
 FunctionSpace {
  { Name Hcurl_a_Proj~{iP}~{iS}; Type Form1P;

    If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
      BasisFunction {
        { Name s_n; NameOfCoef a_n; Function BF_PerpendicularEdge;
          Support Domain_VS~{iP}; Entity NodesOf[ All ]; }
        If (FE_Degree~{iP} == 2)
          { Name s_e; NameOfCoef a_e; Function BF_PerpendicularEdge_2E;
            Support Domain_VS~{iP}; Entity EdgesOf[ All ]; }
        EndIf
      }
      Constraint {
        //+++ with or without BC?
      }

    ElseIf (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG_WEAK)
      BasisFunction {
        { Name s_n; NameOfCoef a_n; Function BF_PerpendicularEdge;
          Support Domain_SS_TL~{iP}~{iS};
          Entity NodesOf[ All, Not Surface_SS~{iP}~{iS} ]; }

        { Name s_n_s; NameOfCoef a_n_s; Function BF_PerpendicularEdge;
          Support Domain_SS_TL~{iP}~{iS};
          Entity NodesOf[ Surface_SS~{iP}~{iS} ]; }
          //+++ not possible to gather Domain_SS_TL~{iP} (type: ElementsOf) and Surface_SS~{iP} (type: Region) => basis function supports to be split, but with same Name and different NameOfCoef
        { Name s_n_s; NameOfCoef a_n_s_s; Function BF_PerpendicularEdge;
          Support Surface_SS~{iP}~{iS};
          Entity NodesOf[ Surface_SS~{iP}~{iS} ]; }

        If (FE_Degree~{iP} == 2)
          { Name s_e; NameOfCoef a_e; Function BF_PerpendicularEdge_2E;
            Support Domain_SS_TL~{iP}~{iS}; Entity EdgesOf[ All ]; }
        EndIf
      }
      SubSpace {
        { Name a_ss; NameOfBasisFunction {s_n_s}; }
      }
    EndIf
  }
 }
EndIf
EndFor


Formulation {
  {
    Append;
    Name MagDyn_a~{iP}; Type FemEquation;

    Quantity {
      { Name a_ss; Type Local; NameOfSpace Hcurl_a~{iP} [a_ss]; }
      //+++ :nbP after...
      For jP In {1:iP-1}
        { Name a~{jP}; Type Local; NameOfSpace Hcurl_a~{jP}; }
        { Name a_ss~{jP}; Type Local; NameOfSpace Hcurl_a~{jP} [a_ss]; }
      EndFor

      For iS In {1:Nb_Source~{iP}}
        If (Flag_Projection~{iP}~{iS})
          { Name a_proj~{iS}; Type Local;
            NameOfSpace Hcurl_a_Proj~{iP}~{iS}; }
          If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG_WEAK)
            { Name a_ss_proj~{iS}; Type Local;
              NameOfSpace Hcurl_a_Proj~{iP}~{iS} [a_ss]; }
          EndIf
        EndIf
      EndFor
    }

    Equation {

      For iS In {1:Nb_Source~{iP}}

        If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
          If (!Flag_Projection~{iP}~{iS})
           For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
            iQ = Num_Source~{iP}~{iS}(i_SubSource-1);

            Galerkin { [ (nu~{iP}[]-nu~{Last_Source~{iP}~{iS}}[]) * {d a~{iQ}} , {d a} ];
                       In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

            Galerkin { DtDof [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {a~{iQ}} , {a} ];
                         In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            /*
            Galerkin { [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {ur~{iQ}} / CoefGeos~{iP}[] , {a} ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            */
            Galerkin { DtDof [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {a~{iQ}} , {ur} ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            /*
            Galerkin { [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {ur~{iQ}} / CoefGeos~{iP}[] , {ur} ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            */
           EndFor

          Else

            Galerkin { [ (nu~{iP}[]-nu~{Last_Source~{iP}~{iS}}[]) * {d a_proj~{iS}} , {d a} ];
                       In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

            Galerkin { DtDof [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {a_proj~{iS}} , {a} ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            /*
            Galerkin { [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {ur~{iQ}} / CoefGeos~{iP}[] , {a} ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            */
            Galerkin { DtDof [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {a_proj~{iS}} , {ur} ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            /*
            Galerkin { [ (sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * {ur~{iQ}} / CoefGeos~{iP}[] , {ur} ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
            */

          EndIf
        EndIf

        If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_WEAK)
          If (!Flag_Projection~{iP}~{iS})
           For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
            iQ = Num_Source~{iP}~{iS}(i_SubSource-1);

            Galerkin { [ Sign_Source~{iP}~{iS} * nu~{Last_Source~{iP}~{iS}}[] * {d a~{iQ}} , {d a_ss} ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

            Galerkin { DtDof[ Sign_Source~{iP}~{iS} * sigma~{Last_Source~{iP}~{iS}}[] * {d a~{iQ}} , {d a_ss} ];
                       In DomainC_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
           EndFor

          Else

            Galerkin { [ Sign_Source~{iP}~{iS} * nu~{Last_Source~{iP}~{iS}}[] * {d a_proj~{iS}} , {d a_ss} ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

            Galerkin { DtDof[ Sign_Source~{iP}~{iS} * sigma~{Last_Source~{iP}~{iS}}[] * {d a_proj~{iS}} , {d a_ss} ];
                       In DomainC_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
          EndIf
        EndIf

        If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
          If (!Flag_Projection~{iP}~{iS})
           For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
            iQ = Num_Source~{iP}~{iS}(i_SubSource-1);

            Galerkin { [ -Sign_Source~{iP}~{iS} * nu~{iP}[] * {d a_ss~{iQ}} , {d a} ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

            Galerkin { DtDof [ -Sign_Source~{iP}~{iS} * sigma~{iP}[] * {a_ss~{iQ}} , {a} ];
                       In DomainC_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
           EndFor

          Else

            Galerkin { [ -Sign_Source~{iP}~{iS} * nu~{iP}[] * {d a_ss_proj~{iS}} , {d a} ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

            Galerkin { DtDof [ -Sign_Source~{iP}~{iS} * sigma~{iP}[] * {a_ss_proj~{iS}} , {a} ];
                       In DomainC_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

          EndIf

        EndIf
      EndFor

    }
  }
}


//
PostProcessing {
  {
    Append;
    Name MagDyn_a~{iP}; NameOfFormulation MagDyn_a~{iP};

    PostQuantity {

      { Name az;
        Value {
          For iS In {1:Nb_Source~{iP}}
            If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
                Term { [ -Sign_Source~{iP}~{iS} * CompZ[{a_ss~{iQ}}] ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; }
               EndFor
              Else
                Term { [ -Sign_Source~{iP}~{iS} * CompZ[{a_ss_proj~{iS}}] ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; }
              EndIf
            EndIf
          EndFor
        }
      }

      { Name b;
        Value {
          For iS In {1:Nb_Source~{iP}}
            If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
                Term { [ -Sign_Source~{iP}~{iS} * {d a_ss~{iQ}} ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; }
               EndFor
              Else
                Term { [ -Sign_Source~{iP}~{iS} * {d a_ss_proj~{iS}} ];
                       In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; }
              EndIf
            EndIf
          EndFor
        }
      }
      // TODO: Not to be defined, general definition {d a} will be applied, with {a} already extended

      { Name j;
        Value {
          For iS In {1:Nb_Source~{iP}}
            If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
                Term { [ -(sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * Dt[{a~{iQ}}] ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; }
               EndFor
              Else
                Term { [ -(sigma~{iP}[]-sigma~{Last_Source~{iP}~{iS}}[]) * Dt[{a_proj~{iS}}] ];
                       In DomainC_VS~{iP}~{iS}; Jacobian Vol~{iP}; }
              EndIf

            ElseIf (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
                Term { [ Sign_Source~{iP}~{iS} * sigma~{iP}[] * Dt[{a_ss~{iQ}}] ];
                       In DomainC_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; }
               EndFor
              Else
                Term { [ Sign_Source~{iP}~{iS} * sigma~{iP}[] * Dt[{a_ss_proj~{iS}}] ];
                       In DomainC_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; }
              EndIf
            EndIf
          EndFor
        }
      }

      //+++ TODO: to generalize (/ I = 40...)
      { Name Flux_Change;
        Value {

          For iS In {1:Nb_Source~{iP}}
            If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
	        Integral {
                  Type Global;
                  [ (nu~{iP}[]-nu~{Last_Source~{iP}~{iS}}[]) * {d a~{iQ}}
                    * ({d a~{iQ}} + {d a}) /40 ];
                  In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
               EndFor
              Else
	        Integral {
                  Type Global;
                  [ (nu~{iP}[]-nu~{Last_Source~{iP}~{iS}}[]) * {d a_proj~{iS}}
                    * ({d a_proj~{iS}} + {d a}) /40 ];
                  In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
              EndIf
            EndIf
          EndFor

	}
      }


      //+++
      DefineConstant[ val_I_prov_ = 1 ];

      //+++ TODO: to generalize (/ I = 40...)
      { Name Voltage_Change;
        Value {

          For iS In {1:Nb_Source~{iP}}
            If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
	        Integral {
                  Type Global;
                  [ (nu~{iP}[]-nu~{Last_Source~{iP}~{iS}}[]) * Dt[{d a~{iQ}}]
                    * ({d a~{iQ}} + {d a}) /val_I_prov_ ];
                  In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
               EndFor
              Else
	        Integral {
                  Type Global;
                  [ (nu~{iP}[]-nu~{Last_Source~{iP}~{iS}}[]) * Dt[{d a_proj~{iS}}]
                    * ({d a_proj~{iS}} + {d a}) /val_I_prov_ ];
                  In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
              EndIf

            ElseIf (Type_Source~{iP}~{iS} & SOURCE_SURFACE_WEAK &&
                    Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
	        Integral {
                  Type Global;
                  // +/- ( (nu_1 curl a_1, curl a_2S)_TL - (nu_2 curl a_2, curl a_1S)_TL) )
                  [ Sign_Source~{iP}~{iS} *
                    (  nu~{Last_Source~{iP}~{iS}}[] * Dt[{d a~{iQ}}] * ({d a_ss}-Sign_Source~{iP}~{iS}*{d a_ss~{iQ}})
                     - nu~{iP}[] * Dt[({d a}-Sign_Source~{iP}~{iS}*{d a_ss~{iQ}})] * {d a_ss~{iQ}} ) /val_I_prov_ ];
                  In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
               EndFor
              Else
	        Integral {
                  Type Global;
                  [ Sign_Source~{iP}~{iS} *
                    (  nu~{Last_Source~{iP}~{iS}}[] * Dt[{d a_proj~{iS}}] * ({d a_ss}-Sign_Source~{iP}~{iS}*{d a_ss_proj~{iS}})
                     - nu~{iP}[] * Dt[({d a}-Sign_Source~{iP}~{iS}*{d a_ss_proj~{iS}})] * {d a_ss_proj~{iS}} ) /val_I_prov_ ];
                  In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
              EndIf

            ElseIf (!(Type_Source~{iP}~{iS} & SOURCE_SURFACE_WEAK) &&
                    Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
	        Integral {
                  Type Global;
                  // +/- ( - (nu_2 curl a_2, curl a_1S)_TL) )
                  [ Sign_Source~{iP}~{iS} *
                    (- nu~{iP}[] * Dt[({d a}-Sign_Source~{iP}~{iS}*{d a_ss~{iQ}})] * {d a_ss~{iQ}} ) /val_I_prov_ ];
                  In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
               EndFor
              Else
	        Integral {
                  Type Global;
                  [ Sign_Source~{iP}~{iS} *
                    (- nu~{iP}[] * Dt[({d a}-Sign_Source~{iP}~{iS}*{d a_ss_proj~{iS}})] * {d a_ss_proj~{iS}} ) /val_I_prov_ ];
                  In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
              EndIf

            ElseIf (Type_Source~{iP}~{iS} & SOURCE_SURFACE_WEAK &&
                    !(Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG))
              If (!Flag_Projection~{iP}~{iS})
               For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
                iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
	        Integral {
                  Type Global;
                  // +/- ( (nu_1 curl a_1, curl a_2S)_TL - (nu_2 curl a_2, curl a_1S)_TL) )
                  [ Sign_Source~{iP}~{iS} *
                    (  nu~{Last_Source~{iP}~{iS}}[] * Dt[{d a~{iQ}}] * ({d a_ss})
                     - nu~{iP}[] * Dt[({d a})] * {d a_ss~{iQ}} ) /val_I_prov_ ];
                  In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
               EndFor
              Else
	        Integral {
                  Type Global;
                  [ Sign_Source~{iP}~{iS} *
                    (  nu~{Last_Source~{iP}~{iS}}[] * Dt[{d a_proj~{iS}}] * ({d a_ss})
                     - nu~{iP}[] * Dt[({d a})] * {d a_ss_proj~{iS}} ) /val_I_prov_ ];
                  In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
                }
              EndIf

            EndIf
          EndFor

	}
      }

      //+++ Correct Emag to be defined: how?

    }
  }
}




//
// PROJECTION
For iS In {1:Nb_Source~{iP}}
If (Flag_Projection~{iP}~{iS})

If (!Exists(F_Proj_XYZ~{iP}~{iS}[]))
  Function {
    F_Proj_XYZ~{iP}~{iS}[] = XYZ[];
  }
EndIf


Formulation {

  { Name Mag_a_Proj~{iP}~{iS}; Type FemEquation;

    Quantity {
      { Name a_proj; Type Local; NameOfSpace Hcurl_a_Proj~{iP}~{iS}; }

        For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
          iQ = Num_Source~{iP}~{iS}(i_SubSource-1);    
          { Name a~{iQ}; Type Local; NameOfSpace Hcurl_a~{iQ};
	    IndexOfSystem iQ-1; }
        EndFor
    }

    Equation {

      If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)

        Galerkin { [ Dof{/*d*/ a_proj} , {/*d*/ a_proj} ];
                   In Domain_VS~{iP}~{iS};
		   Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

        For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
          iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
          Galerkin { [ - {/*d*/ a~{iQ}} [F_Proj_XYZ~{iP}~{iS}[], Dim_Pro~{iQ}] , {/*d*/ a_proj} ];
                     In Domain_VS~{iP}~{iS};
		     Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
        EndFor


      ElseIf (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG_WEAK)

        Galerkin { [ Dof{/*d*/ a_proj} , {/*d*/ a_proj} ];
                   In Domain_SS_TL~{iP}~{iS};
		   Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

        For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
          iQ = Num_Source~{iP}~{iS}(i_SubSource-1);
          Galerkin { [ - {/*d*/ a~{iQ}} [F_Proj_XYZ~{iP}~{iS}[], Dim_Pro~{iQ}] , {/*d*/ a_proj} ];
                     In Domain_SS_TL~{iP}~{iS};
                     Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
        EndFor

      EndIf
    }
  }
}


PostProcessing {
  { Name Mag_a_Proj~{iP}~{iS}; NameOfFormulation Mag_a_Proj~{iP}~{iS};
    Quantity {
     If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
      { Name a_proj; Value {Local { [ {a_proj} ]; In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; } } }
      { Name az_proj; Value {Local { [ CompZ[{a_proj}] ]; In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; } } }
      { Name b_proj; Value { Local { [ {d a_proj} ]; In Domain_VS~{iP}~{iS}; Jacobian Vol~{iP}; } } }
     EndIf

     If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG_WEAK)
      { Name a_proj; Value {Local { [ {a_proj} ]; In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; } } }
      { Name az_proj; Value {Local { [ CompZ[{a_proj}] ]; In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; } } }
      { Name b_proj; Value { Local { [ {d a_proj} ]; In Domain_SS_TL~{iP}~{iS}; Jacobian Vol~{iP}; } } }
     EndIf
    }
  }
}


EndIf
EndFor

Return



/////
Macro Lib_MagDyn_av_SP_Global

Printf(StrCat["Call ", BaseFileName, "_Global", " (iP=%g)"], iP);

flag_total_solution = 0;

If (flag_total_solution)

// Total solution
Group {
  DefineGroup[ Domain ];

  For i In {1:nbP}
    Domain+= Region[{Domain~{iP}}];
  EndFor
}

FunctionSpace {
  {
    Name Hcurl_a_total; Type Form1P;
    BasisFunction {
      {
        Name s_n; NameOfCoef a_n; Function BF_PerpendicularEdge;
        Support Domain; Entity NodesOf[All];
      }
    }
    Constraint {
      { NameOfCoef a_n;
        EntityType NodesOf; NameOfConstraint MagneticVectorPotential~{1}~{2}; }
    }
  }
}

Formulation {
  {
    Name Mag_a_total; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_total; }
      For iP In {1:nbP}
        { Name a~{iP}; Type Local; NameOfSpace Hcurl_a~{iP}; }
      EndFor
    }
    Equation {
      Galerkin { [ Dof{d a} , {d a} ];
                 In Domain; Jacobian Vol~{1}; Integration Gauss_v~{1}; }
      For iP In {1:nbP}
        Galerkin { [ - {d a~{iP}} , {d a} ];
                   In Domain; Jacobian Vol~{1}; Integration Gauss_v~{1}; }
      EndFor
    }
  }
}

PostProcessing {
  { Name Mag_a_total; NameOfFormulation Mag_a_total;
    PostQuantity {
      { Name az; Value { Term { [ CompZ[{a}] ]; In Domain; Jacobian Vol~{1}; } } }
      { Name b; Value { Term { [ {d a} ]; In Domain; Jacobian Vol~{1}; } } }
    }
  }
}

PostOperation Map_a_total UsingPost Mag_a_total {
  Print[ az, OnElementsOf Domain, File StrCat[name_gene, "_a.pos"]];
  Print[ b, OnElementsOf Domain, File StrCat[name_gene, "_b.pos"]];
}

DefineConstant[ Freq = 50. ];

EndIf

// Resolution of all SPs
Resolution {
  { Name MagDyn_a_SP;
    System {
      For iP In {1:nbP}
       { Name Sys~{iP}; NameOfFormulation MagDyn_a~{iP};
         NameOfMesh name_mesh~{iP};
         Type ComplexValue; Frequency Freq~{iP};
       }
      EndFor

      For iP In {1:nbP}
        For iS In {1:Nb_Source~{iP}}
          If (Flag_Projection~{iP}~{iS})
            { Name Sys_Proj~{iP}~{iS};
              NameOfFormulation Mag_a_Proj~{iP}~{iS};
              NameOfMesh name_mesh~{iP};
              For iQ In {1:nbP}
                OriginSystem Sys~{iQ};
              EndFor
              Type ComplexValue; Frequency Freq~{iP};
            }
         EndIf
       EndFor
     EndFor

     If (flag_total_solution)
       { Name Sys_total; NameOfFormulation Mag_a_total;
         Type ComplexValue; Frequency Freq; }
     EndIf
    }
    Operation {
      CreateDir[ResDir];


      For iP In {1:nbP}

        For iS In {1:Nb_Source~{iP}}
         If (Flag_Projection~{iP}~{iS})
          If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
	   If (NbrRegions[Domain_VS~{iP}])
	    Generate[Sys_Proj~{iP}~{iS}];
	    Solve[Sys_Proj~{iP}~{iS}];
            SaveSolution[Sys_Proj~{iP}~{iS}];
	   EndIf
          EndIf
          If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG_WEAK)
	   If (NbrRegions[Domain_SS~{iP}~{iS}])
	    Generate[Sys_Proj~{iP}~{iS}];
	    Solve[Sys_Proj~{iP}~{iS}];
	    SaveSolution[Sys_Proj~{iP}~{iS}];
	   EndIf
          EndIf
         EndIf

        EndFor

        Generate[Sys~{iP}]; Solve[Sys~{iP}]; SaveSolution[Sys~{iP}];

      EndFor


      If (flag_total_solution)
        Generate[Sys_total]; Solve[Sys_total]; SaveSolution[Sys_total];
        PostOperation [Map_a_total];
      EndIf
    }
  }
}

Return



//+++ GENERAL MACRO
Macro Def_SP
// IN: i_Dim, ...

iP = newSP;

// Reads quadruplets in data_DTSC~{iP}() and fills type_model_r, type_source_r, type_constraint_r
region_changed_ = 0; flag_region_changed_multiple_ = 0;
For i_dom_ In {0:#data_DTSC~{iP}()/4-1}
  r_ = data_DTSC~{iP}(i_dom_*4);
  type_model_r~{r_}  = data_DTSC~{iP}(i_dom_*4+1);
  type_source_r~{r_} = data_DTSC~{iP}(i_dom_*4+2);
  type_constraint_r~{r_} = data_DTSC~{iP}(i_dom_*4+3);
  If (GetForced[SOURCE_FOR~{type_source_r~{r_}}])
    If (!region_changed_)
      region_changed_ = r_;
    Else
      flag_region_changed_multiple_ = 1;
    EndIf
  EndIf
EndFor

If (!region_changed_)
  Nb_Source~{iP} = 0;
ElseIf (!flag_region_changed_multiple_ && !Exists(region_changed~{iP}))
  Nb_Source~{iP} = 1;
  t_r_source_~{iP}() = { type_source_r~{region_changed_} };
  t_p_source_~{iP}() = { SOURCE_FOR~{type_source_r~{region_changed_}} };
Else
  Nb_Source~{newSP} = #region_changed~{iP}();
  t_r_source_~{iP}()={}; // type of region source
  t_p_source_~{iP}()={}; // type of problem source
  For iS In {1:Nb_Source~{iP}}
    t_r_source_~{iP}() += type_source_r~{region_changed~{iP}(iS-1)};
    t_p_source_~{iP}() += SOURCE_FOR~{type_source_r~{region_changed~{iP}(iS-1)}};
  EndFor
EndIf

// Fix type_model_r to 0 for unused Physical Regions
For r_ In {1:newr-1}
  If (t_Region~{r_} == T_DEF_REGION_PHYS && !Exists(type_model_r~{r_}))
    type_model_r~{r_} = 0; type_source_r~{r_} = 0; type_constraint_r~{r_} = 0;
  EndIf
EndFor


DefineConstant[
  name_mesh_unique = Str["default.msh"],
  name_mesh~{iP} = Str[name_mesh_unique]
];
REF_ = DIM~{i_Dim};

// Everything is now ready to define Group, Function, Constraint
// (Macro to be written in the data file)
Call Def_Group_Function_Constraint;


// Possible SP source(s)

For iS In {1:Nb_Source~{iP}}

If (!Exists(Num_Source~{iP}~{iS}))
  Num_Source~{iP}~{iS}() = {iP-1};
EndIf
Type_Source~{iP}~{iS} = t_p_source_~{iP}(iS-1);
// The previous SP (iP-1) gives the source, of adequate type, that could be gathered with other possible sources of same type, all in the list Num_Source~{iP}~{iS}()
//+++ (to be generalized to something else than iP-1 for other sequences)

Group {
  DefineConstant[source_region~{iP}~{iS}()={}];

  If (t_p_source_~{iP}(iS-1) == SOURCE_VOLUME)
    // The names of the regions are automatically built (e.g., CORE gives Core~{iP})
    /*
      Example: source_region CORE -> name_Region~{.} gives string 'Core'
      -> S2N[.] transform the string to a name -> followed by ~{iP}
    */
    For i_rc In {0:#source_region~{iP}~{iS}()-1}
      Domain_VS~{iP}~{iS} +=
        Region[{S2N[name_Region~{source_region~{iP}~{iS}(i_rc)}]~{iP}}];
        If (type_model_r~{source_region~{iP}~{iS}(i_rc)} == T_MODEL_MAG_ELE)
        DomainC_VS~{iP}~{iS} +=
          Region[{S2N[name_Region~{source_region~{iP}~{iS}(i_rc)}]~{iP}}];
      EndIf
    EndFor

  Else
    DefineConstant[source_surface~{iP}~{iS}()={}];

    For i_rc In {0:#source_region~{iP}~{iS}()-1}
      Domain_SS~{iP}~{iS} +=
        Region[{S2N[name_Region~{source_region~{iP}~{iS}(i_rc)}]~{iP}}];
      If (type_model_r~{source_region~{iP}~{iS}(i_rc)} == T_MODEL_MAG_ELE)
        DomainC_SS~{iP}~{iS} +=
          Region[{S2N[name_Region~{source_region~{iP}~{iS}(i_rc)}]~{iP}}];
      EndIf
    EndFor
    For i_rc In {0:#source_surface~{iP}~{iS}()-1}
      Surface_SS~{iP}~{iS} += Region[{(REF_+source_surface~{iP}~{iS}(i_rc))}];
    EndFor

    If (t_r_source_~{iP}(iS-1) == T_SOURCE_CHANGE_REGION_VIA_SS)
      Sign_Source~{iP}~{iS} = (flag_source_in_changed_region~{iP}~{iS})? -1 : 1;
    Else
      Sign_Source~{iP}~{iS} = 1;
    EndIf

  EndIf

  Last_Source~{iP}~{iS} = iP-1; //+++ Here: same as Num_Source~{iP}~{iS}(0)
  DefineConstant[ flag_Projection = 0 ];
  Flag_Projection~{iP}~{iS} =
    (t_r_source_~{iP}(iS-1) == T_SOURCE_NEXT_DIMENSION)? 1 : flag_Projection;
}

EndFor

Return


// Define Group and Function needed for previous problems (sources)
/////
Macro Def_Group_Function_ForSources

For iP In {1:nbP}
  For iS In {1:Nb_Source~{iP}}

    For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
      iQ = Num_Source~{iP}~{iS}(i_SubSource-1);

      If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)

      EndIf

      If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_WEAK)
        Group {
        //          SkinDomain_Surf~{iQ} += Region[{Surface_SS~{iP}~{iS}}];
        }
        //+++ e.g., when change from 1D to 2D... but to ADAPT for general cases
        If (Dim_Pro~{iQ} != Dim_Pro~{iP})
          Function {
            If (Exists(F_nu~{iP}~{iS}[]))
              nu~{iQ}[Domain_SS~{iP}~{iS}] = F_nu~{iP}~{iS}[];
              // Same function as nu~{iQ}[Core~{iP}]
              //            sigma~{iQ}[DomainC_SS~{iP}~{iS}] = 0.;
            EndIf
          }
          flag_NoFTinSubSpace_a_ss~{iP} = 0; //++++
        EndIf
      EndIf

      If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
        //+++ To add only once (TODO: change List_Supress for -Region, No because 'Not' is used)
        Group {
          SkinDomain_Surf~{iQ} += Region[{Surface_SS~{iP}~{iS}}];
        }
      EndIf

    EndFor


   //+++ OLD
   If (0)
    If (Type_Source~{iP}~{iS} & SOURCE_VOLUME)
      For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
        iQ = Num_Source~{iP}~{iS}(i_SubSource-1);

        Group {
          // Needed if Domain_VS in mesh!
          //          DomainCC~{iQ} += Region[{Domain_VS~{iP}~{iS}}];
        }
      EndFor

      Function {
        // Used in both cases: Domain_VS in mesh or not
        //++++
        /* Not needed anymore, thanks to type_model_r~{} < 0
        DefineConstant[type_region_added~{iP}=0];
        If (region_changed~{iP} == CORE)
          //          nu~{Last_Source~{iP}~{iS}}[Domain_VS~{iP}~{iS}] = 1/mu0;
        ElseIf (region_changed~{iP} == GAP)
          //          nu~{Last_Source~{iP}~{iS}}[Domain_VS~{iP}~{iS}] = 1/(mur~{CORE}*mu0);
        EndIf
        */
      }
    EndIf

    If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_WEAK)
      For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
        iQ = Num_Source~{iP}~{iS}(i_SubSource-1);

        //+++ e.g., when change from 1D to 2D... but to ADAPT for general cases
        If (Dim_Pro~{iQ} != Dim_Pro~{iP})
          Function {
            If (Exists(F_nu~{iP}~{iS}[]))
              nu~{iQ}[Domain_SS~{iP}~{iS}] = F_nu~{iP}~{iS}[];
              // Same function as nu~{iQ}[Core~{iP}]
              //            sigma~{iQ}[DomainC_SS~{iP}~{iS}] = 0.;
            EndIf
          }
        EndIf
      EndFor

    EndIf

    If (Type_Source~{iP}~{iS} & SOURCE_SURFACE_STRONG)
      For i_SubSource In {1:#Num_Source~{iP}~{iS}()}
        iQ = Num_Source~{iP}~{iS}(i_SubSource-1);

        Group {
          // Needed if Domain_SS in mesh!
          //          DomainCC~{iQ} += Region[{Domain_SS~{iP}~{iS}}];

          //+++ Could be defined only in some special cases (when no IFT?)
          //+++ (useful only when no projection)
          SkinDomain_Surf~{iQ} += Region[{Surface_SS~{iP}~{iS}}];
        }

        Function {
          // Used in both cases: Domain_SS in mesh or not
          // Used also when SOURCE_SURFACE_WEAK
          //          nu~{iQ}[Domain_SS~{iP}~{iS}] = 1/mu0;
        }
      EndFor
    EndIf
   EndIf

  EndFor
EndFor

Return
