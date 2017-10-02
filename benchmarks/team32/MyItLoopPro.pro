Group{
  DummyR = #54321 ; // dummy group (for being able to use Store's)
}

Function{

  GetItLoopInfo[]=Tensor[ $iter, 
                          $res, 
                          $res/$res0, 
                          $inc, 
                          $relax, 
                          $relaxcount, 
                          $relaxcounttot, 
                          $syscount, 
                          $dnccount];

//--------------------------------------
// M Y . I T L O O P P R O -------------
//--------------------------------------
Macro MyItLoopPro
  Evaluate[$relax=relax_max];

  // Initialized dummy values to start the while loop
  Evaluate[ $res0 = 1e10*Abstol_Mag ,
            $res  = $res0,  
            $inc  = 1e10*Abstoldx_Mag ,
            $sol  = $inc, 
            $iter = 0]; 

  Test[Flag_AdaptRelax==1]{
    CopySolution[A,'x_Prev']; //SET : save solution from the previous converged time step at iter 0
    Evaluate[ $res_Prev=$res,
              $relax_Opt=$relax];   
  }
  {
    Generate[A]; 
  }
  // iterate until convergence
  While[  $res > Abstol_Mag && 
          $res / $res0 > Reltol_Mag &&
          $res / $res0 <= 1 &&
          $inc > Abstoldx_Mag &&
          $inc/$sol > Reltoldx_Mag &&
          $iter < Nb_max_iter ]
  {
    Evaluate[ $iter = $iter + 1 ]; 
    // if adapted relaxation is activated 
    Test[Flag_AdaptRelax==1]
    {
      Call MySolveJac_AdaptRelax;
    }

    // ... otherwise, if adapted relaxation is not activated 
    {
      Solve[A]; 
      Evaluate[ $syscount = $syscount + 1, 
                $relaxcount=1, 
                $relaxcounttot=$relaxcounttot+1 ];
      Generate[A]; GetResidual[A, $res]; 
      // TODO: GetIncrement h_only   
      //       " PostOperation { { h_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} "
    }

    GetNormIncrement[A, $inc]; //Check the new increment
    GetNormSolution[A, $sol]; //Check the new solution
    Print[{$TimeStep, $iter, $res, $res/$res0, $inc, $relax, $relaxcount}, Format
      "*** ts=%05g, it=%03g, abs=%1.5e, rel=%1.5e, dx=%1.5e, relaxopt = %1.3g, relaxcount=%02g ***"];
    PostOperation[PostOpItLoop_a];
  }
Return
//...............................................................

//--------------------------------------------------------
// M Y . S O L V E J A C A D A P T R E L A X 2------------
//--------------------------------------------------------
Macro MySolveJac_AdaptRelax2

  //NB:solution from the previous converged time step at iter 0 is saved in x_Prev at this point
  Evaluate[ $redo=1, 
            $relax=relax_max, 
            $res_Prev=$res, 
            $relaxcount=0];

  /*  get increment dx by solving the system */
  Generate[A];
  Solve[A];
  Evaluate[ $syscount = $syscount + 1];
  CopySolution[A,'x_New']; //SET : save increment dx (found without relaxation $relax=1)
  //TODO: "DX = x_New - x_Prev" 
  // or TODO: CopyIncrement[A,'DX'];

  While[ $relax>relax_min-0.5*relax_step &&
         $redo>0 ]
  // while all relaxation factor have not been tested yet 
  {
    /* new trial solution = x + Frelax * dx */
    // TODO:"x_New = x_Prev + $relax * DX"
    CopySolution['x_New', A]; // RESET: reset new trial solution in the system

    /* calculate residual with trial solution res= b-A(x_New)*x_New*/
    Generate[A];  // regenerate A with new trial solution (x_New) 
    GetResidual[A, $res]; //Check the new residual  
    // TODO: GetIncrement h_only   
    //       " PostOperation { { h_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} "
    Evaluate[ $relaxcount=$relaxcount+1, 
              $relaxcounttot=$relaxcounttot+1 ];

    // compute first residual at step $TimeStep
    Test[$iter==1 && $relax==relax_max]{
      Evaluate[ $res0=$res, 
                $res_Prev=$res, 
                $relax_Opt=$relax ];
      CopySolution[A,'x_Opt']; //SET : save actual solution as the optimal one  
    }        
               
    /* // If one wants to be more verbose
    Print[{$TimeStep, $iter, $res, $res/$res0, $inc, $relax, ($res < $res_Prev ), $relaxcount}, Format
      "ts=%05g, it=%03g, abs=%1.5e, rel=%1.5e, dx=%1.5e, relax = %1.1g, (better? %g), relaxcount=%02g"];
    //*/

    // if the residual has decreased
    Test[ ($res < $res_Prev ) || $relax>relax_max-0.5*relax_step ]{    
      CopySolution[A,'x_Opt']; //SET : save actual solution as the optimal one  'x_New is best'
      Evaluate[$res_Prev=$res,
               $relax_Opt=$relax];                     
    }
    { // otherwise, if the residual has not decreased... 
      // and if you don't want to check All Factors: Break the try loop prematurely
      Test[  TestAllFactors==0 ] { Evaluate[$redo=0]; }
    }
    // try with another relaxation factor ... 
    Evaluate[$relax=$relax-relax_step];
  }
  CopySolution['x_Opt',A]; //RESET : reload optimal solution
  CopySolution[A,'x_Prev']; //SET : save solution from the previous converged iteration              
  Evaluate[$relax=$relax_Opt,
           $res=$res_Prev];
Return
//...............................................................


//--------------------------------------------------------
// M Y . S O L V E J A C A D A P T R E L A X -------------
//--------------------------------------------------------
Macro MySolveJac_AdaptRelax

  Evaluate[ $redo=1, 
            $relax=relax_max, 
            $res_Prev=$res, 
            $relaxcount=0];

  While[ $relax>relax_min-0.5*relax_step &&
         $redo>0 ]
  // while all relaxation factor have not been tested yet 
  {
    CopySolution['x_Prev',A]; //RESET: reload solution from the previous converged iteration
    Generate[A]; // absolutely needed to take the change of $relax into account!
    Solve[A]; 
    Evaluate[ $syscount = $syscount + 1, 
              $relaxcount=$relaxcount+1, 
              $relaxcounttot=$relaxcounttot+1 ];
    Generate[A]; 
    GetResidual[A, $res]; //Check the new residual 

    // compute first residual at step $TimeStep
    Test[$iter==1 && $relax==relax_max]{
      Evaluate[ $res0=$res, 
                $res_Prev=$res, 
                $relax_Opt=$relax ];
      CopySolution[A,'x_Opt']; //SET : save actual solution as the optimal one}  
    }             
               
    /* // If one wants to be more verbose
    Print[{$TimeStep, $iter, $res, $res/$res0, $inc, $relax, ($res < $res_Prev ), $relaxcount}, Format
      "ts=%05g, it=%03g, abs=%1.5e, rel=%1.5e, dx=%1.5e, relax = %1.1g, (better? %g), relaxcount=%02g"];
    //*/

    // if the residual has decreased
    Test[ ($res < $res_Prev ) || $relax>relax_max-0.5*relax_step ]{    
      CopySolution[A,'x_Opt']; //SET : save actual solution as the optimal one
      Evaluate[$res_Prev=$res,
               $relax_Opt=$relax];                     
    }
    { // otherwise, if the residual has not decreased... 
      // and if you don't want to check All Factors: Break the try loop prematurely
      Test[  TestAllFactors==0 ] { Evaluate[$redo=0]; }
    }
    // try with another relaxation factor ... 
    Evaluate[$relax=$relax-relax_step];
  }
  CopySolution['x_Opt',A]; //RESET : reload optimal solution
  CopySolution[A,'x_Prev']; //SET : save solution from the previous converged iteration              
  Evaluate[$relax=$relax_Opt,
           $res=$res_Prev];
Return
//...............................................................
}

// To Print Info about Convergence 
PostProcessing {

If(Flag_3Dmodel==0) 
  { Name MonPostPro_ItLoop_a ; NameOfFormulation MagStaDyn_a_2D ; 
    PostQuantity {
      { Name ItLoop_a ; Value { Term { Type Global; [  GetItLoopInfo[]];  In DummyR ;  } } }
    }
  }
EndIf
If(Flag_3Dmodel==1) 
  { Name MonPostPro_ItLoop_a ; NameOfFormulation MagStaDyn_a_3D ; 
    PostQuantity {
      { Name ItLoop_a ; Value { Term { Type Global; [  GetItLoopInfo[]];  In DummyR ;  } } }
    }
  }
EndIf
}
   
PostOperation {

  { Name PostOpItLoop_a ; NameOfPostProcessing MonPostPro_ItLoop_a ; LastTimeStepOnly ;
    Operation {
      Print[ ItLoop_a, OnRegion DummyR, Format Table, 
              File > StrCat[Dir, StrCat["ItLoopInfo",ExtGnuplot]] ] ;  
    }
  }
}