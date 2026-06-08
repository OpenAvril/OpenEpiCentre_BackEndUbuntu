#include "IO.h"
#include "include/engine/Global.h"
#include <iostream>
	TestBench_Cpp_OpenEpiCentre::Framework_App* _CLASS_ptr_Framework_App;
// public.
    TestBench_Cpp_OpenEpiCentre::Framework_App* TestBench_Cpp_OpenEpiCentre::IO::app_FUNCT_generate_Program()
	{
		std::cout << "entered app_FUNCT_generate_Program()." << std::endl;

		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		stat_CLASS_boot1_DEFINE_Framework();
		stat_CLASS_boot3_INITIALISE_Framework();
		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "started Global Meta-Data and Settings." << std::endl;
		stat_CLASS_get_ptr_Framework_App()->dyn_CLASS_create_Global_and_Settings();
		stat_CLASS_get_ptr_Framework_App()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot1_DEFINE_Global();
		stat_CLASS_get_ptr_Framework_App()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot2_SUBSTANTIATE_Global();
		stat_CLASS_get_ptr_Framework_App()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot3_INITIALISE_Global();
		std::cout << "done Global Meta-Data and Settings." << std::endl;

		std::cout << "started STRUCTS Generate." << std::endl;
		std::cout << "started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
    	std::cout << "done STRUCTS Generate." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		stat_CLASS_get_ptr_Framework_App()->dyn_CLASS_create_Architecture();

		std::cout << "started Architecture Registers - DEFINE" << std::endl;
		stat_CLASS_get_ptr_Framework_App()->dyn_REG_boot1_DEFINE_Framework_App();
		std::cout << "done Architecture Registers - DEFINE." << std::endl;

		std::cout << "started Architecture Registers - SUBSTANTIATE." << std::endl;

		stat_CLASS_get_ptr_Framework_App()->dyn_REG_boot2_SUBSTANTIATE_Framework_App(stat_CLASS_get_ptr_Framework_App());
		std::cout << "done Architecture Registers - SUBSTANTIATE." << std::endl;

		std::cout << "started Architecture Registers - INITIALISE." << std::endl;
		stat_CLASS_get_ptr_Framework_App()->dyn_REG_boot3_INITIALISE_Framework_App(stat_CLASS_get_ptr_Framework_App());
		std::cout << "done Architecture Registers - INITIALISE." << std::endl;
		std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATE." << std::endl;
		stat_CLASS_get_ptr_Framework_App()->dyn_PGM_boot4_INSTANTIATE_Framework_App();
		std::cout << "done Program - INSTANTIATE." << std::endl;

		std::cout << " " << std::endl;
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|      MIT TestBench_Cpp_OpenEpiCentre     |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		std::cout << " " << std::endl;
		return stat_CLASS_get_ptr_Framework_App();
	}
	void TestBench_Cpp_OpenEpiCentre::IO::stat_CLASS_boot1_DEFINE_Framework()
    {
    	_CLASS_ptr_Framework_App = nullptr;
    }
	void TestBench_Cpp_OpenEpiCentre::IO::stat_CLASS_boot3_INITIALISE_Framework()
    {
    	_CLASS_ptr_Framework_App = new class TestBench_Cpp_OpenEpiCentre::Framework_App();
    	while (stat_CLASS_get_ptr_Framework_App() == nullptr) {}
    }
	TestBench_Cpp_OpenEpiCentre::Framework_App* TestBench_Cpp_OpenEpiCentre::IO::stat_CLASS_get_ptr_Framework_App()
    {
    	return _CLASS_ptr_Framework_App;
    }