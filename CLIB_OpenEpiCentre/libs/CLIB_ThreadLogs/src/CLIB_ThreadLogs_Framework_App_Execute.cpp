#include "../include/CLIB_ThreadLogs_Framework_App_Execute.h"
#include "../libs/CLIB_WriteQueForThreadsAt_ThreadLogsId/include/CLIB_WriteEnableForThreadsAt_ThreadLogsId.h"
#include <iostream>

#include "CLIB_ThreadLogs_Framework_Global.h"
void* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_ThreadLogsId;
// public.
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::CLIB_ThreadLogs_Framework_App_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId);
        stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId);
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::~CLIB_ThreadLogs_Framework_App_Execute() {
        delete _stat_PGM_CLIB_WriteQueForThreadsAt_ThreadLogsId;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::dyn_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId);
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId);
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId);
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_REG_boot0_DECLARE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
// private.
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
        _stat_PGM_CLIB_WriteQueForThreadsAt_ThreadLogsId = nullptr;
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot1_DEFINE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
        _stat_PGM_CLIB_WriteQueForThreadsAt_ThreadLogsId = CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program(threadId);
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot3_INITIALISE_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
        unsigned char* bytes_DEFAULT = CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_CLIB_ThreadLogs_Framework_Global_Msbuint8_t_To_MsbByteArray(threadId, 255);
        //CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program();
        unsigned char* tempA1 =  CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId);
        CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_terminate_Program(threadId);
        CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_End(threadId, bytes_DEFAULT);
        CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_Start(threadId, bytes_DEFAULT);
        std::cout << "thread " << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App_Algorithms : stat_PGM_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Execute(threadId)." << std::endl;
    }
    void* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Execute::stat_PGM_get_ptr_WriteQueForThreadsAt_WriteQue_ThreadLogsId(uint8_t threadId) {
        std::cout << "thread " << threadId << " :: <= PGM : stat_PGM_get_ptr_WriteQueForThreadsAt_WriteQue_ThreadLogsId(threadId)." << std::endl;
        return _stat_PGM_CLIB_WriteQueForThreadsAt_ThreadLogsId;
    }