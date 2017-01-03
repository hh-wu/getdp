# GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@onelab.info>.

set(SRC
  ListUtils.cpp
    TreeUtils.cpp avl.cpp
    MallocUtils.cpp
    Message.cpp
    OS.cpp
)

file(GLOB HDR RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h) 
append_getdp_src(Common "${SRC};${HDR}")
