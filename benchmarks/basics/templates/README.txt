== Template files for basic physical problems ==

This directory contains template .pro files
showing how getDP deals with basic physical problems
like magnetostatics, magnetodynamics, electrostatics, elasticity, etc...

Each template files contains the abstract formulation of a specific physical problem.
It contains no model specific information.
Template files are supposed to remain unmodified
and to be included 'as is' in .pro metamodels. 

In consequence, template files obey a number of specific rules:
- Template file are self-contained. They execute without producing errors. 
- The interface variables are defined with the template specific statements
       DefineConstant[], 
       DefineFunction[] and 
       DefineGroup[] 
in a header placed at the beginning of the file.
- Template files contain no Onelab variable definition. 
Onelab variable are defined in the calling .pro file with the statements
       DefineNumber[]
       DefineString[].
- Template files have no predefined PostOperation.
PostOperation's are also defined in the calling .pro file.
- A physics based extension (e.g. _Mag) is added to template specific groupnames
in order to facilitate template combination into multiphysics models.

It might however happen that you have to adapt a template file to your own needs,
e.g. to define a more involved Resolution field,
or a boundary conditions more complex than those offered by the template.
In that case, copy the reference template in your working directory and rename it.
You can also copy-paste the template code in your .pro file.
