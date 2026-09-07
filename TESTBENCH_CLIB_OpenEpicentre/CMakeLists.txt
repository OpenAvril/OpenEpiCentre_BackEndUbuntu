cmake_minimum_required(VERSION 4.2.3)
project(TESTBENCH_CLIB_OpenEpicentre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_OpenEpiCentre/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_OpenEpiCentre/libs/CLIB_LaunchQueForThreadsAt_Server/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_OpenEpiCentre/libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_OpenEpiCentre/libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_OpenEpiCentre/libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_OpenEpiCentre/libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs)

add_executable(TESTBENCH_CLIB_OpenEpicentre main.cpp)

target_link_libraries(TESTBENCH_CLIB_OpenEpicentre PRIVATE CLIB_OpenEpiCentre)