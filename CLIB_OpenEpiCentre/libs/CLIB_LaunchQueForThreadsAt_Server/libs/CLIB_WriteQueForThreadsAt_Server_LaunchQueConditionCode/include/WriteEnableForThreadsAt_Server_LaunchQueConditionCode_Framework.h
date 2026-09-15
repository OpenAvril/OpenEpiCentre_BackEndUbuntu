#ifndef CLIB_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_WRITEENABLEFORTHREADSAT_Server_LaunchQueConditionCode_FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App.h"
#include "../include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global.h"
namespace CLIBWriteQueAt_Server_LaunchQueConditionCode
{
    class WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework
    {
    public:
        WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework();
        virtual ~WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global_and_Settings();
        WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App();
        WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework(WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework();
    private:
        static WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework_App;
        static WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
        static WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App();
        static WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Global();
    };
}
#endif