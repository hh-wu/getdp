Macro SolvePrimalSystem
  Printf["--------- Get state variable ---------"];
  If(Flag_topopt)
    GmshRead[StrCat[ResDir,"designVariable.pos"], DES_VAR_FIELD]; 
  EndIf
  InitSolution[A];Generate[A];Solve[A];SaveSolution[A];
  PostOperation[Get_PrimalSystem];
  PostOperation[Get_PrimalSystem_Func]; 
Return

Macro SolveAdjointSystem
  Printf["-- Compute Adjoint Variable --"];
  ReadSolution[A]; //Load state variable 
  If(Flag_topopt)
    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
  EndIf
  // solve the adjoint problem for a given performance function
  InitSolution[B]; Generate[B]; Solve[B];
  SaveSolution[A]; SaveSolution[B]; 
  PostOperation[Get_AdjointSystem];
Return

Macro SolveDirectSystem
  Printf["-- Compute derivative of state Variable (velocity) --"];
  ReadSolution[A]; //Load state variable (potential vector)
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
  GmshRead["res/velocity.pos", VELOCITY_FIELD];
  //Solve direct problem for a given velocity field (i.e. design variable)
  InitSolution[C]; Generate[C]; Solve[C]; SaveSolution[A];SaveSolution[C];
  PostOperation[Get_DirectVarDomSens_lie0];
Return

Macro GetFixDomAdjointSens
  Printf["-- Compute AVM sensitivity analysis (fixed domain) --"];
  ReadSolution[A];ReadSolution[B];//A and Lambda   
  GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
  PostOperation[Get_AvmFixedDomSens];
Return

Macro GetVarDomAdjointSens
  ReadSolution[A];ReadSolution[B];//A and lambda
  GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  PostOperation[Get_AvmVarDomSens_Lie];
Return

Macro GetSemiAdjointSens
  Printf["-- Compute AVM Semi-Analytic quantitys --"];
  // grandeurs sauvées à la bonne position angulaire du rotor
  If(Flag_topopt)
    GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
  EndIf
  ReadSolution[A];ReadSolution[B]; // load A and Lambda
  PostOperation[Get_SemiAnalyticAvmQuantitys]; // Compute Lambda*K*A and Lambda*g
  PostOperation[Get_PrimalSystem_Func]; 
Return

Macro GetVarDomDirectSens
  Printf["-- Compute Direct Sensitivity Analysis --"];
  ReadSolution[A];ReadSolution[C];//A and deriv_A
  GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
  GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
  PostOperation[Get_DirectVarDomSens_lie];
Return

Macro FilterSens
  Printf["-- Filter Sensitivity --"];
  GmshRead[StrCat[ResDir,"Sensitivity_DesVar.pos"], SENS_FIELD]; 
  Generate[D]; Solve[D]; SaveSolution[D];
  PostOperation[Get_FilteredSens];
Return












