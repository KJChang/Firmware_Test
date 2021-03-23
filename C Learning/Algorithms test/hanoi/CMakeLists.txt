cmake_minimum_required(VERSION 2.8.11)
project(hanoi)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${hanoi_SOURCE_DIR}/src)
include_directories(${hanoi_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(hanoi_exe
    ${hanoi_SOURCE_DIR}/src/hanoi.c
    )
target_link_libraries(hanoi_exe)

enable_testing()


