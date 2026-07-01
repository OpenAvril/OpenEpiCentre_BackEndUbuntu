#ifndef TESTBENCH_LAUNCHQUE_SERVER_H
#define TESTBENCH_LAUNCHQUE_SERVER_H
namespace TestBench_Cpp_OpenEpiCentre
{
    class LaunchQue_Server {
// public.
    public:
        LaunchQue_Server();
        static void* CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_generate_Program();
        static bool CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_get_flag_isPGM_INSTANTIATED();
        static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_request_Wait_launch(int threadId);
        static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_terminate_Program();
        static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_FUNCT_thread_End(int threadId);
        static int CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_coreId_To_launch();
        static bool CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Active();
        static bool CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_ConcurrentCoreState(int threadId);
        static bool CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_Flag_Idle();
        static bool CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_get_State_launchBit();
        static void CLIB_LaunchEnableForConcurrentThreadsAt_Server__app_REG_set_Flag_ConcurrentCoreState(int concurrentThreadId, bool state);
    };
};
#endif //TESTBENCH_LAUNCHQUE_SERVER_H