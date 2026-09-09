cmake_minimum_required(VERSION 4.2.3)
project(CLIB_OpenEpiCentre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_OpenEpiCentre STATIC
        src/CLIB_OpenEpiCentre.cpp
        src/engine/CLIB_OpenEpiCentre__Framework.cpp
        src/engine/CLIB_OpenEpiCentre__Global.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT__Input.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT__Output.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT__User_Input.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT__User_Output.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT__User_Algorithm.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise0.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise1.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise2.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Algorithm_praise3.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.cpp
        src/engine/CLIB_OpenEpiCentre__Framework.cpp
        src/engine/CLIB_OpenEpiCentre__App.cpp
        src/engine/CLIB_OpenEpiCentre__Algorithms.cpp
        src/engine/CLIB_OpenEpiCentre__Data.cpp
        src/engine/CLIB_OpenEpiCentre__Data__Control.cpp
        src/engine/CLIB_OpenEpiCentre__Execute.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/CLIB_WriteEnableForThreadsAt_ServerInputReceive.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__App.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Control.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/CLIB_WriteEnableForThreadsAt_ServerOutputSend.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__App.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Framework.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Global.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__App.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode__Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Framework.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Global.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__App.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__App__Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Execute.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/src/CLIB_WriteEnableForThreadsAt_ServerConditionCode.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/src/WriteEnableForThreadsAt_ServerConditionCode__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/src/WriteEnableForThreadsAt_ServerConditionCode__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/src/WriteEnableForThreadsAt_ServerConditionCode__App.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/src/WriteEnableForThreadsAt_ServerConditionCode__Control.cpp
        src/engine/CLIB_OpenEpiCentre__Execute__Control.cpp
)

target_include_directories(CLIB_OpenEpiCentre PUBLIC
        /libs/CLIB_LaunchQueForThreadsAt_Server/include
        /libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/include
        /libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include
        /libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include
)
