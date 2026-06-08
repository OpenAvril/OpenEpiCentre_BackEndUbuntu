#include "../../../include/structs/praise_sets/Output_praise3.h"
#include <cfloat>
#include <iostream>
double* CLIBOpenEpiCentre::Output_praise3::_REG_ptr_output_praise3_Value;
// public.
	void CLIBOpenEpiCentre::Output_praise3::dyn_REG_boot1_DEFINE_Output_praise3()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Output_praise3()" << std::endl;
		stat_REG_boot1_DEFINE_output_praise3_Value();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Output_praise3()" << std::endl;
	}
	void CLIBOpenEpiCentre::Output_praise3::dyn_REG_boot2_SUBSTANTIATE_Output_praise3()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Output_praise3()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_output_praise3_Value();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Output_praise3()" << std::endl;
	}
	void CLIBOpenEpiCentre::Output_praise3::dyn_REG_boot3_INITIALISE_Output_praise3()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Output_praise3()" << std::endl;
		stat_REG_boot3_INITIALISE_output_praise3_Value();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Output_praise3()" << std::endl;
	}
	void CLIBOpenEpiCentre::Output_praise3::dyn_REG_boot4_INSTANTIATE_Output_praise3()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Output_praise3()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Output_praise3()" << std::endl;
	}
	double CLIBOpenEpiCentre::Output_praise3::dyn_REG_get_output_praise3_Value()
	{
		return *stat_REG_get_ptr_output_praise3_Value();
	}
	void CLIBOpenEpiCentre::Output_praise3::dyn_REG_set_output_praise3_Value(double newValue)
	{
		stat_REG_set_Item_output_praise3_Value(newValue);
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_CLASS_boot3_DECLARE_Output_praise3()
	{
		std::cout << "entered stat_CLASS_boot3_DECLARE_Output_praise3()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_DECLARE_Output_praise3()" << std::endl;
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_CLASS_boot1_DEFINE_Output_praise3()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Output_praise3()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_Output_praise3()" << std::endl;
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_CLASS_boot3_INITIALISE_Output_praise3()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Output_praise3()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Output_praise3()" << std::endl;
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_CLASS_boot4_INSTANTIATE_Output_praise3()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Output_praise3()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Output_praise3()" << std::endl;
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_REG_boot3_DECLARE_Output_praise3()
	{
		std::cout << "entered stat_REG_boot3_DECLARE_Output_praise3()" << std::endl;

		std::cout << "exiting stat_REG_boot3_DECLARE_Output_praise3()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::Output_praise3::stat_REG_boot1_DEFINE_output_praise3_Value()
	{
		_REG_ptr_output_praise3_Value = nullptr;
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_REG_boot2_SUBSTANTIATE_output_praise3_Value()
	{
		_REG_ptr_output_praise3_Value = new double();
		*_REG_ptr_output_praise3_Value = (double)(DBL_MAX);
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_REG_boot3_INITIALISE_output_praise3_Value()
	{
		*_REG_ptr_output_praise3_Value = (double)(3.3);
	}
	double* CLIBOpenEpiCentre::Output_praise3::stat_REG_get_ptr_output_praise3_Value()
	{
		return _REG_ptr_output_praise3_Value;
	}
	void CLIBOpenEpiCentre::Output_praise3::stat_REG_set_Item_output_praise3_Value(double newValue)
	{
		*_REG_ptr_output_praise3_Value = newValue;
	}