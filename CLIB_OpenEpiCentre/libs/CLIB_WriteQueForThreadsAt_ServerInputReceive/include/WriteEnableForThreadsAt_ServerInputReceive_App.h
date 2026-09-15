#ifndef CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_WriteEnableForThreadsAt_ServerInputReceive_App_APP_H
#define CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_WriteEnableForThreadsAt_ServerInputReceive_App_APP_H
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServerInputReceive
{
    class WriteEnableForThreadsAt_ServerInputReceive_App
    {
    public:
        WriteEnableForThreadsAt_ServerInputReceive_App();
        virtual ~WriteEnableForThreadsAt_ServerInputReceive_App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ServerInputReceive_Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive_App(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_App();
    private:
        static WriteEnableForThreadsAt_ServerInputReceive_Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_App_Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_App_Control();
        static WriteEnableForThreadsAt_ServerInputReceive_Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive_App_Control();
    };
}
#endif
