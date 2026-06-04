#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#include <cstdint>
namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server
    {
    public:
        LaunchEnableForConcurrentThreadsAt_Server();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server();
        void app_thread_Start(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID);
        void app_thread_Server(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID);
        static void boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server();
        static void boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server();
        static void boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server();
        static void boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server();
        void boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server();
        void boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server();
        void boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server();
        void boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server();
        class LaunchEnableForConcurrentThreadsAt_Server_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_Server_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Server_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_Server_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
        static LaunchEnableForConcurrentThreadsAt_Server_Global* stat_CLASS_get_ptr_Global();
        static LaunchEnableForConcurrentThreadsAt_Server_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
    };
}
#endif
