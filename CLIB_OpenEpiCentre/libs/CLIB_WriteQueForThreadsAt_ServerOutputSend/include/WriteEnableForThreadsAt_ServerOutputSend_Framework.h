#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_WRITEENABLEFORTHREADSAT_ServerOutputSend_FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_App.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Global.h"
namespace CLIBWriteQueAtServerOutputSend
{
    class WriteEnableForThreadsAt_ServerOutputSend_Framework
    {
    public:
        WriteEnableForThreadsAt_ServerOutputSend_Framework();
        virtual ~WriteEnableForThreadsAt_ServerOutputSend_Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerOutputSend_Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ServerOutputSend_Global_and_Settings();
        WriteEnableForThreadsAt_ServerOutputSend_App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App();
        WriteEnableForThreadsAt_ServerOutputSend_Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
    private:
        static WriteEnableForThreadsAt_ServerOutputSend_App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Framework_App;
        static WriteEnableForThreadsAt_ServerOutputSend_Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ServerOutputSend_Framework_Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global();
        static WriteEnableForThreadsAt_ServerOutputSend_App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_App();
        static WriteEnableForThreadsAt_ServerOutputSend_Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_Global();
    };
}
#endif