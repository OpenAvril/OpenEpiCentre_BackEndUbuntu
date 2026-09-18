#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive_FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive_FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Framework_App.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Framework_Global.h"
namespace CLIBWriteQueAtServerInputReceive {
    class WriteEnableForThreadsAt_ServerInputReceive_Framework {
    public:
        WriteEnableForThreadsAt_ServerInputReceive_Framework(uint8_t threadId);
        virtual ~WriteEnableForThreadsAt_ServerInputReceive_Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerInputReceive_Architecture(uint8_t threadId);
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerInputReceive_Global_and_Settings(uint8_t threadId);
        WriteEnableForThreadsAt_ServerInputReceive_Framework_App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App(uint8_t threadId);
        WriteEnableForThreadsAt_ServerInputReceive_Framework_Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Global(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Global(uint8_t threadId);
    private:
        static WriteEnableForThreadsAt_ServerInputReceive_Framework_App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Framework_App;
        static WriteEnableForThreadsAt_ServerInputReceive_Framework_Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App(uint8_t threadId);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Global(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App(uint8_t threadId);
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Global(uint8_t threadId);
        static WriteEnableForThreadsAt_ServerInputReceive_Framework_App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App(uint8_t threadId);
        static WriteEnableForThreadsAt_ServerInputReceive_Framework_Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_Global(uint8_t threadId);
    };
}
#endif