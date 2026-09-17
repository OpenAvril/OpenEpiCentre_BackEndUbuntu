#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_H
#include "CLIB_ThreadLogs_Framework_App.h"
#include "CLIB_ThreadLogs_Framework_Global.h"
#include "CLIB_ThreadLogs_Framework_App_Data_Input.h"
#include "CLIB_ThreadLogs_Framework_App_Data_Output.h"
namespace CLIB_ThreadLogs
{
    class CLIB_ThreadLogs_Framework
    {
    public:
        CLIB_ThreadLogs_Framework();
        virtual ~CLIB_ThreadLogs_Framework();
        void dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot1_DEFINE();
        void dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot3_INITIALISE();
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework();
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework();
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework();
        class CLIB_ThreadLogs_Framework_App* dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App();
        static class CLIB_ThreadLogs_Framework_Global* dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global();
        struct CLIB_ThreadLogs_Framework_App_Data_Input* dyn_STRUCT_get_REG_CLIB_ThreadLogs_Framework_App_Data_Input();
        struct CLIB_ThreadLogs_Framework_App_Data_Output* dyn_STRUCT_get_REG_CLIB_ThreadLogs_Framework_App_Data_Output();
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework();
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework();
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework();
    private:
        static class CLIB_ThreadLogs_Framework_App* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
        static class CLIB_ThreadLogs_Framework_Global* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
        static struct CLIB_ThreadLogs_Framework_App_Data_Input* _stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Input;
        static struct CLIB_ThreadLogs_Framework_App_Data_Output* _stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Output;
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App();
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global();
        static class CLIB_ThreadLogs_Framework_App* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App();
        static class CLIB_ThreadLogs_Framework_Global* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global();
        static void stat_STRUCT_boot1_DEFINE_User_CLIB_ThreadLogs_Framework_App_Data_Input();
        static void stat_STRUCT_boot1_DEFINE_User_CLIB_ThreadLogs_Framework_App_Data_Output();
        static void stat_STRUCT_boot3_INITIALISE_User_CLIB_ThreadLogs_Framework_App_Data_Input();
        static void stat_STRUCT_boot3_INITIALISE_User_CLIB_ThreadLogs_Framework_App_Data_Output();
        static struct CLIB_ThreadLogs_Framework_App_Data_Input* stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Input();
        static struct CLIB_ThreadLogs_Framework_App_Data_Output* stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Output();
    };
}
#endif