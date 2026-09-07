#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Global.h"
#include <iostream>
    std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID;
    std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID;
    std::list<bool>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<uint8_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::_stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_for_Que_Of_CoreTolaunch;
// public.
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
    }
    CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::~LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_STATE_For_ConcurrentCore;
        delete _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_for_Que_Of_CoreTolaunch;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_SortQue(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t number_Implemented_Threads) {
        for (int concurrentThreadId_A = 0; concurrentThreadId_A < number_Implemented_Threads - 2; concurrentThreadId_A++) {
            for (int concurrentThreadId_B = concurrentThreadId_A + 1; concurrentThreadId_B < number_Implemented_Threads - 1; concurrentThreadId_B++) {
                if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_ACTIVE()) {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_IDLE()) {
                        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_ShiftQueValues(obj, concurrentThreadId_A, concurrentThreadId_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_ACTIVE()) {
                        if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadId_A) > obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_ShiftQueValues(obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_IDLE()) {
                    if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__ptr_FLAG_thread_2STATE_IDLE()) {
                        if (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadId_A) < obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_ShiftQueValues(obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
            }
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchQue_Update(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t number_Implemented_Threads) {
        for (int index = 0; index < number_Implemented_Threads; index++) {
            switch (obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(index)) {
                case false: {
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(index, 0);
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(index, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(index) + 1);
                    break;
                }
                case true: {
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(index, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(index) + 1);
                    obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(index, 0);
                    break;
                }
                default: 
                    break;
            }
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        std::cout << "entered dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID();
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID();
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore();
        stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch();
        std::cout << "exiting dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App__Control(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj) {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID(obj);
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID(obj);
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore(obj);
        stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        std::cout << "entered dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID();
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID();
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore();
        stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch();
        std::cout << "exiting dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
    }
    uint64_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint64_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newState;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrentThreadId;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        std::cout << "entered stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        std::cout << "entered stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control() {
        std::cout << "entered stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control()" << std::endl;
    }
// private.
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_ShiftQueValues(CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID_A, uint8_t concurrentThreadID_B) {
        uint32_t* temp_Int = nullptr;
        uint8_t* temp_UnnsignedChar = nullptr;
        *temp_Int = UINT32_MAX;
        *temp_UnnsignedChar = UINT8_MAX;
        *temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B, *temp_Int);
        *temp_Int = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B, *temp_Int);
        *temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App()->dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control()->dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B, *temp_UnnsignedChar);
        delete temp_Int;
        delete temp_UnnsignedChar;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch() {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_for_Que_Of_CoreTolaunch = nullptr;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID = new std::list<uint64_t>();
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID() == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->resize(3);//todo: number of concurrent threads.
        //stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->resize(obj->dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global()->dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Global__number_Implemented_Threads());//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID = new std::list<uint64_t>();
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID() == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = UINT64_MAX;
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore() == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
            std::advance(temp, index);
            *temp = true;
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj) {
        _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_for_Que_Of_CoreTolaunch = new std::list<uint8_t>();
        while (stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch() == nullptr) {}
        stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->begin();
            std::advance(temp, index);
            *temp = UINT8_MAX;
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
            std::advance(temp, index);
            *temp = static_cast<uint64_t>(0);
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
            std::advance(temp, index);
            *temp = false;
        }
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch() {
        for (int index = 0; index < stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->size(); index++) {
            auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->begin();
            std::advance(temp, index);
            *temp = static_cast<uint8_t>(index);
        }
    }
    std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID;
    }
    std::list<uint64_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID;
    }
    std::list<bool>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch() {
        return _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_for_Que_Of_CoreTolaunch;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, uint64_t newValue) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newValue;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrentThreadId);
        *temp = newState;
    }
    void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__App__Control::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrentThreadId;
    }