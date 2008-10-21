# Gmsh - Copyright (C) 1997-2008 C. Geuzaine, J.-F. Remacle
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to <gmsh@geuz.org>.

include ../../variables

LIB = ../../lib/libGmshEmbedded${LIBEXT}

INC = ${DASH}I. ${DASH}I../../Common

CFLAGS = ${OPTIM} ${FLAGS} ${INC} ${SYSINCLUDE} ${DASH}DHAVE_GMSH_EMBEDDED

SRC = GModel.cpp\
        GModelIO_Mesh.cpp\
      GEntity.cpp\
        GVertex.cpp GEdge.cpp GEdgeLoop.cpp GFace.cpp GRegion.cpp\
        discreteEdge.cpp discreteFace.cpp discreteRegion.cpp\
      MElement.cpp\
        MFace.cpp MVertex.cpp\
      NumericEmbedded.cpp\
        FunctionSpace.cpp\
      StringUtils.cpp\
      GmshEmbedded.cpp

OBJ = ${SRC:.cpp=${OBJEXT}}

.SUFFIXES: ${OBJEXT} .cpp

${LIB}: ${OBJ} 
	${AR} ${ARFLAGS}${LIB} ${OBJ}
	${RANLIB} ${LIB}

.cpp${OBJEXT}:
	${CXX} ${CFLAGS} ${DASH}c $<

clean:
	rm -f *.o *.obj

distclean:
	rm -f *.a *.lib
	rm -f *.o *.obj
	mkdir tmp
	mv GmshEmbedded.* tmp
	rm -f *.cpp *.h
	mv tmp/* .
	rmdir tmp

depend:
	(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	${CXX} -MM ${CFLAGS} ${SRC} \
	) >Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	rm -f Makefile.new

# DO NOT DELETE THIS LINE
GModel.o: GModel.cpp GModel.h GVertex.h GEntity.h Range.h SPoint3.h \
  SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h SVector3.h GFace.h \
  GEdgeLoop.h Pair.h GRegion.h MElement.h GmshDefines.h MVertex.h MEdge.h \
  MFace.h ../../Common/Message.h FunctionSpace.h GmshMatrix.h \
  discreteRegion.h discreteFace.h discreteEdge.h discreteVertex.h \
  GmshEmbedded.h NumericEmbedded.h
GModelIO_Mesh.o: GModelIO_Mesh.cpp GModel.h GVertex.h GEntity.h Range.h \
  SPoint3.h SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h SVector3.h \
  GFace.h GEdgeLoop.h Pair.h GRegion.h GmshDefines.h MElement.h MVertex.h \
  MEdge.h MFace.h ../../Common/Message.h FunctionSpace.h GmshMatrix.h \
  discreteRegion.h discreteFace.h discreteEdge.h discreteVertex.h \
  StringUtils.h
GEntity.o: GEntity.cpp GModel.h GVertex.h GEntity.h Range.h SPoint3.h \
  SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h SVector3.h GFace.h \
  GEdgeLoop.h Pair.h GRegion.h MElement.h GmshDefines.h MVertex.h MEdge.h \
  MFace.h ../../Common/Message.h FunctionSpace.h GmshMatrix.h \
  VertexArray.h GmshEmbedded.h NumericEmbedded.h
GVertex.o: GVertex.cpp GVertex.h GEntity.h Range.h SPoint3.h \
  SBoundingBox3d.h GPoint.h SPoint2.h GFace.h GEdgeLoop.h GEdge.h \
  SVector3.h Pair.h MElement.h GmshDefines.h MVertex.h MEdge.h MFace.h \
  ../../Common/Message.h FunctionSpace.h GmshMatrix.h
GEdge.o: GEdge.cpp GModel.h GVertex.h GEntity.h Range.h SPoint3.h \
  SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h SVector3.h GFace.h \
  GEdgeLoop.h Pair.h GRegion.h MElement.h GmshDefines.h MVertex.h MEdge.h \
  MFace.h ../../Common/Message.h FunctionSpace.h GmshMatrix.h
GEdgeLoop.o: GEdgeLoop.cpp GEdgeLoop.h GEdge.h GEntity.h Range.h \
  SPoint3.h SBoundingBox3d.h GVertex.h GPoint.h SPoint2.h SVector3.h \
  ../../Common/Message.h
GFace.o: GFace.cpp GModel.h GVertex.h GEntity.h Range.h SPoint3.h \
  SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h SVector3.h GFace.h \
  GEdgeLoop.h Pair.h GRegion.h MElement.h GmshDefines.h MVertex.h MEdge.h \
  MFace.h ../../Common/Message.h FunctionSpace.h GmshMatrix.h \
  VertexArray.h GmshEmbedded.h NumericEmbedded.h
GRegion.o: GRegion.cpp GModel.h GVertex.h GEntity.h Range.h SPoint3.h \
  SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h SVector3.h GFace.h \
  GEdgeLoop.h Pair.h GRegion.h MElement.h GmshDefines.h MVertex.h MEdge.h \
  MFace.h ../../Common/Message.h FunctionSpace.h GmshMatrix.h
discreteEdge.o: discreteEdge.cpp discreteEdge.h GModel.h GVertex.h \
  GEntity.h Range.h SPoint3.h SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h \
  SVector3.h GFace.h GEdgeLoop.h Pair.h GRegion.h ../../Common/Message.h
discreteFace.o: discreteFace.cpp discreteFace.h GModel.h GVertex.h \
  GEntity.h Range.h SPoint3.h SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h \
  SVector3.h GFace.h GEdgeLoop.h Pair.h GRegion.h ../../Common/Message.h
discreteRegion.o: discreteRegion.cpp discreteRegion.h GModel.h GVertex.h \
  GEntity.h Range.h SPoint3.h SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h \
  SVector3.h GFace.h GEdgeLoop.h Pair.h GRegion.h
MElement.o: MElement.cpp MElement.h GmshDefines.h MVertex.h SPoint3.h \
  MEdge.h SVector3.h MFace.h ../../Common/Message.h FunctionSpace.h \
  GmshMatrix.h GEntity.h Range.h SBoundingBox3d.h GFace.h GPoint.h \
  GEdgeLoop.h GEdge.h GVertex.h SPoint2.h Pair.h GmshEmbedded.h \
  NumericEmbedded.h
MFace.o: MFace.cpp MFace.h MVertex.h SPoint3.h SVector3.h GmshEmbedded.h \
  NumericEmbedded.h
MVertex.o: MVertex.cpp MVertex.h SPoint3.h GEdge.h GEntity.h Range.h \
  SBoundingBox3d.h GVertex.h GPoint.h SPoint2.h SVector3.h GFace.h \
  GEdgeLoop.h Pair.h ../../Common/Message.h
NumericEmbedded.o: NumericEmbedded.cpp NumericEmbedded.h \
  ../../Common/Message.h
FunctionSpace.o: FunctionSpace.cpp FunctionSpace.h GmshMatrix.h \
  GmshDefines.h ../../Common/Message.h
StringUtils.o: StringUtils.cpp StringUtils.h
GmshEmbedded.o: GmshEmbedded.cpp GModel.h GVertex.h GEntity.h Range.h \
  SPoint3.h SBoundingBox3d.h GPoint.h SPoint2.h GEdge.h SVector3.h \
  GFace.h GEdgeLoop.h Pair.h GRegion.h GmshEmbedded.h NumericEmbedded.h
