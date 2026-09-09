#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
extern "C" {
    namespace CLIBLaunchQueAtServer {
        class CLIB_LaunchEnableForConcurrentThreadsAt_Server {
        public:
            static void* CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_generate_Program();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_request_Wait_launch(unsigned char* bytes);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_terminate_Progaram();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_FUNCT_thread_End(unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_coreId_To_launch();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_Active();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_Flag_Idle();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_FLAG_isPGM_INSTANTIATED();
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_get_State_launchBit();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__App_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char* byteBool);
        private:
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Framework();
            static class LaunchEnableForConcurrentThreadsAt_Server__Framework* CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Framework();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
            static bool* CLIB_LaunchEnableForConcurrentThreadsAt_Server__stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED();
        };
    }
}
#endif