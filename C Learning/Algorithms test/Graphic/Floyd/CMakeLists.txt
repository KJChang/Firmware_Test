cmake_minimum_required(VERSION 2.8.11)
project(Floyd)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Floyd_SOURCE_DIR}/src)
include_directories(${Floyd_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(Floyd_exe
    ${Floyd_SOURCE_DIR}/src/Floyd.c
    )
target_link_libraries(Floyd_exe)

enable_testing()


