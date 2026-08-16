#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Global.h"
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
bool* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;
std::byte* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
// public.
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::LaunchEnableForConcurrentThreadsAt_Server__Global()
    {

    }
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::~LaunchEnableForConcurrentThreadsAt_Server__Global()
{
    delete _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global()
{
    std::cout << "entered dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
    stat_dyn_REG_boot1_DEFINE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
    stat_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global()
{
    std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
    stat_REG_boot2_SUBSTANTIATE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
    stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()
{
    std::cout << "entered dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
    stat_REG_boot3_INITIALISE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
    stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE() {
    return *stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE() {
    return !*stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
}
std::byte CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    return *stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
}
    int CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__Bool_To_Int(bool value)
    {
        int* temp = nullptr;
        *temp = 2;
        if (value) {
            *temp = 1;;
        }
        if (!value) {
            *temp = 0;
        }
        return *temp;
    }
    unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbBoolean_To_MsbByteArray(bool value)
    {
        unsigned char* buffer = nullptr;
        for (int bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        return buffer;
    }
    bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray)
    {
        return (byteArray[7] & 1) != 0;
    }
    std::byte CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbByte(const unsigned char* byteArray)
    {
        std::byte temp;
        std::memcpy(&temp, byteArray, sizeof(std::byte));
        return temp;
    }
    double CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbDouble(const unsigned char* byteArray)
    {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        return temp;
    }
    float CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbFloat(const unsigned char* byteArray)
    {
        float temp;
        std::memcpy(&temp, byteArray, sizeof(float));
        return temp;
    }
    unsigned long long CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbunsignedLongLong(const unsigned char* byteArray)
    {
        unsigned long long temp;
        std::memcpy(&temp, byteArray, sizeof(unsigned long));
        return temp;
    }
    unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByte_To_MsbByteArray(std::byte byte) {
        unsigned char* temp;
        std::memcpy(&temp, &byte, sizeof(std::byte));
        return temp;
    }
    unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbFloat_To_MsbByteArray(float value)
    {
        unsigned char* buffer = nullptr;
        std::memcpy(buffer, &value, sizeof(float));
        return buffer;
    }
    unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbDouble_To_MsbByteArray(double value)
    {
        unsigned char* buffer = nullptr;
        std::memcpy(buffer, &value, sizeof(double));
        return buffer;
    }
    unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__unsignedLongLong_to_ByteArray(unsigned long long value)
    {
        unsigned char* buffer = nullptr;
        std::memcpy(buffer, &value, sizeof(unsigned long));
        return buffer;
    }
// private.
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_dyn_REG_boot1_DEFINE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot2_SUBSTANTIATE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
    _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = new bool();
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = true;
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = new std::byte();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = static_cast<std::byte>(255);;
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot3_INITIALISE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    std::cout << "entered stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = true;
    std::cout << "exiting stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = static_cast<std::byte>(3);;
}
bool* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    return _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;
}
std::byte* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE(bool bit)
{
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = bit;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads(std::byte number_Implemented_Threads)
{
	*_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = number_Implemented_Threads;
}