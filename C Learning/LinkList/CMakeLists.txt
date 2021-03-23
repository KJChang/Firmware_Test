cmake_minimum_required(VERSION 2.8.11)
project(Linklist)
enable_testing()

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Linklist_SOURCE_DIR}/src)
# include_directories(${Linklist_SOURCE_DIR}/include)
# include_directories(${Linklist_SOURCE_DIR})

# option(BUILD_SHARED_LIBS OFF)

add_library(LinkList_lib
        ${Linklist_SOURCE_DIR}/src/LinkList.c
        )

add_executable(main 
    ${Linklist_SOURCE_DIR}/include/LinkList.h
    ${Linklist_SOURCE_DIR}/src/main.c
    )
target_link_libraries(main LinkList_lib)




