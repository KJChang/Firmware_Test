cmake_minimum_required(VERSION 2.8.11)
project(GCD)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${GCD_SOURCE_DIR}/src)
include_directories(${GCD_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(GCD_exe
    ${GCD_SOURCE_DIR}/src/GCD.c
    )
target_link_libraries(GCD_exe)

enable_testing()


