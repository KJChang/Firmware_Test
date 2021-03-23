cmake_minimum_required(VERSION 2.8.11)
project(MIM)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${MIM_SOURCE_DIR}/src)
include_directories(${MIM_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(MIM_exe
    ${MIM_SOURCE_DIR}/src/MIM.c
    )
target_link_libraries(MIM_exe)

enable_testing()


