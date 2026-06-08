#ifndef TESTBENCH_CPP_OPENEPICENTRE_GLOBAL_H
#define TESTBENCH_CPP_OPENEPICENTRE_GLOBAL_H
#include <cstdint>
namespace TestBench_Cpp_OpenEpiCentre
{
    class Global
    {
    public:
        Global();
        virtual ~Global();
        void dyn_REG_boot1_DEFINE_Global();
        void dyn_REG_boot2_SUBSTANTIATE_Global();
        void dyn_REG_boot3_INITIALISE_Global();
        void dyn_REG_boot4_INSTANTIATE_Global();
        uint8_t dyn_REG_get_Item_number_Of_Implemented_Cores();
        uint8_t dyn_REG_get_Item_number_Of_Praise_Events();
        static void stat_CLASS_boot0_DECLARE_Global();
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot4_INSTANTIATE_Global();
        static void stat_REG_boot0_DECLARE_Global();
        static int stat_CONVERT_Bool_To_Int(bool value);
        static unsigned char* stat_CONVERT_MsbBoolean_To_MsbByteArray(bool value);
        static bool stat_CONVERT_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double stat_CONVERT_MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float stat_CONVERT_MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static uint8_t stat_CONVERT_MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray);
        static unsigned char* stat_CONVERT_MsbFloat_To_MsbByteArray(float value);
        static unsigned char* stat_CONVERT_MsbDouble_To_MsbByteArray(double value);
        static unsigned char* stat_CONVERT_uint8_t_to_ByteArray(uint8_t value);


    private:
        static uint8_t* _stat_REG_ptr_number_Of_Implemented_Cores;
        static uint8_t* _stat_REG__ptr_number_Of_Praise_Events;
        static void stat_REG_boot1_DEFINE_number_Of_Implemented_Cores();
        static void stat_REG_boot1_DEFINE_number_Of_Praise_Events();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events();
        static void stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores();
        static void stat_REG_boot3_INITIALISE_number_Of_Praise_Events();
        static uint8_t* stat_REG_get_Ptr_number_Of_Implemented_Cores();
        static uint8_t* stat_REG_get_Ptr_number_Of_Praise_Events();
    };
}
#endif //TESTBENCH_CPP_OPENEPICENTRE_GLOBAL_H
