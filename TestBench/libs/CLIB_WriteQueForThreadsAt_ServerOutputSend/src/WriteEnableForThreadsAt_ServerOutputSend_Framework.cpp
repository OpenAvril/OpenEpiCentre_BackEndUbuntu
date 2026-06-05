#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Framework.h"
#include <iostream>
#include "../include/WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Control.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Global.h"
CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::_stat_CLASS_get_ptr_WriteEnable;
	CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::WriteEnableForThreadsAt_ServerOutputSend_Framework()
	{
		boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
		boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
		boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
		boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework();
	}
	CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::~WriteEnableForThreadsAt_ServerOutputSend_Framework()
	{
		delete _stat_CLASS_get_ptr_WriteEnable;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework()
	{
		std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;

		std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework()
	{
		std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend();
		std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework" << std::endl;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework()
	{
		std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend();
		std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework()
	{
		std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;

		std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
	{
		std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Control(obj);
		std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
	{
		std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Control(obj);
		std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
	{
		std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Control(obj);
		std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend_Framework(WriteEnableForThreadsAt_ServerOutputSend_Framework* obj)
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::dyn_CLASS_get_ptr_WriteEnable()
	{
		return stat_CLASS_get_ptr_WriteEnable();
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend()
	{
		_stat_CLASS_get_ptr_WriteEnable = nullptr;
	}
	void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend()
	{
		_stat_CLASS_get_ptr_WriteEnable = new class CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend();
		while (stat_CLASS_get_ptr_WriteEnable() == nullptr) {}
	}
	CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _stat_CLASS_get_ptr_WriteEnable;
	}