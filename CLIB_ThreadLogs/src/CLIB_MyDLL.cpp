#include "../include/CLIB_ThreadLogs.h"
#include "../include/CLIB_ThreadLogs_Framework.h"
#include <array>
#include <cfloat>
#include <cstdint>
#include <iostream>
	static CLIB_ThreadLogs::CLIB_ThreadLogs_Framework* _stat_REG_CLIB_ThreadLogs_Framework;
	static std::array<bool, 4>* _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
// public.
	void* CLIB_ThreadLogs::CLIB_ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_generate_Program() {
		std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework();
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework();
		std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

		std::cout << "started Registers - DEFINE" << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework()->dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework();
		std::cout << "done Registers - DEFINE." << std::endl;

		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework()->dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework();
		std::cout << "done Registers - SUBSTANTIATE." << std::endl;

		std::cout << "started Registers - INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework()->dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework();
		std::cout << "done Registers - INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_CLIB_ThreadLogs_isFlagINSTANTIATED();
		stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_isFlagINSTANTIATED();
		stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_isFlagINSTANTIATED();
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework()->dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework();
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
		return (void*)stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework();
	}
	unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED()
	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED()." << std::endl;
		bool* result = nullptr;
		result = new bool();
		*result = true;
		if (!CLIB_ThreadLogs_stat_REG_get_CLIB_ThreadLogs_isFLAGINSTANTIATED()->at(0)) {
			*result = CLIB_ThreadLogs_stat_REG_get_CLIB_ThreadLogs_isFLAGINSTANTIATED()->at(0);
		}
		else {
			CLIB_ThreadLogs_stat_REG_get_CLIB_ThreadLogs_isFLAGINSTANTIATED()->at(1) = !CLIB_ThreadLogs_stat_REG_get_CLIB_ThreadLogs_isFLAGINSTANTIATED()->at(0);
			CLIB_ThreadLogs_stat_REG_get_CLIB_ThreadLogs_isFLAGINSTANTIATED();
		}
		std::cout << "thread "  << threadId << " ::  exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED()." << std::endl;
		return WriteEnableForThreadsAt_ServerInputReceive_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerInputReceive_MsbBoolean_To_MsbByteArray(*result);}
	void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program() {
		if (stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()[2] == false) {
			delete _stat_REG_CLIB_ThreadLogs_Framework;
			delete _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()[2] = false;
		}
	}
// private.
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED() {
	stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(_stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED); memberFunctionId++)
	{
		if (stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()[0] = true;
		}
	}
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework() {
	_stat_REG_CLIB_ThreadLogs_Framework = nullptr;
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
	_stat_REG_CLIB_ThreadLogs_Framework = new class CLIB_ThreadLogs::CLIB_ThreadLogs_Framework();
	while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework() == NULL) {}
}
CLIB_ThreadLogs::CLIB_ThreadLogs_Framework* CLIB_ThreadLogs::CLIB_ThreadLogs::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework() {
	return _stat_REG_CLIB_ThreadLogs_Framework;
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_boot1_DEFINE_CLIB_ThreadLogs_isFlagINSTANTIATED() {
	_stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED = NULL;
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_isFlagINSTANTIATED() {
	_stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();
	while (stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED() == nullptr) {}
	for (uint8_t index = 0; index < stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()->size(); index++)	{
		stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()->at(index) = true;
	}
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_isFlagINSTANTIATED() {
	for (uint8_t index = 0; index < stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()->size(); index++)	{
		stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED()->at(index) = true;
	}
}
std::array<bool, 4>*  CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_get_CLIB_ThreadLogs_isFlagINSTANTIATED() {
	return _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
}