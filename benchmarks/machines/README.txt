
2D models of electric machines: permanent magnet and wound field synchronous
machines, induction machines, switched reluctance machine.

[[Category:GetDP]]
[[Category:Electromagnetism]]

<!--

Quick start
-----------

Open `main.pro' with Gmsh.

Additional info
---------------

See http://onelab.info/wiki/Electric_Machines

The directory contains several examples:

* Eight-pole permanent magnet synchronous machine - GRUCAD, Universidade Federal
  de Santa Catarina, Brazil

  Used in:

  M.V. Ferreira da Luz, P. Dular, N. Sadowski, C. Geuzaine, and J.P.A. Bastos,
  "Analysis of a permanent magnet generator with dual formulations using
  periodicity conditions and moving band", IEEE Trans. Mag., IEEE Trans. Mag.,
  38(2):961-964, 2002.  http://orbi.ulg.ac.be/handle/2268/22771

  Files:

  pmsm_data.geo
  pmsm.geo
  pmsm_rotor.geo
  pmsm_stator.geo
  pmsm.pro
  pmsm_8p_circuit.pro

* Eight-pole permanent magnet synchronous machine - GRUCAD, Universidade Federal
  de Santa Catarina, Brazil Same machine as previous one, but geometry has not
  been simplified here.

  Used in:

  J. Gyselinck, N. Sadowski, P. Dular, M.V. Ferreira da Luz, J.P.A. Bastos,
  W. Legros, "Harmonic balance finite element modelling of a permanent-magnet
  synchronous machine", Proceedings of the V Brazilian Conference on
  Electromagnetics (CBMag2002), 4-6 November 2002, Gramado, Brazil, 4 p.
  http://hdl.handle.net/2013/ULB-DIPOT:oai:dipot.ulb.ac.be:2013/73090

  J. Gyselinck, P. Dular, L. Vandevelde and J. Melkebeek, A.M. Oliveira,
  P. Kuo-Peng, "Two-dimensional harmonic balance finite element modelling of
  electrical machines taking motion into account", COMPEL: The International
  Journal for Computation and Mathematics in Electrical and Electronic
  Engineering, 22(4):1021-1036, 2003.
  http://hdl.handle.net/2013/ULB-DIPOT:oai:dipot.ulb.ac.be:2013/72981
  http://www.emeraldinsight.com/journals.htm?articleid=1455338

  Files: 
  
  pmsm_cbmab_data.geo
  pmsm_cbmag.geo
  pmsm_cbmag_rotor.geo
  pmsm_cbmag_stator.geo
  pmsm_cbmag.pro
  pmsm_8p_circuit.pro

* Eight-pole permanent magnet machine

  Model from:

  E.A. Lomonova, E. Kazmin, Y. Tang, J.J.H. Paulides, "In-wheel PM motor:
  Compromise between high power density and extended speed capability", COMPEL:
  The International Journal for Computation and Mathematics in Electrical and
  Electronic Engineering, 30(1):98-116, 2011.  Work presented at Ecologic
  Vehicles-Renewable Energies (EVRE), Monaco, March 26-29, 2009
  http://www.emeraldinsight.com/journals.htm?articleid=1906093

  with Concentrated or distributed windings (different parameters for the geometry)

  Files:

  lomonova_data.geo
  lomonova.geo
  lomonova_rotor.geo
  lomonova_stator.geo
  lomonova.pro
  lomonova_circuit.pro

* Four-pole wound field synchronous machine

  Used in:

  J. Gyselinck, L. Vandevelde, J. Melkebeek, W. Legros, "Steady-state finite
  element analysis of a salient-pole synchronous machine in the frequency
  domain", Proceedings the 7th International Conference on Modeling and
  Simulation of Electric Machines, Converters and Systems (ELECTRIMACS2002),
  August 18-21, Montréal, Canada, 6 p.
  http://hdl.handle.net/2013/ULB-DIPOT:oai:dipot.ulb.ac.be:2013/73097
  http://hdl.handle.net/1854/LU-160736

  Files:

  wfsm_4p_data.geo
  wfsm_4p.geo
  wfsm_4p_rotor.geo
  wfsm_4p_stator.geo
  wfsm_4p.pro
  wfsm_4p_circuit.pro

* TEAM workshop problem 30a - Induction motor analysis

  See: http://www.compumag.org/jsite/team.html and
  http://www.infolytica.com/en/applications/ex0035/

  Files:

  t30_data.geo
  t30.geo
  t30_rotor.geo
  t30_stator.geo
  t30.pro

* Four-pole 3kW-induction machine from Johan Gyselinck's PhD

  J. Gyselinck, "Twee dimensionale dynamische eindige-elementenmodellering van
  statische en roterende elektromagnetische energieomzetters", Ph.D. thesis,
  Universiteit Gent, 2000.

  Some articles where it has been used:

  J. Gyselinck, L. Vandevelde, and J. Melkebeek, "Multi-slice modeling of
  electrical machines with skewed slots - The skew discretization error”, IEEE
  Trans. Magn., IEEE Trans. Magn., 37(5):3233–3237, 2002.
  http://hdl.handle.net/2013/ULB-DIPOT:oai:dipot.ulb.ac.be:2013/72985
  http://hdl.handle.net/1854/LU-144482

  J. Gyselinck, L. Vandevelde, P. Dular, C. Geuzaine, W. Legros, "A general
  method for the frequency domain FE modeling of rotating electromagnetic
  devices", IEEE Trans. Magn., 39(3):1147-1150, 2003.
  http://hdl.handle.net/2013/ULB-DIPOT:oai:dipot.ulb.ac.be:2013/72982
  http://hdl.handle.net/2268/22767 http://hdl.handle.net/1854/LU-211446
  http://ieeexplore.ieee.org/xpl/articleDetails.jsp?arnumber=1198420

  Files:

  im_3kW_data.geo
  im_3kW.geo
  im_3kW_rotor.geo
  im_3kW_stator.geo
  im_3kW.pro
  im_3kW_circuit.pro

* Four-pole induction machine

  Used in:

  S. Guérard, J. Gyselinck, and J. Lecomte-Beckers, "Finite element modelling of
  an asynchronous motor with one broken rotor bar, comparison with the data
  recorded on a prototype and material aspects", Bulletin Scientifique de l'AIM,
  1:13-22, 2005.  Prix Melchior Salier 2004 du meilleur travail de fin d'études
  section électromécanique-énergétique.  http://hdl.handle.net/2268/38463

  Files:

  im_data.geo
  im.geo
  im_rotor.geo
  im_stator.geo
  im.pro
  im_circuit.pro

* Switched reluctance machine

  Used in:

  J. Gyselinck, C. Geuzaine, and R. V. Sabariego. Considering laminated cores
  and eddy currents in 2D and 3D finite element simulation of electrical
  machines.  In Proceedings of the 18th Conference on the Computation of
  Electromagnetic Fields (COMPUMAG2011), Sydney, Australia, July 12–15, 2011.

  J. Gyselinck, C. Geuzaine, and R. V. Sabariego.  Homogenisation of windings
  and laminations in time-domain finite-element modeling of electrical machines.
  In Proceedings of the 15th Biennial IEEE Conference on Electromagnetic Field
  Computation (CEFC2012), Oita, Japan, November 11– 14, 2012.

  Files:

  srm_data.geo
  srm.geo
  srm_rotor.geo
  srm_stator.geo
  srm.pro
  srm_circuit.pro

-->
