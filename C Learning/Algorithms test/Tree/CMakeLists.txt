cmake_minimum_required(VERSION 2.8.11)
project(Tree)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Tree_SOURCE_DIR}/src)
include_directories(${Tree_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(Tree_exe
    ${Tree_SOURCE_DIR}/src/Tree.c
    )
target_link_libraries(Tree_exe)

enable_testing()


