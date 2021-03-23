cmake_minimum_required(VERSION 2.8.11)
project(Static_Variable)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Static_Variable_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)


add_executable(Static_Variable
    ${Static_Variable_SOURCE_DIR}/src/Static_Variable.c
    )
target_link_libraries(Static_Variable)

enable_testing()



