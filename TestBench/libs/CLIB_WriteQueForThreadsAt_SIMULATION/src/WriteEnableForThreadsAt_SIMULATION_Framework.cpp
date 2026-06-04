#include "../include/WriteEnableForThreadsAt_SIMULATION_Framework.h"
#include <iostream>
#include "../include/WriteEnableForThreadsAt_SIMULATION.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Control.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Global.h"
CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::_stat_CLASS_get_ptr_WriteEnable;
	CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::WriteEnableForThreadsAt_SIMULATION_Framework()
	{
		boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework();
		boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework();
		boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework();
		boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework();
	}
	CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::~WriteEnableForThreadsAt_SIMULATION_Framework()
	{
		delete _stat_CLASS_get_ptr_WriteEnable;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework()
	{
		std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;

		std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework()
	{
		std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION();
		std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework" << std::endl;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework()
	{
		std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION();
		std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework()
	{
		std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;

		std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
	{
		std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Control(obj);
		std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
	{
		std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Control(obj);
		std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
	{
		std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Control(obj);
		std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION_Framework(WriteEnableForThreadsAt_SIMULATION_Framework* obj)
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::dyn_CLASS_get_ptr_WriteEnable()
	{
		return stat_CLASS_get_ptr_WriteEnable();
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION()
	{
		_stat_CLASS_get_ptr_WriteEnable = nullptr;
	}
	void CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION()
	{
		_stat_CLASS_get_ptr_WriteEnable = new class CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION();
		while (stat_CLASS_get_ptr_WriteEnable() == nullptr) {}
	}
	CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION* CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _stat_CLASS_get_ptr_WriteEnable;
	}