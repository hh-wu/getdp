Include "params.pro";
Include "params.geo";

Lx = (nx-0.5) * dx ; // fix in several places
//// ==> ugly les bons tuyaux !! (or just Huggy Bear ;)

i = 0 ;
tempnum = Sprintf("%g.msh",i);
Merge Sprintf(StrCat(Problem,"_Start.msh"));
Save Sprintf(StrCat(Problem,tempnum));
Delete Model ;
Delete Physicals ;

Merge Sprintf(StrCat(Problem,"_Empty.msh"));
For i In {1:nempty}
tempnum = Sprintf("%g.msh",i);
Plugin(NewView).Run;
Plugin(Transform).Tx = 2*Lx;
Plugin(Transform).Run;
Save Sprintf(StrCat(Problem,tempnum));
EndFor
Delete Model ;
Delete Physicals ;

Merge Sprintf(StrCat(Problem,"_Slice.msh"));
For i In {nempty+1:N_DOM-2-nempty}
tempnum = Sprintf("%g.msh",i);
Plugin(NewView).Run;
If(i == nempty+1)
  Plugin(Transform).Tx = (nempty+1)*2*Lx;
EndIf
If(i > nempty+1)
  Plugin(Transform).Tx = 2*Lx;
EndIf
Plugin(Transform).Run;
Save Sprintf(StrCat(Problem,tempnum));
EndFor
Delete Model ;
Delete Physicals ;

If (nempty > 0)
Merge Sprintf(StrCat(Problem,"_Empty.msh"));
For i In {N_DOM-2-nempty+1:N_DOM-2}
n=N_DOM-2-nempty+1;
tempnum = Sprintf("%g.msh",i);
Plugin(NewView).Run;
If(i == N_DOM-2-nempty+1)
  Plugin(Transform).Tx = (N_DOM-2-nempty+1)*2*Lx;
EndIf
If(i > N_DOM-2-nempty+1)
  Plugin(Transform).Tx = 2*Lx;
EndIf
Plugin(Transform).Run;
Save Sprintf(StrCat(Problem,tempnum));
EndFor
Delete Model ;
Delete Physicals ;
EndIf


i = N_DOM - 1 ;
tempnum = Sprintf("%g.msh",i);
Merge Sprintf(StrCat(Problem,"_End.msh"));
Plugin(NewView).Run;
Plugin(Transform).Tx = i*2*Lx;
Plugin(Transform).Run;
Save Sprintf(StrCat(Problem,tempnum));
Delete Model ;
Delete Physicals ;


// // Full

For i In {0:N_DOM-1}
tempnum = Sprintf("%g.msh",i);
Merge Sprintf(StrCat(Problem,tempnum));
EndFor
Coherence Mesh;
Save Sprintf(StrCat(Problem,"_Full_merged.msh"));

// ugly hack to fix the problem in Full (incompatible with -msh)
from = Sprintf(StrCat(Problem,"_Full_merged.msh "));
to = Sprintf(StrCat(Problem,".msh"));
temp = Sprintf(StrCat(from, to));
SystemCall Sprintf(StrCat( "ln -s ", temp));
