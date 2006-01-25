# $Id: Makefile,v 1.34 2006-01-25 13:21:47 geuzaine Exp $
#
# Copyright (C) 1997-2005 P. Dular, C. Geuzaine
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA.
# 
# Please report all bugs and problems to <getdp@geuz.org>.

include ../variables

LIB     = ../lib/libFunction.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData -I../Main\
          -I../Numeric -I../Sparskit -I../Integration -I../FMM -I../NR

CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}


SRC = F_Analytic.c \
      F_Coord.c \
      F_Math.c \
      F_ExtMath.c \
      F_Misc.c \
      F_Interpolation.c \
      F_Type.c \
      F_MultiHar.c \
      F_Jiles.c \
      F_DiscreteGeometry.c \
      BF_Node.c \
      BF_Node_2.c \
      BF_Node_3.c \
      BF_Edge.c \
      BF_Edge_2.c \
      BF_Edge_3.c \
      BF_Edge_4.c \
      BF_Facet.c \
      BF_Volume.c \
      BF_Perpendicular.c \
      BF_GroupOfEntities.c \
      BF_NodeXYZ.c \
      BF_Region.c \
      GF_Laplace.c \
      GF_LaplacexForm.c \
      GF_Helmholtz.c \
      GF_HelmholtzxForm.c \
      F_BiotSavart.c

OBJ = ${SRC:.c=.o}

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}

clean:
	rm -f *.o

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CC} -MM ${CFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

nodepend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
# 1 "/Users/geuzaine/.getdp/Function//"
F_Analytic.o: F_Analytic.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Numeric/Numeric.h ../DofData/Data_DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../Numeric/Numeric_F.h ../include/Compat.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../DofData/Graph.h ../DofData/Data_DofData.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Legendre.h \
  ../Numeric/SphBessel.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_Coord.o: F_Coord.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_Math.o: F_Math.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_ExtMath.o: F_ExtMath.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_Misc.o: F_Misc.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_Interpolation.o: F_Interpolation.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_Type.o: F_Type.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_MultiHar.o: F_MultiHar.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
  ../Main/Cal_Quantity.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_Jiles.o: F_Jiles.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_DefineE.h F_Function.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Cal_Value.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Numeric/Numeric.h ../DataStr/Tools.h \
  ../DataStr/List.h ../DataStr/Tree.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_DiscreteGeometry.o: F_DiscreteGeometry.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h ../Main/Data_DefineE.h \
  F_Function.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Element.h ../Main/Get_Geometry.h ../Main/Data_Active.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DofData/Graph.h ../DofData/Data_DofData.h ../DofData/LinAlg.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h \
  ../DataStr/Tools.h ../DataStr/List.h ../DataStr/Tree.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Node.o: BF_Node.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Numeric/Numeric.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Node_2.o: BF_Node_2.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Node_3.o: BF_Node_3.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Edge.o: BF_Edge.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Edge_2.o: BF_Edge_2.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Edge_3.o: BF_Edge_3.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h BF_Function.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Edge_4.o: BF_Edge_4.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Facet.o: BF_Facet.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Volume.o: BF_Volume.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Perpendicular.o: BF_Perpendicular.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h BF_Function.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_GroupOfEntities.o: BF_GroupOfEntities.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h BF_Function.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../Main/Data_Element.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_NodeXYZ.o: BF_NodeXYZ.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Get_Geometry.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../DataStr/List.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../Main/Data_Element.h BF_Function.h
# 1 "/Users/geuzaine/.getdp/Function//"
BF_Region.o: BF_Region.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h BF_Function.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/List.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Get_DofOfElement.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  ../Main/Data_Element.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DofData/Graph.h ../DofData/Data_DofData.h ../DofData/LinAlg.h \
  ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
  ../Main/Cal_Quantity.h ../Main/Data_Active.h ../Main/Cal_Value.h
# 1 "/Users/geuzaine/.getdp/Function//"
GF_Laplace.o: GF_Laplace.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Element.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DofData/Graph.h ../DofData/Data_DofData.h ../DofData/LinAlg.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h \
  ../FMM/Data_FMM.h ../Numeric/Legendre.h ../Numeric/SphBessel.h
# 1 "/Users/geuzaine/.getdp/Function//"
GF_LaplacexForm.o: GF_LaplacexForm.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Element.h BF_Function.h ../Main/CurrentData.h \
  ../Main/Data_Active.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../DofData/Graph.h ../DofData/Data_DofData.h \
  ../DofData/LinAlg.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Data_DefineE.h ../Numeric/Numeric.h ../Numeric/Numeric_F.h \
  ../include/Compat.h
# 1 "/Users/geuzaine/.getdp/Function//"
GF_Helmholtz.o: GF_Helmholtz.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Element.h ../Main/Cal_Value.h ../Main/CurrentData.h \
  ../Main/Data_Active.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../DofData/Graph.h ../DofData/Data_DofData.h \
  ../DofData/LinAlg.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Numeric/Numeric.h ../FMM/Data_FMM.h ../Numeric/Legendre.h \
  ../Numeric/SphBessel.h
# 1 "/Users/geuzaine/.getdp/Function//"
GF_HelmholtzxForm.o: GF_HelmholtzxForm.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../DataStr/List.h ../Main/Data_Element.h \
  ../GeoData/GeoData.h ../GeoData/Data_GeoData.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../Main/Data_Element.h BF_Function.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Main/Data_DefineE.h ../Numeric/Numeric.h \
  ../Numeric/Numeric_F.h ../include/Compat.h ../Integration/Quadrature.h
# 1 "/Users/geuzaine/.getdp/Function//"
F_BiotSavart.o: F_BiotSavart.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Element.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DofData/Graph.h ../DofData/Data_DofData.h ../DofData/LinAlg.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Numeric/Numeric.h
