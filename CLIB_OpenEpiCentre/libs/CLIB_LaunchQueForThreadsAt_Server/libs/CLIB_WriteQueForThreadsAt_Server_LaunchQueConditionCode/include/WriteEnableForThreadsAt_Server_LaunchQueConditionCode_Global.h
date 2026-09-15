#ifndef CLIB_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_FRAMEWORK_GLOBAL_H
#define CLIB_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_FRAMEWORK_GLOBAL_H
#include <array>
#include <cstdint>
namespace CLIBWriteQueAt_Server_LaunchQueConditionCode {
    class WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global {
    public:
        WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        ~WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        void dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT();
        std::array<bool,2> dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE();
        uint8_t dyn_REG_get_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads();
        static unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Msbdouble_To_MsbByteArray(double value);
        static unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbDouble_To_MsbByteArray(double value);
        static unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Msb_uint8_t_to_MsbByteArray(uint8_t value);
        static int stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Bool_To_Int(bool value);
        static unsigned char* stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbBoolean_To_MsbByteArray(bool value);
        static bool stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static double stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_Msbdouble(const unsigned char* byteArray);
        static uint8_t stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray);
    private:
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE;
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT;
        static std::array<bool,2>* _stat_REG_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads;
        static int pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Bool_To_Int(bool value);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbBoolean_To_MsbByteArray(bool value);
        static bool pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static double pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_Msbdouble(const unsigned char* byteArray);
        static uint8_t pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Msbdouble_To_MsbByteArray(double value);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_MsbDouble_To_MsbByteArray(double value);
        static unsigned char* pr_stat_APP_CONVERT_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Msb_uint8_t_to_MsbByteArray(uint8_t value);
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE();
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT();
        static void stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT();
        static void stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT();
        static void stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_IDLE();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WAIT();
        static std::array<bool,2>* stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_2bitFLAG_WRITE();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_number_Of_Implemented_Threads();
    };
}
#endif