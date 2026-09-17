#include "../include/CLIB_ThreadLogs.h"
#include "../include/CLIB_ThreadLogs_Framework.h"
#include <array>
#include <cstdint>
#include <iostream>
	static CLIB_ThreadLogs::CLIB_ThreadLogs_Framework* _stat_REG_CLIB_ThreadLogs_Framework;
	static std::array<bool, 4>* _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
// public.
	void* CLIB_ThreadLogs::CLIB_ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_generate_Program(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_generate_Program(threadId)." << std::endl;
		std::cout << "thread "  << threadId << " :: => started : Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId);
		std::cout << "thread "  << threadId << " :: <= done : Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

		std::cout << "thread "  << threadId << " :: => started : Registers - DEFINE." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId);
		std::cout << "thread "  << threadId << " :: <= done : Registers - DEFINE." << std::endl;

		std::cout << "thread "  << threadId << " :: => started : Registers - SUBSTANTIATE." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework(threadId);
		std::cout << "thread "  << threadId << " :: <= done : Registers - SUBSTANTIATE." << std::endl;

		std::cout << "thread "  << threadId << " :: => started : Registers - INITIALISE." << std::endl;
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId);
		std::cout << "thread "  << threadId << " :: <= done : Registers - INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: => started : Program - INSTANTIATION." << std::endl;
		stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId)->dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId);
		std::cout << "thread "  << threadId << " :: <= done : Program - INSTANTIATION." << std::endl;

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
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_generate_Program(threadId)." << std::endl;
		return (void*)stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId);
	}
	unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED(uint8_t threadId)
	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED(threadId)." << std::endl;
		bool* result = nullptr;
		result = new bool(threadId);
		*result = true;
		if (!stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0)) {
			*result = stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0);
		}
		else {
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(1) = !stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0);
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " ::  exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_get_flag_isPGM_INSTANTIATED(threadId)." << std::endl;
		return CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK_MsbBoolean_To_MsbByteArray(threadId, *result);
	}
	void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program(threadId)." << std::endl;
		if (!stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(2)) {
			delete _stat_REG_CLIB_ThreadLogs_Framework;
			delete _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
		}
		else {
			stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(2) = !stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(2);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_App_FUNCT_CLIB_ThreadLogs_terminate_Program(threadId)." << std::endl;
	}
// private.
	void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED(threadId)." << std::endl;
		stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0) = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < static_cast<uint8_t>(stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->size()); memberFunctionId++) {
			if (stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(memberFunctionId)) stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(0) = stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(memberFunctionId);
			break;
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_APP_FUNCT_CLIB_ThreadLogs_Calc_IsAllINSTANTIATED(threadId)." << std::endl;
	}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
	std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	_stat_REG_CLIB_ThreadLogs_Framework = nullptr;
	std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(uint8_t threadId) {
	std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
	_stat_REG_CLIB_ThreadLogs_Framework = new class CLIB_ThreadLogs::CLIB_ThreadLogs_Framework();
	while (stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(threadId) == nullptr) {}
	std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework(threadId)." << std::endl;
}
CLIB_ThreadLogs::CLIB_ThreadLogs_Framework* CLIB_ThreadLogs::CLIB_ThreadLogs::stat_CLASS_get_ptr_CLIB_ThreadLogs_Framework(uint8_t threadId) {
	return _stat_REG_CLIB_ThreadLogs_Framework;
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t threadId) {
	std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
	_stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED = nullptr;
	std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot1_DEFINE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t threadId) {
	std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
	_stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED = new std::array<bool, 4>();
	while (stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId) == nullptr) {}
	for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->size()); index++)	{
		stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(index) = true;
	}
	std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
}
void CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t threadId) {
	std::cout << "thread "  << threadId << " :: entered LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
	for (uint8_t index = 0; index < static_cast<uint8_t>(stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->size()); index++)	{
		stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)->at(index) = true;
	}
	std::cout << "thread "  << threadId << " :: exiting LIB :: CLIB_ThreadLogs : CLIB_ThreadLogs : stat_REG_boot3_INITIALISE_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(threadId)." << std::endl;
}
std::array<bool, 4>*  CLIB_ThreadLogs::CLIB_ThreadLogs::stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t threadId) {
	std::cout << "thread "  << threadId << " :: <= std::array<bool, 4>* : stat_REG_get_CLIB_ThreadLogs_array_Of_flag_isINSTANTIATED(uint8_t threadId) = " << _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED << std::endl;
	return _stat_REG_flag_CLIB_ThreadLogs_isMemberFunctionINSTANTIATED;
}