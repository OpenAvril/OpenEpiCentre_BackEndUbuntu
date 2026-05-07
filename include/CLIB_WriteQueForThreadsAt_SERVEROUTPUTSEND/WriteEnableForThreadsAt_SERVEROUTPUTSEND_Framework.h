#ifndef CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND_WRITEENABLEFORTHREADSAT_SERVEROUTPUTSEND_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND_WRITEENABLEFORTHREADSAT_SERVEROUTPUTSEND_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtSERVEROUTPUTSEND
    {
        class WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework
        {
        public:

            WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
            virtual ~WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* obj);
            class WriteEnableForThreadsAt_SERVEROUTPUTSEND* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static CLIBWriteQueAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND* _stat_CLASS_get_ptr_WriteEnable;
            static class WriteEnableForThreadsAt_SERVEROUTPUTSEND* _CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SERVEROUTPUTSEND();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SERVEROUTPUTSEND();
            static class WriteEnableForThreadsAt_SERVEROUTPUTSEND* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif