#ifndef CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtSERVERINPUTRECEIVE
    {
        class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework
        {
        public:

            WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework();
            virtual ~WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework(class WriteEnableForThreadsAt_SERVERINPUTRECEIVE_Framework* obj);
            class WriteEnableForThreadsAt_SERVERINPUTRECEIVE* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static CLIBWriteQueAtSERVERINPUTRECEIVE::WriteEnableForThreadsAt_SERVERINPUTRECEIVE* _stat_CLASS_get_ptr_WriteEnable;
            static class WriteEnableForThreadsAt_SERVERINPUTRECEIVE* _CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECEIVE();
            static class WriteEnableForThreadsAt_SERVERINPUTRECEIVE* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif