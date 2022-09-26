# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.12)

set( CMAKE_CXX_COMPILER "/usr/bin/clang++" )
set( CMAKE_C_COMPILER "/usr/bin/clang" )

set( CMAKE_CXX_FLAGS "-fdeclspec")

# Project's name
project(CppTestApp)

add_compile_options("${-fdeclspec}")

# Set the output folder where your program will be created
#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

#file(GLOB CPPTEST_SRC CONFIGURE_DEPENDS "src/*.h" "src/*.cpp")

#add_executable(CppTestApp, ${CPPTEST_SRC})

add_subdirectory(src)
