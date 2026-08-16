#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__GLOBAL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__GLOBAL_H
#include <cstddef>
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Global
    {
    public:
        CLIB_OpenEpiCentre__Global();
        virtual ~CLIB_OpenEpiCentre__Global();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global();
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global();
        std::byte dyn_REG_get_Item_number_Of_Implemented_Cores();
        unsigned long long dyn_REG_get_Item_number_Of_Praise_Events();
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global();
        static int stat_CONVERT_Bool_To_Int(bool value);
        static unsigned char* stat_CONVERT_MsbBoolean_To_MsbByteArray(bool value);
        static bool stat_CONVERT_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static std::byte stat_CONVERT_MsbByteArray_To_MsbByte(const unsigned char* byteArray);
        static double stat_CONVERT_MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float stat_CONVERT_MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static unsigned long long stat_CONVERT_MsbByteArray_To_MsbunsignedLongLong(const unsigned char* byteArray);
        static unsigned char* stat_CONVERT_MsbByte_To_MsbByteArray(const std::byte byte);
        static unsigned char* stat_CONVERT_MsbFloat_To_MsbByteArray(float value);
        static unsigned char* stat_CONVERT_MsbDouble_To_MsbByteArray(double value);
        static unsigned char* stat_CONVERT_unsignedLongLong_to_ByteArray(unsigned long long value);
    private:
        static std::byte* _stat_REG_ptr_number_Of_Implemented_Cores;
        static unsigned long long* _stat_REG_ptr_number_Of_Praise_Events;
        static void stat_REG_boot1_DEFINE_number_Of_Implemented_Cores();
        static void stat_REG_boot1_DEFINE_number_Of_Praise_Events();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events();
        static void stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores();
        static void stat_REG_boot3_INITIALISE_number_Of_Praise_Events();
        static std::byte* stat_REG_get_Ptr_number_Of_Implemented_Cores();
        static unsigned long long* stat_REG_get_Ptr_number_Of_Praise_Events();
    };
}
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_GLOBAL_H
