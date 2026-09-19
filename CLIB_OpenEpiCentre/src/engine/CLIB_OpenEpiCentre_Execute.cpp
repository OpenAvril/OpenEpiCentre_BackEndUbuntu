#include "../../include/engine/CLIB_OpenEpiCentre_Execute.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/include/CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Algorithms.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute_Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_Global.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT_Concurrent.h"
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::_stat_CLASS_CLIB_OpenEpiCentre_Execute_Control;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::_stat_PGM_CLIB_LaunchQueForThreadsAt_Server;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::CLIB_OpenEpiCentre_Execute() {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_Execute()."));
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Execute()."));
    }
        CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::~CLIB_OpenEpiCentre_Execute()
    {
        delete _stat_CLASS_CLIB_OpenEpiCentre_Execute_Control;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute_Control();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()"));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()"));
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_CLIB_LaunchQueForThreadsAt_Server();
        stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode();
        stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerInputReceive();
        stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerOutputSend();
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()"));
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_CLIB_LaunchQueForThreadsAt_Server();
        stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode();
        stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerInputReceive();
        stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerOutputSend();
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_Execute()"));
        unsigned char* praiseEventId = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(UINT8_MAX);
        unsigned char* threadId = CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(255));
        unsigned char* byte_bool = CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(true);

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() "));
        //CLIBWriteQueAtServerInputReceive::CLIBWriteEnableForThreadsAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_app_FUNCT_generate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_End(threadId);
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_Start(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() "));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() "));
        //CLIBWriteQueAtServerOutputSend::CLIBWriteEnableForThreadsAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_app_FUNCT_generate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_End(threadId);
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_Start(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() "));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered CHECK member function of CLIB_LaunchEnableForConcurrentThreadsAt_Server() "));
        //CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_generate_Program();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_request_Wait_launch(threadId);
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_terminate_Progaram();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_thread_End(threadId);
        unsigned char* tempA0 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch();
        unsigned char* tempA2 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Active();
        unsigned char* tempA3 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(threadId);
        unsigned char* tempA4 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Idle();
        unsigned char* tempA5 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_FLAG_isPGM_INSTANTIATED();
        unsigned char* tempA6 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_State_launchBit();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_set_Flag_ConcurrentCoreState(threadId, byte_bool);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done CHECK member function of CLIB_LaunchEnableForConcurrentThreadsAt_Server() "));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered CHECK member function of CLIBWriteEnableForThreadsAtServerConditionCode() "));
        //CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_generate_Program();
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_terminate_Program();
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_End(threadId);
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_Start(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: done CHECK member function of CLIBWriteEnableForThreadsAtServerConditionCode() "));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_Execute()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()
    {

    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_CLASS_boot1_DEFINE_Execute_Control()
    {
        _stat_CLASS_CLIB_OpenEpiCentre_Execute_Control = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_CLASS_boot3_INITIALISE_Execute_Control()
    {
        _stat_CLASS_CLIB_OpenEpiCentre_Execute_Control = new CLIB_OpenEpiCentre_Execute_Control();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute_Control() == nullptr) {}
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Execute_Control()
    {
        return _stat_CLASS_CLIB_OpenEpiCentre_Execute_Control;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot1_DEFINE_CLIB_LaunchQueForThreadsAt_Server()
    {
        _stat_PGM_CLIB_LaunchQueForThreadsAt_Server = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerInputReceive()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerOutputSend()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot3_INITIALISE_CLIB_LaunchQueForThreadsAt_Server()
    {
        _stat_PGM_CLIB_LaunchQueForThreadsAt_Server = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_LaunchQueForThreadsAt_Server() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode = CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerInputReceive()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive = CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerInputReceive() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerOutputSend()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend = CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerOutputSend() == nullptr) {}
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_get_ptr_CLIB_LaunchQueForThreadsAt_Server()
    {
        return _stat_PGM_CLIB_LaunchQueForThreadsAt_Server;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode()
    {
        return _stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerInputReceive()
    {
        return _stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute::stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerOutputSend()
    {
        return _stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend;
    }