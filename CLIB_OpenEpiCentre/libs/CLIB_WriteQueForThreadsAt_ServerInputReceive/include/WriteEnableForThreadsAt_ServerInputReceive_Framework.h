#ifndef CLIB_WriteEnableForThreadsAt_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtServerInputReceive
    {
        class WriteEnableForThreadsAt_ServerInputReceive_Framework
        {
        public:

            WriteEnableForThreadsAt_ServerInputReceive_Framework();
            virtual ~WriteEnableForThreadsAt_ServerInputReceive_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
            class WriteEnableForThreadsAt_ServerInputReceive* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteEnableForThreadsAt_ServerInputReceive* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive();
            static WriteEnableForThreadsAt_ServerInputReceive* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif