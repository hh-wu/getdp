# GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# issues on https://gitlab.onelab.info/getdp/getdp/issues.

set(SRC
  ListUtils.cpp
    TreeUtils.cpp avl.cpp
    MallocUtils.cpp
    Message.cpp
    OS.cpp
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h)
append_getdp_src(src/common "${SRC};${HDR}")
