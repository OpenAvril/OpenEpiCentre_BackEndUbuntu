#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_H
#include <cstdint>
extern "C" {
    namespace CLIBLaunchQueAtServer {
        class CLIB_LaunchEnableForConcurrentThreadsAt_Server {
        public:
            static void* CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_generate_Program(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_request_Wait_launch(uint8_t threadId, unsigned char* bytes);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_terminate_Progaram(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_thread_End(uint8_t threadId, unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Active(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytes);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Idle(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId);
            static unsigned char* CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_State_launchBit(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_set_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytesthreadId, unsigned char* byteBool);
        private:
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId);
            static class LaunchEnableForConcurrentThreadsAt_Server_Framework* CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static void CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static bool* CLIB_LaunchEnableForConcurrentThreadsAt_Server_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(uint8_t threadId);
        };
    }
}
#endif