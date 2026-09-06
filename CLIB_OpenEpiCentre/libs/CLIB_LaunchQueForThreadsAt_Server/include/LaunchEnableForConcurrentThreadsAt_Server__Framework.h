#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server__Framework_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LaunchEnableForConcurrentThreadsAt_Server__Framework_H
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Global.h"
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server__Framework {
    public:
        LaunchEnableForConcurrentThreadsAt_Server__Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server__Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings();
        class LaunchEnableForConcurrentThreadsAt_Server__App* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App();
        class LaunchEnableForConcurrentThreadsAt_Server__Global* dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global();
        void dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        static void stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        static void stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Server__App* _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework__App;
        static class LaunchEnableForConcurrentThreadsAt_Server__Global* _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Global();
        static class LaunchEnableForConcurrentThreadsAt_Server__App* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__App();
        static class LaunchEnableForConcurrentThreadsAt_Server__Global* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Global();
    };
};
#endif