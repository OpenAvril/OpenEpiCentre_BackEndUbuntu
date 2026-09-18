#ifndef CLIB_WRITEENABLEFORTHREADSAT_ThreadLogsId_WRITEENABLEFORTHREADSAT_ThreadLogsId_FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ThreadLogsId_WRITEENABLEFORTHREADSAT_ThreadLogsId_FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework_App.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework_Global.h"
namespace CLIBWriteQueAtThreadLogsId {
    class WriteEnableForThreadsAt_ThreadLogsId_Framework {
    public:
        WriteEnableForThreadsAt_ThreadLogsId_Framework(uint8_t threadId);
        virtual ~WriteEnableForThreadsAt_ThreadLogsId_Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Architecture(uint8_t threadId);
        void dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Global_and_Settings(uint8_t threadId);
        WriteEnableForThreadsAt_ThreadLogsId_Framework_App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId);
        WriteEnableForThreadsAt_ThreadLogsId_Framework_Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId);
    private:
        static WriteEnableForThreadsAt_ThreadLogsId_Framework_App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_App;
        static WriteEnableForThreadsAt_ThreadLogsId_Framework_Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId);
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId);
        static WriteEnableForThreadsAt_ThreadLogsId_Framework_App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId);
        static WriteEnableForThreadsAt_ThreadLogsId_Framework_Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId);
    };
}
#endif