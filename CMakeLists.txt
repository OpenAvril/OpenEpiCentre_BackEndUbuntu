cmake_minimum_required(VERSION 3.10)
project(CLIB_OpenEpiCentre VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add shared library
add_library(CLIB_OpenEpiCentre SHARED
        include/CLIB_OpenEpiCentre.h
        src/CLIB_OpenEpiCentre.cpp
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
        include/engine/Framework_Server.h
        src/engine/Framework_Server.cpp
        include/engine/Global.h
        src/engine/Global.cpp
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
        include/CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE/CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE.h
        include/CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE/WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework.h
        include/CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE/WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global.h
        include/CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE/WriteEnableForThreadsAt_SERVERINPUTRECEIVE.h
        include/CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE/WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Control.h
        include/CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND/CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND.h
        include/CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND/WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework.h
        include/CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND/WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global.h
        include/CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND/WriteEnableForThreadsAt_SERVEROUTPUTSEND.h
        include/CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND/WriteEnableForThreadsAt_SERVEROUTPUTSEND_Control.h
        include/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.h
        include/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/LaunchEnableForConcurrentThreadsAt_SERVER_Framework.h
        include/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/LaunchEnableForConcurrentThreadsAt_SERVER_Global.h
        include/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/LaunchEnableForConcurrentThreadsAt_SERVER.h
        include/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/LaunchEnableForConcurrentThreadsAt_SERVER_Control.h
)
target_include_directories(CLIB_OpenEpiCentre PUBLIC include)

add_library(CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE SHARED IMPORTED)
set_property(TARGET CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE PROPERTY
        IMPORTED_LOCATION "CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE.so")
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_WriteQueForThreadsAt_SERVERINPUTRECIEVE)

add_library(CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND SHARED IMPORTED)
set_property(TARGET CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND PROPERTY
        IMPORTED_LOCATION "CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND.so")
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_WriteQueForThreadsAt_SERVEROUTPUTSEND)

add_library(CLIB_LaunchEnableForConcurrentThreadsAt_SERVER SHARED IMPORTED)
set_property(TARGET CLIB_LaunchEnableForConcurrentThreadsAt_SERVER PROPERTY
        IMPORTED_LOCATION "CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.so")
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_LaunchEnableForConcurrentThreadsAt_SERVER)
