#include "../include/CLIB_OpenEpiCentre.h"
#include "../include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../include/engine/CLIB_OpenEpiCentre_Global.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT_Input.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT_Output.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.h"
#include "../libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/include/CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode.h"
#include "../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include <cfloat>
#include <cstdint>
#include <iostream>
	static CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	static std::array<bool, 28>* stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise0* objInput_praise0 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise1* objInput_praise1 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise2* objInput_praise2 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Input_praise3* objInput_praise3 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise0* objOutput_praise0 =	nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise1* objOutput_praise1 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise2* objOutput_praise2 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Output_praise3* objOutput_praise3 = nullptr;
// public
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(uint8_t threadId) {
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(1) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
	}
	void* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_generate_Program(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_generate_Program(threadId)." << std::endl;

		std::cout << "thread "  << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(threadId);
		std::cout << "thread "  << threadId << " :: started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global(threadId);
		std::cout << "thread "  << threadId << " :: done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "thread "  << threadId << " :: started STRUCTS Generate." << std::endl;
		std::cout << "thread "  << threadId << " :: started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserInput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserInput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserInput(threadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput(threadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)->dyn_REG_boot1_DEFINE_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(threadId)->dyn_REG_boot3_INITIALISE_User_Algorithm(threadId);

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId)->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId)->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));

		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)->dyn_REG_boot1_DEFINE_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)->dyn_REG_boot2_SUBSTANTIATE_Concurrent(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId)->dyn_REG_boot3_INITIALISE_Concurrent(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		std::cout << "thread "  << threadId << " :: done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture(threadId);
		std::cout << "thread "  << threadId << " :: started Architecture Registers - DEFINE" << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Algorithms(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		std::cout << "thread "  << threadId << " :: done Architecture Registers - DEFINE." << std::endl;
		std::cout << "thread "  << threadId << " :: started Architecture Registers - SUBSTANTIATE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Algorithms(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		std::cout << "thread "  << threadId << " :: done Architecture Registers - SUBSTANTIATE." << std::endl;
		std::cout << "thread "  << threadId << " :: started Architecture Registers - INITIALISE." << std::endl;
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Algorithms(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(threadId), CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		std::cout << "thread "  << threadId << " :: done Architecture Registers - INITIALISE." << std::endl;
		std::cout << "thread "  << threadId << " :: done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "thread "  << threadId << " :: started Program - INSTANTIATE." << std::endl;
		CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(threadId);
		CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(threadId);
		CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(threadId);
		CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		std::cout << "thread "  << threadId << " :: done Program - INSTANTIATE." << std::endl;

		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|        MIT OpenEpicentre .dll      |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_generate_Program(threadId)." << std::endl;
		return (void*)CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
		CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(Thread_At_OpenEpiCentre_ConditionCode::IO)));
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			std::cout << "thread "  << threadId << " :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId) = PRIMED." << std::endl;
			*temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
		}
		else {
			std::cout << "thread "  << threadId << " :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId) = PRIMING." << std::endl;
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(2) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
		CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(Thread_At_OpenEpiCentre_ConditionCode::IO)));
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_select_set_Intput_Subset(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_select_set_Intput_Subset(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId), CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(3) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_select_set_Intput_Subset(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			delete stat_CLASS_CLIB_OpenEpiCentre_Framework;
			delete stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED;
			delete objInput_praise0;
			delete objInput_praise1;
			delete objInput_praise2;
			delete objInput_praise3;
			delete objOutput_praise0;
			delete objOutput_praise1;
			delete objOutput_praise2;
			delete objOutput_praise3;
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(4) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_pop_From_Stack_Of_Output(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_pop_From_Stack_Of_Output(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(5) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_pop_From_Stack_Of_Output(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_push_To_STACK_Of_Input(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_push_To_STACK_Of_Input(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(6) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_app_FUNCT_push_To_STACK_Of_Input(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_End(0);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(7) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			std::cout << "thread "  << threadId << " :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(threadId) = PRIMED." << std::endl;
			CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_Start(0);
		}
		else {
			std::cout << "thread "  << threadId << " :: entered LIB :: <= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(threadId) = PRIMING." << std::endl;
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(8) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_End(0);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(9) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_Start(0);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(10) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start(threadId)." << std::endl;
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(threadId)." << std::endl;
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(11) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(uint8_t threadId)	{
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(threadId)." << std::endl;
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control(threadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(12) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(threadId)." << std::endl;
		bool* temp = nullptr;
		temp = new bool(threadId);
		*temp = true;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Execute(threadId)->dyn_CLASS_get_ptr_Execute_Control(threadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(13) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(threadId)." << std::endl;
		double* temp = nullptr;
		temp = new double(threadId);
		*temp = DBL_MAX;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objOutput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			*temp = objOutput_praise0->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(14) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value(threadId)." << std::endl;
		double* temp = nullptr;
		temp = new double(threadId);
		*temp = DBL_MAX;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objOutput_praise1= reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise1 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			*temp = objOutput_praise1->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(15) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value(threadId)." << std::endl;
		double* temp = nullptr;
		temp = new double(threadId);
		*temp = DBL_MAX;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objOutput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise2 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			*temp = objOutput_praise2->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(16) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(threadId)." << std::endl;
		double* temp = nullptr;
		temp = new double(threadId);
		*temp = DBL_MAX;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objOutput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise3*>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			*temp = objOutput_praise3->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(17) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(uint8_t threadId) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(threadId)." << std::endl;
		unsigned long long* temp = nullptr;
		temp = new unsigned long long (threadId);
		*temp = ULLONG_MAX;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			*temp = CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId(threadId);
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(18) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(threadId)." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_A(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_A(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(19) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_A(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_B(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_B(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(20) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_B(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_A(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_A(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(21) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_A(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_B(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_B(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			 objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(22) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_B(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_A(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_A(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(23) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_A(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_B(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_B(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(24) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_B(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_A(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_A(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objInput_praise3= reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(25) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_A(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_B(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_B(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			objInput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3 *>(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(26) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_B(threadId)." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(uint8_t threadId, unsigned char* bytes) {
		std::cout << "thread "  << threadId << " :: entered LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId)." << std::endl;
		if (!CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0)) {
			std::cout << "thread "  << threadId << " ::<= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId) = PRIMED." << std::endl;
			CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(Thread_At_OpenEpiCentre_ConditionCode::IO)));
			CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId)->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(threadId)->dyn_CLASS_get_ptr_Data(threadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId))->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(bytes));
			CLIBWriteQueAtOpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode::CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(Thread_At_OpenEpiCentre_ConditionCode::IO)));
		}
		else {
			std::cout << "thread "  << threadId << " ::<= CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId) = PRIMING." << std::endl;
			CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(27) = !CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) ;
			CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
		}
		std::cout << "thread "  << threadId << " :: exiting LIB :: CLIBOpenEpiCentre : CLIB_OpenEpiCentre : CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId)." << std::endl;
	}
	// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
		CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) = false;
		for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); memberFunctionId++) {
			if (CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(memberFunctionId)) {
				CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(0) = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(memberFunctionId);
				break;
			}
		}
		std::cout << "thread "  << threadId << " :: TEST :: <= ";
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); index++) {
			std::cout << CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->at(index);
		}
		std::cout<< std::endl;

	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(uint8_t threadId)
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(uint8_t threadId)
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework(threadId);
		while (CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(threadId) == nullptr) {}
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(uint8_t threadId) {
		return stat_CLASS_CLIB_OpenEpiCentre_Framework;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId)
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId)
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = new std::array<bool, 28>(threadId);
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); index++) {
			auto temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->begin(threadId);
			std::advance(temp, index);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId) {
		for (int index = 0; index < sizeof(*CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)); index++) {
			auto temp = CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(threadId)->begin(threadId);
			std::advance(temp, index);
			*temp = true;
		}
	}
	std::array<bool, 28>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(uint8_t threadId) {
		return stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED;
	}