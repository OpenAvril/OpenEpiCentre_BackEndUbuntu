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
        IO.h
        IO.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/CLIB_WriteEnableForThreadsAt_ServerInputReceive.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__Framework.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__Global.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__App.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__App.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/WriteEnableForThreadsAt_ServerInputReceive__Control.h
        libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/src/WriteEnableForThreadsAt_ServerInputReceive__Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__App.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__App.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__Control.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__Framework.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Framework.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/include/LaunchEnableForConcurrentThreadsAt_Server__Global.h
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/CLIB_WriteEnableForThreadsAt_ServerOutputSend.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/WriteEnableForThreadsAt_ServerOutputSend__Global.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/WriteEnableForThreadsAt_ServerOutputSend__App.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__App.cpp
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/WriteEnableForThreadsAt_ServerOutputSend__Control.h
        libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/src/WriteEnableForThreadsAt_ServerOutputSend__Control.cpp
        libs/CLIB_OpenEpiCentre/include/CLIB_OpenEpiCentre.h
        libs/CLIB_OpenEpiCentre/src/CLIB_OpenEpiCentre.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Algorithms.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Algorithms.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_App.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_App.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Data.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Data.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Data_Control.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Data_Control.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Execute.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Execute.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Execute_Control.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Execute_Control.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Framework.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Framework.cpp
        libs/CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Global.h
        libs/CLIB_OpenEpiCentre/src/engine/CLIB_OpenEpiCentre_Global.cpp
        libs/CLIB_OpenEpiCentre/include/structs/Concurrent.h
        libs/CLIB_OpenEpiCentre/src/structs/Concurrent.cpp
        libs/CLIB_OpenEpiCentre/include/structs/Input.h
        libs/CLIB_OpenEpiCentre/src/structs/Input.cpp
        libs/CLIB_OpenEpiCentre/include/structs/Output.h
        libs/CLIB_OpenEpiCentre/src/structs/Output.cpp
        libs/CLIB_OpenEpiCentre/include/structs/User_Algorithm.h
        libs/CLIB_OpenEpiCentre/src/structs/User_Algorithm.cpp
        libs/CLIB_OpenEpiCentre/include/structs/User_Input.h
        libs/CLIB_OpenEpiCentre/src/structs/User_Input.cpp
        libs/CLIB_OpenEpiCentre/include/structs/User_Output.h
        libs/CLIB_OpenEpiCentre/src/structs/User_Output.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Algorithm_praise0.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise0.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Algorithm_praise1.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise1.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Algorithm_praise2.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise2.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Algorithm_praise3.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Algorithm_praise3.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Input_praise0.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise0.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Input_praise1.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise1.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Input_praise2.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise2.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Input_praise3.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Input_praise3.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Output_praise0.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise0.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Output_praise1.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise1.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Output_praise2.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise2.cpp
        libs/CLIB_OpenEpiCentre/include/structs/praise_sets/Output_praise3.h
        libs/CLIB_OpenEpiCentre/src/structs/praise_sets/Output_praise3.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/include/CLIB_WriteEnableForThreadsAt_SIMULATION.h
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/CLIB_WriteEnableForThreadsAt_SIMULATION.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/include/WriteEnableForThreadsAt_SIMULATION__Framework.h
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/include/WriteEnableForThreadsAt_SIMULATION__Global.h
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/include/WriteEnableForThreadsAt_SIMULATION__App.h
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION__App.cpp
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/include/WriteEnableForThreadsAt_SIMULATION__Control.h
        libs/CLIB_WriteQueForThreadsAt_SIMULATION/src/WriteEnableForThreadsAt_SIMULATION__Control.cpp
        include/engine/Algorithms.h
        src/engine/Algorithms.cpp
        include/engine/App.h
        src/engine/App.cpp
        include/engine/Data.h
        src/engine/Data.cpp
        include/engine/Execute.h
        src/engine/Execute.cpp
        include/engine/Execute_Control.h
        src/engine/Execute_Control.cpp
        include/engine/Framework_App.h
        src/engine/Framework_App.cpp
        include/engine/Global.h
        src/engine/Global.cpp
)


target_link_libraries(TestBench PRIVATE CLIB_OpenEpiCentre)
target_link_libraries(TestBench PRIVATE CLIB_WriteQueForThreadsAt_SIMULATION)