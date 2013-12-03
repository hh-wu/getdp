//
// Error = View[0] - View[1] / View[NN]
//
// NN = 0 | 1

NN = 1 ;

INTERPOLATION=1;


n = 1 ;
Plugin(MathEval).Expression0= "v0 - w0";
Plugin(MathEval).Expression1= "v1 - w1";
Plugin(MathEval).Expression2= "v2 - w2";
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
