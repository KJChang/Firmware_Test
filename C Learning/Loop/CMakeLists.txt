cmake_minimum_required(VERSION 2.8.11)
project(Loop)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Loop_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)

add_executable(Loop
    ${Loop_SOURCE_DIR}/src/Loop.c
    )
target_link_libraries(Loop)

enable_testing()



