cmake_minimum_required(VERSION 2.8.11)
project(Little_Endian)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Little_Endian_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)

add_executable(Little_Endian
    ${Little_Endian_SOURCE_DIR}/src/Little_Endian.cpp
    )
target_link_libraries(Little_Endian)

enable_testing()


