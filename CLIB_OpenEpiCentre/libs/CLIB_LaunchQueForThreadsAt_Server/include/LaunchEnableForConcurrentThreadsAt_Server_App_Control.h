#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server_App_Control_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server_App_Control_H
#include <cstdint>
#include <list>
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server_App_Control {
    public:
        LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId);
        virtual ~LaunchEnableForConcurrentThreadsAt_Server_App_Control();
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_Request(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentthreadId);
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_SortQue(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t number_Implemented_Threads);
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchQue_Update(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t number_Implemented_Threads);
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId);
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId);
        unsigned long long dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(uint8_t threadId);
        unsigned long long dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(uint8_t threadId);
        bool dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentthreadId);
        uint8_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t concurrentthreadId);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentthreadId, bool newState);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t slot, uint8_t concurrentthreadId);
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId);
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App_Control(uint8_t threadId);
    private:
        static std::list<unsigned long long>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchActive_Count_For_threadId;
        static std::list<unsigned long long>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_launchIdle_Count_For_threadId;
        static std::list<bool>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        static std::list<uint8_t>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        void dyn_App_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_App_Control_launchEnable_ShiftQueValues(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentthreadId_A, uint8_t concurrentthreadId_B);
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId, class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_for_Que_Of_CoreTolaunch(uint8_t threadId);
        static std::list<unsigned long long>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchActive_Count_For_threadId(uint8_t threadId);
        static std::list<unsigned long long>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_launchIdle_Count_For_threadId(uint8_t threadId);
        static std::list<bool>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t threadId);
        static std::list<uint8_t>* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_ptr_List_QUE_Of_CoreTolaunch(uint8_t threadId);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchActive_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_launchIdle_Count_For_threadId(uint8_t threadId, uint8_t concurrentthreadId, unsigned long long newValue);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t threadId, uint8_t concurrentthreadId, bool newState);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t threadId, uint8_t slot, uint8_t concurrentthreadId);
    };
}
#endif