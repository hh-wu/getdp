
// Merge this once you have a nice view of the model to generate the master
// 1024x1024 screenshot for the mobile app, as well as the scaled 128x128 thumbnail
//
// > cd getdp/utils/misc
// > gmsh ../../benchmarks/test/test.pro
// >

Print.Width = 1014;
Print.Height = 1014;
Print.Background = 1;

Save StrCat("screenshot_", StrPrefix(StrRelative(General.FileName)), ".png") ;

SystemCall StrCat("convert -scale 128 screenshot_", StrPrefix(StrRelative(General.FileName)),
  ".png screenshot_", StrPrefix(StrRelative(General.FileName)), "_128.png");
