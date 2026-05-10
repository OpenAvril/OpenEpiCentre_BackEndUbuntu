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
        include/structs/Concurrent_Control.h
        include/structs/User_Input.h
        src/structs/User_Input.cpp
        include/structs/User_Output.h
        src/structs/User_Output.cpp
        include/structs/User_Algorithm.h
        src/structs/User_Algorithm.cpp
        include/structs/praise_sets/Algorithm_praise0.h
        src/structs/praise_sets/Algorithm_praise0.cpp
        include/structs/praise_sets/Algorithm_praise1.h
        src/structs/praise_sets/Algorithm_praise1.cpp
        include/structs/praise_sets/Algorithm_praise2.h
        src/structs/praise_sets/Algorithm_praise2.cpp
        include/structs/praise_sets/Algorithm_praise3.h
        src/structs/praise_sets/Algorithm_praise3.cpp
        include//structs/praise_sets/Input_praise0.h
        src/structs/praise_sets/Input_praise0.cpp
        include/structs/praise_sets/Input_praise1.h
        src/structs/praise_sets/Input_praise1.cpp
        include/structs/praise_sets/Input_praise2.h
        src/structs/praise_sets/Input_praise2.cpp
        include/structs/praise_sets/Input_praise3.h
        src/structs/praise_sets/Input_praise3.cpp
        include/structs/praise_sets/Output_praise0.h
        src/structs/praise_sets/Output_praise0.cpp
        include/structs/praise_sets/Output_praise1.h
        src/structs/praise_sets/Output_praise1.cpp
        include/structs/praise_sets/Output_praise2.h
        src/structs/praise_sets/Output_praise2.cpp
        include/structs/praise_sets/Output_praise3.h
        src/structs/praise_sets/Output_praise3.cpp
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

)
target_include_directories(CLIB_OpenEpiCentre PUBLIC include)

# Define include directories for public headers
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE)
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND)
target_link_libraries(CLIB_OpenEpiCentre PRIVATE CLIB_LaunchEnableForConcurrentThreadsAt_SERVER)
