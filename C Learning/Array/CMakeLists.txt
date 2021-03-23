cmake_minimum_required(VERSION 2.8.11)
project(Array)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Array_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)

add_executable(Array
    ${Array_SOURCE_DIR}/src/Array.c
    )
target_link_libraries(Array)

enable_testing()


