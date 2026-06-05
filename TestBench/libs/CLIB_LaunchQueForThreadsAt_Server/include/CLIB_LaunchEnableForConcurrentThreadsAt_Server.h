#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
extern "C"
{
    namespace CLIBLaunchQueAtServer
    {
        class CLIB_LaunchEnableForConcurrentThreadsAt_Server
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_request_Wait_launch(unsigned char* bytes);
            static void app_FUNCT_terminate_Progaram();
            static void app_FUNCT_thread_End(unsigned char* bytes);
            static unsigned char* app_REG_get_coreId_To_launch();
            static unsigned char* app_REG_get_Flag_Active();
            static unsigned char* app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes);
            static unsigned char* app_REG_get_Flag_Idle();
            static unsigned char* app_REG_get_State_launchBit();
            static void app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char* byteBool);
        private:
            static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
            static void stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
            static class LaunchEnableForConcurrentThreadsAt_Server_Framework* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework();
            static void stat_REG_boot1_DEFINE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
            static void stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
            static void stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
            static bool* stat_REG_get_CLIBLaunchQueAtServer_isFlagINSTANTIATED();
        };
    }
}
#endif
