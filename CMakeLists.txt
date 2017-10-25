#
# CMakeLists.txt
# CMake definition for Shere command-line app.
# author: Marek Foltýn
# created: 2017-10-20
#

# Project settings
cmake_minimum_required(VERSION 3.7)
project(shere-cli CXX)
set(CMAKE_CXX_STANDARD 11)


# Add the platform-specific sources
set(SOURCES
    src/main.cpp
)

# Create executable binary
add_executable(shere ${SOURCES})