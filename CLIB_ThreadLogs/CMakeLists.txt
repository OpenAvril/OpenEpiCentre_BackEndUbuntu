cmake_minimum_required(VERSION 4.2.3)
project(CLIB_ThreadLogs VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_ThreadLogs STATIC
        src/CLIB_ThreadLogs.cpp
        src/CLIB_ThreadLogs_Framework.cpp
        src/CLIB_ThreadLogs_Framework_Global.cpp
        src/CLIB_ThreadLogs_Framework_App.cpp
        src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
)
