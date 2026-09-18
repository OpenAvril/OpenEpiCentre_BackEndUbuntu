#ifndef CLIB_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_H
#define CLIB_WRITEENABLEFORTHREADSAT_OpenEpiCentre_ConditionCode_H
#include "../include/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework.h"
extern "C" {
    namespace CLIBWriteQueAtOpenEpiCentre_ConditionCode {
        class CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode {
        public:
            static void* CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_generate_Program(uint8_t threadId);
            static unsigned char* CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_terminate_Program(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_End(uint8_t threadId, unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_Start(uint8_t threadId, unsigned char* bytes);
        private:
            static bool CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_CLASS_boot1_DEFINE_Framework(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_CLASS_boot3_INITIALISE_Framework(uint8_t threadId);
            static class WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework* CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_CLASS_get_ptr_Framework(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_REG_boot1_DEFINE_CLIBLaunchQueAtOpenEpiCentre_ConditionCode_isFLAGINSTANTIATED(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtOpenEpiCentre_ConditionCode_isFLAGINSTANTIATED(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_REG_boot3_INITIALISE_CLIBLaunchQueAtOpenEpiCentre_ConditionCode_isFLAGINSTANTIATED(uint8_t threadId);
            static std::array<bool, 5>* CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_stat_REG_get_CLIBLaunchQueAtOpenEpiCentre_ConditionCode_isFLAGINSTANTIATED(uint8_t threadId);
        };
    }
}
#endif
