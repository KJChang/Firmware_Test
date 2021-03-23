cmake_minimum_required(VERSION 2.8.11)
project(Function)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Function_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)

add_executable(Function
    ${Function_SOURCE_DIR}/src/Function.c
    )
target_link_libraries(Function)

enable_testing()


