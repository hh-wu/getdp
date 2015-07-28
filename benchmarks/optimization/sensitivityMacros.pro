/* System resolution macros */
Macro SolvePrimalSystem
  Printf["Compute state variable"];
  If(Flag_topopt)
    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
  EndIf
  //SaveMesh[A,#{MB,Rotor_Airgap,Stator_Airgap},"mb.msh"];
  InitSolution[A] ;
  If(!Flag_NL)
    Generate[A];Solve[A] ;
  EndIf
  If(Flag_NL)
    IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
      GenerateJac[A] ; SolveJac[A] ; }
  EndIf 
  SaveSolution[A];
  PostOperation[Get_PrimalSystem_Func]; 
  PostOperation[Get_PrimalSystem]; 
Return

Macro SolveAdjointSystem
  Printf["Compute adjoint variable"];
  ReadSolution[A]; //Load state variable 
  If(Flag_topopt)
    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
  EndIf
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];//FIXME
  // solve the adjoint problem for a given performance function
  InitSolution[B]; Generate[B]; Solve[B];
  SaveSolution[A]; SaveSolution[B]; 
  PostOperation[SolveAdjointSystem];
Return

Macro SolveDirectSystem
  Printf["Compute derivative of state variable"];
  ReadSolution[A]; //Load state variable (potential vector)
  GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  //Solve direct problem for a given velocity field (i.e. design variable)
  InitSolution[C]; Generate[C]; Solve[C]; SaveSolution[A];SaveSolution[C];
  PostOperation[SolveDirectSystem];
Return

/* sensitivity analysis macros */

Macro GetTopOptAdjointSens
  Printf["Compute derivative (adjoint, fixed domain) --"];
  ReadSolution[A];ReadSolution[B];//A and Lambda   
  GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
  PostOperation[GetTopOptAdjointSens];
Return

Macro GetShapeOptAdjointSens
  Printf["Compute derivative (adjoint, variable domain) --"];
  ReadSolution[A];ReadSolution[B];//A and lambda
  GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  If(Flag_SysType == ELAST2D)
    GmshRead[StrCat[ResDir,"u.pos"], STATE_FIELD];
    GmshRead[StrCat[ResDir,"lambda.pos"], ADJOINT_FIELD];
  EndIf
  PostOperation[GetShapeOptAdjointSens];
Return

Macro GetSemiAdjointSens
  Printf["Compute Semi-Analytic quantities (adjoint) --"];
  // grandeurs sauvées à la bonne position angulaire du rotor
  If(Flag_topopt)
    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
  EndIf
  ReadSolution[A];ReadSolution[B]; // load A and Lambda
  PostOperation[GetSemiAdjointSens]; // Compute Lambda*K*A and Lambda*g
  PostOperation[Get_PrimalSystem_Func]; 
Return

Macro GetShapeOptDirectSens
  Printf["Compute derivative (direct, variable domain) "];
  ReadSolution[A];ReadSolution[C];//A and deriv_A
  GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
  PostOperation[GetShapeOptDirectSens];
Return

/* sensitivity filtering macros */

Macro FilterSens
  Printf["Filter derivative "];
  GmshRead[StrCat[ResDir,"Sensitivity_DesVar.pos"], SENS_FIELD]; 
  Generate[D]; Solve[D]; SaveSolution[D];
  PostOperation[FilterSens];
Return












