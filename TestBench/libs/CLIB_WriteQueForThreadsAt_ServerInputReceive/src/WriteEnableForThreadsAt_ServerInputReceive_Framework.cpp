#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Framework.h"
#include <iostream>
#include "../include/WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Control.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Global.h"
CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::_stat_CLASS_get_ptr_WriteEnable;
	CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::WriteEnableForThreadsAt_ServerInputReceive_Framework()
	{
		boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
		boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
		boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
		boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework();
	}
	CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::~WriteEnableForThreadsAt_ServerInputReceive_Framework()
	{
		delete _stat_CLASS_get_ptr_WriteEnable;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework()
	{
		std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;

		std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework()
	{
		std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive();
		std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework" << std::endl;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework()
	{
		std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive();
		std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework()
	{
		std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;

		std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
	{
		std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Control(obj);
		std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
	{
		std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Control(obj);
		std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
	{
		std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Control(obj);
		std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive_Framework(WriteEnableForThreadsAt_ServerInputReceive_Framework* obj)
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::dyn_CLASS_get_ptr_WriteEnable()
	{
		return stat_CLASS_get_ptr_WriteEnable();
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive()
	{
		_stat_CLASS_get_ptr_WriteEnable = nullptr;
	}
	void CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive()
	{
		_stat_CLASS_get_ptr_WriteEnable = new class CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive();
		while (stat_CLASS_get_ptr_WriteEnable() == nullptr) {}
	}
	CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive* CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _stat_CLASS_get_ptr_WriteEnable;
	}