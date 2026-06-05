#ifndef CLIB_WriteEnableForThreadsAt_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtSIMULATION
    {
        class WriteEnableForThreadsAt_SIMULATION_Framework
        {
        public:

            WriteEnableForThreadsAt_SIMULATION_Framework();
            virtual ~WriteEnableForThreadsAt_SIMULATION_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            class WriteEnableForThreadsAt_SIMULATION* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteEnableForThreadsAt_SIMULATION* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION();
            static WriteEnableForThreadsAt_SIMULATION* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif