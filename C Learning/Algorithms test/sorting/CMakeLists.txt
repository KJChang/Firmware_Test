cmake_minimum_required(VERSION 2.8.11)
project(sorting)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${sorting_SOURCE_DIR}/src)
include_directories(${sorting_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(sorting_exe
    ${sorting_SOURCE_DIR}/src/sorting.c
    )
target_link_libraries(sorting_exe)

enable_testing()


