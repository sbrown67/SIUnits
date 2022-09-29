#/*
#* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
#*
#* SPDX-License-Identifier: GPL-3.0-or-later
#*/
# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.12)

set( CMAKE_CXX_COMPILER "/usr/bin/clang++" )
set( CMAKE_C_COMPILER "/usr/bin/clang" )

set( CMAKE_CXX_FLAGS "-fdeclspec")
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")

# Project's name
project(CppTestApp)
#project(SIUnits)

add_compile_options("${-fdeclspec}")

# Set the output folder where your program will be created
#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_subdirectory(src)
add_subdirectory(app)
