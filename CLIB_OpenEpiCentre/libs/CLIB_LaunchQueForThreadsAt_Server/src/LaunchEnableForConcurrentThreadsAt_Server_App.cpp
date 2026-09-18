#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include <iostream>
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control;
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::_stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute;
// public.
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
        stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
        stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::~LaunchEnableForConcurrentThreadsAt_Server_App() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control;
        delete _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_Start(uint8_t threadId, LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentthreadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_Start(threadId)." << std::endl;
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, 0), obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchQue_Update(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_SortQue(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(threadId));
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_Start(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_End(uint8_t threadId, LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentthreadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_End(threadId)." << std::endl;
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, concurrentthreadId, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchQue_Update(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(threadId));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_SortQue(threadId, obj, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(threadId));
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_End(threadId)." << std::endl;
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)." << std::endl;
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId);
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        return stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId);
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
        std::cout << "thread "  << threadId << " :: exiting stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId);
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
        std::cout << "thread "  << threadId << " :: exiting stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
// private.
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId)." << std::endl;
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control = nullptr;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute = nullptr;
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId);
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId) == nullptr) { }
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
        _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute = new CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId);
        while (stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute(threadId) == nullptr) { }
        std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App : dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Execute : stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId)." << std::endl;
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control;
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Execute* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App::stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute(uint8_t threadId) {
        std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Execute : stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control(threadId)." << std::endl;
        return _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute;
    }