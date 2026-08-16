#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_GLOBAL_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_GLOBAL_H
#include <array>

namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server__Global
    {
    public:
        LaunchEnableForConcurrentThreadsAt_Server__Global();
        ~LaunchEnableForConcurrentThreadsAt_Server__Global();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        bool dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE();
        bool dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE();
        std::byte dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static int stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__Bool_To_Int(bool value);
        static unsigned char* stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbBoolean_To_MsbByteArray(bool value);
        static bool stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static std::byte stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbByte(const unsigned char* byteArray);
        static double stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static unsigned long long stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByteArray_To_MsbunsignedLongLong(const unsigned char* byteArray);
        static unsigned char* stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbByte_To_MsbByteArray(const std::byte byte);
        static unsigned char* stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbFloat_To_MsbByteArray(float value);
        static unsigned char* stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__MsbDouble_To_MsbByteArray(double value);
        static unsigned char* stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__unsignedLongLong_to_ByteArray(unsigned long long value);
    private:
        static bool* _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;//NUMBER OF CONCURRENT THREADS.
        static std::byte* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
        static void stat_dyn_REG_boot1_DEFINE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static void stat_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static bool* stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static std::byte* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static void stat_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE(bool bit);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads(std::byte coreId);
    };
}
#endif
