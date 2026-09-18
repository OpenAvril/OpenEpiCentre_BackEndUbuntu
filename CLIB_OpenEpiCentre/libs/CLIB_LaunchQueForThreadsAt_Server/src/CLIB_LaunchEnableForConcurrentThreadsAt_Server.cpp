#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Execute.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Global.h"
#include <climits>
#include <iostream>
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
    bool* CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
    void* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_generate_Program(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered app_FUNCT_generate_Program(threadId)." << std::endl;

		std::cout << "thread "  << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId);
		std::cout << "thread "  << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started LaunchEnableForConcurrentThreadsAt_Server_Global Meta-Data and Settings." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		std::cout << "thread "  << threadId << " :: done LaunchEnableForConcurrentThreadsAt_Server_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread "  << threadId << " :: started IndepServerent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread "  << threadId << " :: done IndepServerent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_create_Architecture(threadId);
		std::cout << "thread "  << threadId << " :: started Registers - DEFINE" << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId);
		std::cout << "thread "  << threadId << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread "  << threadId << " :: started Registers - SUBSTANTIATE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId));
		std::cout << "thread "  << threadId << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread "  << threadId << " :: started Registers - INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId);
		std::cout << "thread "  << threadId << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread "  << threadId << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started Program - INSTANTIATION." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(threadId);
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(threadId);
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)->dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
		std::cout << "thread "  << threadId << " :: done Program - INSTANTIATION." << std::endl;

    std::cout << "thread "  << threadId << " :: " << std::endl;
    std::cout << "thread "  << threadId << " ::         ,     \\      /      ," << std::endl;
    std::cout << "thread "  << threadId << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
    std::cout << "thread "  << threadId << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
    std::cout << "thread "  << threadId << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
    std::cout << "thread "  << threadId << " :: |              |\\../|               |" << std::endl;
    std::cout << "thread "  << threadId << " :: |               \\VV/                |" << std::endl;
    std::cout << "thread "  << threadId << " :: |        MIT Launch Que .dll        |" << std::endl;
    std::cout << "thread "  << threadId << " :: |__________________|" << std::endl;
    std::cout << "thread "  << threadId << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
    std::cout << "thread "  << threadId << " :: |  /    V          ))        V   \\  |" << std::endl;
    std::cout << "thread "  << threadId << " :: |/                //               \\| " << std::endl;
    std::cout << "thread "  << threadId << " :: `                 V                 '" << std::endl;
    std::cout << "thread "  << threadId << " :: " << std::endl;
    return (void*)CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId);
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_request_Wait_launch(uint8_t threadId, unsigned char* bytes)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_Start(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId), CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_uint8_t(threadId, bytes));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[1] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_terminate_Progaram(uint8_t threadId)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            delete CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[2] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_thread_End(uint8_t threadId, unsigned char* bytes)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_End(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId), (uint8_t)*bytes);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[3] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch(uint8_t threadId)
    {
        uint8_t* result = nullptr;
        result = new uint8_t(UINT8_MAX);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[4] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        return CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_uint8_t_To_ByteArray(threadId, *result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Active(uint8_t threadId)
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[5] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytes)
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_uint8_t(threadId, bytes));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[6] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Idle(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE(threadId);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[7] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_State_launchBit(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[8] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(threadId, *result);
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_set_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytesthreadId, unsigned char*  byteBool) {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0]) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_uint8_t(threadId, bytesthreadId), byteBool);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[9] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
    }
// private.
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0] = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)); memberFunctionId++) {
            if (CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[memberFunctionId]) {
                CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[0] = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)[memberFunctionId];
                break;
            }
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId);
        while (CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId) == nullptr) {}
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
        return CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(uint8_t threadId) {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[10](threadId);
        while (CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId) == nullptr) { }
        for (int index = 0; index < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)); index++) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(uint8_t threadId)
    {
        for (int index = 0; index < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)); index++)
        {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    bool* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(uint8_t threadId)
    {
        return CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED;
    }