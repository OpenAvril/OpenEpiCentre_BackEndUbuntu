#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Global.h"
#include <iostream>
    std::list<unsigned long long>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchActive_Count_For_threadId;
    std::list<unsigned long long>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchIdle_Count_For_threadId;
    std::list<bool>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<uint8_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
// public.
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
        stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId);
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId);
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId);
        stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::~LaunchEnableForConcurrentThreadsAt_Server_App_Control() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchActive_Count_For_threadId;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchIdle_Count_For_threadId;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_SortQue(uint8_t threadId, CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t number_Implemented_Threads) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
        for (int concurrentthreadId_A = 0; concurrentthreadId_A < number_Implemented_Threads - 2; concurrentthreadId_A++) {
            for (int concurrentthreadId_B = concurrentthreadId_A + 1; concurrentthreadId_B < number_Implemented_Threads - 1; concurrentthreadId_B++) {
                if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_A)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId)) {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)) {
                        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_ShiftQueValues(threadId, obj, concurrentthreadId_A, concurrentthreadId_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId)) {
                        if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(concurrentthreadId_A) > obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(concurrentthreadId_B)) {
                            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_ShiftQueValues(threadId, obj, concurrentthreadId_A, concurrentthreadId_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_A)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)) {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE(threadId)) {
                        if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(concurrentthreadId_A) < obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(concurrentthreadId_B)) {
                            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_ShiftQueValues(threadId, obj, concurrentthreadId_A, concurrentthreadId_B);
                        }
                    }
                }
            }
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchQue_Update(uint8_t threadId, CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t number_Implemented_Threads) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
        for (int index = 0; index < number_Implemented_Threads; index++) {
            switch (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, index)) {
                case false: {
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(threadId, index, 0);
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(threadId, index, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(index) + 1);
                    break;
                }
                case true: {
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(threadId, index, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(index) + 1);
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(threadId, index, 0);
                    break;
                }
                default: 
                    break;
            }
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId);
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId);
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId, obj);
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(threadId, obj);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId);
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId);
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId);
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)."));
    }
    unsigned long long CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(uint8_t threadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->begin();
        std::advance(temp, threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(threadId)."));
        return *temp;
    }
    unsigned long long CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(uint8_t threadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->begin();
        std::advance(temp, threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(threadId)."));
        return *temp;
    }
    bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)."));
        return *temp;
    }
    uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId)."));
        return *temp;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(threadId)."));
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(threadId)."));
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentthreadId, bool newState) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)."));
        *temp = newState;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t slot, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, slot);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId)."));
        *temp = concurrentthreadId;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
// private.
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_ShiftQueValues(uint8_t threadId, CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentthreadId_A, uint8_t concurrentthreadId_B) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        uint32_t* temp_Int = nullptr;
        uint8_t* temp_UnnsignedChar = nullptr;
        *temp_Int = UINT32_MAX;
        *temp_UnnsignedChar = UINT8_MAX;
        *temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(concurrentthreadId_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(threadId, concurrentthreadId_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(concurrentthreadId_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(threadId, concurrentthreadId_B, *temp_Int);
        *temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(concurrentthreadId_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(threadId, concurrentthreadId_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(concurrentthreadId_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(threadId, concurrentthreadId_B, *temp_Int);
        *temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId, concurrentthreadId_B, *temp_UnnsignedChar);
        delete temp_Int;
        delete temp_UnnsignedChar;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchActive_Count_For_threadId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchIdle_Count_For_threadId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_for_Que_Of_CoreTolaunch = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchActive_Count_For_threadId = new std::list<unsigned long long>(threadId);
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->resize(3);//todo: number of concurrent threads.
        //stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->resize(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(threadId));//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchIdle_Count_For_threadId = new std::list<unsigned long long>(threadId);
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId) == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>(threadId);
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId) == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
            std::advance(temp, index);
            *temp = true;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_for_Que_Of_CoreTolaunch = new std::list<uint8_t>(threadId);
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId) == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
            std::advance(temp, index);
            *temp = UINT8_MAX;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<unsigned long long>(0);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
            std::advance(temp, index);
            *temp = false;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
            std::advance(temp, index);
            *temp = static_cast<uint8_t>(index);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Global : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(threadId)."));
    }
    std::list<unsigned long long>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)."));
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchActive_Count_For_threadId;
    }
    std::list<unsigned long long>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned long long  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)."));
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchIdle_Count_For_threadId;
    }
    std::list<bool>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)."));
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)."));
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(threadId)."));
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => unsigned long long  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(threadId)."));
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentthreadId, bool newState) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(threadId)->begin();
        std::advance(temp, concurrentthreadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => bool  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(threadId)."));
        *temp = newState;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App_Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t slot, uint8_t concurrentthreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(threadId)->begin();
        std::advance(temp, slot);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: => uint8_t  : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_App_Control : stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(threadId)."));
        *temp = concurrentthreadId;
    }