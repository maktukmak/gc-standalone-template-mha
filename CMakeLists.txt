project(GCHello)
set(DNNL_GRAPH_LIBRARY_TYPE STATIC CACHE STRING "lib type" FORCE)
set(DNNL_GRAPH_BUILD_COMPILER_BACKEND ON CACHE BOOL "build compiler" FORCE)
set(DNNL_GRAPH_BUILD_EXAMPLES OFF CACHE BOOL "build examples" FORCE)
set(DNNL_ROOT "oneDNN")
add_subdirectory(${DNNL_ROOT} EXCLUDE_FROM_ALL)
include_directories(${DNNL_ROOT}/src/backend/graph_compiler/core/src)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fopenmp -march=native")
add_definitions(-DSC_JIT_SOURCE)
file(GLOB_RECURSE HELLO_SOURCES
    src/*.cpp
)
#set_property(GLOBAL PROPERTY GLOBAL_DEPENDS_DEBUG_MODE 1)
add_executable(hello ${HELLO_SOURCES})
target_link_libraries(hello graphcompiler_runtime)

