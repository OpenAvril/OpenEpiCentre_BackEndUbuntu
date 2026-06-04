#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_FRAMEWORK_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_FRAMEWORK_H
namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server_Framework
    {
    public:
        LaunchEnableForConcurrentThreadsAt_Server_Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server_Framework();
        void boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        void boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        void boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        void boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Framework(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj);
        class LaunchEnableForConcurrentThreadsAt_Server* dyn_CLASS_get_ptr_LaunchConcurrency();
        static void boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        static void boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        static void boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        static void boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Server* _stat_CLASS_ptr_LaunchConcurrency;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server();
        static LaunchEnableForConcurrentThreadsAt_Server* stat_CLASS_get_ptr_LaunchConcurrency();
    };
};
#endif