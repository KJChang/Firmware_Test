cmake_minimum_required(VERSION 2.8.11)
project(Data_Processing)

set(Data_Processing_OUTPUT_PATH dist)

include_directories(${Data_Processing_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)

add_executable(Data_Processing
    ${Data_Processing_SOURCE_DIR}/src/Data_Processing.c
    )
target_link_libraries(Data_Processing)

enable_testing()

