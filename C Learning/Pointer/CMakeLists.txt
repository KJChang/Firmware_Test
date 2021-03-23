cmake_minimum_required(VERSION 2.8.11)
project(Pointer)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Pointer_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)


add_executable(Pointer
    ${Pointer_SOURCE_DIR}/src/Pointer.c
    )
target_link_libraries(Pointer)

enable_testing()


