#ifndef CLIB_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE_WRITEENABLEFORTHREADSAT_SERVERINPUTRECEIVE__FRAMEWORK_H
#include "WriteEnableForThreadsAt_ServerInputReceive__App.h"
#include "WriteEnableForThreadsAt_ServerInputReceive__Global.h"
#include "WriteEnableForThreadsAt_ServerInputReceive__Framework.h"
namespace CLIBWriteQueAtServerInputReceive
{
    class WriteEnableForThreadsAt_ServerInputReceive__Framework
    {
    public:
        WriteEnableForThreadsAt_ServerInputReceive__Framework();
        virtual ~WriteEnableForThreadsAt_ServerInputReceive__Framework();
        WriteEnableForThreadsAt_ServerInputReceive__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App();
        WriteEnableForThreadsAt_ServerInputReceive__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive__Framework(WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
    private:
        static WriteEnableForThreadsAt_ServerInputReceive__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App;
        static WriteEnableForThreadsAt_ServerInputReceive__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerInputReceive__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Global();
        static WriteEnableForThreadsAt_ServerInputReceive__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__App();
        static WriteEnableForThreadsAt_ServerInputReceive__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Global();
    };
}
#endif