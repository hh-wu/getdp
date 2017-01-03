# GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@onelab.info>.

cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# do not warn about non-definition of WIN32 on cygwin
set(CMAKE_LEGACY_CYGWIN_WIN32 0)

# if CMAKE_BUILD_TYPE is specified use it; otherwise set the default
# build type to "RelWithDebInfo" ("-O2 -g" with gcc) prior to calling
# project()
if(DEFINED CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE} CACHE STRING "Choose build type")
else(DEFINED CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose build type")
endif(DEFINED CMAKE_BUILD_TYPE)

# this variable controls the default value of the options which are normally set
# to ON (useful if you want to configure a minimal version of GetDP: e.g. "cmake
# -DDEFAULT=0 -DENABLE_PETSC=1")
set(DEFAULT ON CACHE INTERNAL "Default value for enabled-by-default options")

macro(opt OPTION HELP VALUE)
  option(ENABLE_${OPTION} ${HELP} ${VALUE})
  set(OPT_TEXI "${OPT_TEXI}\n@item ENABLE_${OPTION}\n${HELP} (default: ${VALUE})")
endmacro(opt)

opt(ARPACK "Enable Arpack eigensolver (requires Fortran)" ${DEFAULT})
opt(CONTRIB_ARPACK "Enable Arpack eigensolver from GetDP's contrib folder (requires Fortran)" OFF)
opt(BLAS_LAPACK "Enable BLAS/Lapack for linear algebra (e.g. for Arpack)" ${DEFAULT})
opt(BUILD_LIB "Enable 'lib' target for building static GetDP library" OFF)
opt(BUILD_SHARED "Enable 'shared' target for building shared GetDP library" OFF)
opt(BUILD_DYNAMIC "Enable dynamic GetDP executable (linked with shared lib)" OFF)
opt(BUILD_ANDROID "Enable Android NDK library target (experimental)" OFF)
opt(BUILD_IOS "Enable iOS (ARM) library target (experimental)" OFF)
opt(FORTRAN "Enable Fortran (needed for Arpack/Sparskit/Zitsol & Bessel)" ${DEFAULT})
opt(GMSH "Enable Gmsh functions (for field interpolation)" ${DEFAULT})
opt(GSL "Enable GSL functions (for some built-in functions)" ${DEFAULT})
opt(HPDDM "Enable HPDDM support" ${DEFAULT})
opt(KERNEL "Enable kernel (required for actual computations)" ON)
opt(MPI "Enable MPI parallelization (with PETSc/SLEPc)" OFF)
opt(MULTIHARMONIC "Enable multi-harmonic support" OFF)
opt(NR "Enable NR functions (if GSL is unavailable)" ${DEFAULT})
opt(NX "Enable proprietary NX extension" OFF)
opt(OCTAVE "Enable Octave functions" OFF)
opt(OPENMP "Enable OpenMP parallelization of some functions (experimental)" OFF)
opt(PETSC "Enable PETSc linear solver" ${DEFAULT})
opt(PYTHON "Enable Python functions" ${DEFAULT})
opt(SLEPC "Enable SLEPc eigensolver" ${DEFAULT})
opt(SMALLFEM "Enable experimental SmallFem assembler" OFF)
opt(SPARSKIT "Enable Sparskit solver instead of PETSc (requires Fortran)" ${DEFAULT})
opt(PEWE "Enable PeWe exact solutions (requires Fortran)" ${DEFAULT})
opt(WRAP_PYTHON "Build Python wrappers" OFF)
opt(ZITSOL "Enable Zitsol solvers (requires PETSc and Fortran)" OFF)

if(ENABLE_FORTRAN)
  project(getdp CXX C Fortran)
else(ENABLE_FORTRAN)
  project(getdp CXX C)
endif(ENABLE_FORTRAN)

set(GETDP_MAJOR_VERSION 2)
set(GETDP_MINOR_VERSION 11)
set(GETDP_PATCH_VERSION 0)
set(GETDP_EXTRA_VERSION "" CACHE STRING "GetDP extra version string")

set(GETDP_VERSION "${GETDP_MAJOR_VERSION}.${GETDP_MINOR_VERSION}")
set(GETDP_VERSION "${GETDP_VERSION}.${GETDP_PATCH_VERSION}${GETDP_EXTRA_VERSION}")
set(GETDP_SHORT_LICENSE "GNU General Public License")

set(GETDP_API
  ${CMAKE_CURRENT_BINARY_DIR}/Common/GetDPConfig.h
  ${CMAKE_CURRENT_BINARY_DIR}/Common/GetDPVersion.h
  Kernel/GetDP.h
)

execute_process(COMMAND date "+%Y%m%d" OUTPUT_VARIABLE DATE
                OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND hostname OUTPUT_VARIABLE HOSTNAME
                OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND whoami OUTPUT_VARIABLE PACKAGER
                OUTPUT_STRIP_TRAILING_WHITESPACE)

if(NOT DATE)
  set(DATE "unknown")
endif(NOT DATE)
set(GETDP_DATE "${DATE}")

if(NOT HOSTNAME)
  set(HOSTNAME "unknown")
endif(NOT HOSTNAME)
set(GETDP_HOST "${HOSTNAME}")

if(NOT PACKAGER)
  set(PACKAGER "unknown")
endif(NOT PACKAGER)
set(GETDP_PACKAGER "${PACKAGER}")

if(APPLE)
  set(GETDP_OS "MacOSX")
elseif(CYGWIN)
  set(GETDP_OS "Windows")
else(APPLE)
  set(GETDP_OS "${CMAKE_SYSTEM_NAME}")
endif(APPLE)

include(CheckTypeSize)
include(CheckFunctionExists)
include(CheckIncludeFile)
include(CheckCXXCompilerFlag)

if(ENABLE_WRAP_PYTHON AND NOT ENABLE_BUILD_SHARED)
  set(ENABLE_BUILD_DYNAMIC ON)
endif(ENABLE_WRAP_PYTHON AND NOT ENABLE_BUILD_SHARED)

if(MSVC)
  if(ENABLE_MSVC_STATIC_RUNTIME)
    foreach(VAR
            CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
            CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO
            CMAKE_C_FLAGS CMAKE_C_FLAGS_DEBUG CMAKE_C_FLAGS_RELEASE
            CMAKE_C_FLAGS_MINSIZEREL CMAKE_C_FLAGS_RELWITHDEBINFO)
      if(${VAR} MATCHES "/MD")
        string(REGEX REPLACE "/MD" "/MT" ${VAR} "${${VAR}}")
      endif(${VAR} MATCHES "/MD")
    endforeach(VAR)
  endif(ENABLE_MSVC_STATIC_RUNTIME)
endif(MSVC)

if(ENABLE_OPENMP)
  find_package(OpenMP)
  if(OPENMP_FOUND)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
  endif(OPENMP_FOUND)
endif(ENABLE_OPENMP)

macro(append_getdp_src DIRNAME FILES)
  foreach(FILE ${FILES})
    list(APPEND LIST ${DIRNAME}/${FILE})
  endforeach(FILE)
  set(GETDP_SRC ${GETDP_SRC};${LIST} PARENT_SCOPE)
  set(GETDP_DIRS ${GETDP_DIRS};${DIRNAME} PARENT_SCOPE)
endmacro(append_getdp_src)

macro(find_all_libraries VARNAME LISTNAME PATH SUFFIX)
  set(${VARNAME})
  list(LENGTH ${LISTNAME} NUM_LIST)
  foreach(LIB ${${LISTNAME}})
    if("${PATH}" STREQUAL "")
      find_library(FOUND_LIB ${LIB} PATH_SUFFIXES ${SUFFIX})
    else("${PATH}" STREQUAL "")
      find_library(FOUND_LIB ${LIB} PATHS ${PATH} NO_DEFAULT_PATH)
    endif("${PATH}" STREQUAL "")
    if(FOUND_LIB)
      list(APPEND ${VARNAME} ${FOUND_LIB})
    endif(FOUND_LIB)
    unset(FOUND_LIB CACHE)
  endforeach(LIB)
  list(LENGTH ${VARNAME} NUM_FOUND_LIBRARIES)
  if(NUM_FOUND_LIBRARIES LESS NUM_LIST)
    set(${VARNAME})
  endif(NUM_FOUND_LIBRARIES LESS NUM_LIST)
endmacro(find_all_libraries)

macro(set_config_option VARNAME STRING)
  set(${VARNAME} TRUE)
  list(APPEND CONFIG_OPTIONS ${STRING})
  message(STATUS "Found " ${STRING})
endmacro(set_config_option)

macro(set_compile_flags LISTNAME FLAGS)
  foreach(FILE ${${LISTNAME}})
    get_source_file_property(PROP ${FILE} COMPILE_FLAGS)
    if(PROP)
      set_source_files_properties(${FILE} PROPERTIES COMPILE_FLAGS "${PROP} ${FLAGS}")
    else(PROP)
      set_source_files_properties(${FILE} PROPERTIES COMPILE_FLAGS "${FLAGS}")
    endif(PROP)
  endforeach(FILE)
endmacro(set_compile_flags)

# check if the machine is 64 bits (this is more reliable than using
# CMAKE_SIZEOF_VOID_P, which does not seem to work e.g. on some Suse
# machines)
check_type_size("void*" SIZEOF_VOID_P)
if(SIZEOF_VOID_P EQUAL 8)
  set_config_option(HAVE_64BIT_SIZE_T "64Bit")
endif(SIZEOF_VOID_P EQUAL 8)

if(ENABLE_BLAS_LAPACK)
  if(BLAS_LAPACK_LIBRARIES)
    # use libs as specified in the BLAS_LAPACK_LIBRARIES variable
    set_config_option(HAVE_BLAS "Blas(Custom)")
    set_config_option(HAVE_LAPACK "Lapack(Custom)")
    set(LAPACK_LIBRARIES ${BLAS_LAPACK_LIBRARIES})
  else(BLAS_LAPACK_LIBRARIES)
    if(MSVC)
      # on Windows with Visual C++ try really hard to find blas/lapack *without*
      # requiring a Fortran compiler: 1) try to find the Intel MKL libs using
      # the standard search path; if not found 2) try to get the reference
      # blas/lapack libs (useful for users with no Fortran compiler and no MKL
      # license, who can just download our precompiled "gmsh-dep" package)
      if(HAVE_64BIT_SIZE_T)
        set(MKL_PATH em64t/lib)
        set(MKL_LIBS_REQUIRED libguide40 mkl_intel_lp64 mkl_intel_thread mkl_core)
      else(HAVE_64BIT_SIZE_T)
        set(MKL_PATH ia32/lib)
        set(MKL_LIBS_REQUIRED libguide40 mkl_intel_c mkl_intel_thread mkl_core)
      endif(HAVE_64BIT_SIZE_T)
      find_all_libraries(LAPACK_LIBRARIES MKL_LIBS_REQUIRED "" ${MKL_PATH})
      if(LAPACK_LIBRARIES)
        set_config_option(HAVE_BLAS "Blas(IntelMKL)")
        set_config_option(HAVE_LAPACK "Lapack(IntelMKL)")
      else(LAPACK_LIBRARIES)
        set(REFLAPACK_LIBS_REQUIRED lapack blas g2c gcc)
        find_all_libraries(LAPACK_LIBRARIES REFLAPACK_LIBS_REQUIRED "" "")
        if(LAPACK_LIBRARIES)
          set_config_option(HAVE_BLAS "Blas(Reference)")
          set_config_option(HAVE_LAPACK "Lapack(Reference)")
        endif(LAPACK_LIBRARIES)
      endif(LAPACK_LIBRARIES)
    elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
      # on Linux try to find the Intel MKL without a Fortran compiler
      if(HAVE_64BIT_SIZE_T)
        set(MKL_PATH lib/em64t)
      else(HAVE_64BIT_SIZE_T)
        set(MKL_PATH lib/32)
      endif(HAVE_64BIT_SIZE_T)
      set(MKL_LIBS_REQUIRED mkl_gf_lp64 iomp5 mkl_gnu_thread mkl_core guide pthread)
      find_all_libraries(LAPACK_LIBRARIES MKL_LIBS_REQUIRED "" ${MKL_PATH})
      if(NOT LAPACK_LIBRARIES)
        # match lapack 9.0 on 64bit
        set(MKL_LIBS_REQUIRED mkl_lapack mkl_em64t guide)
        find_all_libraries(LAPACK_LIBRARIES MKL_LIBS_REQUIRED "" ${MKL_PATH})
      endif(NOT LAPACK_LIBRARIES)
      if(LAPACK_LIBRARIES)
        set_config_option(HAVE_BLAS "Blas(IntelMKL)")
        set_config_option(HAVE_LAPACK "Lapack(IntelMKL)")
      else(LAPACK_LIBRARIES)
        # on Linux also try to find ATLAS without a Fortran compiler, because
        # cmake ships with a buggy FindBLAS e.g. on Ubuntu Lucid Lynx
        set(ATLAS_LIBS_REQUIRED lapack f77blas cblas atlas)
        find_all_libraries(LAPACK_LIBRARIES ATLAS_LIBS_REQUIRED "" "")
        if(LAPACK_LIBRARIES)
          set_config_option(HAVE_BLAS "Blas(ATLAS)")
          set_config_option(HAVE_LAPACK "Lapack(ATLAS)")
        else(LAPACK_LIBRARIES)
          # try with generic names
          set(GENERIC_LIBS_REQUIRED lapack blas pthread)
          find_all_libraries(LAPACK_LIBRARIES GENERIC_LIBS_REQUIRED "" "")
          if(LAPACK_LIBRARIES)
            set_config_option(HAVE_BLAS "Blas(Generic)")
            set_config_option(HAVE_LAPACK "Lapack(Generic)")
            find_library(GFORTRAN_LIB gfortran)
            if(GFORTRAN_LIB)
              list(APPEND LAPACK_LIBRARIES ${GFORTRAN_LIB})
            endif(GFORTRAN_LIB)
          endif(LAPACK_LIBRARIES)
        endif(LAPACK_LIBRARIES)
      endif(LAPACK_LIBRARIES)
    elseif(${CMAKE_SYSTEM_NAME} MATCHES "SunOS")
      # on SunOS we know blas and lapack are available in sunperf
      set(LAPACK_FLAGS -library=sunperf)
      set_config_option(HAVE_BLAS "Blas(SunPerf)")
      set_config_option(HAVE_LAPACK "Lapack(SunPerf)")
    elseif(APPLE)
      # on Mac we also know that blas and lapack are available
      set(LAPACK_LIBRARIES "-llapack -lblas")
      set_config_option(HAVE_BLAS "Blas(VecLib)")
      set_config_option(HAVE_LAPACK "Lapack(VecLib)")
    endif(MSVC)

    if(NOT HAVE_BLAS OR NOT HAVE_LAPACK)
      # if we haven't found blas and lapack check for OpenBlas
      set(OPENBLAS_LIBS_REQUIRED openblas)
      find_all_libraries(LAPACK_LIBRARIES OPENBLAS_LIBS_REQUIRED "" "")
      if(LAPACK_LIBRARIES)
        set_config_option(HAVE_BLAS "Blas(OpenBlas)")
        set_config_option(HAVE_LAPACK "Lapack(OpenBlas)")
        find_library(GFORTRAN_LIB gfortran)
        if(GFORTRAN_LIB)
          list(APPEND LAPACK_LIBRARIES ${GFORTRAN_LIB})
        endif(GFORTRAN_LIB)
      endif(LAPACK_LIBRARIES)  
    endif(NOT HAVE_BLAS OR NOT HAVE_LAPACK)

    if(NOT HAVE_BLAS OR NOT HAVE_LAPACK)
      # if we still haven't found blas and lapack, use the standard cmake tests,
      # which require a working Fortran compiler
      enable_language(Fortran)
      find_package(BLAS)
      if(BLAS_FOUND)
        set_config_option(HAVE_BLAS "Blas")
        find_package(LAPACK)
        if(LAPACK_FOUND)
          set_config_option(HAVE_LAPACK "Lapack")
        else(LAPACK_FOUND)
          set(LAPACK_LIBRARIES ${BLAS_LIBRARIES})
        endif(LAPACK_FOUND)
      endif(BLAS_FOUND)
    endif(NOT HAVE_BLAS OR NOT HAVE_LAPACK)
  endif(BLAS_LAPACK_LIBRARIES)
endif(ENABLE_BLAS_LAPACK)

add_subdirectory(Common)
add_subdirectory(Interface)
add_subdirectory(Numeric)

if(ENABLE_KERNEL)
  add_subdirectory(Kernel)
  set_config_option(HAVE_KERNEL "Kernel")
endif(ENABLE_KERNEL)

if(ENABLE_MPI)
  find_package(MPI)
  if(MPI_FOUND)
    set_config_option(HAVE_MPI "MPI")
    list(APPEND EXTERNAL_INCLUDES ${MPI_INCLUDE_DIR})
    list(APPEND EXTERNAL_LIBRARIES ${MPI_LIBRARIES})
    include(CMakeForceCompiler)
    # Warning: this actually requires cmake >= 2.8.5
    cmake_force_c_compiler(${MPI_C_COMPILER} "MPI C Compiler")
    cmake_force_cxx_compiler(${MPI_CXX_COMPILER} "MPI C++ Compiler")
    cmake_force_fortran_compiler(${MPI_Fortran_COMPILER} "MPI Fortran Compiler")
  endif(MPI_FOUND)
endif(ENABLE_MPI)

if(ENABLE_GMSH)
  find_library(GMSH_LIB Gmsh PATH_SUFFIXES lib)
  find_path(GMSH_INC "gmsh/Gmsh.h" PATH_SUFFIXES include)
  if(GMSH_LIB AND GMSH_INC)
    list(APPEND EXTERNAL_LIBRARIES ${GMSH_LIB})
    list(APPEND EXTERNAL_INCLUDES ${GMSH_INC})
    set_config_option(HAVE_GMSH "Gmsh")
  endif(GMSH_LIB AND GMSH_INC)
endif(ENABLE_GMSH)

if(ENABLE_SMALLFEM)
  find_library(SMALLFEM_LIB sf PATH_SUFFIXES lib)
  find_path(SMALLFEM_INC "functionSpace/functionSpace.h" PATH_SUFFIXES include)
  if(SMALLFEM_LIB AND SMALLFEM_INC)
    list(APPEND EXTERNAL_LIBRARIES ${SMALLFEM_LIB})
    list(APPEND EXTERNAL_INCLUDES ${SMALLFEM_INC})
    set_config_option(HAVE_SMALLFEM "SmallFem")
  endif(SMALLFEM_LIB AND SMALLFEM_INC)
endif(ENABLE_SMALLFEM)

if(ENABLE_PETSC)
  if(PETSC_DIR)
    set(ENV_PETSC_DIR ${PETSC_DIR})
  else(PETSC_DIR)
    set(ENV_PETSC_DIR $ENV{PETSC_DIR})
  endif(PETSC_DIR)
  if(PETSC_ARCH)
    set(ENV_PETSC_ARCH ${PETSC_ARCH})
  else(PETSC_ARCH)
    set(ENV_PETSC_ARCH $ENV{PETSC_ARCH})
  endif(PETSC_ARCH)
  set(PETSC_POSSIBLE_CONF_FILES 
      ${ENV_PETSC_DIR}/${ENV_PETSC_ARCH}/conf/petscvariables
      ${ENV_PETSC_DIR}/${ENV_PETSC_ARCH}/lib/petsc-conf/petscvariables
      ${ENV_PETSC_DIR}/${ENV_PETSC_ARCH}/lib/petsc/conf/petscvariables)
  foreach(FILE ${PETSC_POSSIBLE_CONF_FILES})
    if(EXISTS ${FILE})
      # old-style PETSc installations (using PETSC_DIR and PETSC_ARCH)
      message(STATUS "Using PETSc dir: ${ENV_PETSC_DIR}")
      message(STATUS "Using PETSc arch: ${ENV_PETSC_ARCH}")
      # find includes by parsing the petscvariables file
      file(STRINGS ${FILE} PETSC_VARIABLES NEWLINE_CONSUME)
    endif(EXISTS ${FILE})
  endforeach(FILE)
  if(PETSC_VARIABLES)
    # try to find PETSC_CC_INCLUDES for PETSc >= 3.4
    string(REGEX MATCH "PETSC_CC_INCLUDES = [^\n\r]*" PETSC_PACKAGES_INCLUDES
           ${PETSC_VARIABLES})
    if(PETSC_PACKAGES_INCLUDES)
      string(REPLACE "PETSC_CC_INCLUDES = " "" PETSC_PACKAGES_INCLUDES
             ${PETSC_PACKAGES_INCLUDES})
    else(PETSC_PACKAGES_INCLUDES)
      # try to find PETSC_PACKAGES_INCLUDES in older versions
      list(APPEND EXTERNAL_INCLUDES ${ENV_PETSC_DIR}/include)
      list(APPEND EXTERNAL_INCLUDES ${ENV_PETSC_DIR}/${ENV_PETSC_ARCH}/include)
      string(REGEX MATCH "PACKAGES_INCLUDES = [^\n\r]*" PETSC_PACKAGES_INCLUDES
             ${PETSC_VARIABLES})
      string(REPLACE "PACKAGES_INCLUDES = " "" PETSC_PACKAGES_INCLUDES
             ${PETSC_PACKAGES_INCLUDES})
    endif(PETSC_PACKAGES_INCLUDES)
    if(PETSC_PACKAGES_INCLUDES)
      if(PETSC_PACKAGES_INCLUDES)
        string(REPLACE "-I" "" PETSC_PACKAGES_INCLUDES ${PETSC_PACKAGES_INCLUDES})
        string(REPLACE " " ";" PETSC_PACKAGES_INCLUDES ${PETSC_PACKAGES_INCLUDES})
        foreach(VAR ${PETSC_PACKAGES_INCLUDES})
          list(APPEND EXTERNAL_INCLUDES ${VAR})
        endforeach(VAR)
      endif(PETSC_PACKAGES_INCLUDES)
    endif(PETSC_PACKAGES_INCLUDES)
    # find libraries (<= 3.0)
    set(PETSC_LIBS_REQUIRED petscksp petscdm petscmat petscvec petsc)
    find_all_libraries(PETSC_LIBS PETSC_LIBS_REQUIRED
                       ${ENV_PETSC_DIR}/${ENV_PETSC_ARCH}/lib "")
    # petsc 3.1 creates only one library (libpetsc)
    if(NOT PETSC_LIBS)
      find_library(PETSC_LIBS petsc PATHS ${ENV_PETSC_DIR}/${ENV_PETSC_ARCH}/lib
                   NO_DEFAULT_PATH)
    endif(NOT PETSC_LIBS)
    if(PETSC_LIBS)
      set_config_option(HAVE_PETSC "PETSc")
      if(NOT HAVE_BLAS)
        set_config_option(HAVE_BLAS "Blas(PETSc)")
      endif(NOT HAVE_BLAS)
      if(NOT HAVE_LAPACK)
        set_config_option(HAVE_LAPACK "Lapack(PETSc)")
      endif(NOT HAVE_LAPACK)
    endif(PETSC_LIBS)
    # find slepc (needs to be linked in before petsc)
    if(ENABLE_SLEPC)
      if(SLEPC_DIR)
        set(ENV_SLEPC_DIR ${SLEPC_DIR})
      else(SLEPC_DIR)
        set(ENV_SLEPC_DIR $ENV{SLEPC_DIR})
      endif(SLEPC_DIR)
      find_library(SLEPC_LIB slepc PATHS ${ENV_SLEPC_DIR}/${ENV_PETSC_ARCH}/lib
                   NO_DEFAULT_PATH)
      if(SLEPC_LIB)
        find_path(SLEPC_INC "slepc.h" PATHS ${ENV_SLEPC_DIR} PATH_SUFFIXES include
                  ${ENV_PETSC_ARCH}/include include/slepc NO_DEFAULT_PATH)
        if(SLEPC_INC)
          message(STATUS "Using SLEPc dir: ${ENV_SLEPC_DIR}")
          set_config_option(HAVE_SLEPC "SLEPc")
          list(APPEND EXTERNAL_LIBRARIES ${SLEPC_LIB})
          list(APPEND EXTERNAL_INCLUDES ${SLEPC_INC})
          find_path(SLEPC_INC2 "slepcconf.h" PATHS ${ENV_SLEPC_DIR}
                    PATH_SUFFIXES ${ENV_PETSC_ARCH}/include NO_DEFAULT_PATH)
          if(SLEPC_INC2)
            list(APPEND EXTERNAL_INCLUDES ${SLEPC_INC2})
          endif(SLEPC_INC2)
        endif(SLEPC_INC)
      endif(SLEPC_LIB)
    endif(ENABLE_SLEPC)
    list(APPEND EXTERNAL_LIBRARIES ${PETSC_LIBS})
    # find additional libraries to link with
    string(REGEX MATCH "PACKAGES_LIBS = [^\n\r]*" PLIBS ${PETSC_VARIABLES})
    if(PLIBS)
      string(REPLACE "PACKAGES_LIBS = " "" PLIBS ${PLIBS})
      string(STRIP ${PLIBS} PLIBS)
      list(APPEND EXTERNAL_LIBRARIES "${PLIBS}")
    endif(PLIBS)
    string(REGEX MATCH "PETSC_EXTERNAL_LIB_BASIC = [^\n\r]*" PLIBS_BASIC ${PETSC_VARIABLES})
    if(PLIBS_BASIC)
      string(REPLACE "PETSC_EXTERNAL_LIB_BASIC = " "" PLIBS_BASIC ${PLIBS_BASIC})
      string(STRIP ${PLIBS_BASIC} PLIBS_BASIC)
      list(APPEND EXTERNAL_LIBRARIES "${PLIBS_BASIC}")
    endif(PLIBS_BASIC)
    string(REGEX MATCH "PCC_LINKER_LIBS = [^\n\r]*" LLIBS ${PETSC_VARIABLES})
    if(LLIBS)
      string(REPLACE "PCC_LINKER_LIBS = " "" LLIBS ${LLIBS})
      string(STRIP ${LLIBS} LLIBS)
      list(APPEND EXTERNAL_LIBRARIES "${LLIBS}")
    endif(LLIBS)
  else(PETSC_VARIABLES)
    # new-style PETSc installations (in standard system directories)
    find_library(PETSC_LIBS petsc)
    find_path(PETSC_INC "petsc.h" PATH_SUFFIXES include/petsc)
    if(PETSC_LIBS AND PETSC_INC)
      set_config_option(HAVE_PETSC "PETSc")
      if(ENABLE_SLEPC)
        find_library(SLEPC_LIB slepc)
        find_path(SLEPC_INC "slepc.h" PATH_SUFFIXES include/slepc)
        if(SLEPC_LIB AND SLEPC_INC)
          set_config_option(HAVE_SLEPC "SLEPc")
          list(APPEND EXTERNAL_LIBRARIES ${SLEPC_LIB})
          list(APPEND EXTERNAL_INCLUDES ${SLEPC_INC})
        endif(SLEPC_LIB AND SLEPC_INC)
      endif(ENABLE_SLEPC)
      list(APPEND EXTERNAL_LIBRARIES ${PETSC_LIBS})
      list(APPEND EXTERNAL_INCLUDES ${PETSC_INC})
    endif(PETSC_LIBS AND PETSC_INC)
  endif(PETSC_VARIABLES)
endif(ENABLE_PETSC)

if(ENABLE_ARPACK AND NOT ENABLE_CONTRIB_ARPACK)
  if(HAVE_LAPACK OR HAVE_PETSC)
    find_library(ARPACK_LIB arpack PATH_SUFFIXES lib)
    if(ARPACK_LIB)
      list(APPEND EXTERNAL_LIBRARIES ${ARPACK_LIB})
      set_config_option(HAVE_ARPACK "Arpack")
    endif(ARPACK_LIB)
  endif(HAVE_LAPACK OR HAVE_PETSC)
endif(ENABLE_ARPACK AND NOT ENABLE_CONTRIB_ARPACK)

if(ENABLE_HPDDM)
  find_path(HPDDM_INC "HPDDM.hpp" PATH_SUFFIXES include)
  if(HPDDM_INC)
    list(APPEND EXTERNAL_INCLUDES ${HPDDM_INC})
    set_config_option(HAVE_HPDDM "HPDDM")
    get_source_file_property(PROP Kernel/Operation_HPDDM.cpp COMPILE_FLAGS)
    if(PROP)
      set_source_files_properties(Kernel/Operation_HPDDM.cpp PROPERTIES
                                  COMPILE_FLAGS "${PROP} -std=c++11")
    else(PROP)
      set_source_files_properties(Kernel/Operation_HPDDM.cpp PROPERTIES
                                  COMPILE_FLAGS "-std=c++11")
    endif(PROP)
  endif(HPDDM_INC)
endif(ENABLE_HPDDM)

if(ENABLE_FORTRAN)
  if(ENABLE_SPARSKIT AND NOT HAVE_PETSC)
    add_subdirectory(contrib/Sparskit)
    include_directories(contrib/Sparskit)
    set_config_option(HAVE_SPARSKIT "Sparskit")
    file(GLOB_RECURSE SPARSKIT_SRC contrib/Sparskit/*.cpp contrib/Sparskit/*.f
         contrib/Sparskit/*.F)
    set_compile_flags(SPARSKIT_SRC "-DHAVE_ILU_FLOAT")
  endif(ENABLE_SPARSKIT AND NOT HAVE_PETSC)

  if(ENABLE_PEWE)
    add_subdirectory(contrib/pewe)
    set_config_option(HAVE_PEWE "PeWe")
  endif(ENABLE_PEWE)
  
  if(ENABLE_ZITSOL AND HAVE_PETSC)
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/contrib/ZITSOL_1/getdp.c)
      add_subdirectory(contrib/ZITSOL_1)
      set_config_option(HAVE_ZITSOL "Zitsol")
    endif(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/contrib/ZITSOL_1/getdp.c)
  endif(ENABLE_ZITSOL AND HAVE_PETSC)

  if(ENABLE_ARPACK OR ENABLE_CONTRIB_ARPACK)
    if(HAVE_LAPACK OR HAVE_PETSC)
      if(NOT ARPACK_LIB)
        if(ENABLE_CONTRIB_ARPACK)
          message(STATUS "Using contrib/ARPACK")
        else(ENABLE_CONTRIB_ARPACK)
          message(STATUS "System ARPACK not found: using contrib/Arpack instead")
        endif(ENABLE_CONTRIB_ARPACK)
        add_subdirectory(contrib/Arpack)
        set_config_option(HAVE_ARPACK "Arpack")
      endif(NOT ARPACK_LIB)
    endif(HAVE_LAPACK OR HAVE_PETSC)
  endif(ENABLE_ARPACK OR ENABLE_CONTRIB_ARPACK)

  if(CMAKE_Fortran_COMPILER_ID MATCHES "GNU")
    if(CMAKE_Fortran_COMPILER MATCHES "gfortran")
      list(APPEND LAPACK_LIBRARIES -lgfortran)
    elseif(CMAKE_Fortran_COMPILER MATCHES "f95")
      list(APPEND LAPACK_LIBRARIES -lgfortran)
    elseif(CMAKE_Fortran_COMPILER MATCHES "g77")
      list(APPEND LAPACK_LIBRARIES -lg2c)
    endif(CMAKE_Fortran_COMPILER MATCHES "gfortran")
  endif(CMAKE_Fortran_COMPILER_ID MATCHES "GNU")
else(ENABLE_FORTRAN)
  set_config_option(HAVE_NO_FORTRAN "NoFortran")
endif(ENABLE_FORTRAN)

if(NOT HAVE_PETSC AND NOT HAVE_SPARSKIT)
  message(STATUS "Warning: building without PETSc and without Sparskit")
endif(NOT HAVE_PETSC AND NOT HAVE_SPARSKIT)

if(ENABLE_NX)
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/contrib/NX/Unv_Format.cpp)
    message(STATUS "Note: Building non-free version of GetDP with code "
            "(C) 2012 Dr. Binde Ingenieure.")
    add_subdirectory(contrib/NX)
    set_config_option(HAVE_NX "NX")
  endif(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/contrib/NX/Unv_Format.cpp)
endif(ENABLE_NX)

if(ENABLE_GSL)
  find_library(GSL_LIB gsl PATH_SUFFIXES lib)
  find_library(GSLCBLAS_LIB gslcblas PATH_SUFFIXES lib)
  find_path(GSL_INC "gsl/gsl_min.h" PATH_SUFFIXES include)
  if(GSL_LIB AND GSLCBLAS_LIB AND GSL_INC)
    list(APPEND EXTERNAL_LIBRARIES ${GSL_LIB} ${GSLCBLAS_LIB})
    list(APPEND EXTERNAL_INCLUDES ${GSL_INC})
    set_config_option(HAVE_GSL "Gsl")
  endif(GSL_LIB AND GSLCBLAS_LIB AND GSL_INC)
endif(ENABLE_GSL)

if(ENABLE_NR AND NOT HAVE_GSL)
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/contrib/NR/newt.cpp)
    message(STATUS "Note: Building non-free version of GetDP, with code "
            "(C) 1986-92 Numerical Recipes Software.")
    add_subdirectory(contrib/NR)
    set_config_option(HAVE_NR "NR")
  endif(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/contrib/NR/newt.cpp)
endif(ENABLE_NR AND NOT HAVE_GSL)

if(ENABLE_OCTAVE)
  find_library(OCTAVE_LIB octave)
  find_library(OCTINTERP_LIB octinterp)
  find_path(OCTAVE_INC "octave/oct.h")
  if(OCTAVE_LIB AND OCTINTERP_LIB AND OCTAVE_INC)
    list(APPEND EXTERNAL_LIBRARIES ${OCTAVE_LIB} ${OCTINTERP_LIB})
    list(APPEND EXTERNAL_INCLUDES ${OCTAVE_INC})
    set_config_option(HAVE_OCTAVE "Octave")
  endif(OCTAVE_LIB AND OCTINTERP_LIB AND OCTAVE_INC)
endif(ENABLE_OCTAVE)

if(ENABLE_PYTHON)
  find_package(PythonLibs)
  if(PYTHONLIBS_FOUND)
    list(APPEND EXTERNAL_LIBRARIES ${PYTHON_LIBRARIES})
    list(APPEND EXTERNAL_INCLUDES ${PYTHON_INCLUDE_DIRS})
    set_config_option(HAVE_PYTHON "Python")
  endif(PYTHONLIBS_FOUND)
endif(ENABLE_PYTHON)

if(ENABLE_MULTIHARMONIC)
  message(STATUS "Warning: building with multi-harmonic support (tested and working with a real version of Petsc!)")
  set_config_option(HAVE_MULTIHARMONIC "Multi-Harmonic")
endif(ENABLE_MULTIHARMONIC)

check_function_exists(vsnprintf HAVE_VSNPRINTF)
if(NOT HAVE_VSNPRINTF AND NOT ENABLE_BUILD_IOS)
  set_config_option(HAVE_NO_VSNPRINTF "NoVsnprintf")
endif(NOT HAVE_VSNPRINTF AND NOT ENABLE_BUILD_IOS)

check_include_file(sys/socket.h HAVE_SYS_SOCKET_H)
if(HAVE_SYS_SOCKET_H)
  set(CMAKE_EXTRA_INCLUDE_FILES sys/socket.h)
endif(HAVE_SYS_SOCKET_H)
check_type_size(socklen_t SOCKLEN_T_SIZE)
set(CMAKE_EXTRA_INCLUDE_FILES)
if(NOT SOCKLEN_T_SIZE AND NOT ENABLE_BUILD_IOS)
  set_config_option(HAVE_NO_SOCKLEN_T "NoSocklenT")
endif(NOT SOCKLEN_T_SIZE AND NOT ENABLE_BUILD_IOS)

check_include_file(stdint.h HAVE_STDINT_H)
if(HAVE_STDINT_H)
  set(CMAKE_EXTRA_INCLUDE_FILES stdint.h)
else(HAVE_STDINT_H)
  set_config_option(HAVE_NO_STDINT_H "NoStdintH")
endif(HAVE_STDINT_H)
check_type_size(intptr_t INTPTR_T_SIZE)
set(CMAKE_EXTRA_INCLUDE_FILES)
if(NOT INTPTR_T_SIZE AND NOT ENABLE_BUILD_IOS)
  set_config_option(HAVE_NO_INTPTR_T "NoIntptrT")
endif(NOT INTPTR_T_SIZE AND NOT ENABLE_BUILD_IOS)

if(MSVC)
  add_definitions(-D_USE_MATH_DEFINES -DNOMINMAX
                  -D_CRT_SECURE_NO_DEPRECATE -D_SCL_SECURE_NO_DEPRECATE)
endif(MSVC)

if(WIN32 OR CYGWIN)
  list(APPEND EXTERNAL_LIBRARIES winmm wsock32 ws2_32 psapi)
endif(WIN32 OR CYGWIN)

# disable compile optimization on some known problematic files
check_cxx_compiler_flag("-O0" NOOPT)
if(NOOPT OR ENABLE_BUILD_IOS)
  file(GLOB_RECURSE NON_OPTIMIZED_SRC contrib/NR/*.cpp)
  set_compile_flags(NON_OPTIMIZED_SRC "-O0")
endif(NOOPT OR ENABLE_BUILD_IOS)

# force full warnings to encourage everybody to write clean(er) code
check_cxx_compiler_flag("-Wall" WALL)
if(WALL AND NOT MSVC)
  file(GLOB_RECURSE WALL_SRC Common/*.cpp Interface/*.cpp Kernel/*.cpp
       Main/*.cpp Numeric/*.cpp)
  set(WF "-Wall")
  check_cxx_compiler_flag("-Wmisleading-indentation" WIND)
  if(WIND)
    set(WF "${WF} -Wno-misleading-indentation")
  endif(WIND)
  set_compile_flags(WALL_SRC ${WF})
endif(WALL AND NOT MSVC)

# don't issue warnings for contributed libraries
check_cxx_compiler_flag("-w" NOWARN)
if(NOWARN)
  file(GLOB_RECURSE NOWARN_SRC contrib/*.cpp contrib/*.c contrib/*.f)
  set_compile_flags(NOWARN_SRC "-w")
endif(NOWARN)

list(SORT CONFIG_OPTIONS)
set(GETDP_CONFIG_OPTIONS "")
foreach(OPT ${CONFIG_OPTIONS})
  set(GETDP_CONFIG_OPTIONS "${GETDP_CONFIG_OPTIONS} ${OPT}")
endforeach(OPT)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Common/GetDPConfig.h.in
               ${CMAKE_CURRENT_BINARY_DIR}/Common/GetDPConfig.h)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Common/GetDPVersion.h.in
               ${CMAKE_CURRENT_BINARY_DIR}/Common/GetDPVersion.h)

# process cmake environment variables so we can append them to the -I
# include commands. This is not recommended (we should only use the
# cache variables) but it is very convenient: otherwise we have to
# remember providing the -D... options to cmake for each new build.
set(ENV_CMAKE_PREFIX_PATH $ENV{CMAKE_PREFIX_PATH})
set(ENV_CMAKE_INCLUDE_PATH $ENV{CMAKE_INCLUDE_PATH})
if(UNIX)
  if(ENV_CMAKE_PREFIX_PATH)
    string(REPLACE ":" ";" ENV_CMAKE_PREFIX_PATH ${ENV_CMAKE_PREFIX_PATH})
  endif(ENV_CMAKE_PREFIX_PATH)
  if(ENV_CMAKE_INCLUDE_PATH)
    string(REPLACE ":" ";" ENV_CMAKE_INCLUDE_PATH ${ENV_CMAKE_INCLUDE_PATH})
  endif(ENV_CMAKE_INCLUDE_PATH)
endif(UNIX)
list(APPEND EXTERNAL_INCLUDES ${CMAKE_INCLUDE_PATH} ${ENV_CMAKE_INCLUDE_PATH})
list(APPEND EXTERNAL_INCLUDES ${CMAKE_PREFIX_PATH} ${ENV_CMAKE_PREFIX_PATH})
foreach(DIR ${CMAKE_PREFIX_PATH} ${ENV_CMAKE_PREFIX_PATH})
  list(APPEND EXTERNAL_INCLUDES ${DIR}/include)
endforeach(DIR)

if(EXTERNAL_INCLUDES)
  list(REMOVE_DUPLICATES EXTERNAL_INCLUDES)
endif(EXTERNAL_INCLUDES)

set(LINK_LIBRARIES ${EXTERNAL_LIBRARIES} ${LAPACK_LIBRARIES})

# Linux-specific linking
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  # try to use static gfortran on static Linux builds
  if(NOT ENABLE_BUILD_DYNAMIC AND NOT ENABLE_BUILD_SHARED)
    set(CMAKE_Fortran_IMPLICIT_LINK_LIBRARIES)
    set(CMAKE_EXE_LINK_DYNAMIC_C_FLAGS)
    set(CMAKE_EXE_LINK_DYNAMIC_CXX_FLAGS)
    find_library(GFORTRAN_STATIC libgfortran.a)
    if(GFORTRAN_STATIC)
      message(STATUS "Using static libgfortran")
      foreach(STR ${LINK_LIBRARIES})
        string(REPLACE "-lgfortran" ${GFORTRAN_STATIC} STR2 ${STR})
        list(APPEND LINK_LIBRARIES2 ${STR2})
      endforeach(STR)
      set(LINK_LIBRARIES ${LINK_LIBRARIES2})
    endif(GFORTRAN_STATIC)
  endif(NOT ENABLE_BUILD_DYNAMIC AND NOT ENABLE_BUILD_SHARED)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

# we could specify include dirs more selectively, but this is simpler
include_directories(Common Interface Kernel Numeric ${EXTERNAL_INCLUDES}
                    ${CMAKE_CURRENT_BINARY_DIR}/Common)

# set this for external codes that might include this CMakeList file
set(GETDP_EXTERNAL_INCLUDE_DIRS ${EXTERNAL_INCLUDES} CACHE
    STRING "External include directories" FORCE)
set(GETDP_EXTERNAL_LIBRARIES ${EXTERNAL_LIBRARIES} CACHE
    STRING "External libraries" FORCE)

# group sources for easier navigation in IDEs
foreach(DIR ${GETDP_DIRS})
  string(REGEX REPLACE "\\+" "\\\\+" DIR ${DIR})
  source_group(${DIR} REGULAR_EXPRESSION ${DIR}/.*)
endforeach(DIR)

# static library target
if(ENABLE_BUILD_LIB)
  add_library(lib STATIC ${GETDP_SRC})
  set_target_properties(lib PROPERTIES OUTPUT_NAME GetDP)
  if(MSVC)
    set_target_properties(lib PROPERTIES DEBUG_POSTFIX d)
    if(ENABLE_MSVC_STATIC_RUNTIME)
      set_target_properties(lib PROPERTIES LINK_FLAGS_RELEASE "/nodefaultlib:LIBCMT")
    endif(ENABLE_MSVC_STATIC_RUNTIME)
  endif(MSVC)
endif(ENABLE_BUILD_LIB)

# shared library target
if(ENABLE_BUILD_SHARED OR ENABLE_BUILD_DYNAMIC)
  add_library(shared SHARED ${GETDP_SRC})
  set_target_properties(shared PROPERTIES OUTPUT_NAME GetDP)
  set_target_properties(shared PROPERTIES 
    VERSION ${GETDP_MAJOR_VERSION}.${GETDP_MINOR_VERSION}.${GETDP_PATCH_VERSION}
    SOVERSION ${GETDP_MAJOR_VERSION}.${GETDP_MINOR_VERSION})
  if(HAVE_LAPACK AND LAPACK_FLAGS)
    set_target_properties(shared PROPERTIES LINK_FLAGS ${LAPACK_FLAGS})
  endif(HAVE_LAPACK AND LAPACK_FLAGS)
  if(MSVC AND ENABLE_MSVC_STATIC_RUNTIME)
    message(STATUS "Note: By enabling ENABLE_MSVC_STATIC_RUNTIME, shared library "
            "won't link. In MSVC change /MT to /MD in the shared project properties")
  endif(MSVC AND ENABLE_MSVC_STATIC_RUNTIME)
  target_link_libraries(shared ${LINK_LIBRARIES})
endif(ENABLE_BUILD_SHARED OR ENABLE_BUILD_DYNAMIC)

if(ENABLE_BUILD_IOS)
  find_file(CMAKE_TOOLCHAIN_FILE "ios.cmake")
  if(NOT CMAKE_TOOLCHAIN_FILE)
    message(FATAL_ERROR "Cannot compile GetDP for iOS without a toolchain")
  endif(NOT CMAKE_TOOLCHAIN_FILE)
endif(ENABLE_BUILD_IOS)

if(ENABLE_BUILD_ANDROID)
  find_file(CMAKE_TOOLCHAIN_FILE "android.toolchain.cmake")
  if(NOT CMAKE_TOOLCHAIN_FILE)
    message(SEND_ERROR "Cannot compile Getdp for android without a toolchain.")
  endif(NOT CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_BUILD_TYPE Release)
  set(LIBRARY_OUTPUT_PATH_ROOT ${CMAKE_CURRENT_BINARY_DIR})
  set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/libs/)
  add_definitions(-DBUILD_ANDROID)
  add_library(androidGetdp SHARED ${GETDP_SRC})
  set_target_properties(androidGetdp PROPERTIES OUTPUT_NAME GetDP)
  target_link_libraries(androidGetdp ${LINK_LIBRARIES} ${LIBRARY_DEPS})
endif(ENABLE_BUILD_ANDROID)

# binary target
if(ENABLE_BUILD_DYNAMIC)
  add_executable(getdp Main/Main.cpp)
  target_link_libraries(getdp shared)
else(ENABLE_BUILD_DYNAMIC)
  add_executable(getdp Main/Main.cpp ${GETDP_SRC})
  target_link_libraries(getdp ${LINK_LIBRARIES})
endif(ENABLE_BUILD_DYNAMIC)

# force static linking of system libraries with cygwin/mingw
if(WIN32 AND NOT MSVC OR CYGWIN)
  if(NOT ENABLE_BUILD_DYNAMIC)
    set_target_properties(getdp PROPERTIES LINK_FLAGS "-static")
    # remove stupid -Wl,-Bdynamic flags
    set(CMAKE_EXE_LINK_DYNAMIC_C_FLAGS)
    set(CMAKE_EXE_LINK_DYNAMIC_CXX_FLAGS)
  endif(NOT ENABLE_BUILD_DYNAMIC)
endif(WIN32 AND NOT MSVC OR CYGWIN)

# parser target
find_program(BISON bison)
find_program(FLEX flex)
if(BISON AND FLEX)
  add_custom_target(parser
                    COMMAND ${BISON} -p getdp_yy --output ProParser.tab.cpp -d ProParser.y
                    COMMAND ${FLEX} -P getdp_yy -o ProParser.yy.cpp ProParser.l
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/Interface)
endif(BISON AND FLEX)

# miscellaneaous targets
if(UNIX)
  # cannot use cmake's file search functions here (they would only
  # find files existing at configuration time)
  add_custom_target(purge
                    COMMAND rm -f `find . -name *~ -o -name *~~`
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
  add_custom_target(etags
                    COMMAND etags `find . -name *.cpp -o -name *.h -o -name *.y`
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
endif(UNIX)

set(WELCOME_FILE ${CMAKE_CURRENT_SOURCE_DIR}/doc/WELCOME.txt)
set(LICENSE_FILE ${CMAKE_CURRENT_SOURCE_DIR}/doc/LICENSE.txt)
set(CREDITS_FILE ${CMAKE_CURRENT_SOURCE_DIR}/doc/CREDITS.txt)
file(GLOB DEMO_FILES ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.pro
                     ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.geo
                     ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.msh)
file(GLOB TEMPLATE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/templates/*.pro)
file(GLOB DEMO_FILES_TMP ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.pre
                         ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.res
                         ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.txt
                         ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.pos
                         ${CMAKE_CURRENT_SOURCE_DIR}/demos/*.par)
set(TEX_DIR ${CMAKE_CURRENT_SOURCE_DIR}/doc/texinfo)
file(GLOB TEX_SRC ${TEX_DIR}/*.texi)
set(TEX_OBJ ${TEX_DIR}/getdp.aux ${TEX_DIR}/getdp.cp ${TEX_DIR}/getdp.cps
    ${TEX_DIR}/getdp.fn ${TEX_DIR}/getdp.html ${TEX_DIR}/getdp.info ${TEX_DIR}/getdp.ky
    ${TEX_DIR}/getdp.log ${TEX_DIR}/getdp.pdf ${TEX_DIR}/getdp.pg ${TEX_DIR}/getdp.toc
    ${TEX_DIR}/getdp.tp ${TEX_DIR}/getdp.tps ${TEX_DIR}/getdp.txt ${TEX_DIR}/getdp.vr
    ${TEX_DIR}/getdp.vrs)

macro(unix2dos VARNAME)
  file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/unix2dos)
  set(UNIX2DOS_FILES)
  foreach(FILE ${${VARNAME}})
    file(READ ${FILE} F0)
    get_filename_component(N ${FILE} NAME)
    if(CYGWIN)
      string(REGEX REPLACE "\n" "\r\n" F1 "${F0}")
      file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/unix2dos/${N} "${F1}")
    else(CYGWIN) # if not in cygwin, cmake adds '\r's automatically
      file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/unix2dos/${N} "${F0}")
    endif(CYGWIN)
    list(APPEND UNIX2DOS_FILES ${CMAKE_CURRENT_BINARY_DIR}/unix2dos/${N})
  endforeach(FILE)
  set(${VARNAME} ${UNIX2DOS_FILES})
endmacro(unix2dos)

if(WIN32 OR CYGWIN)
  set(GETDP_BIN .)
  set(GETDP_LIB .)
  set(GETDP_DOC .)
  set(GETDP_MAN .)
  if(CYGWIN)
    unix2dos(GETDP_API)
    unix2dos(WELCOME_FILE)
    unix2dos(LICENSE_FILE)
    unix2dos(CREDITS_FILE)
    unix2dos(DEMO_FILES)
    unix2dos(TEMPLATE_FILES)
  endif(CYGWIN)
else(WIN32 OR CYGWIN)
  set(GETDP_BIN bin)
  set(GETDP_LIB lib)
  set(GETDP_DOC share/doc/getdp)
  set(GETDP_MAN share/man/man1)
endif(WIN32 OR CYGWIN)

# mark targets as optional so we can install them separately if needed
# (e.g. "make lib" or "make shared" followed by "make install/fast")
install(TARGETS getdp DESTINATION ${GETDP_BIN} OPTIONAL)
if(ENABLE_BUILD_LIB)
  install(TARGETS lib DESTINATION ${GETDP_LIB} OPTIONAL)
endif(ENABLE_BUILD_LIB)
if(ENABLE_BUILD_SHARED OR ENABLE_BUILD_DYNAMIC)
  install(TARGETS shared DESTINATION ${GETDP_LIB} OPTIONAL)
endif(ENABLE_BUILD_SHARED OR ENABLE_BUILD_DYNAMIC)
if(ENABLE_BUILD_LIB OR ENABLE_BUILD_SHARED OR ENABLE_BUILD_DYNAMIC)
  install(FILES ${GETDP_API} DESTINATION include/getdp)
endif(ENABLE_BUILD_LIB OR ENABLE_BUILD_SHARED OR ENABLE_BUILD_DYNAMIC)
install(FILES ${WELCOME_FILE} DESTINATION ${GETDP_DOC} RENAME README.txt)
install(FILES ${LICENSE_FILE} DESTINATION ${GETDP_DOC})
install(FILES ${CREDITS_FILE} DESTINATION ${GETDP_DOC})
install(FILES ${DEMO_FILES} DESTINATION ${GETDP_DOC}/demos)
install(FILES ${TEMPLATE_FILES} DESTINATION ${GETDP_DOC}/templates)
if(UNIX AND NOT CYGWIN)
  install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/doc/getdp.1 DESTINATION ${GETDP_MAN})
endif(UNIX AND NOT CYGWIN)

if(ENABLE_WRAP_PYTHON)
  find_package(SWIG REQUIRED)
  include(${SWIG_USE_FILE})
  find_package(PythonLibs)
  if(SWIG_FOUND AND PYTHONLIBS_FOUND)
    message(STATUS "Found SWIG version " ${SWIG_VERSION})
    include_directories(${PYTHON_INCLUDE_PATH})
    include_directories(${CMAKE_CURRENT_SOURCE_DIR})
    set(CMAKE_SWIG_FLAGS "")
    set_source_files_properties(Kernel/GetDP.i PROPERTIES CPLUSPLUS ON)
    swig_add_module(getdp python Kernel/GetDP.i)
    swig_link_libraries(getdp ${PYTHON_LIBRARIES} shared)
    if(APPLE)
      set_target_properties("_getdp" PROPERTIES LINK_FLAGS
                            "-undefined suppress -flat_namespace")
    endif(APPLE)
  endif(SWIG_FOUND AND PYTHONLIBS_FOUND)
endif(ENABLE_WRAP_PYTHON)
  
add_custom_target(clean_demos COMMAND ${CMAKE_COMMAND} -E remove ${DEMO_FILES_TMP})

add_custom_target(get_headers
  COMMAND ${CMAKE_COMMAND} -E make_directory Headers/getdp
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
foreach(FILE ${GETDP_API})
  add_custom_command(TARGET get_headers POST_BUILD COMMAND ${CMAKE_COMMAND}
    -E copy_if_different ${FILE} ${CMAKE_CURRENT_BINARY_DIR}/Headers/getdp/
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
endforeach(FILE)

find_program(MAKEINFO makeinfo)
if(MAKEINFO)
  add_custom_command(OUTPUT ${TEX_DIR}/getdp.info DEPENDS ${TEX_SRC}
                     COMMAND ${MAKEINFO} --split-size 1000000
                     ARGS ${TEX_DIR}/getdp.texi WORKING_DIRECTORY ${TEX_DIR})
  add_custom_target(info DEPENDS ${TEX_DIR}/getdp.info)
  add_custom_command(OUTPUT ${TEX_DIR}/getdp.txt DEPENDS ${TEX_SRC}
                     COMMAND ${MAKEINFO} --plaintext -o getdp.txt
                     ARGS ${TEX_DIR}/getdp.texi WORKING_DIRECTORY ${TEX_DIR})
  add_custom_target(txt DEPENDS ${TEX_DIR}/getdp.txt)
  add_custom_command(OUTPUT ${TEX_DIR}/getdp.html DEPENDS ${TEX_SRC}
    COMMAND ${MAKEINFO} --html --css-ref=http://getdp.info/getdp.css
    --no-split --set-customization-variable
    EXTRA_HEAD='<meta name="viewport" content="width=device-width,initial-scale=1.0">'
    ARGS ${TEX_DIR}/getdp.texi WORKING_DIRECTORY ${TEX_DIR})
  add_custom_target(html DEPENDS ${TEX_DIR}/getdp.html)
  install(FILES ${TEX_DIR}/getdp.html DESTINATION ${GETDP_DOC} OPTIONAL)
endif(MAKEINFO)

find_program(TEXI2PDF texi2pdf)
if(TEXI2PDF)
  add_custom_command(OUTPUT ${TEX_DIR}/getdp.pdf DEPENDS ${TEX_SRC}
                     COMMAND ${TEXI2PDF} ARGS ${TEX_DIR}/getdp.texi
                     WORKING_DIRECTORY ${TEX_DIR})
  add_custom_target(pdf DEPENDS ${TEX_DIR}/getdp.pdf)
  install(FILES ${TEX_DIR}/getdp.pdf DESTINATION ${GETDP_DOC} OPTIONAL)
endif(TEXI2PDF)

execute_process(COMMAND ${CMAKE_COMMAND} -E echo "${OPT_TEXI}"
                OUTPUT_FILE cmake_options.texi)

if(MAKEINFO AND TEXI2PDF)
  add_custom_target(doc COMMAND ${CMAKE_COMMAND} -E tar zcf
                    ${CMAKE_CURRENT_BINARY_DIR}/getdp-${GETDP_VERSION}-doc.tgz
                    doc/CREDITS.txt doc/LICENSE.txt doc/VERSIONS.txt
                    doc/getdp.1 doc/getdp.bib doc/texinfo/getdp.html
                    doc/texinfo/getdp.info doc/texinfo/getdp.pdf doc/texinfo/getdp.txt
                    COMMAND ${CMAKE_COMMAND} -E remove ${TEX_OBJ}
                    DEPENDS ${TEX_DIR}/getdp.info ${TEX_DIR}/getdp.txt
                    ${TEX_DIR}/getdp.html ${TEX_DIR}/getdp.pdf
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
endif(MAKEINFO AND TEXI2PDF)

if(MAKEINFO OR TEXI2PDF)
  add_custom_target(clean_doc COMMAND ${CMAKE_COMMAND} -E remove ${TEX_OBJ})
endif(MAKEINFO OR TEXI2PDF)

if(APPLE AND ENABLE_BUILD_LIB)
  file(READ ${CMAKE_CURRENT_SOURCE_DIR}/utils/misc/getdp_framework.plist F0)
  string(REPLACE GETDP_VERSION "${GETDP_VERSION}" F1 "${F0}")
  file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/Info_framework.plist "${F1}")
  get_target_property(LIBNAME lib LOCATION)
  #set(LIBNAME $<TARGET_FILE:lib>) # FIXME: use this in the future
  add_custom_target(framework DEPENDS lib
    COMMAND ${CMAKE_COMMAND} -E remove_directory GetDP.framework
    COMMAND ${CMAKE_COMMAND} -E make_directory GetDP.framework/Headers
    COMMAND ${CMAKE_COMMAND} -E make_directory GetDP.framework/Resources
    COMMAND ${CMAKE_COMMAND} -E copy ${LIBNAME} GetDP.framework/GetDP
    COMMAND ${CMAKE_COMMAND} -E copy Info_framework.plist
                                     GetDP.framework/Resources/Info.plist
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
  foreach(FILE ${GETDP_API})
    add_custom_command(TARGET framework POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy
        ${FILE} ${CMAKE_CURRENT_BINARY_DIR}/GetDP.framework/Headers/
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
  endforeach(FILE)
endif(APPLE AND ENABLE_BUILD_LIB)

set(CPACK_PACKAGE_VENDOR "Patrick Dular and Christophe Geuzaine")
set(CPACK_PACKAGE_VERSION_MAJOR ${GETDP_MAJOR_VERSION})
set(CPACK_PACKAGE_VERSION_MINOR ${GETDP_MINOR_VERSION})
set(CPACK_PACKAGE_VERSION_PATCH ${GETDP_PATCH_VERSION})
set(CPACK_PACKAGE_DESCRIPTION_FILE ${WELCOME_FILE})
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY
    "General Environment for the Treatment of Discrete Problems")
set(CPACK_PACKAGE_FILE_NAME getdp-${GETDP_VERSION}-${GETDP_OS})
set(CPACK_PACKAGE_INSTALL_DIRECTORY "GetDP")
set(CPACK_RESOURCE_FILE_LICENSE ${LICENSE_FILE})
set(CPACK_RESOURCE_FILE_README ${WELCOME_FILE})
set(CPACK_RESOURCE_FILE_WELCOME ${WELCOME_FILE})
set(CPACK_PACKAGE_EXECUTABLE "getdp;GetDP")
set(CPACK_STRIP_FILES TRUE)
set(CPACK_SOURCE_PACKAGE_FILE_NAME getdp-${GETDP_VERSION}-source)
set(CPACK_SOURCE_GENERATOR TGZ)
set(CPACK_SOURCE_IGNORE_FILES "${CMAKE_CURRENT_BINARY_DIR}" "/CVS/" "/.svn" "~$"
    "DS_Store$" "GetDPConfig.h$" "GetDPVersion.h$" "/benchmarks*" "/tmp/"
    "/bin/" "/lib/" "/nightly/" "GPATH" "GRTAGS" "GSYMS" "GTAGS" "/HTML/"
    "/contrib/NR/" "/contrib/NX/" "/contrib/ZITSOL_1/")

if(UNIX)
  # make sure we remove previous installs before doing the next one
  # (on Mac for example "make package; make package_source" would lead
  # to huge file lists getting generated due to the 'Applications'
  # symlink in the bundle)
  set(CPACK_INSTALL_COMMANDS "rm -rf ${CMAKE_CURRENT_BINARY_DIR}/_CPack_Packages")
endif(UNIX)

if(WIN32 OR CYGWIN)
  set(CPACK_GENERATOR ZIP)
else(WIN32 OR CYGWIN)
  set(CPACK_GENERATOR TGZ)
endif(WIN32 OR CYGWIN)

# code signing
if(APPLE AND PACKAGER STREQUAL "geuzaine")
  set(CODESIGN "codesign -v -s \"Developer ID Application: Christophe Geuzaine\"")
  set(APPDIR _CPack_Packages/Darwin/TGZ/getdp-${GETDP_VERSION}-MacOSX/bin)
  install(CODE "execute_process(COMMAND ${CODESIGN} ${APPDIR}/getdp)")
endif(APPLE AND PACKAGER STREQUAL "geuzaine")

include(CPack)

include(CTest)
file(GLOB_RECURSE TESTS
     demos/magnet.pro
     benchmarks/academic_eigenvalues/main.pro
     benchmarks/acoustic_scattering/scattering.pro
     benchmarks/inductor/inductor.pro
     benchmarks/machines/pmsm.pro
     benchmarks/magnetometer/magnetometer.pro
     benchmarks/magnets/magnets.pro
     benchmarks/thermal_conduction/contact.pro
     benchmarks/transfo_simple/transfo.pro
     benchmarks/waveguides/waveguide3D_rectangle.pro)
if(HAVE_PETSC)
  file(GLOB_RECURSE TESTS_PETSC
       benchmarks/ddm_waves/main.pro)
endif(HAVE_PETSC)
find_program(TEST_BIN ../../gmsh/bin/gmsh)
if(TEST_BIN)
  message(STATUS "Will test GetDP with Gmsh through ONELAB")
else(TEST_BIN)
  message(STATUS "Will test GetDP stand-alone")
  set(TEST_BIN getdp)
endif(TEST_BIN)

foreach(TESTFILE ${TESTS} ${TESTS_PETSC})
  # use relative path for cygwin/mingw (the pure win exe built with the mingw 
  # compilers does not understand a full cygwin-style path)
  FILE(RELATIVE_PATH TEST ${CMAKE_CURRENT_BINARY_DIR} ${TESTFILE})
  add_test(${TEST} ${TEST_BIN} ${TEST} - )
endforeach(TESTFILE)

message(STATUS "")
message(STATUS "GetDP ${GETDP_VERSION} has been configured for ${GETDP_OS}:")
message(STATUS "")
message(STATUS " * Build options:" ${GETDP_CONFIG_OPTIONS})
message(STATUS " * Build type: " ${CMAKE_BUILD_TYPE})
message(STATUS " * C compiler: " ${CMAKE_C_COMPILER})
message(STATUS " * C++ compiler: " ${CMAKE_CXX_COMPILER})
message(STATUS " * Fortran compiler: " ${CMAKE_Fortran_COMPILER})
message(STATUS " * Install prefix: " ${CMAKE_INSTALL_PREFIX})
message(STATUS "")

mark_as_advanced(GETDP_EXTRA_VERSION
                 ARPACK_LIB GMSH_INC GMSH_LIB GSLCBLAS_LIB GSL_INC GSL_LIB
                 PETSC_LIBS SLEPC_INC SLEPC_INC2 SLEPC_LIB
                 BISON FLEX MAKEINFO TEXI2PDF
                 GETDP_EXTERNAL_INCLUDE_DIRS GETDP_EXTERNAL_LIBRARIES)
