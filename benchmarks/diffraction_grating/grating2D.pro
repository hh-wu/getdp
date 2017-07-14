////////////////////////////////
// Author : Guillaume Demesy  //
////////////////////////////////

Include "grating2D_data.geo";

Include "grating2D_materials.pro";
myDir = "run_results/";
DefineConstant[
	       lambda0        = {lambda_min , Min lambda_min, Max lambda_max, Step (lambda_max-lambda_min)/(nb_lambdas-1), Name StrCat[pp2, "0wavelength [nm]"] , Loop 1, Highlight Str[colorpp2],Graph "200000200020"}
	       ];
lambda0    = lambda0    * nm;
lambda_min = lambda_min * nm;
lambda_max = lambda_max * nm;
A     	   = 1.;
nb_orders  = nb_orders+1;
 
Group {
  // Boundaries
  SurfBlochLeft   = Region[SURF_BLOCH_X_LEFT];
  SurfBlochRight  = Region[SURF_BLOCH_X_RIGHT];
  SurfCutSubs1    = Region[SURF_INTEG_SUB1];
  SurfCutSuper1   = Region[SURF_INTEG_SUP1];
  SurfCutSubs2    = Region[SURF_INTEG_SUB2];
  SurfCutSuper2   = Region[SURF_INTEG_SUP2];

  // Domains
  pmlbot          = Region[PMLBOT];
  sub             = Region[{SUB,SURF_INTEG_SUB1,SURF_INTEG_SUB2}];
  layer_dep       = Region[LAYERDEP];
  rod_out         = Region[RODOUT];
  For i In {0:N_rods-1:1}
  rod~{i} = Region[{ROD~{i}}];
  rods   += Region[{ROD~{i}}];
  EndFor
    layer_cov       = Region[LAYERCOV];
  sup             = Region[{SUP,SURF_INTEG_SUP1,SURF_INTEG_SUP2}];
  pmltop          = Region[PMLTOP];
  Omega_source    = Region[{layer_dep,rod_out,rods,layer_cov}];
  Omega_nosource  = Region[{pmltop,pmlbot,sup,sub}];
  Omega           = Region[{Omega_source,Omega_nosource}];
  Omega_top       = Region[{layer_dep,rod_out,rods,layer_cov,sup}];
  Omega_bot       = Region[{sub}];
  Omega_pml       = Region[{pmltop,pmlbot}];

  Plot_domain     = Region[{Omega,-pmltop,-pmlbot}];
  Plot_bnd        = Region[SURF_PLOT];
  Print_point     = Region[PRINT_POINT];
}

