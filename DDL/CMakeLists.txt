cmake_minimum_required(VERSION 3.20)
project(MyModule)

set(CMAKE_CXX_STANDARD 14)

add_library(MyModule SHARED module.cpp)

set_target_properties(MyModule PROPERTIES
        OUTPUT_NAME "module"
        PREFIX ""
        )

add_executable(untitled main.cpp)
target_link_libraries(untitled MyModule)
