// 
// Error = View[0] - View[1] / View[NN]
//
// NN = 0 | 1

NN = 1 ;

INTERPOLATION=1;


n = 1 ;
Plugin(MathEval).Expression0= "v0 - w0";
Plugin(MathEval).TimeStep=-1;
Plugin(MathEval).View=0;
Plugin(MathEval).OtherTimeStep=-1;
Plugin(MathEval).OtherView=1;
Plugin(MathEval).ForceInterpolation=INTERPOLATION;
Plugin(MathEval).PhysicalRegion=-1;
Plugin(MathEval).Run;
n = n + 1 ;
View[n].Name = " diff" ;

Save View[n] "diff.pos";

Plugin(MathEval).Expression0= "v0*v0 + w0*w0";
Plugin(MathEval).TimeStep= 0;
Plugin(MathEval).View=n;
Plugin(MathEval).OtherTimeStep=1;
Plugin(MathEval).OtherView=n;
Plugin(MathEval).ForceInterpolation=INTERPOLATION;
Plugin(MathEval).PhysicalRegion=-1;
Plugin(MathEval).Run;
n = n + 1 ;
ndel = n ;

Plugin(Integrate).View = n ;
Plugin(Integrate).OverTime=-1;
Plugin(Integrate).Dimension=-1;
Plugin(Integrate).Run;
n = n + 1 ;
int_diff = n  ;
View[int_diff].Name = "int_diff" ;

Save View[int_diff] "Diff_fine_coarse.txt" ;

Delete View[ndel] ; n = n -1 ;
int_diff = int_diff - 1 ;

Plugin(MathEval).Expression0= "v0*v0 + w0*w0";
Plugin(MathEval).TimeStep= 0;
Plugin(MathEval).View=NN;
Plugin(MathEval).OtherTimeStep=1;
Plugin(MathEval).OtherView=NN;
Plugin(MathEval).ForceInterpolation=INTERPOLATION;
Plugin(MathEval).PhysicalRegion=-1;
Plugin(MathEval).Run;
n = n + 1;
ndel = n ;

Plugin(Integrate).View = n ;
Plugin(Integrate).OverTime=-1;
Plugin(Integrate).Dimension=-1;
Plugin(Integrate).Run;
n = n + 1;
int_viewNN = n  ;
View[int_viewNN].Name = "int_viewNN" ;

Delete View[ndel] ;  n = n -1 ;
int_viewNN = int_viewNN - 1 ;

Plugin(MathEval).Expression0= "v0 / w0";
Plugin(MathEval).TimeStep=-1;
Plugin(MathEval).View = int_diff;
Plugin(MathEval).OtherTimeStep=-1;
Plugin(MathEval).OtherView = int_viewNN;
Plugin(MathEval).ForceInterpolation=INTERPOLATION;
Plugin(MathEval).PhysicalRegion=-1;
Plugin(MathEval).Run;
n = n + 1 ;

Save View[n] "Error.txt" ;

System "cat Diff_fine_coarse.txt Error.txt | cut -d' ' -f8" ;
