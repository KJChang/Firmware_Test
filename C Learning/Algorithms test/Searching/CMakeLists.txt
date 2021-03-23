cmake_minimum_required(VERSION 2.8.11)
project(Searching)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Searching_SOURCE_DIR}/src)
include_directories(${Searching_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(Searching_exe
    ${Searching_SOURCE_DIR}/src/Searching.c
    )
target_link_libraries(Searching_exe)

enable_testing()


