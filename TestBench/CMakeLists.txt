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
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/CLIB_WriteEnableForThreadsAt_ServerInputReceive.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive_Control.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive_Global.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_Framework.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/CLIB_WriteEnableForThreadsAt_ServerOutputSend.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend_Control.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend_Global.cpp
        libs/CLIB_OpenEpiCentre/src/CLIB_OpenEpiCentre.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Algorithms.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_App.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Data.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Data_Control.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Execute.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Execute_Control.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Framework.cpp
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Global.cpp
        libs/CLIB_OpenEpiCentre/src/structs/Concurrent.cpp
        libs/CLIB_OpenEpiCentre/src/structs/Input.cpp
        libs/CLIB_OpenEpiCentre/src/structs/Output.cpp
        libs/CLIB_OpenEpiCentre/src/structs/User_Algorithm.cpp
        libs/CLIB_OpenEpiCentre/src/structs/User_Input.cpp
        libs/CLIB_OpenEpiCentre/src/structs/User_Output.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise0.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise1.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise2.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise3.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise0.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise1.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise2.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise3.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise0.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise1.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise2.cpp
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise3.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/CLIB_WriteEnableForThreadsAt_SIMULATION.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION_Control.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION_Global.cpp
        src/engine/Algorithms.cpp
        src/engine/App.cpp
        src/engine/Data.cpp
        src/engine/Execute.cpp
        src/engine/Execute_Control.cpp
        src/engine/Framework_App.cpp
        src/engine/Global.cpp
#       src/io/OpenEpiCentre.cpp
#        include/io/OpenEpiCentre.h
#        src/io/LaunchQue_Server.cpp
#        include/io/LaunchQue_Server.h
#        src/io/WriteQue_ServerInputRecieve.cpp
#        include/io/WriteQue_ServerInputRecieve.h
#        src/io/WriteQue_ServerOutputSend.cpp
#        include/io/WriteQue_ServerOutputSend.h
)

target_link_libraries(TestBench PRIVATE CLIB_OpenEpiCentre)
target_link_libraries(TestBench PRIVATE CLIB_WriteQueForThreadsAt_SIMULATION)

