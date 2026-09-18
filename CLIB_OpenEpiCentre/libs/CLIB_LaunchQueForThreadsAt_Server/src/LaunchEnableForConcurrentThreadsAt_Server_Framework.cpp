#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include <iostream>
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App;
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global;
// public.
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::~LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App;
		delete _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global;
		std::cout << "thread "  << 0 << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_create_Architecture(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_CLASS_create_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_CLASS_create_Architecture(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings(threadId)." << std::endl;
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework(threadId)." << std::endl;	}
// private.
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App = nullptr;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global = nullptr;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App = new class CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App(threadId);
		while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId) == nullptr) {}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global = new class CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global(threadId);
		while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId) == nullptr) {}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App;
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: <= class : CLIBLaunchQueAtServer : LaunchEnableForConcurrentThreadsAt_Server_Framework : stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global(threadId)." << std::endl;
		return _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global;
	}