Function{
  I[] = Complex[0.0,1.0];
  bndCol[Plot_bnd] = Complex[1,1];

  epsr_re_interp_mat_1[]  = InterpolationLinear[$1]{ListAlt[lambdamat_1 ,epsr_mat_re_1 ]};
  epsr_im_interp_mat_1[]  = InterpolationLinear[$1]{ListAlt[lambdamat_1 ,epsr_mat_im_1 ]};
  epsr_re_interp_mat_2[]  = InterpolationLinear[$1]{ListAlt[lambdamat_2 ,epsr_mat_re_2 ]};
  epsr_im_interp_mat_2[]  = InterpolationLinear[$1]{ListAlt[lambdamat_2 ,epsr_mat_im_2 ]};
  epsr_re_interp_mat_3[]  = InterpolationLinear[$1]{ListAlt[lambdamat_3 ,epsr_mat_re_3 ]};
  epsr_im_interp_mat_3[]  = InterpolationLinear[$1]{ListAlt[lambdamat_3 ,epsr_mat_im_3 ]};
  epsr_re_interp_mat_4[]  = InterpolationLinear[$1]{ListAlt[lambdamat_4 ,epsr_mat_re_4 ]};
  epsr_im_interp_mat_4[]  = InterpolationLinear[$1]{ListAlt[lambdamat_4 ,epsr_mat_im_4 ]};
  epsr_re_interp_mat_5[]  = InterpolationLinear[$1]{ListAlt[lambdamat_5 ,epsr_mat_re_5 ]};
  epsr_im_interp_mat_5[]  = InterpolationLinear[$1]{ListAlt[lambdamat_5 ,epsr_mat_im_5 ]};
  epsr_re_interp_mat_6[]  = InterpolationLinear[$1]{ListAlt[lambdamat_6 ,epsr_mat_re_6 ]};
  epsr_im_interp_mat_6[]  = InterpolationLinear[$1]{ListAlt[lambdamat_6 ,epsr_mat_im_6 ]};
  epsr_re_interp_mat_7[]  = InterpolationLinear[$1]{ListAlt[lambdamat_7 ,epsr_mat_re_7 ]};
  epsr_im_interp_mat_7[]  = InterpolationLinear[$1]{ListAlt[lambdamat_7 ,epsr_mat_im_7 ]};
  epsr_re_interp_mat_8[]  = InterpolationLinear[$1]{ListAlt[lambdamat_8 ,epsr_mat_re_8 ]};
  epsr_im_interp_mat_8[]  = InterpolationLinear[$1]{ListAlt[lambdamat_8 ,epsr_mat_im_8 ]};
  epsr_re_interp_mat_9[]  = InterpolationLinear[$1]{ListAlt[lambdamat_9 ,epsr_mat_re_9 ]};
  epsr_im_interp_mat_9[]  = InterpolationLinear[$1]{ListAlt[lambdamat_9 ,epsr_mat_im_9 ]};
  epsr_re_interp_mat_10[] = InterpolationLinear[$1]{ListAlt[lambdamat_10,epsr_mat_re_10]};
  epsr_im_interp_mat_10[] = InterpolationLinear[$1]{ListAlt[lambdamat_10,epsr_mat_im_10]};
  epsr_re_interp_mat_11[] = InterpolationLinear[$1]{ListAlt[lambdamat_11,epsr_mat_re_11]};
  epsr_im_interp_mat_11[] = InterpolationLinear[$1]{ListAlt[lambdamat_11,epsr_mat_im_11]};
  epsr_re_interp_mat_12[] = InterpolationLinear[$1]{ListAlt[lambdamat_12,epsr_mat_re_12]};
  epsr_im_interp_mat_12[] = InterpolationLinear[$1]{ListAlt[lambdamat_12,epsr_mat_im_12]};
  epsr_re_interp_mat_13[] = InterpolationLinear[$1]{ListAlt[lambdamat_13,epsr_mat_re_13]};
  epsr_im_interp_mat_13[] = InterpolationLinear[$1]{ListAlt[lambdamat_13,epsr_mat_im_13]};
  epsr_re_interp_mat_14[] = InterpolationLinear[$1]{ListAlt[lambdamat_14,epsr_mat_re_14]};
  epsr_im_interp_mat_14[] = InterpolationLinear[$1]{ListAlt[lambdamat_14,epsr_mat_im_14]};
  epsr_re_interp_mat_15[] = InterpolationLinear[$1]{ListAlt[lambdamat_15,epsr_mat_re_15]};
  epsr_im_interp_mat_15[] = InterpolationLinear[$1]{ListAlt[lambdamat_15,epsr_mat_im_15]};
  epsr_re_interp_mat_16[] = InterpolationLinear[$1]{ListAlt[lambdamat_16,epsr_mat_re_16]};
  epsr_im_interp_mat_16[] = InterpolationLinear[$1]{ListAlt[lambdamat_16,epsr_mat_im_16]};

  For i In {1:5}
  For j In {1:nb_available_materials}
  If(flag_mat~{i}==j-1)
    epsr_re_dom~{i}[] = epsr_re_interp_mat~{j}[lambda0/nm*1e-9];
  epsr_im_dom~{i}[] = epsr_im_interp_mat~{j}[lambda0/nm*1e-9];
  EndIf
    EndFor
    EndFor
    For k In {0:nb_available_lossless_materials-1}
  If(flag_mat_6==lossless_material_list(k)-1)
    epsr_re_dom_6[] = epsr_re_interp_mat~{lossless_material_list(k)}[lambda0/nm*1e-9];
  epsr_im_dom_6[] = epsr_im_interp_mat~{lossless_material_list(k)}[lambda0/nm*1e-9];
  EndIf
    EndFor

    epsr_sub_re[]       = epsr_re_dom_1[];
  epsr_sub_im[]       = epsr_im_dom_1[];
  epsr_layer_dep_re[] = epsr_re_dom_2[];
  epsr_layer_dep_im[] = epsr_im_dom_2[];
  epsr_rod_out_re[]   = epsr_re_dom_3[];
  epsr_rod_out_im[]   = epsr_im_dom_3[];
  epsr_rods_re[]      = epsr_re_dom_4[];
  epsr_rods_im[]      = epsr_im_dom_4[];
  epsr_layer_cov_re[] = epsr_re_dom_5[];
  epsr_layer_cov_im[] = epsr_im_dom_5[];
  epsr_sup_re[]       = epsr_re_dom_6[];
  epsr_sup_im[]       = epsr_im_dom_6[];
	
  Freq       = cel/lambda0;
  omega0     = 2.*Pi*cel/lambda0;
  k0         = 2.*Pi/lambda0;
  epsr_sup[] = Complex[epsr_sup_re[],epsr_sup_im[]];
  epsr_sub[] = Complex[epsr_sub_re[],epsr_sub_im[]];
  n_sup[]    = (epsr_sup[])^(0.5);
  n_sub[]    = (epsr_sub[])^(0.5);
  k_sup[]    = k0*n_sup[];
  k_sub[]    = k0*n_sub[];
  alpha[]    =  k_sup[]*Sin[theta_deg*deg2rad];
  beta_sup[] =  k_sup[]*Cos[theta_deg*deg2rad];
  beta_sub[] = (k0^2*epsr_sub[]-alpha[]^2)^(0.5);
	
  If (flag_Hparallel==1)
    beta_pol_sup[] = beta_sup[]/epsr_sup[];
  beta_pol_sub[] = beta_sub[]/epsr_sub[];
  Pinc[]         = 0.5*A^2*Sqrt[mu0/(epsilon0*epsr_sup_re[])] * Cos[theta_deg*deg2rad];
  EndIf
    If (flag_Hparallel==0)
    beta_pol_sup[] = beta_sup[];
  beta_pol_sub[] = beta_sub[];
  Pinc[]         =  0.5*A^2*Sqrt[epsilon0*epsr_sup_re[]/mu0] * Cos[theta_deg*deg2rad]; 
  EndIf
    r[]    = (beta_pol_sup[]-beta_pol_sub[])/(beta_pol_sup[]+beta_pol_sub[]);
  t[]    = (2.*beta_pol_sup[])/(beta_pol_sup[]+beta_pol_sub[]);
  deph[] = Complex[ Cos[-alpha[]*d] , Sin[-alpha[]*d]];

  For i In {0:2*nb_orders}
  alpha_orders~{i}[]  = Complex[alpha[]  + 2.*Pi/d*(i-nb_orders),0];
  expialpha_orders~{i}[]= Complex[ Cos[Re[alpha_orders~{i}[]]*X[]] , Sin[Re[alpha_orders~{i}[]]*X[]] ];
  betat_sup~{i}[] = (k_sup[]^2-alpha_orders~{i}[]^2)^(0.5);
  betat_sub~{i}[] = (k_sub[]^2-alpha_orders~{i}[]^2)^(0.5);
  EndFor
  
    a_pml        = 1.;
  b_pml        = 1.;
  sx           = 1.;
  sy[]         = Complex[a_pml,-b_pml]; 
  sz           = 1.;
  PML_Tensor[] = TensorDiag[sz*sy[]/sx,sx*sz/sy[],sx*sy[]/sz];

  epsilonr[sup]           = epsr_sup[] * TensorDiag[1,1,1];
  epsilonr[sub]           = epsr_sub[] * TensorDiag[1,1,1];
  epsilonr[layer_dep]     = Complex[epsr_layer_dep_re[],epsr_layer_dep_im[]] * TensorDiag[1,1,1];
  epsilonr[rod_out]       = Complex[epsr_rod_out_re[],epsr_rod_out_im[]    ] * TensorDiag[1,1,1];
  If (Flag_aniso==0)
    epsilonr[rods]        = Complex[epsr_rods_re[],epsr_rods_im[]] * TensorDiag[1,1,1];
  Else
    epsilonr[rods]        = Tensor[Complex[epsr_custom_anisoXX_re, epsr_custom_anisoXX_im],
				   Complex[epsr_custom_anisoXY_re, epsr_custom_anisoXY_im],
				   0,
				   Complex[epsr_custom_anisoXY_re,-epsr_custom_anisoXX_im],
				   Complex[epsr_custom_anisoYY_re,epsr_custom_anisoYY_im],
				   0,
				   0,
				   0,
				   Complex[epsr_custom_anisoZZ_re,epsr_custom_anisoZZ_im]
				   ];
  EndIf
    epsilonr[layer_cov]       = Complex[epsr_layer_cov_re[],epsr_layer_cov_im[]] * TensorDiag[1,1,1];
  epsilonr[pmltop]          = epsr_sup_re[]*PML_Tensor[];
  epsilonr[pmlbot]          = epsr_sub_re[]*PML_Tensor[]; 
  
  epsilonr_annex[sub]       = epsr_sub[] * TensorDiag[1,1,1];
  epsilonr_annex[sup]       = epsr_sup[] * TensorDiag[1,1,1];
  epsilonr_annex[layer_dep] = epsr_sup[] * TensorDiag[1,1,1];
  epsilonr_annex[rod_out]   = epsr_sup[] * TensorDiag[1,1,1];
  epsilonr_annex[rods]	    = epsr_sup[] * TensorDiag[1,1,1];
  epsilonr_annex[layer_cov]	= epsr_sup[] * TensorDiag[1,1,1];
  epsilonr_annex[pmltop] 		= epsr_sup_re[]*PML_Tensor[];
  epsilonr_annex[pmlbot]    = epsr_sub_re[]*PML_Tensor[];

  mur[pmltop]     = PML_Tensor[]; 	
  mur[pmlbot]     = PML_Tensor[];
  mur[sub]        = TensorDiag[1,1,1];
  mur[sup]        = TensorDiag[1,1,1];
  mur[layer_dep]  = TensorDiag[1,1,1];
  mur[rods]       = TensorDiag[1,1,1];
  mur[rod_out]    = TensorDiag[1,1,1];
  mur[layer_cov]  = TensorDiag[1,1,1];

  ui[pmltop]   	= 0.;
  ui[pmlbot]   	= 0.;
  ui[sup]      	= A*Complex[ Cos[-alpha[]*X[]+beta_sup[]*Y[]] , Sin[-alpha[]*X[]+beta_sup[]*Y[]] ];
  ui[layer_cov] = A*Complex[ Cos[-alpha[]*X[]+beta_sup[]*Y[]] , Sin[-alpha[]*X[]+beta_sup[]*Y[]] ];
  ui[rod_out]   = A*Complex[ Cos[-alpha[]*X[]+beta_sup[]*Y[]] , Sin[-alpha[]*X[]+beta_sup[]*Y[]] ];
  ui[rods]      = A*Complex[ Cos[-alpha[]*X[]+beta_sup[]*Y[]] , Sin[-alpha[]*X[]+beta_sup[]*Y[]] ];
  ui[layer_dep] = A*Complex[ Cos[-alpha[]*X[]+beta_sup[]*Y[]] , Sin[-alpha[]*X[]+beta_sup[]*Y[]] ];
  ui[sub]       = 0.;
	
  ur[pmltop]    = 0.;
  ur[pmlbot]    = 0.;
  ur[sup]       = r[]*Complex[ Cos[-alpha[]*X[]-beta_sup[]*Y[]] , Sin[-alpha[]*X[]-beta_sup[]*Y[]] ];
  ur[layer_dep] = r[]*Complex[ Cos[-alpha[]*X[]-beta_sup[]*Y[]] , Sin[-alpha[]*X[]-beta_sup[]*Y[]] ];
  ur[rod_out]   = r[]*Complex[ Cos[-alpha[]*X[]-beta_sup[]*Y[]] , Sin[-alpha[]*X[]-beta_sup[]*Y[]] ];
  ur[rods]      = r[]*Complex[ Cos[-alpha[]*X[]-beta_sup[]*Y[]] , Sin[-alpha[]*X[]-beta_sup[]*Y[]] ];
  ur[layer_cov] = r[]*Complex[ Cos[-alpha[]*X[]-beta_sup[]*Y[]] , Sin[-alpha[]*X[]-beta_sup[]*Y[]] ];
  ur[sub]       = 0;

  ut[pmltop]    = 0.;
  ut[pmlbot]    = 0.;
  ut[sup]       = 0.;
  ut[layer_dep] = 0.;
  ut[rod_out]   = 0.;
  ut[rods]      = 0.;
  ut[layer_cov] = 0.;
  ut[sub]       = t[]*Complex[ Cos[-alpha[]*X[]+Re[beta_sub[]]*Y[]] , Sin[-alpha[]*X[]+Re[beta_sub[]]*Y[]] ]*Exp[-Im[beta_sub[]]*Y[]];
	
  u1[]          = ui[]+ur[]+ut[];
  u1d[]         = ur[]+ut[];
  
  If (flag_Hparallel==1)
    Exi[]          =   (beta_sup[]*ui[]) / (omega0*epsilon0*CompXX[epsilonr_annex[]]);
  Exr[]          = - (beta_sup[]*ur[]) / (omega0*epsilon0*CompXX[epsilonr_annex[]]);
  Ext[]          =   (beta_sub[]*ut[]) / (omega0*epsilon0*CompXX[epsilonr_annex[]]);
  Eyi[]          = - (  -alpha[]*ui[]) / (omega0*epsilon0*CompXX[epsilonr_annex[]]);
  Eyr[]          = - (  -alpha[]*ur[]) / (omega0*epsilon0*CompXX[epsilonr_annex[]]);
  Eyt[]          = - (  -alpha[]*ut[]) / (omega0*epsilon0*CompXX[epsilonr_annex[]]);
  Ex1[Omega_top] = Exi[]+Exr[];
  Ey1[Omega_top] = Eyi[]+Eyr[];
  Ex1[Omega_bot] = Ext[];
  Ey1[Omega_bot] = Eyt[];
  Ex1[Omega_pml] = 0;
  Ey1[Omega_pml] = 0;
  detepst[]       = CompXX[epsilonr[]]*CompYY[epsilonr[]]-CompXY[epsilonr[]]*Conj[CompYX[epsilonr[]]];
  detepst_annex[] = CompXX[epsilonr_annex[]]*CompYY[epsilonr_annex[]]-CompXY[epsilonr_annex[]]*Conj[CompYX[epsilonr_annex[]]];
  xsi[]           = Transpose[epsilonr[]]/detepst[];
  xsi_annex[]     = Transpose[epsilonr_annex[]]/detepst_annex[];
  chi[]           = CompZZ[mur[]];
  source_xsi_r[]      = (xsi[]-xsi_annex[]) * Vector[alpha[],-beta_sup[],0.] * I[] * ui[];
  source_xsi_i[]      = (xsi[]-xsi_annex[]) * Vector[alpha[], beta_sup[],0.] * I[] * ur[];
  source_chi_r[]      = 0;
  source_chi_i[]      = 0;
  Else
    detmut[]    = CompXX[mur[]]*CompYY[mur[]]-CompXY[mur[]]*Conj[CompYX[mur[]]];
  xsi[]       = Transpose[mur[]]/detmut[];
  chi[]       = CompZZ[epsilonr[]];
  chi_annex[] = CompZZ[epsilonr_annex[]];
  source_xsi_r[] = Vector[0.,0.,0.];
  source_xsi_i[] = Vector[0.,0.,0.];
  source_chi_r[] = k0^2 * (chi[]-chi_annex[]) * ur[];
  source_chi_i[] = k0^2 * (chi[]-chi_annex[]) * ui[];
  EndIf

    }

