
Optimized Schwarz domain decomposition methods for time-harmonic wave problems

[[Category:Numerical methods]]
[[Category:Electromagnetism]]
[[Category:Acoustic]]
[[Category:GetDP]]
[[Category:Gmsh]]

<!--

Quick start with GetDDM
-----------------------

Follow the following steps to run GetDDM interactively, in serial mode:

1. Download and uncompress the pre-compiled GetDDM code bundle:
   * Windows: http://onelab.info/files/gmsh-getdp-Windows64.zip
   * MacOS: http://onelab.info/files/gmsh-getdp-MacOSX.zip
   * Linux: http://onelab.info/files/gmsh-getdp-Linux64.zip
2. Launch Gmsh (e.g. double-click on the gmsh.exe executable on Windows).
3. Open the `main.pro' file with the File>Open menu.
4. Click on Run.

Different test-cases can be chosen by selecting the appropriate `Problem' in the
menu to the left of the graphics window. Top-level parameters (type of
transmission condition, number of subdomains, frequency, etc.) can be changed
interactively in the menu as well.

This interactive use of GetDDM is useful for testing, demonstration and
visualization purposes. For actual, parallel computations, you will need to
recompile the GetDDM source code for your particular computer architecture and
MPI implementation. Detailed installation instructions are available on the
website of the GetDDM project, at the address: http://onelab.info/wiki/GetDDM.

Once compiled, GetDDM is then called from the command line, using (depending on
your MPI setup), commands similar to the following (here for the waveguide3d
test-case, on 100 CPUs):

  mpirun -np 100 gmsh -setnumber N_DOM 100 waveguide3d.geo -
  mpirun -np 100 getdp -setnumber N_DOM 100 waveguide3d.pro -solve DDM
  

Additional information
----------------------

See http://onelab.info/wiki/GetDDM and http://onelab.info/wiki/DDM_for_Waves.


Description of the files in the archive
---------------------------------------

The archive contains the following model files:

  circle_concentric{.geo,.pro,_data.geo}
  cobra{.geo,.pro,_data.geo}
  cylinder_concentric{.geo,.pro,_data.geo}
  circle_pie{.geo,.pro,_data.geo}
  marmousi{.geo,.pro,_data.geo}
  sphere_concentric{.geo,.pro,_data.geo}
  waveguide2d{.geo,.pro,_data.geo}
  waveguide3d{.geo,.pro,_data.geo}

Each model description is split into 3 files: a *.geo file with the Gmsh
geometry (e.g. `cobra.geo'), a *.pro file with the GetDP problem definition
(e.g. `cobra.pro'), and a *_data.geo file with parameters common to both Gmsh
and GetDP (e.g. `cobra_data.geo'). The `main.{pro,geo}' model file allows to
interactively select one of the above models.

The model-specific files include the following common problem description files:

  Decomposition.pro (subdomain and communication layout)
  Schwarz.pro (iterative Schwarz solver)
  SchwarzMacros.pro (macros used in `Schwarz.pro')
  Helmholtz.pro (Helmholtz formulation)
  Maxwell.pro (Maxwell formulation)

Sample scripts for running large scale computations on computer clusters using
the SLURM or PBS job schedulers are also provided:

  run_slurm.sh
  run_pbs.sh
  
-->
