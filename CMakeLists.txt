cmake_minimum_required(VERSION 4.2)
project(CLIB_OpenEpiCentre)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_OpenEpiCentre STATIC
        include/CLIB_OpenEpiCentre.h
        src/CLIB_OpenEpiCentre.cpp
        include/engine/Framework_Server.h
        src/engine/Framework_Server.cpp
        include/engine/Global.h
        src/engine/Global.cpp
        include/structs/Input.h
        src/structs/Input.cpp
        include/structs/Output.h
        src/structs/Output.cpp
        include/structs/Concurrent.h
        src/structs/Concurrent.cpp
        include/structs/User_Input.h
        src/structs/User_Input.cpp
        include/structs/User_Output.h
        src/structs/User_Output.cpp
        include/structs/User_Algorithm.h
        src/structs/User_Algorithm.cpp
        include/structs/praise_sets/Algorithm_praise0.h
        src/structs/praise_sets/Algorithm_praise0.cpp
        include//structs/praise_sets/Input_praise0.h
        src/structs/praise_sets/Input_praise0.cpp
        include/structs/praise_sets/Output_praise0.h
        src/structs/praise_sets/Output_praise0.cpp
        include/engine/Server.h
        src/engine/Server.cpp
        include/engine/Algorithms.h
        src/engine/Algorithms.cpp
        include/engine/Data.h
        src/engine/Data.cpp
        include/engine/Data_Control.h
        include/engine/Execute.h
        src/engine/Execute.cpp
        include/engine/Execute_Control.h
        src/engine/Execute_Control.cpp
        include/CLIB_WriteQueForThreadsAt_ServerInputReceive/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h
        include/CLIB_WriteQueForThreadsAt_ServerInputReceive/WriteEnableForThreadsAt_ServerInputReceive_Framework.h
        include/CLIB_WriteQueForThreadsAt_ServerInputReceive/WriteEnableForThreadsAt_ServerInputReceive_Global.h
        include/CLIB_WriteQueForThreadsAt_ServerInputReceive/WriteEnableForThreadsAt_ServerInputReceive.h
        include/CLIB_WriteQueForThreadsAt_ServerInputReceive/WriteEnableForThreadsAt_ServerInputReceive_Control.h
        include/CLIB_WriteQueForThreadsAt_ServerOutputSend/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h
        include/CLIB_WriteQueForThreadsAt_ServerOutputSend/WriteEnableForThreadsAt_ServerOutputSend_Framework.h
        include/CLIB_WriteQueForThreadsAt_ServerOutputSend/WriteEnableForThreadsAt_ServerOutputSend_Global.h
        include/CLIB_WriteQueForThreadsAt_ServerOutputSend/WriteEnableForThreadsAt_ServerOutputSend.h
        include/CLIB_WriteQueForThreadsAt_ServerOutputSend/WriteEnableForThreadsAt_ServerOutputSend_Control.h
        include/CLIB_LaunchQueForThreadsAt_Server/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h
        include/CLIB_LaunchQueForThreadsAt_Server/LaunchEnableForConcurrentThreadsAt_Server_Framework.h
        include/CLIB_LaunchQueForThreadsAt_Server/LaunchEnableForConcurrentThreadsAt_Server_Global.h
        include/CLIB_LaunchQueForThreadsAt_Server/LaunchEnableForConcurrentThreadsAt_Server.h
        include/CLIB_LaunchQueForThreadsAt_Server/LaunchEnableForConcurrentThreadsAt_Server_Control.h
)

add_library(CLIB_WriteQueForThreadsAt_ServerInputReceive STATIC IMPORTED)
add_library(CLIB_WriteQueForThreadsAt_ServerOutputSend STATIC IMPORTED)
add_library(CLIB_LaunchQueForThreadsAt_Server STATIC IMPORTED)

set_target_properties(CLIB_WriteQueForThreadsAt_ServerInputReceive PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/libs/libCLIB_WriteQueForThreadsAt_ServerInputReceive.a"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/include/CLIB_WriteQueForThreadsAt_ServerInputReceive"
)
set_target_properties(CLIB_WriteQueForThreadsAt_ServerOutputSend PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/libs/libCLIB_WriteQueForThreadsAt_ServerOutputSend.a"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/include/CLIB_WriteQueForThreadsAt_ServerOutputSend"
)
set_target_properties(CLIB_LaunchQueForThreadsAt_Server PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/libs/libCLIB_LaunchQueForThreadsAt_Server.a"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/include/CLIB_LaunchQueForThreadsAt_Server"
)

target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_WriteQueForThreadsAt_ServerInputReceive)
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_WriteQueForThreadsAt_ServerOutputSend)
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_LaunchQueForThreadsAt_Server)
