#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server__App__Control_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server__App__Control_H
#include <cstdint>
#include <list>
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server__App__Control {
    public:
        LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_Request(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID);
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_SortQue(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t number_Implemented_Threads);
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchQue_Update(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t number_Implemented_Threads);
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App__Control(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        unsigned long long dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID);
        unsigned long long dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID);
        bool dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId);
        uint8_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrentThreadId);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, unsigned long long newValue);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, unsigned long long newValue);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId);
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
    private:
        static std::list<unsigned long long>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchActive_Count_For_ThreadID;
        static std::list<unsigned long long>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_launchIdle_Count_For_ThreadID;
        static std::list<bool>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_Of_STATE_For_ConcurrentCore;
        static std::list<uint8_t>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server__App__Control__ptr_list_for_Que_Of_CoreTolaunch;
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__App__Control__launchEnable_ShiftQueValues(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID_A, uint8_t concurrentThreadID_B);
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID();
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID();
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore();
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch();
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID();
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID();
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore();
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_for_Que_Of_CoreTolaunch();
        static std::list<unsigned long long>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchActive_Count_For_ThreadID();
        static std::list<unsigned long long>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_launchIdle_Count_For_ThreadID();
        static std::list<bool>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_list_Of_STATE_For_ConcurrentCore();
        static std::list<uint8_t>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server__ptr_List_QUE_Of_CoreTolaunch();
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, unsigned long long newValue);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, unsigned long long newValue);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId);
    };
}
#endif