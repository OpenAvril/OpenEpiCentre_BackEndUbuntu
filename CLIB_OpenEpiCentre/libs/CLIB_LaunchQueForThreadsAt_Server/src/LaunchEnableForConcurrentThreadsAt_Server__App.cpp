#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App.h"
#include <iostream>
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Control;
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Ececute;
// public.
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::LaunchEnableForConcurrentThreadsAt_Server__App() {
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App();
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App();
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App();
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::~LaunchEnableForConcurrentThreadsAt_Server__App() {
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Ececute;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__thread_Start(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_ACTIVE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads());
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__thread_End(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID) {
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_IDLE());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads());
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads());
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control();
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__Execute() {
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__Execute();
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App() {
	    std::cout << "entered dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App() {
	    std::cout << "entered dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App() {
	    std::cout << "entered dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
	    std::cout << "exiting dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App() {
        std::cout << "entered stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
        std::cout << "exiting stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App() {
        std::cout << "entered stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Execute();
        std::cout << "exiting stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App() {
        std::cout << "entered stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Execute();
        std::cout << "exiting stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App()." << std::endl;
    }
// private.
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Control = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Ececute = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Control = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control() == nullptr) { }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Execute() {
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Ececute = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Execute();
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__Execute() == nullptr) { }
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Control;
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__Execute() {
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Ececute;
    }