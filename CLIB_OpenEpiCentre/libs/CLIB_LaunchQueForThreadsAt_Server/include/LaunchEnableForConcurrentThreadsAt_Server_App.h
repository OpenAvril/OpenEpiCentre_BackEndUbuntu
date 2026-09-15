#ifndef CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_LaunchEnableForConcurrentThreadsAt_Server_App_H
#define CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_LaunchEnableForConcurrentThreadsAt_Server_App_H
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_App_Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Execute.h"
#include <cstdint>
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server_App {
    public:
        LaunchEnableForConcurrentThreadsAt_Server_App();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server_App();
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_Start(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID);
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server_thread_End(class LaunchEnableForConcurrentThreadsAt_Server_Framework* obj, uint8_t concurrentThreadID);
        class LaunchEnableForConcurrentThreadsAt_Server_App_Control* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_Control();
        class LaunchEnableForConcurrentThreadsAt_Server_Execute* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute();
        void dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App();
        void dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_App();
        void dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App();
        static void stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_App();
        static void stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App();
        static void stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Server_App_Control* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Control;
        static class LaunchEnableForConcurrentThreadsAt_Server_Execute* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server_App_Ececute;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Execute();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Execute();
        static class LaunchEnableForConcurrentThreadsAt_Server_App_Control* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_App_WriteEnable_Control();
        static class LaunchEnableForConcurrentThreadsAt_Server_Execute* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server_Execute();
    };
}
#endif