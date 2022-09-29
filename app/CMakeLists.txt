# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.12)

# Set the output folder where your program will be created
#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(SITest CppTestApp.cpp)


#For the shared library:
# include director for the SIUnits headers
include_directories(${CMAKE_BINARY_DIR}/src)

# if we are using precompiled, then we need this for the lib reference
target_include_directories(SIUnits PUBLIC ${CMAKE_BINARY_DIR}/src)

# link the SIUnits to the CppTestApp
target_link_libraries(SITest SIUnits)
