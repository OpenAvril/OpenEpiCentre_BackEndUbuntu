cmake_minimum_required(VERSION 4.2.3)
project(TestBench VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/CLIB_LaunchQueForThreadsAt_Server)
add_subdirectory(libs/CLIB_WriteQueForThreadsAt_ServerInputReceive)
add_subdirectory(libs/CLIB_WriteQueForThreadsAt_ServerOutputSend)
add_subdirectory(libs/CLIB_OpenEpiCentre)
add_subdirectory(libs/CLIB_WriteQueForThreadsAt_SIMULATION)

add_executable(TestBench Main.cpp
        IO.cpp
        src/engine/Algorithms.cpp
        src/engine/App.cpp
        src/engine/Data.cpp
        src/engine/Execute.cpp
        src/engine/Execute_Control.cpp
        src/engine/Framework_App.cpp
        src/engine/Global.cpp
        src/io/OpenEpiCentre.cpp
        include/io/OpenEpiCentre.h
        src/io/LaunchQue_Server.cpp
        include/io/LaunchQue_Server.h
        src/io/WriteQue_ServerInputRecieve.cpp
        include/io/WriteQue_ServerInputRecieve.h
        src/io/WriteQue_ServerOutputSend.cpp
        include/io/WriteQue_ServerOutputSend.h
)

target_link_libraries(TestBench PRIVATE CLIB_OpenEpiCentre)
target_link_libraries(TestBench PRIVATE CLIB_WriteQueForThreadsAt_SIMULATION)

