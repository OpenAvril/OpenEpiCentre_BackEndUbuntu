#ifndef CLIB_WriteEnableForThreadsAt_ServerOutputSend_WriteEnableForThreadsAt_ServerOutputSend__Global_H
#define CLIB_WriteEnableForThreadsAt_ServerOutputSend_WriteEnableForThreadsAt_ServerOutputSend__Global_H
#include <array>
#include <cstdint>
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ServerOutputSend__Global
    {
    public:
        WriteEnableForThreadsAt_ServerOutputSend__Global();
        ~WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Global();
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend__Global();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        std::byte dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        static int stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__Bool_To_Int(bool value);
        static unsigned char* stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbBoolean_To_MsbByteArray(bool value);
        static bool stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static std::byte stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbByte(const unsigned char* byteArray);
        static double stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static unsigned long long stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbunsignedLongLong(const unsigned char* byteArray);
        static unsigned char* stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByte_To_MsbByteArray(const std::byte byte);
        static unsigned char* stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbFloat_To_MsbByteArray(float value);
        static unsigned char* stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbDouble_To_MsbByteArray(double value);
        static unsigned char* stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__unsignedLongLong_to_ByteArray(unsigned long long value);
    private:
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE;
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT;
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE;
        static std::byte* _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads;
        static int pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__Bool_To_Int(bool value);
        static unsigned char* pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbBoolean_To_MsbByteArray(bool value);
        static bool pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static std::byte* pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbByte(const unsigned char* byteArray);
        static double pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static unsigned long long pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbByteArray_To_MsbunsignedLongLong(const unsigned char* byteArray);
        static unsigned char* pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbFloat_To_MsbByteArray(float value);
        static unsigned char* pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__MsbDouble_To_MsbByteArray(double value);
        static unsigned char* pr_stat_CONVERT_WriteEnableForThreadsAt_ServerOutputSend__Msb_unsignedLongLong_to_MsbByteArray(unsigned long long value);
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE();
        static std::byte* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads();
    };
}
#endif