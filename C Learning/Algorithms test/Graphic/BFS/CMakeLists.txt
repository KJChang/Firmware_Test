cmake_minimum_required(VERSION 2.8.11)
project(BFS)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${BFS_SOURCE_DIR}/src)
include_directories(${BFS_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(BFS_exe
    ${BFS_SOURCE_DIR}/src/BFS.c
    )
target_link_libraries(BFS_exe)

enable_testing()


