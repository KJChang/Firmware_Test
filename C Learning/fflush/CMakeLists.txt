cmake_minimum_required(VERSION 2.8.11)
project(fflush)

set(LIBRARY_OUTPUT_PATH dist)

include_directories(${fflush_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)

#add_library(Hello
#        ${Hello_World_SOURCE_DIR}/src/Hello_World.c
#        )
add_executable(fflush
    ${fflush_SOURCE_DIR}/src/fflush.c
    )
target_link_libraries(fflush)

enable_testing()

#if (WIN32)
#    add_test(NAME Hello COMMAND Hello_test
#        WORKING_DIRECTORY dist)
#else()
#    add_test(NAME Hello COMMAND Hello_test)
#endif()

#set (CMAKE_GENERATOR "Unix Makefiles" CACHE INTERNAL "" FORCE)


