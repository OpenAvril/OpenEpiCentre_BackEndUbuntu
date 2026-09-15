#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server_Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server_Framework_H
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Global.h"
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server_Framework {
    public:
        LaunchEnableForConcurrentThreadsAt_Server_Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server_Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings();
        class LaunchEnableForConcurrentThreadsAt_Server_App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App();
        class LaunchEnableForConcurrentThreadsAt_Server_Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global();
        void dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Server_App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App;
        static class LaunchEnableForConcurrentThreadsAt_Server_Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App();
        static void pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        static class LaunchEnableForConcurrentThreadsAt_Server_App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App();
        static class LaunchEnableForConcurrentThreadsAt_Server_Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global();
    };
};
#endif