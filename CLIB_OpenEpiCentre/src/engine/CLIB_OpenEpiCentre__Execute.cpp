#include "../../include/engine/CLIB_OpenEpiCentre__Execute.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/include/CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Algorithms.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Global.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_CLIB_LaunchQueForThreadsAt_Server;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::CLIB_OpenEpiCentre__Execute() {
        std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre__Execute()." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute();
        std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre__Execute()." << std::endl;
    }
        CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::~CLIB_OpenEpiCentre__Execute()
    {
        delete _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Execute__Control();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()" << std::endl;
        std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute()" << std::endl;
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()" << std::endl;
        std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre__Framework* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()" << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_CLIB_LaunchQueForThreadsAt_Server();
        stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode();
        stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerInputReceive();
        stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerOutputSend();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_CLIB_LaunchQueForThreadsAt_Server();
        stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode();
        stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerInputReceive();
        stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerOutputSend();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
        unsigned char* praiseEventId = CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(UINT8_MAX);
        unsigned char* threadId = CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(255));
        unsigned char* byte_bool = CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbbool_to_MsbByteArray(true);

        std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() " << std::endl;
        //CLIBWriteQueAtServerInputReceive::CLIBWriteEnableForThreadsAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_generate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_End(threadId);
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_Start(threadId);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() " << std::endl;

        std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() " << std::endl;
        //CLIBWriteQueAtServerOutputSend::CLIBWriteEnableForThreadsAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_generate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_End(threadId);
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_Start(threadId);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() " << std::endl;

        std::cout << "entered CHECK member function of CLIB_LaunchEnableForConcurrentThreadsAt_Server() " << std::endl;
        //CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_generate_Program();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_request_Wait_launch(threadId);
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_terminate_Progaram();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_thread_End(threadId);
        unsigned char* tempA0 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_coreId_To_launch();
        unsigned char* tempA2 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_Active();
        unsigned char* tempA3 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_ConcurrentCoreState(threadId);
        unsigned char* tempA4 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_Idle();
        unsigned char* tempA5 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_FLAG_isPGM_INSTANTIATED();
        unsigned char* tempA6 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_State_launchBit();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_set_Flag_ConcurrentCoreState(threadId, byte_bool);
        std::cout << "done CHECK member function of CLIB_LaunchEnableForConcurrentThreadsAt_Server() " << std::endl;

        std::cout << "entered CHECK member function of CLIBWriteEnableForThreadsAtServerConditionCode() " << std::endl;
        //CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App_FUNCT_generate_Program();
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App_FUNCT_terminate_Program();
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App_FUNCT_write_End(threadId);
        CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App_FUNCT_write_Start(threadId);
        std::cout << "done CHECK member function of CLIBWriteEnableForThreadsAtServerConditionCode() " << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute()
    {

    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot1_DEFINE_Execute_Control()
    {
        _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot3_INITIALISE_Execute_Control()
    {
        _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control = new CLIB_OpenEpiCentre__Execute__Control();
        while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Execute__Control() == nullptr) {}
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Execute__Control()
    {
        return _stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_CLIB_LaunchQueForThreadsAt_Server()
    {
        _stat_PGM_CLIB_LaunchQueForThreadsAt_Server = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerInputReceive()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_CLIB_WriteQueForThreadsAt_ServerOutputSend()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_CLIB_LaunchQueForThreadsAt_Server()
    {
        _stat_PGM_CLIB_LaunchQueForThreadsAt_Server = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_LaunchQueForThreadsAt_Server() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode = CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerInputReceive()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive = CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerInputReceive() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_CLIB_WriteQueForThreadsAt_ServerOutputSend()
    {
        _stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend = CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerOutputSend() == nullptr) {}
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_CLIB_LaunchQueForThreadsAt_Server()
    {
        return _stat_PGM_CLIB_LaunchQueForThreadsAt_Server;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode()
    {
        return _stat_PGM_CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerInputReceive()
    {
        return _stat_PGM_CLIB_WriteQueForThreadsAt_ServerInputReceive;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_CLIB_WriteQueForThreadsAt_ServerOutputSend()
    {
        return _stat_PGM_CLIB_WriteQueForThreadsAt_ServerOutputSend;
    }