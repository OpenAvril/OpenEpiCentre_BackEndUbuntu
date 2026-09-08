#include "../../include/engine/CLIB_OpenEpiCentre__Execute.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerConditionCode/include/CLIB_WriteEnableForThreadsAt_ServerConditionCode.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Algorithms.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Global.h"
#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include <iostream>
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_CLASS_CLIB_OpenEpiCentre__Execute__Control;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_LaunchQue_Server;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_WriteEnable_ServerInputReceive;
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::_stat_PGM_WriteEnable_ServerOutputSend;
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
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_PGM_get_ConcurrentQue_Server()
    {
        return stat_PGM_get_ptr_ConcurrentQue_Server();
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_PGM_get_WriteEnable_ServerInputReceive()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerInputReceive();
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::dyn_PGM_get_WriteEnable_ServerOutputSend()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerOutputSend();
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
        stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        stat_PGM_boot1_DEFINE_ServerInputReceive();
        stat_PGM_boot1_DEFINE_ServerOutputSend();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        stat_PGM_boot3_INITIALISE_ServerInputReceive();
        stat_PGM_boot3_INITIALISE_ServerOutputSend();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
        unsigned char* bytes_unsignedLongLong = CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_unsignedLongLong_to_ByteArray(UINT8_MAX);
        unsigned char* byte_uint8_t = CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByte_To_MsbByteArray(static_cast<std::byte>(255));
        unsigned char* byte_bool = CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(true);

        std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() " << std::endl;
        //CLIBWriteQueAtServerInputReceive::CLIBWriteEnableForThreadsAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_generate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_End(bytes_unsignedLongLong);
        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_Start(bytes_unsignedLongLong);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerInputReceive() " << std::endl;

        std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() " << std::endl;
        //CLIBWriteQueAtServerOutputSend::CLIBWriteEnableForThreadsAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_generate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_End(bytes_unsignedLongLong);
        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_Start(bytes_unsignedLongLong);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerOutputSend() " << std::endl;

        std::cout << "entered CHECK member function of CLIB_LaunchEnableForConcurrentThreadsAt_Server() " << std::endl;
        //CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_generate_Program();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_request_Wait_launch(byte_uint8_t);
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_terminate_Progaram();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_thread_End(byte_uint8_t);
        unsigned char* tempA0 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_coreId_To_launch();
        unsigned char* tempA2 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_Active();
        unsigned char* tempA3 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_ConcurrentCoreState(byte_uint8_t);
        unsigned char* tempA4 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_Idle();
        unsigned char* tempA5 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_FLAG_isPGM_INSTANTIATED();
        unsigned char* tempA6 = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_State_launchBit();
        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_set_Flag_ConcurrentCoreState(byte_uint8_t, byte_bool);
        std::cout << "done CHECK member function of CLIB_LaunchEnableForConcurrentThreadsAt_Server() " << std::endl;

        std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_ServerConditionCode() " << std::endl;
        //CLIBWriteQueAtServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode__App_FUNCT_generate_Program();
        CLIBWriteQueAtServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
        CLIBWriteQueAtServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode__App_FUNCT_terminate_Program();
        CLIBWriteQueAtServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode__App_FUNCT_write_End(bytes_unsignedLongLong);
        CLIBWriteQueAtServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode::CLIB_WriteEnableForThreadsAt_ServerConditionCode__App_FUNCT_write_Start(bytes_unsignedLongLong);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_ServerConditionCode() " << std::endl;

        delete bytes_unsignedLongLong;
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
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_ConcurrentQue_Server()
    {
        _stat_PGM_LaunchQue_Server = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_ServerInputReceive()
    {
        _stat_PGM_WriteEnable_ServerInputReceive = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot1_DEFINE_ServerOutputSend()
    {
        _stat_PGM_WriteEnable_ServerOutputSend = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_ConcurrentQue_Server()
    {
        _stat_PGM_LaunchQue_Server = CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_ConcurrentQue_Server() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_ServerInputReceive()
    {
        _stat_PGM_WriteEnable_ServerInputReceive = CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerInputReceive() == nullptr) {}
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_boot3_INITIALISE_ServerOutputSend()
    {
        _stat_PGM_WriteEnable_ServerOutputSend = CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerOutputSend() == nullptr) {}
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_ConcurrentQue_Server()
    {
        return _stat_PGM_LaunchQue_Server;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_WriteEnable_ServerInputReceive()
    {
        return _stat_PGM_WriteEnable_ServerInputReceive;
    }
    void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute::stat_PGM_get_ptr_WriteEnable_ServerOutputSend()
    {
        return _stat_PGM_WriteEnable_ServerOutputSend;
    }