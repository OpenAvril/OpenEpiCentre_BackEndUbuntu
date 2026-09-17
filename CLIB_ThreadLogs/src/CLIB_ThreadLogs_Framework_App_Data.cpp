#include "../include/CLIB_ThreadLogs_Framework_App_Data.h"
#include "../include/CLIB_ThreadLogs_Framework_App_Data_Input.h"
#include "../include/CLIB_ThreadLogs_Framework_App_Data_Output.h"
#include <iostream>
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::_stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Input;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::_stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Output;
// public.
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::CLIB_ThreadLogs_Framework_App_Data()
	{

	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::~CLIB_ThreadLogs_Framework_App_Data()
	{
		delete _stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Input;
		delete _stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Output;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Data()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Data()" << std::endl;
		stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Input();
		stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output();
		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Data()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Data()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Data()" << std::endl;

		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Data()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Data(CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* structCLIB_ThreadLogs_Framework_App_Data_Input, CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* structCLIB_ThreadLogs_Framework_App_Data_Output)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Data()" << std::endl;
		stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Input(structCLIB_ThreadLogs_Framework_App_Data_Input);
		stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output(structCLIB_ThreadLogs_Framework_App_Data_Output);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Data()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Data()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Data()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Data()" << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::dyn_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Input()
	{
		return stat_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Input();
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::dyn_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		return stat_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Output();
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Data()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Data()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Data()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Data()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Data()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Data()" << std::endl;
	}
// private.
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Input()
	{
		_stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Input = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		_stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Output = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Input(CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* structCLIB_ThreadLogs_Framework_App_Data_Input)
	{
		_stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Input = structCLIB_ThreadLogs_Framework_App_Data_Input;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Data_Output(CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* structCLIB_ThreadLogs_Framework_App_Data_Output)
	{
		_stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Output = structCLIB_ThreadLogs_Framework_App_Data_Output;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Input()
	{
		return _stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Input;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data::stat_BUFFER_get_ptr_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		return _stat_REG_ptr_CLIB_ThreadLogs_Framework_App_Data_Output;
	}
