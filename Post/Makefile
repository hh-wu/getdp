# $Id: Makefile,v 1.37 2007-03-02 08:40:35 geuzaine Exp $
#
# Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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

LIB     = ../lib/libPost.a
INCLUDE = -I. -I../include -I../DataStr -I../DofData -I../GeoData\
          -I../Main -I../Numeric -I../Sparskit -I../Function
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE} 

SRC = Pos_FemInterpolation.c \
      Pos_Interactive.c \
      Pos_ReadLine.c \
      Pos_Formulation.c \
        Pos_Print.c \
        Pos_Quantity.c \
        Pos_Element.c \
        Pos_Iso.c \
        Pos_Search.c \
        Pos_Format.c

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
Pos_FemInterpolation.o: Pos_FemInterpolation.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  ../Main/Get_DofOfElement.h ../Main/Data_Active.h ../Main/Get_Geometry.h \
  ../Main/Data_Active.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../Sparskit/Solver.h ../DofData/Graph.h ../DofData/Data_DofData.h \
  ../DofData/LinAlg.h ../DofData/Data_DofData.h Pos_Search.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../include/Magic.h \
  ../DataStr/Tools.h ../DataStr/List.h ../DataStr/Tree.h
Pos_Interactive.o: Pos_Interactive.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  Pos_Formulation.h ../Main/Print_ProblemStructure.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Main/OS.h
Pos_ReadLine.o: Pos_ReadLine.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h
Pos_Formulation.o: Pos_Formulation.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Numeric/Numeric.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../Main/CurrentData.h \
  ../Main/Data_Active.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../DofData/Graph.h ../DofData/Data_DofData.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../Main/Get_DofOfElement.h ../Main/Data_Active.h \
  Pos_Formulation.h Pos_Print.h Pos_Format.h ../Main/GmshClient.h
Pos_Print.o: Pos_Print.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Numeric/Numeric.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Treatment_Formulation.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../Main/Get_Geometry.h \
  ../Main/Data_Active.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Get_DofOfElement.h ../Main/Data_Active.h \
  ../Main/ExtendedGroup.h ../Main/Data_Active.h ../Main/Cal_Quantity.h \
  ../Main/Data_Active.h ../Main/Cal_Value.h Pos_Formulation.h \
  Pos_Quantity.h Pos_Element.h Pos_Search.h Pos_Print.h Pos_Format.h \
  ../Numeric/Adapt.h ../DataStr/Tools.h ../DataStr/List.h \
  ../DataStr/Tree.h
Pos_Quantity.o: Pos_Quantity.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Data_Element.h \
  Pos_Formulation.h Pos_Quantity.h ../Main/Get_DofOfElement.h \
  ../Main/Data_Active.h ../Main/Cal_Quantity.h ../Main/Data_Active.h \
  ../Main/Cal_Value.h ../Main/Get_Geometry.h ../Main/Data_Active.h \
  ../Main/Data_DefineE.h ../Main/ExtendedGroup.h ../Main/Data_Active.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../DataStr/Tools.h ../DataStr/List.h \
  ../DataStr/Tree.h
Pos_Element.o: Pos_Element.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Get_Geometry.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../Main/Data_Element.h ../Main/Data_Element.h \
  ../Main/Get_DofOfElement.h ../Main/Data_Active.h Pos_Element.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../DofData/Graph.h ../DofData/Data_DofData.h ../DofData/LinAlg.h \
  ../DofData/Data_DofData.h ../include/Magic.h
Pos_Iso.o: Pos_Iso.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Element.h ../Numeric/Numeric.h ../DofData/Data_DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/CurrentData.h \
  ../Main/Data_Active.h ../DofData/DofData.h ../DofData/LinAlg.h \
  ../DofData/Graph.h ../DofData/Data_DofData.h ../DofData/Data_DofData.h \
  ../include/Magic.h Pos_Iso.h Pos_Element.h
Pos_Search.o: Pos_Search.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_Element.h ../Main/Get_Geometry.h ../Main/Data_Active.h \
  Pos_Search.h ../Main/Get_DofOfElement.h ../Main/Data_Active.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/LinAlg.h ../DofData/Data_DofData.h \
  ../include/Magic.h ../DataStr/Tools.h ../DataStr/List.h \
  ../DataStr/Tree.h ../Numeric/Numeric.h
Pos_Format.o: Pos_Format.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../include/GetDPVersion.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/List.h ../DataStr/Tree.h \
  ../DataStr/avl.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  ../Main/Data_DefineE.h ../Numeric/Numeric.h ../DofData/Data_DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/CurrentData.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../DofData/Graph.h \
  ../DofData/Data_DofData.h ../DofData/Data_DofData.h ../include/Magic.h \
  Pos_Iso.h Pos_Element.h Pos_Format.h Pos_Formulation.h \
  ../Function/F_Function.h ../Main/Cal_Value.h ../Main/Cal_Quantity.h \
  ../Main/Data_Active.h ../Main/Cal_Value.h
