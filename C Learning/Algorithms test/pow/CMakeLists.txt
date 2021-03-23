cmake_minimum_required(VERSION 2.8.11)
project(Pow)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Pow_SOURCE_DIR}/src)
include_directories(${Pow_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(Pow_exe
    ${Pow_SOURCE_DIR}/src/Pow.c
    )
target_link_libraries(Pow_exe)

enable_testing()


