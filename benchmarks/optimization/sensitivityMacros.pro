/* System resolution macros */
//Macro SolvePrimalSystem
//  Printf["Compute state variable"];
//  If(!StrCmp(Flag_optType,"topology"))
//    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
//  EndIf
//  //SaveMesh[A,#{MB,Rotor_Airgap,Stator_Airgap},"mb.msh"];
//  InitSolution[A] ;
//  If(!Flag_NL)
//    Generate[A];Solve[A] ;
//  EndIf
//  If(Flag_NL)
//    IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
//      GenerateJac[A] ; SolveJac[A] ; }
//  EndIf 
//  SaveSolution[A];
//  PostOperation[Get_PrimalSystem]; 
//  PostOperation[Get_PrimalSystem_Func]; 
//Return

//Macro SolveAdjointSystem
//  Printf["Compute adjoint variable"];
//  ReadSolution[A]; //Load state variable 
//  If(!StrCmp(Flag_optType,"topology"))
//    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
//  EndIf
//  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];//FIXME
//  // solve the adjoint problem for a given performance function
//  InitSolution[B]; Generate[B]; Solve[B];
//  SaveSolution[A]; SaveSolution[B]; 
//  PostOperation[SolveAdjointSystem];
//Return

//Macro SolveDirectSystem
//  Printf["Compute derivative of state variable"];
//  ReadSolution[A]; //Load state variable (potential vector)
//  GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
//  //Solve direct problem for a given velocity field (i.e. design variable)
//  InitSolution[C]; Generate[C]; Solve[C]; SaveSolution[A];SaveSolution[C];
//  PostOperation[SolveDirectSystem];
//Return

/* sensitivity analysis macros */

Macro GetAnalyticSens
  Printf["Compute Analytic Sensitivity"];
  
  // load useful maps
  If(!StrCmp(Flag_optType,"shape"))
    GmshRead[StrCat[ResDir,"velocity.pos"],VELOCITY_FIELD]; 
  EndIf

  // postpro
  PostOperation[GetAnalyticSens];  
Return

Macro GetAdjointSens
  Printf["Compute derivative with adjoint method"];
  // load state variable and adjoint variable
  ReadSolution[A];ReadSolution[B];

  // load useful maps   
  If(!StrCmp(Flag_optType,"topology"))
    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
  EndIf
  If(!StrCmp(Flag_optType,"shape"))
    GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
    If(!StrCmp[Flag_SysType,"LinearElast2D"] ||
       !StrCmp[Flag_SysType,"LinearElast3D"])
      GmshRead[StrCat[ResDir,"u.pos"], STATE_FIELD];
      GmshRead[StrCat[ResDir,"lambda.pos"], ADJOINT_FIELD];
    EndIf
  EndIf
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
  
  // postpro
  If(!Flag_AnalyticSensitivity) // semi-analytic
    PostOperation[GetSemiAdjointSens]; 
    PostOperation[Get_PrimalSystem_Func];
  EndIf
  If(Flag_AnalyticSensitivity && !StrCmp(Flag_optType,"shape")) 
    PostOperation[GetShapeOptAdjointSens];
  EndIf
  If(Flag_AnalyticSensitivity && !StrCmp(Flag_optType,"topology"))
    PostOperation[GetTopOptAdjointSens];
  EndIf
Return

Macro GetDirectSens
  Printf["Compute derivative with direct method"];
  // load state variable and derivative of state variable
  ReadSolution[A];ReadSolution[C];

  // load useful maps   
  If(!StrCmp(Flag_optType,"shape"))
    GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  EndIf
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
  
  // postpro
  If(Flag_AnalyticSensitivity && !StrCmp(Flag_optType,"shape"))
    PostOperation[GetShapeOptDirectSens];
  EndIf
  If(Flag_AnalyticSensitivity && !StrCmp(Flag_optType,"topology"))
    //TODO //PostOperation[GetTopOptDirectSens];
  EndIf
Return


/* sensitivity filtering macros */

Macro FilterTopOpt
  Printf["Filter derivative "];
  GmshRead[StrCat[ResDir,"filterIn.pos"],SOURCE_FILT_FIELD];
  Generate[D]; Solve[D]; SaveSolution[D];
  PostOperation[FilterTopOpt];
  If(!StrCmp[Flag_FilterMethod,"density"])
    Generate[E]; Solve[E]; SaveSolution[E];PostOperation[FilterTopOpt_dXdx];
  EndIf
Return

Macro FilterSens
  Printf["Filter derivative "];
  GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
  GmshRead[StrCat[ResDir,"Sensitivity_DesVar.pos"], SENS_FIELD]; 
  Generate[D]; Solve[D]; SaveSolution[D];PostOperation[FilterTopOpt];
  If(!StrCmp[Flag_FilterMethod,"density"])
    Generate[E]; Solve[E]; SaveSolution[E];PostOperation[FilterTopOpt_dXdx];
  EndIf
Return

//Macro FilterDesignVariables
//  Printf["Filter design variables "];
//  GmshRead[StrCat[ResDir,"designVariable.pos"], SENS_FIELD]; 
//  Generate[D]; Solve[D]; SaveSolution[D];
//  PostOperation[FilterSens];
//Return











