#ifndef CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_LaunchEnableForConcurrentThreadsAt_Server__App_H
#define CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_LaunchEnableForConcurrentThreadsAt_Server__App_H
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App__Control.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Execute.h"
#include <cstdint>
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server__App {
    public:
        LaunchEnableForConcurrentThreadsAt_Server__App();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server__App();
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__thread_Start(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID);
        void dyn_APP_FUNCT_LaunchEnableForConcurrentThreadsAt_Server__thread_Server(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID);
        class LaunchEnableForConcurrentThreadsAt_Server__App__Control* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__Control();
        class LaunchEnableForConcurrentThreadsAt_Server__Execute* dyn_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__Execute();
        void dyn_REG_boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App();
        void dyn_REG_boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__App();
        void dyn_REG_boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CALSS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CALSS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App();
        static void stat_CALSS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App();
    private:
        static class LaunchEnableForConcurrentThreadsAt_Server__App__Control* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Control;
        static class LaunchEnableForConcurrentThreadsAt_Server__Execute* _stat_CLASS_LaunchEnableForConcurrentThreadsAt_Server__App__Ececute;
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control();
        static void stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Execute();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Execute();
        static class LaunchEnableForConcurrentThreadsAt_Server__App__Control* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__App__WriteEnable_Control();
        static class LaunchEnableForConcurrentThreadsAt_Server__Execute* stat_CLASS_get_LaunchEnableForConcurrentThreadsAt_Server__Execute();
    };
}
#endif