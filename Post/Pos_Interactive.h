/* $Id: Pos_Interactive.h,v 1.2 2000-10-20 07:42:07 dular Exp $ */
#ifndef _POS_INTERACTIVE_H_
#define _POS_INTERACTIVE_H_

char i_print[] = 
" The Print operation has the structure\n"
" \n"
"    Print[ PostQuantity , WHERE, OPTIONS ]\n"
" \n"
" The WHERE argument specifies where the data should be evaluated in the\n"
" three-dimensional space, and can be one of the following (X1, X2, N1,\n"
" ... are constant expressions):\n"
" \n"
"    OnRegion     GROUP\n"
"    OnElementsOf GROUP\n"
"    OnGrid       GROUP\n"
"    OnPoint   {X1,Y1,Z1}\n"
"    OnLine  { {X1,Y1,Z1} {X2,Y2,Z2} } {N1}\n"
"    OnPlane { {X1,X1,Z1} {X2,Y2,Z2} {X3,Y3,Z3} } {N1,N2}\n"
"    OnBox   { {X1,Y1,Z1} {X2,Y2,Z2} {X3,Y3,Z3} {X4,Y4,Z4} } {N1,N2,N3}\n"
"    OnCut   { {X1,Y1,Z1} {X2,Y2,Z2} {X3,Y3,Z3} }\n"
" \n"
" Check the user's manual for the detailed description of each command.\n"
;

char i_quit[] = 
" The Quit operation terminates the interactive postprocessing.\n"
" Synonyms for Quit are quit, q, Exit and exit.\n"
;

char i_file[] = 
" The File option specifies the name of the output file where the results\n"
" will be stored:\n"
" \n"
"    File \"STRING\"\n"
" \n"
" The output can also be appended to an existing file by adding > before\n"
" the file name:\n"
" \n"
"    File > \"STRING\"\n"
" \n"
" If a double >> is given instead of >, a blank line is added in the\n"
" file before the appended data.\n"
;

char i_format[] = 
" The Format options specifies the format of the output data:\n"
" \n"
"    Format STRING\n"
;

char i_gmsh[] = 
" The Gmsh format is the following:\n"
;

char i_gnuplot[] = 
" The Gnuplot format is the following:\n"
;

char i_table[] = 
" The Table format is the following:\n"
;

char i_timetable[] = 
" The TimeTable format is the following:\n"
;

char i_depth[] = 
" The Depth option specifies the level of subdivision of the geometrical\n"
" elements:\n"
" \n"
"    Depth N\n"
" \n"
" If N>0, each element is recursively divided N times. If N==0, each element\n"
" is replaced by its barycenter. If N<0, only one out of (-N) elements will\n"
" be generated.\n"
;

char i_skin[] = 
" The Skin option specifies that elements should only be generated on the\n"
" boundary of the region:\n"
" \n"
"    Skin\n"
" \n"
" Skin works only for OnElementsOf prints.\n"
;

char i_smoothing[] = 
" The Smoothing option specifies the number of smoothing steps to be applied to\n"
" the solution:\n"
" \n"
"    Smoothing N\n"
" \n"
" Smoothing works only for OnElementsOf prints.\n"
;

char i_harmonictotime[] = 
" The HarmonicToTime options converts any harmonic result to N\n"
" time domain components (in one period):\n"
" \n"
"    HarmonicToTime N\n"
;

char i_dimension[] = 
" The Dimension option restricts the dimension of the elements to be\n"
" searched for to N:\n"
" \n"
"    Dimension N\n"
" \n"
" Dimension works only for OnGrid, OnPoint, OnLine, OnPlane and OnBox\n"
" prints.\n"
;

char i_timestep[] = 
" The TimeStep option selects the time step to be considered:\n"
" \n"
"    TimeStep N\n"
" \n"
" Multiple values can be given in a list:\n" 
" \n"
"    TimeStep {N1,N2,N3,N4}\n"
" \n"
" Automatic incrementation is available through the colon operator:\n" 
" TimeStep {1,5:8,40:[3]47} is equivalent to TimeStep {1,5,6,7,8,40,43,46}.\n"
;

char i_adapt[] = 
" Not documented\n"
;

char i_sort[] = 
" The Sort option applies various sorting algorithms to the output:\n"
" \n"
"    Sort STRING\n"
" \n"
" Valid values for STRING include Connection (if the output elements\n"
" are of LINE type, the elements are sorted to form an ordered linestrip)\n"
" and Position (the output elements are sorted according to the position\n"
" of their barycenter).\n"
;

char i_target[] = 
" Not documented\n"
;

char i_value[] = 
" Not documented\n"
;

char i_iso[] = 
" The Iso option instructs GetDP to ouput directly contour prints (with N\n"
" values) instead of elementary values:\n"
" \n"
"    Iso N\n"
" \n"
" The values can also be explicitely given in a list:\n"
" \n"
"    Iso {V1,V2,V3,V4}\n"
" \n"
" Automatic incrementation is available through the colon operator:\n" 
" Iso {0,0.5:[0.1]0.8} is equivalent to Iso {0,0.5,0.6,0.7,0.8}.\n"
;

#endif
