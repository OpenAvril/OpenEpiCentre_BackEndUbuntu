#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_GLOBAL_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_GLOBAL_H
#include <array>
#include <cstdint>

namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server_Global
    {
    public:
        LaunchEnableForConcurrentThreadsAt_Server_Global();
        ~LaunchEnableForConcurrentThreadsAt_Server_Global();
        static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global();
        static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global();
        static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
        static void boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global();
        void boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global();
        void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global();
        void boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK_Global();
        bool dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
        bool dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
        uint8_t dyn_REG_get_number_Implemented_Threads();
        static unsigned char* stat_CONVERT_bool_to_ByteArray(bool bool_Value);
        static unsigned char* stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value);
        static bool stat_CONVERT_ByteArray_To_bool(unsigned char* bytes);
        static uint8_t stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes);
    private:
        static bool* _stat_REG_ptr_flag_thread_2STATE;//NUMBER OF CONCURRENT THREADS.
        static uint8_t* _stat_REG_ptr_number_Implemented_Threads;
        static void stat_REG_boot1_DEFINE_flag_thread_2STATE();
        static void stat_REG_boot1_DEFINE_number_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE();
        static void stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_flag_thread_2STATE();
        static void stat_REG_boot3_INITIALISE_number_Implemented_Threads();
        static bool* stat_REG_get_ptr_flag_thread_2STATE();
        static uint8_t* stat_REG_get_ptr_number_Implemented_Threads();
        static void stat_REG_set_flag_thread_2STATE_ACTIVE(bool* bit);
        static void stat_REG_set_number_Implemented_Threads(uint8_t coreId);
     };
}
#endif
