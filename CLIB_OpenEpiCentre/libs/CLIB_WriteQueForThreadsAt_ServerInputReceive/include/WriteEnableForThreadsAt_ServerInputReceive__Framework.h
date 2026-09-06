#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ServerInputReceive__App.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive__Global.h"
namespace CLIBWriteQueAtServerInputReceive
{
    class WriteEnableForThreadsAt_ServerInputReceive__Framework
    {
    public:
        WriteEnableForThreadsAt_ServerInputReceive__Framework();
        virtual ~WriteEnableForThreadsAt_ServerInputReceive__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerInputReceive__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerInputReceive__Global_and_Settings();
        WriteEnableForThreadsAt_ServerInputReceive__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App();
        WriteEnableForThreadsAt_ServerInputReceive__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive__Framework();
    private:
        static WriteEnableForThreadsAt_ServerInputReceive__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Framework__App;
        static WriteEnableForThreadsAt_ServerInputReceive__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Global();
        static WriteEnableForThreadsAt_ServerInputReceive__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App();
        static WriteEnableForThreadsAt_ServerInputReceive__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Global();
    };
}
#endif