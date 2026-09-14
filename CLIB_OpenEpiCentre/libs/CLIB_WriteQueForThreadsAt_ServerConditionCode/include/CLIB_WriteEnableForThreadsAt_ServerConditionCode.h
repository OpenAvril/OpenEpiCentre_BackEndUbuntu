#ifndef CLIBWriteEnableForThreadsAtServerConditionCode_H
#define CLIBWriteEnableForThreadsAtServerConditionCode_H
#include "../include/WriteEnableForThreadsAt_ServerConditionCode__Framework.h"
extern "C" {
    namespace CLIBWriteQueAtServerConditionCode {
        class CLIBWriteEnableForThreadsAtServerConditionCode {
        public:
            static void* CLIBWriteEnableForThreadsAtServerConditionCode__App_FUNCT_generate_Program();
            static unsigned char* CLIBWriteEnableForThreadsAtServerConditionCode__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
            static void CLIBWriteEnableForThreadsAtServerConditionCode__App_FUNCT_terminate_Program();
            static void CLIBWriteEnableForThreadsAtServerConditionCode__App_FUNCT_write_End(unsigned char* bytes);
            static void CLIBWriteEnableForThreadsAtServerConditionCode__App_FUNCT_write_Start(unsigned char* bytes);
        private:
            static bool CLIBWriteEnableForThreadsAtServerConditionCode__stat_APP_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIBWriteEnableForThreadsAtServerConditionCode__stat_CLASS_boot1_DEFINE_Framework();
            static void CLIBWriteEnableForThreadsAtServerConditionCode__stat_CLASS_boot3_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_ServerConditionCode__Framework* CLIBWriteEnableForThreadsAtServerConditionCode__stat_CLASS_get_ptr_Framework();
            static void CLIBWriteEnableForThreadsAtServerConditionCode__stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerConditionCode_isFLAGINSTANTIATED();
            static void CLIBWriteEnableForThreadsAtServerConditionCode__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerConditionCode_isFLAGINSTANTIATED();
            static void CLIBWriteEnableForThreadsAtServerConditionCode__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerConditionCode_isFLAGINSTANTIATED();
            static std::array<bool, 5>* CLIBWriteEnableForThreadsAtServerConditionCode__stat_REG_get_CLIBLaunchQueAtServerConditionCode_isFLAGINSTANTIATED();
        };
    }
}
#endif
