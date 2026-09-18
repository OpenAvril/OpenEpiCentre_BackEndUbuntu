#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Framework_App.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Framework_Global.h"
namespace CLIBWriteQueAtServerOutputSend {
    class WriteEnableForThreadsAt_ServerOutputSend_Framework {
    public:
        WriteEnableForThreadsAt_ServerOutputSend_Framework(uint8_t threadId);
        virtual ~WriteEnableForThreadsAt_ServerOutputSend_Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerOutputSend_Architecture(uint8_t threadId);
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerOutputSend_Global_and_Settings(uint8_t threadId);
        WriteEnableForThreadsAt_ServerOutputSend_Framework_App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App(uint8_t threadId);
        WriteEnableForThreadsAt_ServerOutputSend_Framework_Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId);
    private:
        static WriteEnableForThreadsAt_ServerOutputSend_Framework_App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Framework_App;
        static WriteEnableForThreadsAt_ServerOutputSend_Framework_Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App(uint8_t threadId);
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId);
        static WriteEnableForThreadsAt_ServerOutputSend_Framework_App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App(uint8_t threadId);
        static WriteEnableForThreadsAt_ServerOutputSend_Framework_Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId);
    };
}
#endif