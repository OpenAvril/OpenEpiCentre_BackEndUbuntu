cmake_minimum_required(VERSION 3.10)
project(MySharedLib)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add shared library
add_library(CLIB_OpenEpiCentre SHARED src/CLIB_OpenEpiCentre.cpp)

