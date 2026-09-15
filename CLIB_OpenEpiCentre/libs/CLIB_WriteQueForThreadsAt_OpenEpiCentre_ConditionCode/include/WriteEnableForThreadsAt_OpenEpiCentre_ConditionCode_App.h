#ifndef CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_APP_H
#define CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_APP_H
#include "../include/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Control.h"
#include <cstdint>
namespace CLIBWriteQueAtOpenEpiCentre_ConditionCode
{
    class WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App
    {
    public:
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        virtual ~WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App(WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App();
    private:
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_Control();
        static WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_Control();
    };
}
#endif
