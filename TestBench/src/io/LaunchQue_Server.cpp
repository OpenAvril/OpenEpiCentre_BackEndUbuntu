#include "../../include/io/LaunchQue_Server.h"

#include <iostream>
#include <ostream>

#include "../../include/engine/Global.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
// public.
    TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::LaunchQue_Server() {

    }
    void* TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_generate_Program() {
        void* temp;
        temp = (void*)nullptr;
        try {
            CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_generate_Program();
        }
        catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << '\n';
        }
        return temp;
    }
    bool TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_get_flag_isPGM_INSTANTIATED() {

    }
    void TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_request_Wait_launch(uint8_t threadId) {

    }
    void TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_terminate_Program() {

    }
    void TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_thread_End(uint8_t threadId) {

    }
    uint8_t TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_coreId_To_launch() {

    }
    bool TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Active() {

    }
    bool TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(uint8_t threadId) {
        bool* temp;
        temp = nullptr;
        try {
            *temp = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(TestBench_Cpp_OpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(threadId));
        }
        catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << '\n';
        }
        return *temp;
    }
    bool TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Idle() {

    }
    bool TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_State_launchBit() {

    }
    void TestBench_Cpp_OpenEpiCentre::LaunchQue_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_set_Flag_ConcurrentCoreState(uint8_t concurrentThreadId, bool state) {

    }