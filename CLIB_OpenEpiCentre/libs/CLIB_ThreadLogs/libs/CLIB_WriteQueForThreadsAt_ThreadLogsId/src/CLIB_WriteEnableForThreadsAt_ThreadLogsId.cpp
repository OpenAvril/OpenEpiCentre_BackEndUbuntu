#include "../include/CLIB_WriteEnableForThreadsAt_ThreadLogsId.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework_App.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework_App_Control.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework.h"
#include "../include/WriteEnableForThreadsAt_ThreadLogsId_Framework_Global.h"
#include <iostream>
#include <span>
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ThreadLogsId;
	std::array<bool, 5>* _stat_REG_FLAG_CLIB_WriteEnableForThreadsAt_ThreadLogsId_isMemberFunctionINSTANTIATED;
// public.
	void* CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program(uint8_t threadId)	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program(threadId)." << std::endl;

		std::cout << "thread " << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_boot1_DEFINE_Framework(threadId);
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_boot3_INITIALISE_Framework(threadId);
		std::cout << "thread " << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread " << threadId << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Global_and_Settings(threadId);
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId)->dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Global(threadId);
		std::cout << "thread " << threadId << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread " << threadId << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "thread " << threadId << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << threadId << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_create_WriteEnableForThreadsAt_ThreadLogsId_Architecture(threadId);
		std::cout << "thread " << threadId << " :: started Registers - DEFINE" << std::endl;
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ThreadLogsId_Framework_App_Control(threadId, CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId));
		std::cout << "thread " << threadId << " :: done Registers - DEFINE." << std::endl;
		std::cout << "thread " << threadId << " :: started Registers - SUBSTANTIATE." << std::endl;
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ThreadLogsId_Framework_App_Control(threadId,CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId));
		std::cout << "thread " << threadId << " :: done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread " << threadId << " :: started Registers - INITIALISE." << std::endl;
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ThreadLogsId_Framework_App_Control(threadId,CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId));
		std::cout << "thread " << threadId << " :: done Registers - INITIALISE." << std::endl;
		std::cout << "thread " << threadId << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread " << threadId << " :: started Program - INSTANTIATION." << std::endl;
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_boot1_DEFINE_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId);
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId);
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_boot3_INITIALISE_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId);
		std::cout << "thread " << threadId << " :: done Program - INSTANTIATION." << std::endl;

		std::cout << "thread " << threadId << " :: " << std::endl;
		std::cout << "thread " << threadId << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << threadId << " ::         ,     \\      /      ," << std::endl;
		std::cout << "thread " << threadId << " ::        / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "thread " << threadId << " ::       /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "thread " << threadId << " :: __ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "thread " << threadId << " :: |              |\\../|               |" << std::endl;
		std::cout << "thread " << threadId << " :: |               \\VV/                |" << std::endl;
		std::cout << "thread " << threadId << " :: |      Open Source MIT Package       |" << std::endl;
		std::cout << "thread " << threadId << " :: |        OpenAvril - WriteQue       |" << std::endl;
		std::cout << "thread " << threadId << " :: |__________________|" << std::endl;
		std::cout << "thread " << threadId << " :: |    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "thread " << threadId << " :: |  /    V          ))        V   \\  |" << std::endl;
		std::cout << "thread " << threadId << " :: |/                //               \\| " << std::endl;
		std::cout << "thread " << threadId << " :: `                 V                 '" << std::endl;
		std::cout << "thread " << threadId << " :: exiting LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_generate_Program(threadId)." << std::endl;
		return (void*)CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId);
	}
	unsigned char* CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId)	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
		bool* result = nullptr;
		result = new bool(threadId);
		*result = true;
		if (!CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0)) {
			*result = CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0);
		}
		else {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(1) = !CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0);
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId);
		}
		std::cout << "thread " << threadId << " :: exiting LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
		return WriteEnableForThreadsAt_ThreadLogsId_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ThreadLogsId_MsbBoolean_To_MsbByteArray(threadId, *result);
	}
	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_terminate_Program(uint8_t threadId)	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_terminate_Program(threadId)." << std::endl;
		if (!CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0)) {
			delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ThreadLogsId;
			while (CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId) != nullptr) {}
		}
		else {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(2) = !CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0);
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId);
		}
		std::cout << "thread " << threadId << " :: exiting LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_terminate_Program(threadId)." << std::endl;
	}

	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_End(uint8_t threadId, unsigned char* bytes)	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_End(threadId)." << std::endl;
		if (!CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0)) {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_APP_FUNCT_write_End(threadId, CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId), WriteEnableForThreadsAt_ThreadLogsId_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ThreadLogsId_MsbByteArray_To_Msbuint8_t(threadId, bytes));
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId, true);
		}
		else {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(3) = !CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0);
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId);
		}
		std::cout << "thread " << threadId << " :: exiting LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_End(threadId)." << std::endl;
	}
	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_Start(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_Start(threadId)." << std::endl;
		if (!CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0)) {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_APP_FUNCT_write_Start(threadId, CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId), WriteEnableForThreadsAt_ThreadLogsId_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ThreadLogsId_MsbByteArray_To_Msbuint8_t(threadId, bytes));
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App(threadId)->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ThreadLogsId_App_Control(threadId)->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ThreadLogsId_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId, true);
		}
		else {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(4) = !CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0);
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId);
		}
		std::cout << "thread " << threadId << " :: exiting LIB :: CLIBWriteQueAtThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId : CLIB_WriteEnableForThreadsAt_ThreadLogsId_App_FUNCT_write_Start(threadId)." << std::endl;
	}
	bool CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
		CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0) = false;
		for(int index = 1; index < 5; index++) {
			if (CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(index)) {
				CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0) = CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(index);
				break;
			}
		}
		return CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(0);
	}
	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_boot1_DEFINE_Framework(uint8_t threadId) {
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ThreadLogsId = nullptr;
	}
	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_boot3_INITIALISE_Framework(uint8_t threadId) {
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_ThreadLogsId = new class CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework(threadId);
		while (CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(threadId) == nullptr) {}
	}
	CLIBWriteQueAtThreadLogsId::WriteEnableForThreadsAt_ThreadLogsId_Framework* CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_CLASS_get_ptr_Framework(uint8_t threadId)	{
		return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_ThreadLogsId;
	}
	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_boot1_DEFINE_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(uint8_t threadId) {
		_stat_REG_FLAG_CLIB_WriteEnableForThreadsAt_ThreadLogsId_isMemberFunctionINSTANTIATED = nullptr;
	}
	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(uint8_t threadId) {
		_stat_REG_FLAG_CLIB_WriteEnableForThreadsAt_ThreadLogsId_isMemberFunctionINSTANTIATED = new std::array<bool, 5>();
		for (int index = 0; index < CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->size(); index++) {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(index) = true;
		}
	}
	void CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_boot3_INITIALISE_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(uint8_t threadId) {
		for (int index = 0; index < CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->size(); index++) {
			CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(threadId)->at(index) = true;
		}
	}
	std::array<bool, 5>* CLIBWriteQueAtThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId::CLIB_WriteEnableForThreadsAt_ThreadLogsId_stat_REG_get_CLIBLaunchQueAtThreadLogsId_isFLAGINSTANTIATED(uint8_t threadId) {
		return _stat_REG_FLAG_CLIB_WriteEnableForThreadsAt_ThreadLogsId_isMemberFunctionINSTANTIATED;
	}