cmake_minimum_required(VERSION 4.2.3)
project(CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode STATIC
        src/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.cpp
        src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework.cpp
        src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Global.cpp
        src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App.cpp
        src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
