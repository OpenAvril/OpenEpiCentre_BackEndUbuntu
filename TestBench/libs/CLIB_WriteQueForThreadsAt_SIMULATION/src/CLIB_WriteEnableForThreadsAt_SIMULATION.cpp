#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_SIMULATION.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Framework.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_Global.h"
CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION;
	bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
void* CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SIMULATION_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SIMULATION_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED();
	stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;

	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
unsigned char* CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[1] = false;
		return CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[2] == false) {
		delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION;
		while (stat_CLASS_get_ptr_Framework() != nullptr) {}
	}
	else {
		stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::app_FUNCT_write_End(unsigned char* bytes)
{
	if (stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::app_FUNCT_write_Start(unsigned char* bytes)
{
	if (stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(_stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION); memberFunctionId++)
	{
		if (stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()[0] = true;
		}
	}
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_boot1_CLASS_DEFINE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION = NULL;
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_boot3_CLASS_INITIALISE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION = new class WriteEnableForThreadsAt_SIMULATION_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtSIMULATION::WriteEnableForThreadsAt_SIMULATION_Framework* CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_CLASS_get_ptr_Framework()
{
	return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION;
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_REG_boot1_DEFINE_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtSIMULATION::CLIB_WriteEnableForThreadsAt_SIMULATION::stat_REG_get_CLIBLaunchQueAtSIMULATION_isFlagINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}