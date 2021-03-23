cmake_minimum_required(VERSION 2.8.11)
project(Double_Linklist)
enable_testing()

# set(LIBRARY_OUTPUT_PATH dist)

include_directories(${Double_Linklist_SOURCE_DIR}/src)
include_directories(${Double_Linklist_SOURCE_DIR}/include)

# option(BUILD_SHARED_LIBS OFF)

add_library(Double_Linklist_lib
        ${Double_Linklist_SOURCE_DIR}/src/Linklist.c
        )

add_executable(main 
    ${Double_Linklist_SOURCE_DIR}/include/Linklist.h
    ${Double_Linklist_SOURCE_DIR}/src/main.c
    )
target_link_libraries(main Double_Linklist_lib)




