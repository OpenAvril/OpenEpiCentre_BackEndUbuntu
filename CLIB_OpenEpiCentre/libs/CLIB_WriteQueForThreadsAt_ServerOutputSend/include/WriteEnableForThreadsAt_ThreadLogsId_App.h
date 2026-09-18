#ifndef CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_WriteEnableForThreadsAt_ServerOutputSend_App_APP_H
#define CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_WriteEnableForThreadsAt_ServerOutputSend_App_APP_H
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ThreadLogsId_App
    {
    public:
        WriteEnableForThreadsAt_ThreadLogsId_App();
        virtual ~WriteEnableForThreadsAt_ThreadLogsId_App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ThreadLogsId_Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend_App(WriteEnableForThreadsAt_ThreadLogsId_Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_App();
    private:
        static WriteEnableForThreadsAt_ThreadLogsId_Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App_Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App_Control();
        static WriteEnableForThreadsAt_ThreadLogsId_Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App_Control();
    };
}
#endif
