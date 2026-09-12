#include "../../include/engine/CLIB_OpenEpiCentre__Framework.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute.h"
#include <iostream>
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__App;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__Global;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__Concurrent;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Output;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__User_Algorithm;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Output;
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::CLIB_OpenEpiCentre__Framework() {
		std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre_Framework()" << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
		std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::~CLIB_OpenEpiCentre__Framework() {
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__App;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__Global;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__Concurrent;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Input;
		delete _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Output;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__User_Algorithm;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Input;
		delete _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Output;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Architecture() {
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Architecture()." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework();
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Architecture()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Global_and_Settings() {
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Global_and_Settings()." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Global();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Global();
		std::cout << "thread ? :: " << " entered LIB :: dyn_CLASS_create_CLIB_OpenEpiCentre__Framework__Global_and_Settings()." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App() {
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__Global() {
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__Global();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj) {
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj) {
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj) {
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj) {
		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(obj);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Algorithm() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Algorithm();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Input() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Output() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Concurrent() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Concurrent();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Input() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Output() {
		stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Algorithm() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Algorithm();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Input() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Output() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Concurrent() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Concurrent();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Input() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Output() {
		stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Output();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__Concurrent() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Concurrent();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__Input() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Input();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__Output() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Output();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output() {
		return stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__App();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__App();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework() {
		std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__App() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__App()." <<
		std::endl;_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__App = nullptr;
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__App()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Global() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Global()." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__Global = nullptr;
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Global()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__App() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__App()." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__App = new CLIB_OpenEpiCentre__App();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App() == nullptr) {}
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__App()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Global() {
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Global()." << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__Global = new CLIB_OpenEpiCentre__Global();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__Global() == nullptr) {}
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Global()." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__App() {
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__App;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre__Framework__Global()	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__Global;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Concurrent() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Concurrent()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__Concurrent = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Input() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Input()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Input = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Output() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Output()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Output = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Algorithm() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Algorithm()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__User_Algorithm = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Algorithm()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Input() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Input()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Input = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Output() {
		std::cout << "entered stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Output()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Output = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre__Framework__User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Concurrent() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Concurrent()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__Concurrent = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Concurrent() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Input() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Input()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Input() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Output() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Output()" << std::endl;
		_stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Output() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Algorithm() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Algorithm()" << std::endl;
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__User_Algorithm = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Algorithm()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Input() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Input()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Output() {
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Output()" << std::endl;
		_stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output();
		while (stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre__Framework__User_Output()" << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Concurrent() {
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__Concurrent;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Input() {
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__Output() {
		return _stat_STRUCT_CLIB_ptr_OpenEpiCentre_Framework__Output;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Algorithm() {
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Framework__User_Algorithm;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Input() {
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_CLIB_OpenEpiCentre__Framework__User_Output() {
		return _stat_STRUCT_ptr_CLIB_OpenEpiCentre_Framework__User_Output;
	}