cmake_minimum_required(VERSION 2.8.11)
project(Dijkstra)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Dijkstra_SOURCE_DIR}/src)
include_directories(${Dijkstra_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(Dijkstra_exe
    ${Dijkstra_SOURCE_DIR}/src/Dijkstra.c
    )
target_link_libraries(Dijkstra_exe)

enable_testing()


