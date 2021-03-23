cmake_minimum_required(VERSION 2.8.11)
project(thread)
enable_testing()

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${thread_SOURCE_DIR}/src)
# include_directories(${Linklist_SOURCE_DIR}/include)
# include_directories(${Linklist_SOURCE_DIR})

# option(BUILD_SHARED_LIBS OFF)

add_executable(thread 
    ${thread_SOURCE_DIR}/src/thread.c
    )
target_link_libraries(thread)