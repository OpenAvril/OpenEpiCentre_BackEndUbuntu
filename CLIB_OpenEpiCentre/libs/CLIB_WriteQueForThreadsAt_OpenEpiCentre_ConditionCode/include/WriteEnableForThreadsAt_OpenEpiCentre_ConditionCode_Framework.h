#ifndef CLIB_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App.h"
#include "../include/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global.h"
namespace CLIBWriteQueAtOpenEpiCentre_ConditionCode
{
    class WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework
    {
    public:
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework();
        virtual ~WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global_and_Settings();
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework();
    private:
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework_App;
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global();
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global();
    };
}
#endif