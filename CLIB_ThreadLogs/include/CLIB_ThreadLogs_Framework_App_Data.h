#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_DATA_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_DATA_H
#include "CLIB_ThreadLogs_Framework_App_Data_Input.h"
#include "CLIB_ThreadLogs_Framework_App_Data_Output.h"
namespace CLIB_ThreadLogs
{
    class CLIB_ThreadLogs_Framework_App_Data
    {
    public:
        CLIB_ThreadLogs_Framework_App_Data();
        virtual ~CLIB_ThreadLogs_Framework_App_Data();
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Data();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Data();
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Data(struct CLIB_ThreadLogs_Framework_App_Data_Input* structCLIB_ThreadLogs_Framework_App_Data_Input, struct CLIB_ThreadLogs_Framework_App_Data_Output* structCLIB_ThreadLogs_Framework_App_Data_Output);
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Data();
        struct CLIB_ThreadLogs_Framework_App_Data_Input* dyn_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Input();
        struct CLIB_ThreadLogs_Framework_App_Data_Output* dyn_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Output();
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Data();
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data();
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Data();
    private:
        static struct CLIB_ThreadLogs_Framework_App_Data_Input* _stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Input;
        static struct CLIB_ThreadLogs_Framework_App_Data_Output* _stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Output;
        static void stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Input();
        static void stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output();
        static void stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Input(struct CLIB_ThreadLogs_Framework_App_Data_Input* structCLIB_ThreadLogs_Framework_App_Data_Input);
        static void stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output(struct CLIB_ThreadLogs_Framework_App_Data_Output* structCLIB_ThreadLogs_Framework_App_Data_Output);
        static struct CLIB_ThreadLogs_Framework_App_Data_Input* stat_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Input();
        static struct CLIB_ThreadLogs_Framework_App_Data_Output* stat_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Output();
    };
}
#endif