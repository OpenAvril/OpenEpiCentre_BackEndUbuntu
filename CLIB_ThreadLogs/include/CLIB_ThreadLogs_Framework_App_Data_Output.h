#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Data_Output_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Data_Output_H
namespace CLIB_ThreadLogs
{
    struct CLIB_ThreadLogs_Framework_App_Data_Output
    {
    public:
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output();
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output();
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output();
        double dyn_REG_get_CLIB_ThreadLogs_Framework_App_Data_Output_value();
		void dyn_REG_set_CLIB_ThreadLogs_Framework_App_Data_Output_value(double value);
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output();
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output();
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output();
    private:
        static double* stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value;
        static void stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output__value();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output__value();
        static void stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output__value();
        static double* stat_REG_get_CLIB_ThreadLogs_Framework_App_Data_Output__value();
		static void stat_REG_set_CLIB_ThreadLogs_Framework_App_Data_Output__value(double value);
    };
}
#endif