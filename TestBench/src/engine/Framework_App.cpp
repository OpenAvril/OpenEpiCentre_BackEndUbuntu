#include "../../include/engine/App.h"
#include "../../include/engine/Algorithms.h"
#include "../../include/engine/Data.h"
#include "../../include/engine/Execute.h"
#include "../../include/engine/Execute_Control.h"
#include "../../include/engine/Framework_App.h"
#include "../../include/engine/Global.h"
#include <iostream>
	TestBench_Cpp_OpenEpiCentre::App* TestBench_Cpp_OpenEpiCentre::Framework_App::_stat_CLASS_ptr_App;
	TestBench_Cpp_OpenEpiCentre::Global* TestBench_Cpp_OpenEpiCentre::Framework_App::_stat_CLASS_ptr_Global_App;
// public.
	TestBench_Cpp_OpenEpiCentre::Framework_App::Framework_App()
	{
		std::cout << "entered CONSTRUCTOR of Framework_App()" << std::endl;
		stat_CLASS_boot0_DECLARE_Framework_App();
		stat_CLASS_boot1_DEFINE_Framework_App();
		std::cout << "exiting CONSTRUCTOR of Framework_App()" << std::endl;
	}
	TestBench_Cpp_OpenEpiCentre::Framework_App::~Framework_App()
	{
		delete _stat_CLASS_ptr_App;
		delete _stat_CLASS_ptr_Global_App;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_CLASS_create_Architecture()
	{
		stat_CLASS_boot1_DEFINE_Framework_App();
		stat_CLASS_boot3_INITIALISE_Framework_App();
		stat_REG_boot0_DECLARE_Framework_App();
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_CLASS_create_Global_and_Settings()
	{
		stat_CLASS_boot1_DEFINE_Global();
		stat_CLASS_boot3_INITIALISE_Global();
	}
	TestBench_Cpp_OpenEpiCentre::App* TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_CLASS_get_ptr_App()
	{
		return stat_CLASS_get_ptr_App();
	}
	TestBench_Cpp_OpenEpiCentre::Global* TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_CLASS_get_ptr_Global_App()
	{
		return stat_CLASS_get_ptr_Global();
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_REG_boot1_DEFINE_Framework_App()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Framework_App()" << std::endl;
		stat_CLASS_get_ptr_App()->dyn_REG_boot1_DEFINE_App();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot1_DEFINE_Algorithm();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot1_DEFINE_Data();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot1_DEFINE_Execute();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot1_DEFINE_Execute_Control();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_REG_boot2_SUBSTANTIATE_Framework_App(Framework_App* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Framework_App()" << std::endl;
		stat_CLASS_get_ptr_App()->dyn_REG_boot2_SUBSTANTIATE_App();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot2_SUBSTANTIATE_Algorithm();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot2_SUBSTANTIATE_Execute(obj);
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot2_SUBSTANTIATE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_REG_boot3_INITIALISE_Framework_App(Framework_App* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Framework_App()" << std::endl;
		stat_CLASS_get_ptr_App()->dyn_REG_boot3_INITIALISE_App();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot3_INITIALISE_Algorithm();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot3_INITIALISE_Data();
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot3_INITIALISE_Execute(obj);
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot3_INITIALISE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::dyn_PGM_boot4_INSTANTIATE_Framework_App()
	{
		std::cout << "entered dyn_PGM_boot4_INSTANTIATE_Framework_App()" << std::endl;
		stat_CLASS_get_ptr_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot4_INSTANTIATE_Execute();
		std::cout << "exiting dyn_PGM_boot4_INSTANTIATE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot0_DECLARE_Framework_App()
	{
		std::cout << "entered stat_CLASS_boot0_DECLARE_Framework_App()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLARE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot1_DEFINE_Framework_App()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Framework_App" << std::endl;
		stat_CLASS_boot1_DEFINE_App();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_Framework_App" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot3_INITIALISE_Framework_App()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Framework_App()" << std::endl;
		stat_CLASS_boot3_INITIALISE_App();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot4_INSTANTIATE_Framework_App()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Framework_App()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_REG_boot0_DECLARE_Framework_App()
	{
		std::cout << "entered stat_REG_boot0_DECLARE_Framework_App()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLARE_Framework_App()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_STRUCT_boot0_DECLARE()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLARE()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLARE()." << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_STRUCT_boot1_DEFINE()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot1_DEFINE()." << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_STRUCT_boot3_INITIALISE()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot3_INITIALISE()." << std::endl;
	}
// private.
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot1_DEFINE_Global()
	{
		_stat_CLASS_ptr_Global_App = nullptr;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot1_DEFINE_App()
	{
		_stat_CLASS_ptr_App = nullptr;
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot3_INITIALISE_App()
	{
		_stat_CLASS_ptr_App = new App();
		while (stat_CLASS_get_ptr_App() == nullptr) {}
	}
	void TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_boot3_INITIALISE_Global()
	{
		_stat_CLASS_ptr_Global_App = new Global();
		while (stat_CLASS_get_ptr_Global() == nullptr) {}
	}
	TestBench_Cpp_OpenEpiCentre::Global* TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_get_ptr_Global()
	{
		return _stat_CLASS_ptr_Global_App;
	}
	TestBench_Cpp_OpenEpiCentre::App* TestBench_Cpp_OpenEpiCentre::Framework_App::stat_CLASS_get_ptr_App()
	{
		return _stat_CLASS_ptr_App;
	}
