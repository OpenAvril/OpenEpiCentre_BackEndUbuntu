cmake_minimum_required(VERSION 4.2.3)
project(CLIB_LaunchQueForThreadsAt_Server VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_LaunchQueForThreadsAt_Server STATIC
        libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.cpp
        libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework_Global.cpp
        libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework_App.cpp
        libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control.cpp
        src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        src/LaunchEnableForConcurrentThreadsAt_Server_Framework.cpp
        src/LaunchEnableForConcurrentThreadsAt_Server_Global.cpp
        src/LaunchEnableForConcurrentThreadsAt_Server_App.cpp
        src/LaunchEnableForConcurrentThreadsAt_Server_App_Control.cpp
        src/WriteEnableForThreadsAt_ThreadLogsId_Execute.cpp
)

target_include_directories(CLIB_LaunchQueForThreadsAt_Server PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include"
)

target_link_libraries(CLIB_LaunchQueForThreadsAt_Server PRIVATE

        CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode
)