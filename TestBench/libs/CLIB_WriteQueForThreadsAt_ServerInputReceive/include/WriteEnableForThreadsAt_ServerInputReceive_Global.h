#ifndef CLIB_WriteEnableForThreadsAt_ServerInputReceive_WriteEnableForThreadsAt_ServerInputReceive_Global_H
#define CLIB_WriteEnableForThreadsAt_ServerInputReceive_WriteEnableForThreadsAt_ServerInputReceive_Global_H
#include <array>
#include <cstdint>
extern "C" {
    namespace CLIBWriteQueAtServerInputReceive
    {
        class WriteEnableForThreadsAt_ServerInputReceive_Global
        {
        public:
            WriteEnableForThreadsAt_ServerInputReceive_Global();
            ~WriteEnableForThreadsAt_ServerInputReceive_Global();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Global();
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Global();
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Global();
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive_Global();
            std::array<bool,2> dyn_REG_get_ptr_CONST_2bitFLAG_IDLE();
            std::array<bool,2> dyn_REG_get_ptr_CONST_2bitFLAG_WAIT();
            std::array<bool,2> dyn_REG_get_ptr_CONST_2bitFLAG_WRITE();
            uint8_t dyn_REG_get_number_Of_Implemented_Threads();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Global();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Global();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Global();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Global();
            static unsigned char* stat_CONVERT_bool_to_ByteArray(bool bool_Value);
            static unsigned char* stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value);
            static bool stat_CONVERT_ByteArray_To_bool(unsigned char* bytes);
            static uint8_t stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes);
        private:
            static std::array<bool,2>* _stat_REG_CONST_2bitFLAG_IDLE;
            static std::array<bool,2>* _stat_REG_CONST_2bitFLAG_WAIT;
            static std::array<bool,2>* _stat_REG_CONST_2bitFLAG_WRITE;
            static uint8_t* _stat_REG_ptr_number_Of_Implemented_Threads;
            static void stat_REG_boot1_DEFINE_CONST_2bitFLAG_IDLE();
            static void stat_REG_boot1_DEFINE_CONST_2bitFLAG_WAIT();
            static void stat_REG_boot1_DEFINE_CONST_2bitFLAG_WRITE();
            static void stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_IDLE();
            static void stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WAIT();
            static void stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WRITE();
            static void stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot3_INITIALISE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot3_INITIALISE_CONST_2bitFLAG_IDLE();
            static void stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WAIT();
            static void stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WRITE();
            static std::array<bool,2>* stat_REG_get_ptr_CONST_2bitFLAG_IDLE();
            static std::array<bool,2>* stat_REG_get_ptr_CONST_2bitFLAG_WAIT();
            static std::array<bool,2>* stat_REG_get_ptr_CONST_2bitFLAG_WRITE();
            static uint8_t* stat_REG_get_ptr_number_Of_Implemented_Threads();
        };
    }
}
#endif