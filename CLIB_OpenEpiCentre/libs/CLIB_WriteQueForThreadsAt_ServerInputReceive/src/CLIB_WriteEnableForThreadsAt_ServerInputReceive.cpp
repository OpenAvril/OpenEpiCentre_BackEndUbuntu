#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerInputReceive_Global.h"
	CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerInputReceive;
	bool* CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
void* CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_boot1_CLASS_DEFINE_Framework();
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerInputReceive_Framework(CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive_Framework(CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive_Framework(CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED();
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED();
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED();
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive_Framework(CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework());
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
	return (void*)CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework();
}
unsigned char* CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global::stat_CONVERT_bool_to_ByteArray(CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[0]);
	}
	else {
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[1] = false;
		return CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_terminate_Program()
{
	if (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[2] == false) {
		delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerInputReceive;
		while (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework() != nullptr) {}
	}
	else {
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_write_End(unsigned char* bytes)
{
	if (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[3] == false) {
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__app_FUNCT_write_Start(unsigned char* bytes)
{
	if (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[4] == false) {
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[4] = false;
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerInputReceive); memberFunctionId++)
	{
		if (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()[0] = true;
		}
	}
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_boot1_CLASS_DEFINE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerInputReceive = NULL;
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_boot3_CLASS_INITIALISE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerInputReceive = new class WriteEnableForThreadsAt_ServerInputReceive_Framework();
	while (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtServerInputReceive::WriteEnableForThreadsAt_ServerInputReceive_Framework* CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_CLASS_get_ptr_Framework()
{
	return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerInputReceive;
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()
{
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()
{
	CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()); index++)
	{
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()); index++)
	{
		CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_get_CLIBLaunchQueAtServerInputReceive_isFlagINSTANTIATED()
{
	return CLIB_WriteEnableForThreadsAt_ServerInputReceive__stat_REG_flag_isMemberFunctionINSTANTIATED;
}