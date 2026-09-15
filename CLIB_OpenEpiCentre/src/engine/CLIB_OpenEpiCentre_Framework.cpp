#include "../../include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute.h"
#include <iostream>
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre_Framework()" << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
		std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::~CLIB_OpenEpiCentre_Framework() {
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture() {
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture()." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework();
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings() {
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings()." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global();
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings()." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App() {
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global() {
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre_Framework* obj) {
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre_Framework* obj) {
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre_Framework* obj) {
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre_Framework* obj) {
		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(obj);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App()." <<
		std::endl;_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = nullptr;
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global()." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = nullptr;
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Global()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App()." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App = new CLIB_OpenEpiCentre_App();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App() == nullptr) {}
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global()." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global = new CLIB_OpenEpiCentre_Global();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global() == nullptr) {}
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Global()." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App() {
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_App;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global()	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_Global;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Algorithm()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output()" << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent() {
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_Concurrent;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input() {
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output() {
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework_Output;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm() {
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework_User_Algorithm;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input() {
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework::stat_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output() {
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework_User_Output;
	}