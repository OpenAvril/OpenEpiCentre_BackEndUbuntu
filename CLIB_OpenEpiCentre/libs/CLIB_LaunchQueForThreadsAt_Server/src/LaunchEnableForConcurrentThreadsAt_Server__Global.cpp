#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Global.h"
#include <cstring>
#include <iostream>
    std::array<bool, 3>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE;
    uint8_t* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads;
// public.
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::LaunchEnableForConcurrentThreadsAt_Server__Global() {
        boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global();
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::~LaunchEnableForConcurrentThreadsAt_Server__Global() {
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global() {
        std::cout << "entered boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global()." << std::endl;
        std::cout << "exiting boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global() {
        std::cout << "entered boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global()." << std::endl;
        std::cout << "exiting boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global() {
        std::cout << "entered boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
        std::cout << "exiting boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global() {
        std::cout << "entered boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
        std::cout << "exiting boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global() {
        std::cout << "entered boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
        std::cout << "exiting boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Global() {
        std::cout << "entered boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
        std::cout << "exiting boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global() {
        std::cout << "entered boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
        std::cout << "exiting boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server__Global() {

    }
    bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_ACTIVE() {
        return true;
    }
    bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_IDLE() {
        return false;
    }

    uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads() {
        return *stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads();
    }
    unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__Global__bool_to_ByteArray(bool bool_Value) {
        return reinterpret_cast<unsigned char*>(bool_Value);
    }
    unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__Global__uint8_t_To_ByteArray(uint8_t uint8_t_Value) {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        return bytes_array;
    }
    bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__Global__ByteArray_To_bool(unsigned char* bytes) {
        return bytes[1] != 0;
    }
    uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__Global__ByteArray_To_uint8_t(unsigned char* bytes) {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
// private.
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot1_DEFINE_FLAG_LaunchEnableForConcurrentThreadsAt_Server__Global__thread_2STATE() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads()
    {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot2_SUBSTANTIATE_FLAG_LaunchEnableForConcurrentThreadsAt_Server__Global__thread_2STATE() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE = new std::array<bool, 3>();//todo: number of concurrent threads.
        while (_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE == nullptr) {

        }
        for (int index = 0; index < *stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads(); index++) {
            stat_REG_set_Item_On_Array_Of_FLAG_LaunchEnableForConcurrentThreadsAt_Server__Global__thread_2STATE_ACTIVE(index, true);
        }
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads() {
        std::cout << "entered stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads = new uint8_t(UINT8_MAX);
        std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot3_INITIALISE_FLAG_LaunchEnableForConcurrentThreadsAt_Server__Global__thread_2STATE() {
        std::cout << "entered stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
        for (int index = 0; index < *stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads(); index++) {
            stat_REG_set_Item_On_Array_Of_FLAG_LaunchEnableForConcurrentThreadsAt_Server__Global__thread_2STATE_ACTIVE(index, false);
        }
        std::cout << "exiting stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads() {
        *_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads = static_cast<uint8_t>(3);//todo: number of concurrent threads.
    }
    bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_get_Item_On_Array_Of_FLAG_LaunchEnableForConcurrentThreadsAt_Server__Global__thread_2STATE(uint8_t concurrentThreadId) {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE->at(concurrentThreadId);
    }
    uint8_t* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_set_Item_On_Array_Of_FLAG_LaunchEnableForConcurrentThreadsAt_Server__Global__thread_2STATE_ACTIVE(uint8_t concurrentThreadId, bool FLAG_bool) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE->at(concurrentThreadId) = FLAG_bool;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads(uint8_t number_Implemented_Threads) {
	    *_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_number_Implemented_Threads = number_Implemented_Threads;
    }