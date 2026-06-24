cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_SIMULATION VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_SIMULATION STATIC
        include/CLIB_WriteEnableForThreadsAt_SIMULATION.h
        src/CLIB_WriteEnableForThreadsAt_SIMULATION.cpp
        include/WriteEnableForThreadsAt_SIMULATION_Framework.h
        src/WriteEnableForThreadsAt_SIMULATION_Framework.cpp
        include/WriteEnableForThreadsAt_SIMULATION_Global.h
        src/WriteEnableForThreadsAt_SIMULATION_Global.cpp
        include/WriteEnableForThreadsAt_SIMULATION.h
        src/WriteEnableForThreadsAt_SIMULATION.cpp
        include/WriteEnableForThreadsAt_SIMULATION_Control.h
        src/WriteEnableForThreadsAt_SIMULATION_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)