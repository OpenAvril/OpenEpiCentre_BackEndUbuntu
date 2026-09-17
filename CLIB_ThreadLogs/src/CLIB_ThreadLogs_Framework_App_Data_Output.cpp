#include "../include/CLIB_ThreadLogs_Framework_App_Data_Output.h"
#include <iostream>
#include <limits>
	double* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value;
// public.
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
		stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output__value();
		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output__value();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
		stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output__value();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
	double CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::dyn_REG_get_CLIB_ThreadLogs_Framework_App_Data_Output_value()
	{
		return *stat_REG_get_CLIB_ThreadLogs_Framework_App_Data_Output__value();
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::dyn_REG_set_CLIB_ThreadLogs_Framework_App_Data_Output_value(double value)
	{
		stat_REG_set_CLIB_ThreadLogs_Framework_App_Data_Output__value(value);
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Data_Output()" << std::endl;
	}
// private.
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output__value()
	{
		stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Data_Output__value()
	{
		stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value = new double();
		*stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value = std::numeric_limits<double>::max();
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output__value()
	{
		*stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value = 0.0;
	}
	double *CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_REG_get_CLIB_ThreadLogs_Framework_App_Data_Output__value()
	{
		return stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output::stat_REG_set_CLIB_ThreadLogs_Framework_App_Data_Output__value(double value)
	{
		*stat_REG_CLIB_ThreadLogs_Framework_App_Data_Output__value = value;
	}