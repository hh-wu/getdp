# GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# issues on https://gitlab.onelab.info/getdp/getdp/issues.

set(SRC
  ProData.cpp
  ProDefine.cpp
  ProParser.yy.cpp
  ProParser.tab.cpp
  MacroManager.cpp
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(Interface "${SRC};${HDR}")
