cmake_minimum_required(VERSION 3.28.3)
project(CLIB_OpenEpiCentre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_OpenEpiCentre STATIC
        include/CLIB_OpenEpiCentre.h
        src/CLIB_OpenEpiCentre.cpp
        include/engine/CLIB_OpenEpiCentre_Framework_Server.h
        src/engine/CLIB_OpenEpiCentre_Framework_Server.cpp
        include/engine/CLIB_OpenEpiCentre_Global.h
        src/engine/CLIB_OpenEpiCentre_Global.cpp
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
        include/structs/praise_sets/Input_praise0.h
        src/structs/praise_sets/Input_praise0.cpp
        include/structs/praise_sets/Output_praise0.h
        src/structs/praise_sets/Output_praise0.cpp
        include/engine/CLIB_OpenEpiCentre_App.h
        src/engine/CLIB_OpenEpiCentre_App.cpp
        include/engine/CLIB_OpenEpiCentre_Algorithms.h
        src/engine/CLIB_OpenEpiCentre_Algorithms.cpp
        include/engine/CLIB_OpenEpiCentre_Data.h
        src/engine/CLIB_OpenEpiCentre_Data.cpp
        include/engine/CLIB_OpenEpiCentre_Data_Control.h
        src/engine/CLIB_OpenEpiCentre_Data_Control.cpp
        include/engine/CLIB_OpenEpiCentre_Execute.h
        src/engine/CLIB_OpenEpiCentre_Execute.cpp
        include/engine/CLIB_OpenEpiCentre_Execute_Control.h
        src/engine/CLIB_OpenEpiCentre_Execute_Control.cpp
)

target_include_directories(CLIB_OpenEpiCentre PUBLIC ../CLIB_LaunchQueForThreadsAt_Server ../CLIB_WriteQueForThreadsAt_ServerInputReceive ../CLIB_WriteQueForThreadsAt_ServerOutputSend)