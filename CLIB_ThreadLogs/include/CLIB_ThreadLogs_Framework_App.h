#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_H
#include "../include/CLIB_ThreadLogs_Framework_App.h"
#include "../include/CLIB_ThreadLogs_Framework_App_Data.h"
namespace CLIB_ThreadLogs
{
    class CLIB_ThreadLogs_Framework_App
    {
    public:
        CLIB_ThreadLogs_Framework_App();
        virtual ~CLIB_ThreadLogs_Framework_App();
         void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App();
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App();
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App();
        class CLIB_ThreadLogs_Framework_App_Algorithms* dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms();
        class CLIB_ThreadLogs_Framework_App_Data* dyn_CLASS_ptr_CLIB_ThreadLogs_Data();

        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App();
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App();
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App();
    private:
        static class CLIB_ThreadLogs_Framework_App_Algorithms* _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
        static class CLIB_ThreadLogs_Framework_App_Data* _stat_CLASS_ptr_CLIB_ThreadLogs_Data;
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms();
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data();
        static class CLIB_ThreadLogs_Framework_App_Algorithms* stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms();
        static class CLIB_ThreadLogs_Framework_App_Data* stat_CLASS_get_ptr_CLIB_ThreadLogs_Data();
    };
}
#endif