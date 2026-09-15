#include "../include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h"
#include <iostream>
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App;
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global;
// public.
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::~LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		delete _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App;
		delete _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_create_Architecture() {
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework();
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_create_LaunchEnableForConcurrentThreadsAt_Server_Global_and_Settings()
	{
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global();
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global();
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App() {
		return stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App();
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global() {
		return stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global();
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		std::cout << "exiting dyn_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		std::cout << "exiting dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		std::cout << "exiting dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		std::cout << "exiting stat_CLASS_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App();
		stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()." << std::endl;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework() {
		std::cout << "entered stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
		stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App();
		std::cout << "exiting stat_REG_boot0_DECLARE_LaunchEnableForConcurrentThreadsAt_Server_Framework()." << std::endl;
	}
// private.
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_App() {
		_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App = nullptr;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global()	{
		_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global = nullptr;
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_App() {
		_stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App = new class CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App();
		while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App() == nullptr) {}
	}
	void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::pr_stat_CLASS_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global() {
		_stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global = new class CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global();
		while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global() == nullptr) {}
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_App* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_App()	{
		return _stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_App;
	}
	CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Global* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server_Framework::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_Server_Global() {
		return _stat_CLASS_ptr_LaunchEnableForConcurrentThreadsAt_Server_Framework_Global;
	}