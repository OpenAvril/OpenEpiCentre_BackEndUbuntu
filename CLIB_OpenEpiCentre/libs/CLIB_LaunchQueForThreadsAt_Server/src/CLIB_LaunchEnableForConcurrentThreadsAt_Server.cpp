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
    void* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_generate_Program() {
		std::cout << "thread "  << threadId << " :: entered app_FUNCT_generate_Program()." << std::endl;

		std::cout << "thread "  << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
		std::cout << "thread "  << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started LaunchEnableForConcurrentThreadsAt_Server_Global Meta-Data and Settings." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings();
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global();
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global();
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global();
		std::cout << "thread "  << threadId << " :: done LaunchEnableForConcurrentThreadsAt_Server_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread "  << threadId << " :: started IndepServerent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread "  << threadId << " :: done IndepServerent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_create_Architecture();
		std::cout << "thread "  << threadId << " :: started Registers - DEFINE" << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control();
		std::cout << "thread "  << threadId << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread "  << threadId << " :: started Registers - SUBSTANTIATE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework());
		std::cout << "thread "  << threadId << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread "  << threadId << " :: started Registers - INITIALISE." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control();
		std::cout << "thread "  << threadId << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread "  << threadId << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started Program - INSTANTIATION." << std::endl;
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
		CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute()->dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute();
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
    return (void*)CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework();
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_request_Wait_launch(unsigned char* bytes)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_Start(CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(), CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_uint8_t(bytes));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[1] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_terminate_Progaram()
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            delete CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[2] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_thread_End(unsigned char* bytes)
    {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_End(CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(), (uint8_t)*bytes);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[3] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch()
    {
        uint8_t* result = nullptr;
        result = new uint8_t(UINT8_MAX);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(0);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[4] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
        return CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_uint8_t_To_ByteArray(*result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Active()
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE();
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[5] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(*result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes)
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_uint8_t(bytes));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[6] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(*result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Idle() {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE();
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[7] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(*result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_FLAG_isPGM_INSTANTIATED() {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(*result);
    }
    unsigned char* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_State_launchBit() {
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            *result = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(0));
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[8] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
        return LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(*result);
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char*  byteBool) {
        if (!CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0]) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework()->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_uint8_t(bytesThreadId), byteBool);
        }
        else {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[9] = !CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0];
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
        }
    }
// private.
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED() {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0] = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()); memberFunctionId++) {
            if (CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[memberFunctionId]) {
                CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[0] = CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()[memberFunctionId];
                break;
            }
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework();
        while (CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework() == nullptr) {}
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
        return CLIB_LaunchEnableForConcurrentThreadsAt_Server_dyn_CLASS_ptr_Framework_LaunchEnableForConcurrentThreadsAt_Server;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED() {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED = nullptr;
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED() {
        CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[10]();
        while (CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED() == nullptr) { }
        for (int index = 0; index < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()); index++) {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    void CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
    {
        for (int index = 0; index < sizeof(*CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()); index++)
        {
            CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
        }
    }
    bool* CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED()
    {
        return CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_flag_isMemberFunctionINSTANTIATED;
    }