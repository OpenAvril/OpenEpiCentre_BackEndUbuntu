#ifndef CLIB_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global.h"
namespace CLIBWriteQueAtOpenEpiCentre_ConditionCode
{
    class WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework
    {
    public:
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework();
        virtual ~WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global_and_Settings();
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App();
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework();
    private:
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework__App;
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global();
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__App();
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode__Global();
    };
}
#endif