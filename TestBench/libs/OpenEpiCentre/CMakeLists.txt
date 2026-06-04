cmake_minimum_required(VERSION 3.28.3)
project(CLIB_OpenEpiCentre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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
        include/structs/praise_sets/Input_praise0.h
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
)

# Optional: Add include directories so your main lib can find internal headers
target_include_directories(CLIB_OpenEpiCentre PUBLIC ../CLIB_LaunchQueForThreadsAt_Server ../CLIB_WriteQueForThreadsAt_ServerInputReceive ../CLIB_WriteQueForThreadsAt_ServerOutputSend)