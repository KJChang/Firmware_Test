cmake_minimum_required(VERSION 2.8.11)
project(OperandandOperator)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${OperandandOperator_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)


add_executable(OperandandOperator
    ${OperandandOperator_SOURCE_DIR}/src/OperandandOperator.c
    )
target_link_libraries(OperandandOperator)

enable_testing()


