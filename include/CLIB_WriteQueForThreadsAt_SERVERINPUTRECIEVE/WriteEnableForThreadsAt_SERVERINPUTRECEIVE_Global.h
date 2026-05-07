#ifndef CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global_H
#define CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global_H
extern "C" {
    namespace CLIBWriteQueAtSERVERINPUTRECEIVE
    {
        class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global
        {
        public:
            WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global();
            ~WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Global(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            static unsigned char* stat_CONVERT_bool_to_ByteArray(bool bool_Value);
            static unsigned char* stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value);
            static bool stat_CONVERT_ByteArray_To_bool(unsigned char* bytes);
            static uint8_t stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes);
            uint8_t dyn_REG_get_number_Of_Implemented_Threads();
        private:
            static uint8_t* _REG_ptr_number_Of_Implemented_Threads;
            static void stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot3_INITIALISE_ptr_number_Of_Implemented_Threads();
            static uint8_t* stat_REG_get_ptr_number_Of_Implemented_Threads();
        };
    }
}
#endif