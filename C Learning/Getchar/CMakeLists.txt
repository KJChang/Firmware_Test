cmake_minimum_required(VERSION 2.8.11)
project(Getchar)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Getchar_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)


add_executable(Getchar
    ${Getchar_SOURCE_DIR}/src/Getchar.c
    )
target_link_libraries(Getchar)

enable_testing()


