#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Execute.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include "../libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.h"
#include <iostream>
    void* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode;
// public.
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
        stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::~LaunchEnableForConcurrentThreadsAt_Server_Execute() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        delete _stat_PGM_CLIB_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        unsigned char* byte_uint8_t = LaunchEnableForConcurrentThreadsAt_Server_Global::stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_uint8_t_To_ByteArray(threadId, static_cast<uint8_t>(255));
        //CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program(threadId);
        unsigned char* tempA0 = CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId);
        CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_terminate_Program(threadId);
        CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_End(threadId, byte_uint8_t);
        CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_Start(threadId, byte_uint8_t);
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : dyn_PGM_boot4_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(threadId);
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(threadId);
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
// private.
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(threadId)." << std::endl;
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode = nullptr;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(threadId)." << std::endl;
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode = CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program(threadId);
        while (stat_PGM_get_ptr_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(threadId) == nullptr) {}
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(threadId)." << std::endl;
    }
    void* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute::stat_PGM_get_ptr_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: <= bool : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId)." << std::endl;
        return _stat_PGM_CLIB_WriteQueForThreadsAt_ServerLaunchQue_ConditionCode;
    }
