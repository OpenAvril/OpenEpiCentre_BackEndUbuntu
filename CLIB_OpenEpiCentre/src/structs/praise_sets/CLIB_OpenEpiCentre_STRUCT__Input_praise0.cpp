#include "../../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"

#include <cfloat>
#include <iostream>
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::_stat_REG_ptr_Input_praise0_valueA;
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::_stat_REG_ptr_Input_praise0_valueB;
// public.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_boot1_DEFINE_Input_praise0()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Input_praise0()" << std::endl;
		stat_REG_boot1_DEFINE_Input_praise0_valueA();
		stat_REG_boot1_DEFINE_Input_praise0_valueB();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Input_praise0()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_boot2_SUBSTANTIATE_Input_praise0()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Input_praise0()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueA();
		stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueB();
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Input_praise0()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_boot3_INITIALISE_Input_praise0()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Input_praise0()" << std::endl;
		stat_REG_boot3_INITIALISE_Input_praise0_valueA();
		stat_REG_boot3_INITIALISE_Input_praise0_valueB();
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Input_praise0()" << std::endl;
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_get_Item_Input_praise0_valueA()
	{
		return *stat_REG_get_Ptr_Input_praise0_valueA();
	}
	double CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_get_Item_Input_praise0_valueB()
	{
		return *stat_REG_get_Ptr_Input_praise0_valueB();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_set_Item_Input_praise0_valueA(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise0_valueA() = newValue;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::dyn_REG_set_Item_Input_praise0_valueB(double newValue)
	{
		*stat_REG_get_Ptr_Input_praise0_valueB() = newValue;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot1_DEFINE_Input_praise0_valueA()
	{
		_stat_REG_ptr_Input_praise0_valueA = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot1_DEFINE_Input_praise0_valueB()
	{
		_stat_REG_ptr_Input_praise0_valueB = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueA()
	{
		_stat_REG_ptr_Input_praise0_valueA = new double();
		*_stat_REG_ptr_Input_praise0_valueA = (double)(DBL_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueB()
	{
		_stat_REG_ptr_Input_praise0_valueB = new double();
		*_stat_REG_ptr_Input_praise0_valueB = (double)(DBL_MAX);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot3_INITIALISE_Input_praise0_valueA()
	{
		*_stat_REG_ptr_Input_praise0_valueA = (double)(1.2);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_boot3_INITIALISE_Input_praise0_valueB()
	{
		*_stat_REG_ptr_Input_praise0_valueA = (double)(2.6);
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_get_Ptr_Input_praise0_valueA()
	{
		return _stat_REG_ptr_Input_praise0_valueA;
	}
	double* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0::stat_REG_get_Ptr_Input_praise0_valueB()
	{
		return _stat_REG_ptr_Input_praise0_valueB;
	}