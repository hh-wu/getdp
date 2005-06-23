# $Id: Makefile,v 1.10 2005-06-23 01:45:00 geuzaine Exp $
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

LIB     = ../lib/libFMM.a
INCLUDE = -I. -I../Main -I../include -I../DataStr -I../DofData -I../Function\
          -I../GeoData -I../Integration -I../Numeric -I../Post -I../Sparskit
CFLAGS  = ${C_FLAGS} ${SOLVER} ${INCLUDE}

SRC = FMM_Groups.c FMM_CalDTAmatrices.c FMM_Operations.c Print_FMM.c Cal_FMMAnalyticalIntegral.c

OBJ = $(SRC:.c=.o)

${LIB}: ${OBJ}
	${AR} ${LIB} ${OBJ}
	${RANLIB} ${LIB}
clean:
	rm -f *.o	

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	$(CC) -MM $(CFLAGS) ${SRC} \
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
FMM_Groups.o: FMM_Groups.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h ../DataStr/List.h \
  ../Main/Data_DefineE.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../DataStr/Tools.h ../Integration/Quadrature.h \
  ../Main/Treatment_Formulation.h ../Main/Cal_Quantity.h \
  ../Main/Cal_Value.h Data_FMM.h F_FMM.h Truncation.h
FMM_CalDTAmatrices.o: FMM_CalDTAmatrices.c ../include/GetDP.h \
  ../Main/Message.h ../DataStr/Malloc.h ../Main/Treatment_Formulation.h \
  ../Main/Data_Active.h ../Main/Data_Passive.h ../DataStr/List.h \
  ../Main/Data_Element.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/Tree.h ../DataStr/avl.h ../Main/Cal_Quantity.h \
  ../Main/Cal_Value.h ../Main/CurrentData.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../Main/Get_Geometry.h \
  ../Main/Get_DofOfElement.h ../Main/Data_DefineE.h \
  ../Function/GF_Function.h ../DataStr/Tools.h Data_FMM.h \
  Cal_FMMAnalyticalIntegral.h F_FMM_DTA.h
FMM_Operations.o: FMM_Operations.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../Numeric/Numeric.h ../DataStr/List.h \
  ../Main/Data_Passive.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Main/Data_DefineE.h ../Main/CurrentData.h ../Main/Data_Active.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Main/Cal_Value.h Data_FMM.h
Print_FMM.o: Print_FMM.c ../include/GetDP.h ../Main/Message.h \
  ../DataStr/Malloc.h ../GeoData/GeoData.h ../GeoData/Data_GeoData.h \
  ../DataStr/List.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../Numeric/Numeric.h ../Main/Data_Passive.h ../Main/Data_Element.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../DofData/DofData.h \
  ../DofData/LinAlg.h ../Sparskit/Solver.h ../Main/Graph.h \
  ../DofData/Data_DofData.h ../include/Magic.h ../DataStr/Tools.h \
  ../Main/ExtendedGroup.h Data_FMM.h
Cal_FMMAnalyticalIntegral.o: Cal_FMMAnalyticalIntegral.c \
  ../include/GetDP.h ../Main/Message.h ../DataStr/Malloc.h \
  ../Main/CurrentData.h ../Main/Data_Active.h ../Main/Data_Passive.h \
  ../DataStr/List.h ../Main/Data_Element.h ../GeoData/GeoData.h \
  ../GeoData/Data_GeoData.h ../DataStr/Tree.h ../DataStr/avl.h \
  ../DofData/DofData.h ../DofData/LinAlg.h ../Sparskit/Solver.h \
  ../Main/Graph.h ../DofData/Data_DofData.h ../include/Magic.h \
  ../Numeric/Numeric.h ../DataStr/Tools.h Cal_FMMAnalyticalIntegral.h