Constraint {
  {Name Bloch;
    Case {
      { Region SurfBlochRight; Type LinkCplx ; RegionRef SurfBlochLeft;
	Coefficient deph[]; Function Vector[$X-d,$Y,$Z] ;
      }
    }
  }
}

Jacobian {
  { Name JVol ;
    Case { 
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name JSur ;
    Case {
      { Region All ; Jacobian Sur ; }
    }
  }
}

Integration {
  { Name Int_1 ;
    Case { 
      { Type Gauss ;
	Case { 
	  { GeoElement Point    ; NumberOfPoints  1 ; }
	  { GeoElement Line     ; NumberOfPoints  4 ; }
	  { GeoElement Triangle ; NumberOfPoints  12 ; }
	}
      }
    }
  }
}

FunctionSpace {
  { Name Hgrad; Type Form0;
    BasisFunction {
      { Name sn;  NameOfCoef un;  Function BF_Node;    Support Region[Omega]; Entity NodesOf[Omega]; }
      { Name sn2; NameOfCoef un2; Function BF_Node_2E; Support Region[Omega]; Entity EdgesOf[Omega]; }
    }
    Constraint {
      { NameOfCoef un;  EntityType NodesOf ; NameOfConstraint Bloch; }
      { NameOfCoef un2; EntityType EdgesOf ; NameOfConstraint Bloch; }
    }
  }
}

Formulation {
  {Name helmoltz_scalar; Type FemEquation;
    Quantity {
      { Name u2d; Type Local; NameOfSpace Hgrad;}}
    Equation {
      Galerkin { [k0^2*chi[]*Dof{u2d} , {u2d}];
	In Omega; Jacobian JVol; Integration Int_1;  }
      Galerkin { [-xsi[]*Dof{Grad u2d} , {Grad u2d}];     
	In Omega; Jacobian JVol; Integration Int_1; }
      Galerkin { [source_xsi_i[] , {Grad u2d}];
	In Omega; Jacobian JVol; Integration Int_1;  }
      Galerkin { [source_xsi_r[] , {Grad u2d}];
	In Omega; Jacobian JVol; Integration Int_1;  }				
      Galerkin { [source_chi_r[] , {u2d}];
	In Omega; Jacobian JVol; Integration Int_1;  }
      Galerkin { [source_chi_i[] , {u2d}];
	In Omega; Jacobian JVol; Integration Int_1;  }
    }
  }
}

Resolution {
  { Name helmoltz_scalar;
    System {
      { Name S; NameOfFormulation helmoltz_scalar; Type ComplexValue; Frequency Freq;}
    }
    Operation {
      CreateDir[Str[myDir]];
      Printf["%f",lambda0/nm];
      Generate[S] ;
      Solve[S] ;
    }
  }
}

PostProcessing {
  { Name postpro_energy; NameOfFormulation helmoltz_scalar;
    Quantity {
      If (flag_Hparallel==1)
	{ Name debr         ; Value { Local { [ r[]                 ]; In Omega; Jacobian JVol; } } }
      { Name debt         ; Value { Local { [ t[]                 ]; In Omega; Jacobian JVol; } } }
      { Name testtm       ; Value { Local { [ {u2d}               ]; In Omega; Jacobian JVol; } } }
      { Name deb_beta_sub ; Value { Local { [ beta_sub[]          ]; In Omega; Jacobian JVol; } } }
      { Name epsr         ; Value { Local { [ CompZZ[epsilonr[]]  ]; In Omega; Jacobian JVol; } } }
      { Name Hz_diff      ; Value { Local { [ {u2d}+u1d[]         ]; In Omega; Jacobian JVol; } } }
      { Name Hz_tot       ; Value { Local { [ {u2d}+u1[]          ]; In Omega; Jacobian JVol; } } }
      { Name NormHz_tot   ; Value { Local { [ Norm[{u2d}+u1[]]          ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totp1     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 1*-alpha[]*d],Sin[ 1*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totp2     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 2*-alpha[]*d],Sin[ 2*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totp3     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 3*-alpha[]*d],Sin[ 3*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totp4     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 4*-alpha[]*d],Sin[ 4*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totm1     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-1*-alpha[]*d],Sin[-1*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totm2     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-2*-alpha[]*d],Sin[-2*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totm3     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-3*-alpha[]*d],Sin[-3*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Hz_totm4     ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-4*-alpha[]*d],Sin[-4*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name boundary     ; Value { Local { [ bndCol[] ] ; In Plot_bnd ; Jacobian JVol ; } } }
        
      { Name Ex_diff_re; Value { Local { [ Re[Exi[]]         ]; In Omega; Jacobian JVol; } } }
      { Name Ex_diff_im; Value { Local { [ Im[Exi[]]         ]; In Omega; Jacobian JVol; } } }
      { Name Ey_diff_re; Value { Local { [ Re[Eyi[]]         ]; In Omega; Jacobian JVol; } } }
      { Name Ey_diff_im; Value { Local { [ Im[Eyi[]]         ]; In Omega; Jacobian JVol; } } }
      { Name En_tot    ; Value { Local { [ Log10[Sqrt[SquNorm[-CompY[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Exr[]/CompXX[epsilonr[]]+Exi[]/CompXX[epsilonr[]] + Ext[] ] + SquNorm[CompX[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Eyr[]/CompXX[epsilonr[]]+Eyi[]/CompXX[epsilonr[]] + Eyt[]] ] ] ]; In Omega; Jacobian JVol; } } }

      For i In {0:2*nb_orders}
      { Name s_r~{i} ; Value { 
	  Integral{ [ expialpha_orders~{i}[] * ({u2d}+u1d[])/d ] ;
	    In SurfCutSuper1 ; Jacobian JSur ; Integration Int_1 ; } } }
      { Name s_t~{i} ; Value { 
	  Integral{ [ expialpha_orders~{i}[] * ({u2d}+u1d[])/d ] ;
	    In SurfCutSubs1  ; Jacobian JSur ; Integration Int_1 ; } } }
      { Name order_t_angle~{i} ; Value { 
	  Local{ [-Atan2[Re[alpha_orders~{i}[]],Re[betat_sub~{i}[]]]/deg2rad ] ;
	    In Omega; Jacobian JVol; } } }
      { Name order_r_angle~{i} ; Value { 
	  Local{ [ Atan2[Re[alpha_orders~{i}[]],Re[betat_sup~{i}[]]]/deg2rad ] ;
	    In Omega; Jacobian JVol; } } }
      EndFor
        For i In {0:2*nb_orders}
      { Name eff_r~{i} ; Value {
	  Term{ Type Global; [ SquNorm[#i]*betat_sup~{i}[]/beta_sup[] ] ;
	    In SurfCutSuper1 ; } } }
      { Name eff_t~{i} ; Value {
	  Term{ Type Global; [ SquNorm[#(2*nb_orders+1+i)]*(betat_sub~{i}[]/beta_sup[])*(epsr_sup[]/epsr_sub[]) ] ;
	    In SurfCutSubs1 ; } } }
      EndFor
	For i In {0:N_rods-1:1}
      { Name Q_rod~{i}   ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_rods_im[]]        * ( SquNorm[-CompY[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Ex1[]/CompXX[epsilonr[]]*CompXX[epsilonr_annex[]]] + SquNorm[CompX[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Ey1[]/CompYY[epsilonr[]]*CompYY[epsilonr_annex[]]] ) / (Pinc[]*d) ] ; In rod~{i}   ; Integration Int_1 ; Jacobian JVol ; } } }
      EndFor
	{ Name Q_sub         ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_sub_im[]      ]     * ( SquNorm[-CompY[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Ex1[]/CompXX[epsilonr[]]*CompXX[epsilonr_annex[]] ] + SquNorm[CompX[{Grad u2d}]*I[]/(omega0*epsilon0*CompYY[epsilonr[]])+Ey1[]/CompYY[epsilonr[]]*CompYY[epsilonr_annex[]] ] ) / (Pinc[]*d) ] ; In sub         ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_rod_out     ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_rod_out_im[]]     * ( SquNorm[-CompY[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Ex1[]/CompXX[epsilonr[]]*CompXX[epsilonr_annex[]] ] + SquNorm[CompX[{Grad u2d}]*I[]/(omega0*epsilon0*CompYY[epsilonr[]])+Ey1[]/CompYY[epsilonr[]]*CompYY[epsilonr_annex[]] ] ) / (Pinc[]*d) ] ; In rod_out   ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_layer_dep   ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_layer_dep_im[]]     * ( SquNorm[-CompY[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Ex1[]/CompXX[epsilonr[]]*CompXX[epsilonr_annex[]] ] + SquNorm[CompX[{Grad u2d}]*I[]/(omega0*epsilon0*CompYY[epsilonr[]])+Ey1[]/CompYY[epsilonr[]]*CompYY[epsilonr_annex[]] ] ) / (Pinc[]*d) ] ; In layer_dep   ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_layer_cov   ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_layer_cov_im[]]     * ( SquNorm[-CompY[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Ex1[]/CompXX[epsilonr[]]*CompXX[epsilonr_annex[]] ] + SquNorm[CompX[{Grad u2d}]*I[]/(omega0*epsilon0*CompYY[epsilonr[]])+Ey1[]/CompYY[epsilonr[]]*CompYY[epsilonr_annex[]] ] ) / (Pinc[]*d) ] ; In layer_cov   ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_tot         ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[Im[CompZZ[epsilonr[]]]]  * ( SquNorm[-CompY[{Grad u2d}]*I[]/(omega0*epsilon0*CompXX[epsilonr[]])+Ex1[]/CompXX[epsilonr[]]*CompXX[epsilonr_annex[]] ] + SquNorm[CompX[{Grad u2d}]*I[]/(omega0*epsilon0*CompYY[epsilonr[]])+Ey1[]/CompYY[epsilonr[]]*CompYY[epsilonr_annex[]] ] ) / (Pinc[]*d) ] ; In Plot_domain ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name lambda_step   ; Value { Local { [ lambda0/nm ]; In Omega ; Jacobian JVol; } } }
      EndIf
	If (flag_Hparallel==0)
      { Name testte    ; Value { Local { [ {u2d} ]; In Omega; Jacobian JVol; } } }
      { Name epsr      ; Value { Local { [ CompZZ[epsilonr[]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_diff   ; Value { Local { [ {u2d}+u1d[]        ]; In Omega; Jacobian JVol; } } }
      { Name Ez_tot    ; Value { Local { [ {u2d}+u1[]          ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totp1  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 1*-alpha[]*d],Sin[ 1*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totp2  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 2*-alpha[]*d],Sin[ 2*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totp3  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 3*-alpha[]*d],Sin[ 3*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totp4  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[ 4*-alpha[]*d],Sin[ 4*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totm1  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-1*-alpha[]*d],Sin[-1*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totm2  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-2*-alpha[]*d],Sin[-2*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totm3  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-3*-alpha[]*d],Sin[-3*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name Ez_totm4  ; Value { Local { [ ({u2d}+u1[])*Complex[Cos[-4*-alpha[]*d],Sin[-4*-alpha[]*d]] ]; In Omega; Jacobian JVol; } } }
      { Name boundary  ; Value { Local { [ bndCol[] ] ; In Plot_bnd ; Jacobian JVol ; } } }
      { Name u         ; Value { Local { [ {u2d}    ]; In Omega; Jacobian JVol; } } }
				
      // modif effic
      For i In {0:2*nb_orders}
      { Name s_r~{i} ; Value {
	  Integral{ [ expialpha_orders~{i}[] * ({u2d}+u1d[])/d ] ;
	    In SurfCutSuper1 ; Jacobian JSur ; Integration Int_1 ; } } }
      { Name s_t~{i} ; Value { 
	  Integral{ [ expialpha_orders~{i}[] * ({u2d}+u1d[])/d ] ;
	    In SurfCutSubs1  ; Jacobian JSur ; Integration Int_1 ; } } }
      { Name order_t_angle~{i} ; Value { 
	  Local{ [-Atan2[Re[alpha_orders~{i}[]],Re[betat_sub~{i}[]]]/deg2rad ] ;
	    In Omega; Jacobian JVol; } } }
      { Name order_r_angle~{i} ; Value { 
	  Local{ [ Atan2[Re[alpha_orders~{i}[]],Re[betat_sup~{i}[]]]/deg2rad ] ;
	    In Omega; Jacobian JVol; } } }
      EndFor        
        For i In {0:2*nb_orders}
      { Name eff_r~{i} ; Value {
	  Term{ Type Global; [ SquNorm[#i]*betat_sup~{i}[]/beta_sup[] ] ;
	    In SurfCutSuper1 ; } } }
      { Name eff_t~{i} ; Value {
	  Term{ Type Global; [ SquNorm[#(2*nb_orders+1+i)]*(betat_sub~{i}[]/beta_sup[])] ;
	    In SurfCutSubs1 ; } } }
      EndFor
	For i In {0:N_rods-1:1}
      { Name Q_rod~{i}  ; Value { Integral { [0.5 * epsilon0*omega0*Fabs[epsr_rods_im[]]            * (SquNorm[{u2d}+u1[]]) / (Pinc[]*d) ] ; In rod~{i}    ; Integration Int_1 ; Jacobian JVol ; } } }
      EndFor
        { Name Q_sub        ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_sub_im[]]           * (SquNorm[{u2d}+u1[]]) / (Pinc[]*d) ] ; In sub         ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_rod_out    ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_rod_out_im[]]       * (SquNorm[{u2d}+u1[]]) / (Pinc[]*d) ] ; In rod_out   ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_layer_dep  ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_layer_dep_im[]]     * (SquNorm[{u2d}+u1[]]) / (Pinc[]*d) ] ; In layer_dep   ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_layer_cov  ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[epsr_layer_cov_im[]]     * (SquNorm[{u2d}+u1[]]) / (Pinc[]*d) ] ; In layer_cov   ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name Q_tot        ; Value { Integral { [  0.5 * epsilon0*omega0*Fabs[Im[CompXX[epsilonr[]]]]  * (SquNorm[{u2d}+u1[]]) / (Pinc[]*d) ] ; In Plot_domain ; Integration Int_1 ; Jacobian JVol ; } } }
      { Name lambda_step  ; Value { Local    { [ lambda0/nm ]; In Omega ; Jacobian JVol; } } }
      EndIf
	}
  }
}

PostOperation {
  { Name postop_energy; NameOfPostProcessing postpro_energy ;
    Operation {
      If (flag_Hparallel==1)
      Print[ lambda_step, OnPoint{0,0,0}, Format Table, File StrCat[myDir, "temp_lambda_step.txt"], SendToServer "GetDP/Lambda_step" ] ;
      For i In {0:2*nb_orders}
        Print[ s_r~{i}[SurfCutSuper1], OnGlobal, Store i                , Format Table , File > StrCat[myDir, Sprintf("temp_s_r_%g.txt", i-nb_orders)]];
        Print[ s_t~{i}[SurfCutSubs1] , OnGlobal, Store (2*nb_orders+1+i), Format Table , File > StrCat[myDir, Sprintf("temp_s_t_%g.txt", i-nb_orders)]];
      EndFor
      For i In {1:2*nb_orders-1}
        Print[ eff_r~{i}[SurfCutSuper1], OnRegion SurfCutSuper1,Store (4*nb_orders+1+i), Format FrequencyTable, File > StrCat[myDir, Sprintf("efficiency_r_%g.txt", i-nb_orders)]];
        Print[ eff_t~{i}[SurfCutSubs1] , OnRegion SurfCutSubs1 ,Store (6*nb_orders+1+i), Format FrequencyTable, File > StrCat[myDir, Sprintf("efficiency_t_%g.txt", i-nb_orders)]];
        Print[ order_r_angle~{i}     , OnPoint{0,0,0}, Format Table , File > StrCat[myDir, Sprintf("order_r_angle_%g.txt", i-nb_orders)]];
        Print[ order_t_angle~{i}     , OnPoint{0,0,0}, Format Table , File > StrCat[myDir, Sprintf("order_t_angle_%g.txt", i-nb_orders)]];					
      EndFor
      Print[ eff_r~{nb_orders}[SurfCutSuper1], OnRegion SurfCutSuper1, Format Table, SendToServer "GetDP/R0", File StrCat[myDir, "temp_R0.txt"]];
      Print[ eff_t~{nb_orders}[SurfCutSubs1] , OnRegion SurfCutSubs1 , Format Table, SendToServer "GetDP/T0", File StrCat[myDir, "temp_T0.txt"]];
      Print[ Q_tot[Plot_domain]             , OnGlobal  , Format FrequencyTable ,SendToServer "GetDP/total absorption", File > StrCat[myDir, "absorption-Q_tot.txt"]];
      For i In {0:N_rods-1:1}
      Print[ Q_rod~{i}[rod~{i}] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, Sprintf("absorption-Q_rod_%g.txt", i+1) ]];						
      EndFor	
	Print[ Q_sub[sub]         , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_sub.txt"      ]];
      Print[ Q_rod_out[rod_out] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_rod_out.txt"]];
      Print[ Q_layer_dep[layer_dep] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_layer_dep.txt"]];
      Print[ Q_layer_cov[layer_cov] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_layer_cov.txt"]];
      Print[ Hz_tot    , OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_1.pos", lambda0/nm)] , Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm)];
      //         Echo[ Str["For i In {0:2}",
      //                           "  View[i].LineWidth = 4;View[i].ColormapNumber = 15;View[0].AxesFormatX = '%.1f';",
      //                   "EndFor"], File StrCat[myDir,"tmp0.geo"]] ;
      // // View[i].RangeType = 2;View[i].CustomMin=0.;View[i].CustomMax=1.;
      If(multiplot)
	Echo[ Str["For i In {PostProcessing.NbViews-1:0:-1}",
		  "  If(!StrCmp(View[i].Name, 'boundary') || !StrCmp(View[i].Name, 'boundary_Combine'))",
		  "    Delete View[i];",
		  "  EndIf",
		  "EndFor"], File StrCat[myDir,"tmp1.geo"]] ;
      Print [ Hz_totp1, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_2.pos", lambda0/nm)], ChangeOfCoordinates {$X+1*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Hz_totm1, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_3.pos", lambda0/nm)], ChangeOfCoordinates {$X-1*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Hz_totp2, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_4.pos", lambda0/nm)], ChangeOfCoordinates {$X+2*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Hz_totm2, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_5.pos", lambda0/nm)], ChangeOfCoordinates {$X-2*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Hz_totp3, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_6.pos", lambda0/nm)], ChangeOfCoordinates {$X+3*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Hz_totm3, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_7.pos", lambda0/nm)], ChangeOfCoordinates {$X-3*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Hz_totp4, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_8.pos", lambda0/nm)], ChangeOfCoordinates {$X+4*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Hz_totm4, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Hz_tot_lambda%.2fnm_9.pos", lambda0/nm)], ChangeOfCoordinates {$X-4*d,$Y,$Z}, Name Sprintf("Hz_tot_%.2fnm.pos", lambda0/nm) ] ;
      Echo[ "Combine ElementsByViewName;", File StrCat[myDir,"tmp2.geo"]] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary1.pos"], ChangeOfCoordinates {$X+0*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary2.pos"], ChangeOfCoordinates {$X+1*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary3.pos"], ChangeOfCoordinates {$X-1*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary4.pos"], ChangeOfCoordinates {$X+2*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary5.pos"], ChangeOfCoordinates {$X-2*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary6.pos"], ChangeOfCoordinates {$X+3*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary7.pos"], ChangeOfCoordinates {$X-3*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary8.pos"], ChangeOfCoordinates {$X+4*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary9.pos"], ChangeOfCoordinates {$X-4*d,$Y,$Z} ];
      Echo[ "Combine ElementsByViewName;", File StrCat[myDir,"tmp2.geo" ]] ;
      Echo[ Str["Hide {",
		"Point{1,2,7,8,9,10,20,22};",
		"Line{1,7,8,9,10,30,32,34,2,3,4,5,6,12,16,20,24,28};",
		"Surface{36,48};}",
		"Geometry.Color.Lines = {0,0,0};",
		"l=PostProcessing.NbViews-1; View[l].ColorTable={Black}; ",
		"View[l-1].Visible=1; View[l-1].ShowScale=0;",
		"View[l].ShowScale=0; View[l].LineWidth=1.5; View[l].LineType=1;Geometry.LineWidth=0;"],
	    File StrCat[myDir,"tmp3.geo" ]] ;
      EndIf
	EndIf
	If (flag_Hparallel==0)
        // Print [ testte  , OnElementsOf Omega, File "testte.pos"];
        Print[ lambda_step, OnPoint{0,0,0}, Format Table, File StrCat[myDir, "temp_lambda_step.txt"], SendToServer "GetDP/Lambda_step" ] ;
      For i In {0:2*nb_orders}
        Print[ s_r~{i}[SurfCutSuper1], OnGlobal, Store i                , Format Table , File > StrCat[myDir, Sprintf("temp_s_r_%g.txt", i-nb_orders)]];
        Print[ s_t~{i}[SurfCutSubs1] , OnGlobal, Store (2*nb_orders+1+i), Format Table , File > StrCat[myDir, Sprintf("temp_s_t_%g.txt", i-nb_orders)]];
      EndFor
      For i In {1:2*nb_orders-1}
        Print[ eff_r~{i}[SurfCutSuper1], OnRegion SurfCutSuper1,Store (4*nb_orders+1+i), Format FrequencyTable, File > StrCat[myDir, Sprintf("efficiency_r_%g.txt", i-nb_orders)]];
        Print[ eff_t~{i}[SurfCutSubs1] , OnRegion SurfCutSubs1 ,Store (6*nb_orders+1+i), Format FrequencyTable, File > StrCat[myDir, Sprintf("efficiency_t_%g.txt", i-nb_orders)]];
        Print[ order_r_angle~{i}     , OnPoint{0,0,0}, Format Table , File > StrCat[myDir, Sprintf("order_r_angle_%g.txt", i-nb_orders)]];
        Print[ order_t_angle~{i}     , OnPoint{0,0,0}, Format Table , File > StrCat[myDir, Sprintf("order_t_angle_%g.txt", i-nb_orders)]];					
      EndFor
      Print[ eff_r~{nb_orders}[SurfCutSuper1], OnRegion SurfCutSuper1, Format Table, SendToServer "GetDP/R0", File StrCat[myDir, "temp_R0.txt"]];
      Print[ eff_t~{nb_orders}[SurfCutSubs1] , OnRegion SurfCutSubs1 , Format Table, SendToServer "GetDP/T0", File StrCat[myDir, "temp_T0.txt"]];
      Print[ Q_tot[Plot_domain]             , OnGlobal  , Format FrequencyTable ,SendToServer "GetDP/total absorption", File > StrCat[myDir, "absorption-Q_tot.txt"]];
      For i In {0:N_rods-1:1}
      Print[ Q_rod~{i}[rod~{i}] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, Sprintf("absorption-Q_rod_%g.txt", i+1) ]];						
      EndFor
	Print[ Q_sub[sub]             , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_sub.txt"        ] ];
      Print[ Q_rod_out[rod_out] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_rod_out.txt"] ];
      Print[ Q_layer_dep[layer_dep] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_layer_dep.txt"] ];
      Print[ Q_layer_cov[layer_cov] , OnGlobal, Format FrequencyTable, File > StrCat[myDir, "absorption-Q_layer_cov.txt"] ];
      Print [ Ez_tot  , OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_1.pos", lambda0/nm)] , Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm)];
      //         Echo[ Str["For i In {0:2}",
      // 					"	View[i].LineWidth = 4;View[i].ColormapNumber = 15;View[0].AxesFormatX = '%.1f';",
      //                   "EndFor"], File StrCat[myDir,"tmp0.geo"]] ;
      // // View[i].RangeType = 2;View[i].CustomMin =0.;View[i].CustomMax =1.;
      If(multiplot)
	Echo[ Str["For i In {PostProcessing.NbViews-1:0:-1}",
		  "  If(!StrCmp(View[i].Name, 'boundary') || !StrCmp(View[i].Name, 'boundary_Combine'))",
		  "    Delete View[i];",
		  "  EndIf",
		  "EndFor"], File StrCat[myDir,"tmp1.geo"]] ;
      Print [ Ez_totp1, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_2.pos", lambda0/nm)], ChangeOfCoordinates {$X+1*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Ez_totm1, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_3.pos", lambda0/nm)], ChangeOfCoordinates {$X-1*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Ez_totp2, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_4.pos", lambda0/nm)], ChangeOfCoordinates {$X+2*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Ez_totm2, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_5.pos", lambda0/nm)], ChangeOfCoordinates {$X-2*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Ez_totp3, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_6.pos", lambda0/nm)], ChangeOfCoordinates {$X+3*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Ez_totm3, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_7.pos", lambda0/nm)], ChangeOfCoordinates {$X-3*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Ez_totp4, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_8.pos", lambda0/nm)], ChangeOfCoordinates {$X+4*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Print [ Ez_totm4, OnElementsOf Plot_domain, File StrCat[myDir, Sprintf("Ez_tot_lambda%.2fnm_9.pos", lambda0/nm)], ChangeOfCoordinates {$X-4*d,$Y,$Z}, Name Sprintf("Ez_tot_%.2fnm.pos", lambda0/nm) ] ;
      Echo[ "Combine ElementsByViewName;", File StrCat[myDir,"tmp2.geo"]] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary1.pos"], ChangeOfCoordinates {$X+0*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary2.pos"], ChangeOfCoordinates {$X+1*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary3.pos"], ChangeOfCoordinates {$X-1*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary4.pos"], ChangeOfCoordinates {$X+2*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary5.pos"], ChangeOfCoordinates {$X-2*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary6.pos"], ChangeOfCoordinates {$X+3*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary7.pos"], ChangeOfCoordinates {$X-3*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary8.pos"], ChangeOfCoordinates {$X+4*d,$Y,$Z} ] ;
      Print[ boundary, OnElementsOf Plot_bnd, File StrCat[myDir,"boundary9.pos"], ChangeOfCoordinates {$X-4*d,$Y,$Z} ];
      Echo[ "Combine ElementsByViewName;", File StrCat[myDir,"tmp2.geo" ]] ;
      Echo[ Str["Hide {",
		"Point{1,2,7,8,9,10,20,22};",
		"Line{1,7,8,9,10,30,32,34,2,3,4,5,6,12,16,20,24,28};",
		"Surface{36,48};}",
		"Geometry.Color.Lines = {0,0,0};",
		"l=PostProcessing.NbViews-1; View[l].ColorTable={Black}; ",
		"View[l-1].Visible=1; View[l-1].ShowScale=0;",
		"View[l].ShowScale=0; View[l].LineWidth=1.5; View[l].LineType=1;Geometry.LineWidth=0;"],
	    File StrCat[myDir,"tmp3.geo" ]] ;
      EndIf        
      EndIf
	}
  }
}
DefineConstant[
	       R_ = {"helmoltz_scalar", Name "GetDP/1ResolutionChoices", Visible 1},
	       C_ = {"-solve -pos -petsc_prealloc 1000 -ksp_type preonly -pc_type lu -pc_factor_mat_solver_package mumps", Name "GetDP/9ComputeCommand", Visible 1},
	       P_ = {"postop_energy", Name "GetDP/2PostOperationChoices", Visible 1}];
		
If(plotRTgraphs)
DefineConstant[
	       refl_  = {0, Name "GetDP/R0", ReadOnly 1, Graph "02000000", Visible 1},
	       abs_   = {0, Name "GetDP/total absorption", ReadOnly 1, Graph "00000002", Visible 1},
	       trans_ = {0, Name "GetDP/T0", ReadOnly 1, Graph "000000000002", Visible 1}
	       ];
EndIf
