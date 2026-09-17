#include "../include/CLIB_ThreadLogs_Framework_App.h"
#include <iostream>
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::_stat_CLASS_ptr_CLIB_ThreadLogs_Data;
// public.
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::CLIB_ThreadLogs_Framework_App(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId);
		stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId);
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::~CLIB_ThreadLogs_Framework_App() {
		std::cout << "thread ? :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
		delete _stat_CLASS_ptr_CLIB_ThreadLogs_Data;
		std::cout << "thread ? :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_Global : ~CLIB_ThreadLogs_Framework_App()." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: <= class : dyn_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::dyn_CLASS_ptr_CLIB_ThreadLogs_Data(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: <= class : dyn_CLASS_ptr_CLIB_ThreadLogs_Data(threadId)." << std::endl;
		return stat_CLASS_get_ptr_CLIB_ThreadLogs_Data(threadId);
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App(threadId)." << std::endl;
	}
// private
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = nullptr;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Data = nullptr;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Data(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms = new class CLIB_ThreadLogs_Framework_App_Algorithms();
		while(stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId) == nullptr) { }
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data(threadId)." << std::endl;
		_stat_CLASS_ptr_CLIB_ThreadLogs_Data = new class CLIB_ThreadLogs_Framework_App_Data();
		while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Data(threadId) == nullptr) {}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs_Framework_App : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Data(threadId)." << std::endl;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Algorithms* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework_App_Algorithms(threadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Framework_App_Algorithms;
	}
	CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App_Data* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_App::stat_CLASS_get_ptr_CLIB_ThreadLogs_Data(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: <= class : stat_CLASS_get_ptr_CLIB_ThreadLogs_Data(threadId)." << std::endl;
		return _stat_CLASS_ptr_CLIB_ThreadLogs_Data;
	}

