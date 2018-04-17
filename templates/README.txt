This directory contains GetDP templates for simple problems:

  - "Interactive.pro" can be used to interactively setup simple models with
    Gmsh, through the ONELAB interface. Simply create or load a geometry in Gmsh
    and merge (File->Merge) "Interactive.pro": you will be interectively
    prompted to assign boundary conditions, material and source properties for
    each physical group in the geometry. After each run, a minimal ".pro" file
    containing all your intercative choices is automatically exported, for
    further non-intercative use.

  - "Lib_*.pro" are templates for simple generic physical problems, which can be
    included in your own ".pro" files. 

