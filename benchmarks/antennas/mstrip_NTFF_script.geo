Plugin(CutBox).NumPointsU = nptsU;
Plugin(CutBox).NumPointsV = nptsV;
Plugin(CutBox).NumPointsW = nptsW;

delta = depth2 ;
xmin = 0-delta ; xmax = L3+2*L5+2*L2+delta ;
ymin = 0-delta ; ymax = L6-D4+W2+delta ;
zmin = 0-delta ; zmax = depth1+delta ;

Plugin(CutBox).X0 = xmin ; Plugin(CutBox).Y0 = ymin ; Plugin(CutBox).Z0 = zmin ;
Plugin(CutBox).X1 = xmax ; Plugin(CutBox).Y1 = ymin ; Plugin(CutBox).Z1 = zmin ;
Plugin(CutBox).X2 = xmin ; Plugin(CutBox).Y2 = ymax ; Plugin(CutBox).Z2 = zmin ;
Plugin(CutBox).X3 = xmin ; Plugin(CutBox).Y3 = ymin ; Plugin(CutBox).Z3 = zmax ;
Plugin(CutBox).ConnectPoints = 1 ;
Plugin(CutBox).Boundary = 1 ;

Plugin(CutBox).View = EViewNb;
Plugin(CutBox).Run ;

Plugin(CutBox).View = HViewNb ;
Plugin(CutBox).Run ;

Save View[PostProcessing.NbViews-2] "res3d/e_box.msh";
Save View[PostProcessing.NbViews-1] "res3d/h_box.msh";

Plugin(NearToFarField).Wavenumber = k0 ;
Plugin(NearToFarField).RFar = 1 ;
Plugin(NearToFarField).NumPointsPhi = nptsPhi ;
Plugin(NearToFarField).NumPointsTheta = nptsTheta ;
Plugin(NearToFarField).EView = PostProcessing.NbViews-2 ;
Plugin(NearToFarField).HView = PostProcessing.NbViews-1 ;
Plugin(NearToFarField).Normalize = 1 ;
Plugin(NearToFarField).dB = 1 ;

Plugin(NearToFarField).Run ;

Save View[PostProcessing.NbViews-1] "res3d/ntf.msh";
