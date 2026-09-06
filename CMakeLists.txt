cmake_minimum_required(VERSION 4.2.3)
project(OpenEpiCentre_BackEndUbuntu VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(CLIB_OpenEpiCentre)
add_subdirectory(TESTBENCH_CLIB_OpenEpicentre)