Include "params.geo";

//to compare to the full or exact solution, getdp needs to store u_init
If(FULL_SOLUTION || EXACT_SOLUTION)
  STORE_U_INIT = 1;
EndIf

For idom In {0:N_DOM-1}
  Merge Sprintf("u%g.pos", idom);
EndFor
Combine ElementsFromVisibleViews;


If(WRITE_U_INIT && !STORE_U_INIT)
  View[0].Visible = 0;
  For idom In {0:N_DOM-1}
    Merge Sprintf("u_init%g.pos", idom);
  EndFor
  Combine ElementsFromVisibleViews;
  Plugin(ModifyComponent).Expression = "v+w";
  Plugin(ModifyComponent).View = 0;
  Plugin(ModifyComponent).OtherView = 1;
  Plugin(ModifyComponent).Run;
  Delete View[1];
  View[0].Visible = 1;
EndIf

View[0].Name = "u_ddm";
cpt_view = 0;
If(FULL_SOLUTION)
	View[0].Visible = 0;

	Merge "u.pos";
	cpt_view ++;
	View[cpt_view].Name = "u_full";
	View[cpt_view].Visible = 0;

	For idom In {0:N_DOM-1}
  	  Merge Sprintf("err_full%g.pos", idom);
	EndFor
	Combine ElementsFromVisibleViews;
        cpt_view ++;
	View[cpt_view].Name = "Error with full sol";
	View[cpt_view].Visible = 0;

	For idom In {0:N_DOM-1}
  	  Merge Sprintf("err_full_abs%g.pos", idom);
	EndFor
	Combine ElementsFromVisibleViews;
        cpt_view ++;
	View[cpt_view].Name = "Error with full sol (absolute value)";
	View[cpt_view].Visible = 0;
	View[0].Visible = 1;
EndIf
If(EXACT_SOLUTION)
	View[0].Visible = 0;
	For idom In {0:N_DOM-1}
          Merge Sprintf("u_exact%g.pos", idom);
        EndFor
        Combine ElementsFromVisibleViews;
	cpt_view ++;
	View[cpt_view].Name = "u_exact";
	View[cpt_view].Visible = 0;

	For idom In {0:N_DOM-1}
  	  Merge Sprintf("err_exact%g.pos", idom);
	EndFor
	Combine ElementsFromVisibleViews;
        cpt_view ++;
	View[cpt_view].Name = "Error with exact sol";
	View[cpt_view].Visible = 0;

	For idom In {0:N_DOM-1}
  	  Merge Sprintf("err_exact_abs%g.pos", idom);
	EndFor
	Combine ElementsFromVisibleViews;
        cpt_view ++;
	View[cpt_view].Name = "Error with exact sol (absolute value)";
	View[cpt_view].Visible = 0;
	View[0].Visible = 1;
EndIf
