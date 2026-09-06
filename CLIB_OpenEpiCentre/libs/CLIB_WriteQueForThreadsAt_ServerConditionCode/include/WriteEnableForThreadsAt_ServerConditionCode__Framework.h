#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerConditionCode_WRITEENABLEFORTHREADSAT_ServerConditionCode__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerConditionCode_WRITEENABLEFORTHREADSAT_ServerConditionCode__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ServerConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_ServerConditionCode__Global.h"
namespace CLIBWriteQueAtServerConditionCode
{
    class WriteEnableForThreadsAt_ServerConditionCode__Framework
    {
    public:
        WriteEnableForThreadsAt_ServerConditionCode__Framework();
        virtual ~WriteEnableForThreadsAt_ServerConditionCode__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerConditionCode__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerConditionCode__Global_and_Settings();
        WriteEnableForThreadsAt_ServerConditionCode__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__App();
        WriteEnableForThreadsAt_ServerConditionCode__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__Framework(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerConditionCode__Framework(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__Framework(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ServerConditionCode__Framework(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerConditionCode__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerConditionCode__Framework();
    private:
        static WriteEnableForThreadsAt_ServerConditionCode__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Framework__App;
        static WriteEnableForThreadsAt_ServerConditionCode__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerConditionCode__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__Global();
        static WriteEnableForThreadsAt_ServerConditionCode__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__App();
        static WriteEnableForThreadsAt_ServerConditionCode__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__Global();
    };
}
#endif