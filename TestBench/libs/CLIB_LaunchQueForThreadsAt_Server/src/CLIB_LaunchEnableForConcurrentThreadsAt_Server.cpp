#include <iostream>
#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Global.h"
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
    bool* _stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED;
// public.
    void* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_FUNCT_generate_Program()
    {
    std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
    stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
    stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
    std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

    std::cout << "started Registers - DEFINE" << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework());
    std::cout << "done Registers - DEFINE." << std::endl;

    std::cout << "started Registers - SUBSTANTIATE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework());
    std::cout << "done Registers - SUBSTANTIATE." << std::endl;

    std::cout << "started Registers - INITIALISE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework());
    std::cout << "done Registers - INITIALISE." << std::endl;

    std::cout << "started Program - INSTANTIATION." << std::endl;
    stat_REG_boot1_DEFINE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
    stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
    stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework());
    std::cout << "done Program - INSTANTIATION." << std::endl;

    std::cout << "" << std::endl;
    std::cout << "        ,     \\      /      ," << std::endl;
    std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
    std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
    std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
    std::cout << "|              |\\../|               |" << std::endl;
    std::cout << "|               \\VV/                |" << std::endl;
    std::cout << "|        MIT Launch Que .dll        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
    std::cout << "|  /    V          ))        V   \\  |" << std::endl;
    std::cout << "|/                //               \\| " << std::endl;
    std::cout << "`                 V                 '" << std::endl;
    std::cout << "" << std::endl;
    return (void*)stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework();
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_FUNCT_get_flag_isPGM_INSTANTIATED()
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[1] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[0]);
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[1] = false;
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_FUNCT_request_Wait_launch(unsigned char* bytes)
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[2] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Start(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(), CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[2] = false;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_FUNCT_terminate_Progaram()
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[3] == false) {
            delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[3] = false;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_FUNCT_thread_End(unsigned char* bytes)
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[4] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Server(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(), (uint8_t)*bytes);
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[4] = false;
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_REG_get_coreId_To_launch()
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[5] == false) {
            return CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_uint8_t_To_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[5] = false;
            return CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_uint8_t_To_ByteArray(UINT8_MAX);
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_REG_get_Flag_Active()
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[6] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE());
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[6] = false;
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes)
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[7] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes)));
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[7] = false;
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_REG_get_Flag_Idle()
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[8] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[8] = false;
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(true));
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_REG_get_State_launchBit()
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[9] == false) {
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0)));
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[9] = false;
            return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_bool_to_ByteArray(true);
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char*  byteBool)
    {
        if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[10] == false) {
            stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->stat_CONVERT_ByteArray_To_uint8_t(bytesThreadId), byteBool);
        }
        else {
            stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[10] = false;
            stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
        }
    }
// private.
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
    {
        stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[0] = false;
        for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()); memberFunctionId++)
        {
            if (stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[memberFunctionId] == true)
            {
                stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()[0] = true;
            }
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework()
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework();
        while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework() == nullptr) {}
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_REG_boot1_DEFINE_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        _stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        _stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED = new bool[11]();
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()); index++)
        {
            _stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED[index] = true;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()); index++)
        {
            _stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED[index] = true;
        }
    }
    bool* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED()
    {
        return _stat_CLIBLaunchQueAtServer_REG_isFlagINSTANTIATED;
    }