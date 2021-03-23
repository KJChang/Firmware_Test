cmake_minimum_required(VERSION 2.8.11)
project(Structure)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Structure_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)


add_executable(Structure
    ${Structure_SOURCE_DIR}/src/Structure.c
    )
target_link_libraries(Structure)

enable_testing()



