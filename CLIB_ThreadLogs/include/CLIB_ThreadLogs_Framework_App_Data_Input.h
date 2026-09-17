#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Data_Input_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Data_Input_H
namespace CLIB_ThreadLogs
{
    struct CLIB_ThreadLogs_Framework_App_Data_Input
    {
    public:
    	void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Input();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Input();
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Input();
		void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Input();
    	double dyn_REG_get_CLIB_ThreadLogs_Framework_App_Data_Input__value_a();
    	double dyn_REG_get_CLIB_ThreadLogs_Framework_App_Data_Input__value_b();
    	void dyn_REG_set_CLIB_ThreadLogs_Framework_App_Data_Input__value_a(double value);
    	void dyn_REG_set_CLIB_ThreadLogs_Framework_App_Data_Input__value_b(double value);
    	static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Input();
    	static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Input();
    	static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Input();
    	static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Input();
    private:
        static double* stat_REG_CLIB_ThreadLogs_Framework_App_Data_Input__value_a;
		static double* stat_REG_CLIB_ThreadLogs_Framework_App_Data_Input__value_b;
		static void stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Input__value_a();
        static void stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Input__value_b();
		static void stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Input__value_a();
        static void stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Input__value_b();
		static void stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Input__value_a();
        static void stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Input__value_b();
		static double* stat_REG_get_CLIB_ThreadLogs_Framework_App_Data_Input__value_a();
		static double* stat_REG_get_CLIB_ThreadLogs_Framework_App_Data_Input__value_b();
        static void stat_REG_set_CLIB_ThreadLogs_Framework_App_Data_Input__value_a(double value);
        static void stat_REG_set_CLIB_ThreadLogs_Framework_App_Data_Input__value_b(double value);
    };
}
#endif