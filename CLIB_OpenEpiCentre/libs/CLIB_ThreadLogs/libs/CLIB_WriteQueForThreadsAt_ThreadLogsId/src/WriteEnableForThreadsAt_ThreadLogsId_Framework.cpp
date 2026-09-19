#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework.h"
#include <iostream>
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_App* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::_stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_App;
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_Global* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::_stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_Global;
// public.
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::WriteEnableForThreadsAt_ThreadLogsId_Framework(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
	}
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::~WriteEnableForThreadsAt_ThreadLogsId_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_App;
		delete _stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_Global;
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Architecture(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Architecture(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Global_and_Settings(uint8_t threadId)
	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Global_and_Settings(threadId)." << std::endl;
	}
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_App* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId);
	}
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_Global* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Framework(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App(threadId);
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Framework(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
	}
// private.
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_App = nullptr;
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_Global = nullptr;
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId)	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_App = new class CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_App(threadId);
		while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId) == nullptr) {}
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_Global = new class CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId) == nullptr) {}
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : WriteEnableForThreadsAt_ThreadLogsId_Framework : pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
	}
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_App* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_App;
	}
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework_Global* CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : stat_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)." << std::endl;
		return _stat_CLASS_ptr_WriteEnableForThreadsAt_ThreadLogsId_Framework_Global;
	}