#ifndef CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_WRITEENABLEFORTHREADSAT_SIMULATION__FRAMEWORK_H
#include "WriteEnableForThreadsAt_SIMULATION__App.h"
#include "WriteEnableForThreadsAt_SIMULATION__Global.h"
#include "WriteEnableForThreadsAt_SIMULATION__Framework.h"
namespace CLIBWriteQueAtSIMULATION
{
    class WriteEnableForThreadsAt_SIMULATION__Framework
    {
    public:
        WriteEnableForThreadsAt_SIMULATION__Framework();
        virtual ~WriteEnableForThreadsAt_SIMULATION__Framework();
        WriteEnableForThreadsAt_SIMULATION__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION__App();
        WriteEnableForThreadsAt_SIMULATION__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION__Framework(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION__Framework(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION__Framework(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION__Framework(WriteEnableForThreadsAt_SIMULATION__Framework* obj);
    private:
        static WriteEnableForThreadsAt_SIMULATION__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION__App;
        static WriteEnableForThreadsAt_SIMULATION__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_SIMULATION__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION__Global();
        static WriteEnableForThreadsAt_SIMULATION__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION__App();
        static WriteEnableForThreadsAt_SIMULATION__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION__Global();
    };
}
#endif