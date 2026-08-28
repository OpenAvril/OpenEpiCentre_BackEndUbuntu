cmake_minimum_required(VERSION 4.3)
project(TESTBENCH_CLIB_OpenEpicentre)

set(CMAKE_CXX_STANDARD 20)

add_executable(TESTBENCH_CLIB_OpenEpicentre main.cpp)

target_link_libraries(TESTBENCH_CLIB_OpenEpicentre PRIVATE CLIB_OpenEpiCentre)