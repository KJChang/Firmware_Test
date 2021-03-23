cmake_minimum_required(VERSION 2.8.11)
project(Simulated_Annealing)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Simulated_Annealing_SOURCE_DIR}/src)
include_directories(${Simulated_Annealing_SOURCE_DIR}/include)

option(BUILD_SHARED_LIBS OFF)

add_executable(Simulated_Annealing
    ${Simulated_Annealing_SOURCE_DIR}/src/Simulated_Annealing.c
    )
target_link_libraries(Simulated_Annealing)

enable_testing()


