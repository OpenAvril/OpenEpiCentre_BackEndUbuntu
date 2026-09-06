#ifndef CLIB_WriteEnableForThreadsAt_ServerConditionCode__App_WriteEnableForThreadsAt_ServerConditionCode__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ServerConditionCode__App_WriteEnableForThreadsAt_ServerConditionCode__App__APP_H
#include "../include/WriteEnableForThreadsAt_ServerConditionCode__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServerConditionCode
{
    class WriteEnableForThreadsAt_ServerConditionCode__App
    {
    public:
        WriteEnableForThreadsAt_ServerConditionCode__App();
        virtual ~WriteEnableForThreadsAt_ServerConditionCode__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ServerConditionCode__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__App(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerConditionCode__App(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__App(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerConditionCode__App(WriteEnableForThreadsAt_ServerConditionCode__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerConditionCode__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerConditionCode__App();
    private:
        static WriteEnableForThreadsAt_ServerConditionCode__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerConditionCode__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerConditionCode__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerConditionCode__App__Control();
        static WriteEnableForThreadsAt_ServerConditionCode__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerConditionCode__App__Control();
    };
}
#endif
