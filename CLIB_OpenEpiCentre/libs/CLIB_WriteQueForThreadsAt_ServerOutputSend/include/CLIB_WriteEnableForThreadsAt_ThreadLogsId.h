#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_H
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework.h"
extern "C" {
    namespace CLIBWriteQueAtServerOutputSend {
        class CLIB_WriteEnableForThreadsAt_ThreadLogsId {
        public:
            static void* CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_generate_Program();
            static unsigned char* CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_terminate_Program();
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_End(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_Start(unsigned char* bytes);
        private:
            static bool CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_APP_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_CLASS_boot1_DEFINE_Framework();
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_CLASS_boot3_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_ThreadLogsId_Framework* CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_CLASS_get_ptr_Framework();
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerOutputSend_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerOutputSend_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerOutputSend_isFLAGINSTANTIATED();
            static std::array<bool, 5>* CLIB_WriteEnableForThreadsAt_ServerOutputSend_stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFLAGINSTANTIATED();
        };
    }
}
#endif
