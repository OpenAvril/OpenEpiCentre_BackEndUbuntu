#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_Global_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_Global_H
#include <array>
#include <cstdint>
namespace CLIBLaunchQueAtServer {
    class LaunchEnableForConcurrentThreadsAt_Server_Global {
    public:
        LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        ~LaunchEnableForConcurrentThreadsAt_Server_Global();
        static void boot0_CLASS_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        static void boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        static void boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        static void boot0_REG_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        void boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        void boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        void boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        void boot4_PGM_INSTANTIATION_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId);
        bool dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_ACTIVE(uint8_t threadId);
        bool dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE_IDLE(uint8_t threadId);
        uint8_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(uint8_t threadId);
        static unsigned char* stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_bool_to_ByteArray(uint8_t threadId, bool bool_Value);
        static unsigned char* stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_uint8_t_To_ByteArray(uint8_t threadId, uint8_t uint8_t_Value);
        static bool stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_bool(uint8_t threadId, unsigned char* bytes);
        static uint8_t stat_CONVERT_LaunchEnableForConcurrentThreadsAt_Server_Global_ByteArray_To_uint8_t(uint8_t threadId, unsigned char* bytes);
    private:
        static std::array<bool, 3>* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_FLAG_thread_2STATE;//todo: number of concurrent threads.
        static uint8_t* _stat_REG_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_number_Implemented_Threads;//todo: number of concurrent threads.
        static void stat_REG_boot1_DEFINE_FLAG_LaunchEnableForConcurrentThreadsAt_Server_Global_thread_2STATE(uint8_t threadId);
        static void stat_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_LaunchEnableForConcurrentThreadsAt_Server_Global_thread_2STATE(uint8_t threadId);
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_FLAG_LaunchEnableForConcurrentThreadsAt_Server_Global_thread_2STATE(uint8_t threadId);
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(uint8_t threadId);
        static bool stat_REG_get_Item_On_Array_Of_FLAG_LaunchEnableForConcurrentThreadsAt_Server_Global_thread_2STATE(uint8_t threadId, uint8_t concurrentthreadId);
        static uint8_t* stat_REG_get_LaunchEnableForConcurrentThreadsAt_Server_Global_ptr_number_Implemented_Threads(uint8_t threadId);
        static void stat_REG_set_Item_On_Array_Of_FLAG_LaunchEnableForConcurrentThreadsAt_Server_Global_thread_2STATE_ACTIVE(uint8_t threadId, uint8_t concurrentthreadId, bool FLAG_bool);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server_Global_number_Implemented_Threads(uint8_t threadId, uint8_t coreId);
    };
}
#endif
