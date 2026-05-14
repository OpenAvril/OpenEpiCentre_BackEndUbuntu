#include "CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"
#include "CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND/CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND.h"
#include "CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE/CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE.h"
#include "engine/Algorithms.h"
#include "engine/Execute.h"
#include "engine/Execute_Control.h"
#include "engine/Framework_Server.h"
#include "engine/Global.h"
#include "engine/Server.h"
#include "structs/Concurrent.h"
#include <iostream>
    CLIBOpenEpiCentre::Execute_Control* CLIBOpenEpiCentre::Execute::_stat_CLASS_ptr_Execute_Control;
    std::list<std::thread*>* CLIBOpenEpiCentre::Execute::_stat_REG_List_Of_Threads;
    void* CLIBOpenEpiCentre::Execute::_stat_PGM_ConcurrentQue_Server;
    void* CLIBOpenEpiCentre::Execute::_stat_PGM_WriteEnable_SERVERINPUTRECEIVE;
    void* CLIBOpenEpiCentre::Execute::_stat_PGM_WriteEnable_SERVEROUTPUTSEND;
// public.
    CLIBOpenEpiCentre::Execute::Execute()
    {
        std::cout << "entered CONSTRUCTOR of Execute()." << std::endl;
        stat_CLASS_boot0_DECLARE_Execute();
        stat_CLASS_boot1_DEFINE_Execute();
        stat_CLASS_boot3_INITIALISE_Execute();
        stat_REG_boot0_DECLARE_Execute();
        std::cout << "exiting CONSTRUCTOR of Execute()." << std::endl;
    }
        CLIBOpenEpiCentre::Execute::~Execute()
    {
        delete _stat_CLASS_ptr_Execute_Control;
        delete _stat_REG_List_Of_Threads;
    }
    CLIBOpenEpiCentre::Execute_Control* CLIBOpenEpiCentre::Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return stat_CLASS_get_ptr_Execute_Control();
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot1_DEFINE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Execute()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_Threads();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot2_SUBSTANTIATE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot3_INITIALISE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
        stat_REG_boot3_INITIALISE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot4_INSTANTIATE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void* CLIBOpenEpiCentre::Execute::dyn_PGM_get_ConcurrentQue_Server()
    {
        return stat_PGM_get_ptr_ConcurrentQue_Server();
    }
    void* CLIBOpenEpiCentre::Execute::dyn_PGM_get_WriteEnable_SERVERINPUTRECEIVE()
    {
        return stat_PGM_get_ptr_WriteEnable_SERVERINPUTRECEIVE();
    }
    void* CLIBOpenEpiCentre::Execute::dyn_PGM_get_WriteEnable_SERVEROUTPUTSEND()
    {
        return stat_PGM_get_ptr_WriteEnable_SERVEROUTPUTSEND();
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot0_DECLARE_Execute()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot1_DEFINE_Execute()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        stat_PGM_boot1_DEFINE_SERVERINPUTRECEIVE();
        stat_PGM_boot1_DEFINE_SERVEROUTPUTSEND();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot3_INITIALISE_Execute()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        stat_PGM_boot3_INITIALISE_SERVERINPUTRECEIVE();
        stat_PGM_boot3_INITIALISE_SERVEROUTPUTSEND();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot4_INSTANTIATE_Execute()
    {
    std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
        unsigned char* bytes_uint8_t = CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(UINT8_MAX);

       std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE() " << std::endl;
        //CLIBWriteQueAtSERVERINPUTRECEIVE::CLIBWriteEnableForThreadsAtSERVERINPUTReceive::app_FUNCT_generate_Program();
        CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_get_flag_isPGM_INSTANTIATED();
        CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_terminate_Program();
        CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_write_End(bytes_uint8_t);
        CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_write_Start(bytes_uint8_t);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE() " << std::endl;

        std::cout << "entered CHECK member function of CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND() " << std::endl;
        //CLIBWriteQueAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_generate_Program();
        CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_get_flag_isPGM_INSTANTIATED();
        CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_terminate_Program();
        CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_write_End(bytes_uint8_t);
        CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_write_Start(bytes_uint8_t);
        std::cout << "done CHECK member function of CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND() " << std::endl;

        std::cout << "entered CHECK member function of CLIBLaunchEnableForConcurrentThreadsAtSERVER() " << std::endl;
        //CLIBLaunchQueAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_generate_Program();
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_get_flag_isPGM_INSTANTIATED();
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_request_Wait_launch(bytes_uint8_t);
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_terminate_Progaram();
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_thread_End(bytes_uint8_t);
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_coreId_To_launch();
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_Flag_Active();
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_Flag_ConcurrentCoreState(bytes_uint8_t);
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_Flag_Idle();
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_State_launchBit();
        CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_REG_get_Flag_ConcurrentCoreState(bytes_uint8_t);
        std::cout << "done CHECK member function of CLIBLaunchEnableForConcurrentThreadsAtSERVER() " << std::endl;

        delete bytes_uint8_t;
    std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot0_DECLARE_Execute()
    {

    }
// private.
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot1_DEFINE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = nullptr;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot3_INITIALISE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = new Execute_Control();
        while (stat_CLASS_get_ptr_Execute_Control() == nullptr) {}
    }
    CLIBOpenEpiCentre::Execute_Control* CLIBOpenEpiCentre::Execute::stat_CLASS_get_ptr_Execute_Control()
    {
        return _stat_CLASS_ptr_Execute_Control;
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot1_DEFINE_List_Of_Threads()
    {
        _stat_REG_List_Of_Threads = nullptr;
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(Framework_Server* obj)
    {
        _stat_REG_List_Of_Threads = new std::list<std::thread*>();
        while (stat_PGM_get_ptr_List_Of_Threads() == nullptr) { }
        stat_PGM_get_ptr_List_Of_Threads()->resize(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1);
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = nullptr;
        }
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot3_INITIALISE_List_Of_Threads(Framework_Server* obj)
    {
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = new std::thread(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(threadId)->stat_app_thread_Concurrency, obj, threadId);
        }
    }
    std::list<std::thread*>* CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_List_Of_Threads()
    {
        return _stat_REG_List_Of_Threads;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot1_DEFINE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = nullptr;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot1_DEFINE_SERVERINPUTRECEIVE()
    {
        _stat_PGM_WriteEnable_SERVERINPUTRECEIVE = nullptr;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot1_DEFINE_SERVEROUTPUTSEND()
    {
        _stat_PGM_WriteEnable_SERVEROUTPUTSEND = nullptr;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot3_INITIALISE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = CLIBLaunchQueAtSERVER::CLIB_LaunchEnableForConcurrentThreadsAt_SERVER::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_ConcurrentQue_Server() == nullptr) {}
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot3_INITIALISE_SERVERINPUTRECEIVE()
    {
        _stat_PGM_WriteEnable_SERVERINPUTRECEIVE = CLIBWriteQueAtSERVERINPUTRECEIVE::CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_SERVERINPUTRECEIVE() == nullptr) {}
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot3_INITIALISE_SERVEROUTPUTSEND()
    {
        _stat_PGM_WriteEnable_SERVEROUTPUTSEND = CLIBWriteQueAtSERVEROUTPUTSEND::CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_SERVEROUTPUTSEND() == nullptr) {}
    }
    void* CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_ConcurrentQue_Server()
    {
        return _stat_PGM_ConcurrentQue_Server;
    }
    void* CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_WriteEnable_SERVERINPUTRECEIVE()
    {
        return _stat_PGM_WriteEnable_SERVERINPUTRECEIVE;
    }
    void* CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_WriteEnable_SERVEROUTPUTSEND()
    {
        return _stat_PGM_WriteEnable_SERVEROUTPUTSEND;
    }