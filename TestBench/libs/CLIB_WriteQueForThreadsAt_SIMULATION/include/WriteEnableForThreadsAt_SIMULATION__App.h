#ifndef CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION__APP_H
#define CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION__APP_H
#include "WriteEnableForThreadsAt_SIMULATION__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtSIMULATION
{
    class WriteEnableForThreadsAt_SIMULATION__App
    {
    public:
        WriteEnableForThreadsAt_SIMULATION__App();
        virtual ~WriteEnableForThreadsAt_SIMULATION__App();
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_SIMULATION();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_SIMULATION();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_SIMULATION__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_SIMULATION__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_SIMULATION__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION__App__Control();
    private:
        static WriteEnableForThreadsAt_SIMULATION__Control* _stat_CLASS_ptr_WriteEnable__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnable__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnable__Control();
        static WriteEnableForThreadsAt_SIMULATION__Control* stat_CLASS_get_ptr_WriteEnable__Control();
    };
}
#endif
