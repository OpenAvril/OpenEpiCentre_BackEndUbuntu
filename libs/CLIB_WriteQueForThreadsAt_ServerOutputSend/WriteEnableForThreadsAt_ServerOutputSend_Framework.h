#ifndef CLIB_WriteEnableForThreadsAt_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtServerOutputSend
    {
        class WriteEnableForThreadsAt_ServerOutputSend_Framework
        {
        public:

            WriteEnableForThreadsAt_ServerOutputSend_Framework();
            virtual ~WriteEnableForThreadsAt_ServerOutputSend_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
            class WriteEnableForThreadsAt_ServerOutputSend* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteEnableForThreadsAt_ServerOutputSend* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend();
            static WriteEnableForThreadsAt_ServerOutputSend* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif