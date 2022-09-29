# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.12)

file(GLOB SIUNITS_SRC CONFIGURE_DEPENDS	"*.h" "*.cpp")

add_library(SIUnits SHARED ${SIUNITS_SRC})
