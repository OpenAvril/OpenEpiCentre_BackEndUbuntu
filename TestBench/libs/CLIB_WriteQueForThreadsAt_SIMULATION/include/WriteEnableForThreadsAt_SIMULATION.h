#ifndef CLIB_WriteEnableForThreadsAt_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION_H
#define CLIB_WriteEnableForThreadsAt_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION_H
#include <cstdint>
extern "C"
{
    namespace CLIBWriteQueAtSIMULATION
    {
        class WriteEnableForThreadsAt_SIMULATION
        {
        public:
            WriteEnableForThreadsAt_SIMULATION();
            virtual ~WriteEnableForThreadsAt_SIMULATION();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION(class WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION(class WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION(class WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION(class WriteEnableForThreadsAt_SIMULATION_Framework* obj);
            void dyn_app_FUNCT_write_End(WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId);
            void dyn_app_FUNCT_write_Start(WriteEnableForThreadsAt_SIMULATION_Framework* obj, uint8_t coreId);
            class WriteEnableForThreadsAt_SIMULATION_Global* dyn_CLASS_get_ptr_Global();
            class WriteEnableForThreadsAt_SIMULATION_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        private:
            static class WriteEnableForThreadsAt_SIMULATION_Global* _stat_CLASS_ptr_Global;
            static class WriteEnableForThreadsAt_SIMULATION_Control* _stat_CLASS_ptr_WriteEnable_Control;
            static void stat_CLASS_boot1_DEFINE_Global();
            static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
            static void stat_CLASS_boot3_INITIALISE_Global();
            static void stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
            static WriteEnableForThreadsAt_SIMULATION_Global* stat_CLASS_get_ptr_Global();
            static WriteEnableForThreadsAt_SIMULATION_Control* stat_CLASS_get_ptr_WriteEnable_Control();
        };
    }
}
#endif
