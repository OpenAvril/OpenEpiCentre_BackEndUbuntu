#include "../include/CLIB_ThreadLogs_Framework_App_Algorithms.h"
#include "../include/CLIB_ThreadLogs_Framework_App.h"
#include "../include/CLIB_ThreadLogs_Framework_App_Data.h"
#include <iostream>
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Data;
	
// public.
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::CLIB_ThreadLogs_Framework_App()
	{
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App();
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App();
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App();
		stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App();
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::~CLIB_ThreadLogs_Framework_App()
	{
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Data;

	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App()" << std::endl;

		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App()" << std::endl;

		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App()" << std::endl;

		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms()
	{
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms();
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Data()
	{
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Data();
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App()" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms();
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App()" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms();
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App()" << std::endl;
	}
// private
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms()
	{
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data()
	{
		_stat_CLASS_ptr_CLIB_ThreadLogs_Data = NULL;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms()
	{
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = new class CLIB_ThreadLogs_Framework_App_Algorithms();
		while(stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms() == NULL) { }
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data()
	{
		_stat_CLASS_ptr_CLIB_ThreadLogs_Data = new class CLIB_ThreadLogs_Data();
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Data() == NULL) {}
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms()
	{
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Data()
	{
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Data;
	}

