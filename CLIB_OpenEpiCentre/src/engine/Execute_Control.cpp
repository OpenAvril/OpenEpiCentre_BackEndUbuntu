#include "../../include/engine/Execute_Control.h"
#include <iostream>
	bool* TestBench_Cpp_OpenEpiCentre::Execute_Control::_stat_REG_ptr_Flag_isSystemInitialised;
	std::array<bool, 4>* TestBench_Cpp_OpenEpiCentre::Execute_Control::_stat_REG_ptr_Flag_array_ThreadInitialised;//NUMBER OF THREADS.
// public.
	TestBench_Cpp_OpenEpiCentre::Execute_Control::Execute_Control()
	{
		std::cout << "entered CONSTRUCTOR of Execute_Control()." << std::endl;
		stat_CLASS_boot0_DECLARE_Execute_Control();
		stat_CLASS_boot1_DEFINE_Execute_Control();
		stat_CLASS_boot3_INITIALISE_Execute_Control();
		stat_REG_boot0_DECLARE_Execute_Control();
		std::cout << "exiting CONSTRUCTOR of Execute_Control()." << std::endl;
	}
	TestBench_Cpp_OpenEpiCentre::Execute_Control::~Execute_Control()
	{
		delete _stat_REG_ptr_Flag_isSystemInitialised;
		delete _stat_REG_ptr_Flag_array_ThreadInitialised;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::dyn_REG_boot1_DEFINE_Execute_Control()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Execute_Control()" << std::endl;
		stat_REG_boot1_DEFINE_Flag_isSystemInitialised();
		stat_REG_boot1_DEFINE_Flag_array_ThreadInitialised();
		std::cout << "exiting dyn_REG_boot1_DEFINE_Execute_Control()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::dyn_REG_boot2_SUBSTANTIATE_Execute_Control(Framework_App* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Execute_Control()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(obj);
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Execute_Control()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::dyn_REG_boot3_INITIALISE_Execute_Control(Framework_App* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Execute_Control()" << std::endl;
		stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(obj);
		stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Execute_Control()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::dyn_REG_boot4_INSTANTIATE_Execute_Control()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_Execute_Control()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Execute_Control()" << std::endl;
	}
	bool TestBench_Cpp_OpenEpiCentre::Execute_Control::dyn_REG_get_Flag_is_SystemInitialised()
	{
		return stat_REG_get_ptr_Flag_is_SystemInitialised();
	}
	bool TestBench_Cpp_OpenEpiCentre::Execute_Control::dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID)
	{
		auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
		std::advance(temp, threadID);
		return *temp;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_CLASS_boot0_DECLARE_Execute_Control()
	{
		std::cout << "entered stat_CLASS_boot0_DECLARE_Execute_Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLARE_Execute_Control()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_CLASS_boot1_DEFINE_Execute_Control()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Execute_Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_Execute_Control()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_CLASS_boot3_INITIALISE_Execute_Control()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Execute_Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Execute_Control()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_CLASS_boot4_INSTANTIATE_Execute_Control()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute_Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute_Control()" << std::endl;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_boot0_DECLARE_Execute_Control()
	{
		std::cout << "entered stat_REG_boot0_DECLARE_Execute_Control()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLARE_Execute_Control()" << std::endl;
	}
// private.
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_boot1_DEFINE_Flag_isSystemInitialised()
	{
		_stat_REG_ptr_Flag_isSystemInitialised = nullptr;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_boot1_DEFINE_Flag_array_ThreadInitialised()
	{
		_stat_REG_ptr_Flag_array_ThreadInitialised = nullptr;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(TestBench_Cpp_OpenEpiCentre::Framework_App* obj)
	{
		_stat_REG_ptr_Flag_isSystemInitialised = new bool();
		*_stat_REG_ptr_Flag_isSystemInitialised = true;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(TestBench_Cpp_OpenEpiCentre::Framework_App* obj)
	{
		_stat_REG_ptr_Flag_array_ThreadInitialised = new std::array<bool, 4>();
		while (stat_get_ptr_list_Of_flag_ThreadInitialised() == nullptr) { }
		for (uint8_t threadId = 0; threadId < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadId++)
		{
			auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(TestBench_Cpp_OpenEpiCentre::Framework_App* obj)
	{
		*_stat_REG_ptr_Flag_isSystemInitialised = true;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(TestBench_Cpp_OpenEpiCentre::Framework_App* obj)
	{
		for (uint8_t threadId = 0; threadId < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadId++)
		{
			auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	bool* TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_get_ptr_Flag_is_SystemInitialised()
	{
		bool* temp = nullptr;
		temp = new bool(false);
		for (uint8_t threadID = 0; threadID < sizeof(*stat_get_ptr_list_Of_flag_ThreadInitialised()); threadID++)
		{
			auto temp = stat_get_ptr_list_Of_flag_ThreadInitialised()->begin();
			std::advance(temp, threadID);
			if (*temp == true) stat_REG_set_Flag_is_SystemInitialised(true);
		}
		delete temp;
		return stat_REG_get_ptr_Flag_is_SystemInitialised();
	}
	std::array<bool, 4>* TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_get_ptr_list_Of_flag_ThreadInitialised()
	{
		return _stat_REG_ptr_Flag_array_ThreadInitialised;
	}
	void TestBench_Cpp_OpenEpiCentre::Execute_Control::stat_REG_set_Flag_is_SystemInitialised(bool newFlag)
	{
		*_stat_REG_ptr_Flag_isSystemInitialised = newFlag;
	}