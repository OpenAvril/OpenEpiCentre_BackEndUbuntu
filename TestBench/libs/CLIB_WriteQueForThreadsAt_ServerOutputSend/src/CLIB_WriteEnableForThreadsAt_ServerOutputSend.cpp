#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Global.h"
CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend;
	bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
void* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
	stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend_Framework(stat_CLASS_get_ptr_Framework());
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
unsigned char* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[1] = false;
		return CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_terminate_Program()
{
	if (stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[2] == false) {
		delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend;
		while (stat_CLASS_get_ptr_Framework() != nullptr) {}
	}
	else {
		stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_write_End(unsigned char* bytes)
{
	if (stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__app_FUNCT_write_Start(unsigned char* bytes)
{
	if (stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend); memberFunctionId++)
	{
		if (stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()[0] = true;
		}
	}
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_boot1_CLASS_DEFINE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend = NULL;
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_boot3_CLASS_INITIALISE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend = new class WriteEnableForThreadsAt_ServerOutputSend_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::stat_CLASS_get_ptr_Framework()
{
	return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ServerOutputSend;
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot1_DEFINE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__stat_REG_get_CLIBLaunchQueAtServerOutputSend_isFlagINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}