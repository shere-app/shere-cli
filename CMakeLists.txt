#
# CMakeLists.txt
# CMake definition for Shere command-line app.
# author: Marek Foltýn
# created: 2017-10-20
#

# Project settings
cmake_minimum_required(VERSION 3.7)
project(shere-cli CXX)
set(CMAKE_CXX_STANDARD 17)

# Add the  sources
include_directories(src)
set(SOURCES
    src/ShereCli.h
    src/ShereCli.cpp
)

# Command line argument parsing
include_directories(lib/cxxopts/include)

# Create separate library without main() - use for both binary and testing
add_library(shere-cli-lib ${SOURCES})

# Create executable binary
add_executable(shere src/main.cpp)
target_link_libraries(shere shere-cli-lib)

# Set up testing
add_subdirectory(test)
