#include "../include/CLIB_ThreadLogs_Framework.h"
#include "../include/CLIB_ThreadLogs_Framework_App.h"
#include "../include/CLIB_ThreadLogs_Framework_App_Data_Input.h"
#include <iostream>
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::_stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Input;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::_stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Output;
// private.
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::CLIB_ThreadLogs_Framework()
	{
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework();
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework();
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework();
		stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework();
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::~CLIB_ThreadLogs_Framework()
	{
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_Global;
		delete _stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Input;
		delete _stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Output;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot1_DEFINE()
	{
		stat_STRUCT_boot1_DEFINE_User_CLIB_ThreadLogs_Framework_App_Data_Input();
		stat_STRUCT_boot1_DEFINE_User_CLIB_ThreadLogs_Framework_App_Data_Output();
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_APP_CLIB_ThreadLogs_stat_STRUCT_boot3_INITIALISE()
	{
		stat_STRUCT_boot3_INITIALISE_User_CLIB_ThreadLogs_Framework_App_Data_Input();
		stat_STRUCT_boot3_INITIALISE_User_CLIB_ThreadLogs_Framework_App_Data_Output();
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework()
	{
		std::cout << "entered REG_boot1_DEFINE_CLIB_ThreadLogs_Framework()" << std::endl;

		std::cout << "exiting REG_boot1_DEFINE_CLIB_ThreadLogs_Framework()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework()
	{
		std::cout << "entered REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework()" << std::endl;

		std::cout << "exiting REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework()
	{
		std::cout << "entered REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework()" << std::endl;

		std::cout << "exiting REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework()
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App()
	{
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App();
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global()
	{
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_Global();
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_STRUCT_get_REG_CLIB_ThreadLogs_Framework_App_Data_Input()
	{
		return stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Input();
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::dyn_STRUCT_get_REG_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		return stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Output();
	}
// private.
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework()
	{
		std::cout << "entered CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework()" << std::endl;

		std::cout << "exiting CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework()
	{
		std::cout << "entered CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App();
		std::cout << "exiting CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework()
	{
		std::cout << "entered CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App();
		std::cout << "exiting CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework()
	{
		std::cout << "entered REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework()" << std::endl;

		std::cout << "exiting REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework()" << std::endl;
	}
// private.
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App()
	{
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App()
	{
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App = new class CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App();
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App() == NULL) {}
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App()
	{
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_STRUCT_boot1_DEFINE_User_CLIB_ThreadLogs_Framework_App_Data_Input()
	{
		_stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Input = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_STRUCT_boot1_DEFINE_User_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		_stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Output = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_STRUCT_boot3_INITIALISE_User_CLIB_ThreadLogs_Framework_App_Data_Input()
	{
		_stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Input = new struct CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input();
		while (stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Input() == NULL) {}
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_STRUCT_boot3_INITIALISE_User_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		_stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Output = new struct CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output();
		while (stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Output() == NULL) {}
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Input* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Input()
	{
		return _stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Input;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data_Output* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework::stat_STRUCT_get_CLIB_ThreadLogs_Framework_App_Data_Output()
	{
		return _stat_STRUCT_CLIB_ThreadLogs_Framework_App_Data_Output;
	}