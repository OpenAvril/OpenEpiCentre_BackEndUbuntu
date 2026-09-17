#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include <iostream>
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control;
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute;
// public.
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::LaunchEnableForConcurrentThreadsAt_Server_App() {
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App();
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App();
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::~LaunchEnableForConcurrentThreadsAt_Server_App() {
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_Start(LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads());
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_End(LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads());
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control();
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute();
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App() {
	    std::cout << "thread "  << threadId << " :: entered dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
	    std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App() {
	    std::cout << "thread "  << threadId << " :: entered dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
	    std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App() {
	    std::cout << "thread "  << threadId << " :: entered dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
	    std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App() {
        std::cout << "thread "  << threadId << " :: entered stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App() {
        std::cout << "thread "  << threadId << " :: entered stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute();
        std::cout << "thread "  << threadId << " :: exiting stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App() {
        std::cout << "thread "  << threadId << " :: entered stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute();
        std::cout << "thread "  << threadId << " :: exiting stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App()." << std::endl;
    }
// private.
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control() == nullptr) { }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute() == nullptr) { }
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control;
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute;
    }