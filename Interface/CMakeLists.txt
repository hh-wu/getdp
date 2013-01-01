# GetDP - Copyright (C) 1997-2013 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@geuz.org>.

set(SRC
  ProData.cpp
  ProDefine.cpp
  ProParser.yy.cpp
  ProParser.tab.cpp
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(Interface "${SRC};${HDR}")
