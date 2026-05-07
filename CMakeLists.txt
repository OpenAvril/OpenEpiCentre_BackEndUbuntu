cmake_minimum_required(VERSION 3.10)
project(CLIB_OpenEpiCentre VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add shared library
add_library(CLIB_OpenEpiCentre SHARED
        include/CLIB_OpenEpiCentre.h
        src/CLIB_OpenEpiCentre.cpp

)

# Define include directories for public headers
target_include_directories(CLIB_OpenEpiCentre PUBLIC include)