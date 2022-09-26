# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# Set the output folder where your program will be created
#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(CppTestApp
Angle.cpp            Force.cpp      MyBase.cpp      Temperature.cpp
AngularSpeed.cpp     Frequency.cpp  Power.cpp       TemplateUtils.cpp
Area.cpp             Length.cpp     Pressure.cpp    Volume.cpp
BaseScaleOffset.cpp  Luminous.cpp   properties.cpp
BaseValue.cpp        Mass.cpp       Speed.cpp
CppTestApp.cpp       Moment.cpp     Temp.cpp)

