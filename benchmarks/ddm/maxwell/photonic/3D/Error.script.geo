//
// Error = View[0] - View[1] / View[NN]
//
// NN = 0 | 1

NN = 1 ;

INTERPOLATION=0;

SMOOTH = 1;

/*
if the full mesh is built with Merge
then the numbering of the elements are not the same between
the _Full.msh and the _DDM%g.msh

_ In the Scalar case (Helmholtz), a way to fix this problem is to force
the interpolation, and the numbering is not considered.

_ The fix using INTERPOLATION uses the first value returned by an
octree.

_ In the Edge-Elements case (Maxwell case), because the edge elements
are not continuous,  the value returned by the octree is not necessary
the right one.
So, the field is smoothed.

This is an Ugly (bear) Hack.
(which error is compared? View[0]-View[1] or smoothing error...)
*/


 If(SMOOTH)
    Plugin(Smooth).View = 0;
    Plugin(Smooth).Run;
    Plugin(Smooth).View = 1;
    Plugin(Smooth).Run;
EndIf

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
