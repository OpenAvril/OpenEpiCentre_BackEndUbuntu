#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Global.h"
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
    std::array<bool, 3>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::_stat_REG_ptr_flag_thread_2STATE;
    uint8_t* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::_stat_REG_ptr_number_Implemented_Threads;

    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::LaunchEnableForConcurrentThreadsAt_Server_Global()
    {
        boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
        boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global();
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::~LaunchEnableForConcurrentThreadsAt_Server_Global()
{
    delete _stat_REG_ptr_flag_thread_2STATE;
    delete _stat_REG_ptr_number_Implemented_Threads;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

    std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

    std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

    std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

    std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

    std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

    std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()
{
    std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

    std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK_Global()
{

}
uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::dyn_REG_get_number_Implemented_Threads()
{
    return *stat_REG_get_ptr_number_Implemented_Threads();
}
unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(bool bool_Value)
{
    return reinterpret_cast<unsigned char*>(bool_Value);
}
unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value)
{
    unsigned char* bytes_array;
    std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
    return bytes_array;
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_ByteArray_To_bool(unsigned char* bytes)
{
    return bytes[1] != 0;
}
uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes)
{
    uint8_t cpp_uint8_t_value;
    std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
    return cpp_uint8_t_value;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_boot1_DEFINE_flag_thread_2STATE()
{
    _stat_REG_ptr_flag_thread_2STATE = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_boot1_DEFINE_number_Implemented_Threads()
{
    _stat_REG_ptr_number_Implemented_Threads = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
    _stat_REG_ptr_flag_thread_2STATE = new std::array<bool, 3>();
    while (stat_REG_get_ptr_flag_thread_2STATE() == NULL) {}
    *_stat_REG_ptr_flag_thread_2STATE = { true, true, true };
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
    _stat_REG_ptr_number_Implemented_Threads = new uint8_t(UINT8_MAX);
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_boot3_INITIALISE_flag_thread_2STATE()
{
    std::cout << "entered stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
    *_stat_REG_ptr_flag_thread_2STATE = { false, false, false };
    std::cout << "exiting stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_boot3_INITIALISE_number_Implemented_Threads()
{
    _stat_REG_ptr_number_Implemented_Threads = new uint8_t(UINT8_MAX);
}
std::array<bool, 3>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_get_ptr_flag_thread_2STATE()
{
    return _stat_REG_ptr_flag_thread_2STATE;
}
uint8_t* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_get_ptr_number_Implemented_Threads()
{
    return _stat_REG_ptr_number_Implemented_Threads;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_set_flag_thread_2STATE_ACTIVE(std::array<bool, 3>* bitArray)
{
    *_stat_REG_ptr_flag_thread_2STATE = *bitArray;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_REG_set_number_Implemented_Threads(uint8_t number_Implemented_Threads)
{
	*_stat_REG_ptr_number_Implemented_Threads = number_Implemented_Threads;
}