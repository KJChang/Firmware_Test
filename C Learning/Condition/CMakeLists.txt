cmake_minimum_required(VERSION 2.8.11)
project(Condition)

set(Condition_OUTPUT_PATH dist)

include_directories(${Condition_SOURCE_DIR}/src)

option(BUILD_SHARED_LIBS OFF)

#add_library(Hello
#        ${Hello_World_SOURCE_DIR}/src/Hello_World.c
#        )
add_executable(Condition
    ${Condition_SOURCE_DIR}/src/Condition.c
    )
target_link_libraries(Condition)

enable_testing()

#if (WIN32)
#    add_test(NAME Hello COMMAND Hello_test
#        WORKING_DIRECTORY dist)
#else()
#    add_test(NAME Hello COMMAND Hello_test)
#endif()

#set (CMAKE_GENERATOR "Unix Makefiles" CACHE INTERNAL "" FORCE)


