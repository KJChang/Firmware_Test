cmake_minimum_required(VERSION 2.8.11)
project(Kruskal)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Kruskal_SOURCE_DIR}/src)
include_directories(${Kruskal_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(Kruskal_exe
    ${Kruskal_SOURCE_DIR}/src/Kruskal.c
    )
target_link_libraries(Kruskal_exe)

enable_testing()


