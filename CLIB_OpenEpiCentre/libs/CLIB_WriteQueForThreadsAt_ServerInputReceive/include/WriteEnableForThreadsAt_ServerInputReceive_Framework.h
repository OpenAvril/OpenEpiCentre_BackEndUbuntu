#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive_FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive_FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_App.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Global.h"
namespace CLIBWriteQueAtServerInputReceive
{
    class WriteEnableForThreadsAt_ServerInputReceive_Framework
    {
    public:
        WriteEnableForThreadsAt_ServerInputReceive_Framework();
        virtual ~WriteEnableForThreadsAt_ServerInputReceive_Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerInputReceive_Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerInputReceive_Global_and_Settings();
        WriteEnableForThreadsAt_ServerInputReceive_App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App();
        WriteEnableForThreadsAt_ServerInputReceive_Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
    private:
        static WriteEnableForThreadsAt_ServerInputReceive_App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Framework_App;
        static WriteEnableForThreadsAt_ServerInputReceive_Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Global();
        static WriteEnableForThreadsAt_ServerInputReceive_App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App();
        static WriteEnableForThreadsAt_ServerInputReceive_Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Global();
    };
}
#endif