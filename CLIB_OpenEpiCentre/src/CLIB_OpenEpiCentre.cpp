#include "../include/CLIB_OpenEpiCentre.h"

#include <cfloat>

#include "../include/engine/CLIB_OpenEpiCentre__Framework.h"
#include "../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../include/engine/CLIB_OpenEpiCentre__Global.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__User_Algorithm.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__User_Input.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__User_Output.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.h"
#include "../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include <cstdint>
#include <iostream>
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* _stat_CLASS_CLIB_OpenEpiCentre_Framework;
	std::array<bool, 30>* CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise0* objInput_praise0 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise1* objInput_praise1 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise2* objInput_praise2 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input_praise3* objInput_praise3 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output_praise0* objOutput_praise0 =	nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output_praise1* objOutput_praise1 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output_praise2* objOutput_praise2 = nullptr;
	static struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output_praise3* objOutput_praise3 = nullptr;
// public
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_flip_Input_DoubleBuffer() {
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_flip_Input_DoubleBuffer();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(1) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_generate_Program() {
		std::cout << "entered app_FUNCT_generate_Program()." << std::endl;

		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_boot1_DEFINE_Framework();
		CLIBConcurrentServerIO__stat_CLASS_boot3_INITIALISE_Framework();
		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
		std::cout << "done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "started STRUCTS Generate." << std::endl;
		std::cout << "started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Input()->dyn_REG_boot1_DEFINE_User_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Input()->dyn_REG_boot2_SUBSTANTIATE_User_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Input()->dyn_REG_boot3_INITIALISE_User_Input();

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Output()->dyn_REG_boot1_DEFINE_User_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Output()->dyn_REG_boot2_SUBSTANTIATE_User_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Output()->dyn_REG_boot3_INITIALISE_User_Output();

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot1_DEFINE_User_Algorithm();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot3_INITIALISE_User_Algorithm();

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Input()->dyn_REG_boot1_DEFINE_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Input()->dyn_REG_boot2_SUBSTANTIATE_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Input()->dyn_REG_boot3_INITIALISE_Input(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Output()->dyn_REG_boot1_DEFINE_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Output()->dyn_REG_boot2_SUBSTANTIATE_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Output()->dyn_REG_boot3_INITIALISE_Output(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot1_DEFINE_Concurrent();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot2_SUBSTANTIATE_Concurrent();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot3_INITIALISE_Concurrent(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_create_Architecture();
		std::cout << "started Architecture Registers - DEFINE" << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - DEFINE." << std::endl;
		std::cout << "started Architecture Registers - SUBSTANTIATE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - SUBSTANTIATE." << std::endl;
		std::cout << "started Architecture Registers - INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - INITIALISE." << std::endl;
		std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATE." << std::endl;
		CLIBConcurrentServerIO__stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
		CLIBConcurrentServerIO__stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
		CLIBConcurrentServerIO__stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Program - INSTANTIATE." << std::endl;

		std::cout << " " << std::endl;
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|      MIT CLIBOpenEpiCentre     |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		std::cout << " " << std::endl;
		return (void*)CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework();
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_get_FLAG_isPGM_INSTANTIATED() {
		std::cout << "entered CLIBConcurrentServerIO__app_FUNCT_get_FLAG_isPGM_INSTANTIATED()" << std::endl;
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(2) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "exiting CLIBConcurrentServerIO__app_FUNCT_get_FLAG_isPGM_INSTANTIATED()" << std::endl;
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbbool_to_MsbByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_select_set_Intput_Subset(unsigned char* bytes) {
		std::cout << "entered CLIBConcurrentServerIO__app_FUNCT_select_set_Intput_Subset()" << std::endl;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->app_select_And_Set_Input_Subset(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(), CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(3) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "entered CLIBConcurrentServerIO__app_FUNCT_select_set_Intput_Subset()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_terminate_Program() {
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			delete _stat_CLASS_CLIB_OpenEpiCentre_Framework;
			delete CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED;;
			while (CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework() != nullptr) {}
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(4) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_pop_From_Stack_Of_Output() {
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_pop_From_Stack_Of_Output(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(5) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_push_To_STACK_Of_Input()	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_push_To_STACK_Of_Input(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(6) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerInputReceive_Injection__write_End() {
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_End(0);
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(7) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerInputReceive_Injection__write_Start() {
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive__App_FUNCT_write_Start(0);
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(8) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction__write_End() {
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_End(0);
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(9) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction__write_Start()	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend__App_FUNCT_write_Start(0);
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(10) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive() {
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(11) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend()	{
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(12) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre() {
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_is_SystemInitialised();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(13) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise0_Value() {
		std::cout << "test point :: MEGA : ALPHA." << std::endl;
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		std::cout << "test point :: MEGA : BRAVO." << std::endl;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			std::cout << "test point :: MEGA : CHARLIE PRIMED." << std::endl;
			objOutput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise0*>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise0->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise0_Value();
		}
		else {
			std::cout << "test point :: MEGA : CHARLIE PRIMING." << std::endl;
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(20) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "test point :: MEGA : CHARLIE." << std::endl;
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise1_Value() {
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objOutput_praise1= reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise1 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise1->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise1_Value();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(17) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise2_Value() {
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objOutput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise2 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise2->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise2_Value();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(26) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise3_Value() {
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objOutput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise3*>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise3->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise3_Value();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(29) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_MetaData_PraiseEventId() {
		unsigned long long* temp = nullptr;
		temp = new unsigned long long ();
		*temp = ULLONG_MAX;
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(15) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__unsignedLongLong_to_ByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_A(unsigned char* bytes) {
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(16) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_B(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(17) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_A(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(18) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_B(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			 objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(19) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_A(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(24) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_B(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(25) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_A(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objInput_praise3= reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(27) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_B(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			objInput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(28) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_MetaData_PraiseEventId(unsigned char* bytes)
	{
		if (!CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0)) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->dyn_REG_set_ptr_Input_praiseEventId(CLIB_OpenEpiCentre__Global::stat_CONVERT_CLIB_OpenEpiCentre_Global__MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(14) = !CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	// private.
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED() {
		CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0);
		for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()); memberFunctionId++) {
			if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(memberFunctionId)) {
				CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(0) = CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->at(memberFunctionId);
				break;
			}
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_CLASS_boot1_DEFINE_Framework()
	{
		_stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_CLASS_boot3_INITIALISE_Framework()
	{
		_stat_CLASS_CLIB_OpenEpiCentre_Framework = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework();
		while (CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework() == nullptr) {}
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()
	{
		return _stat_CLASS_CLIB_OpenEpiCentre_Framework;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()
	{
		CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED = nullptr;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()
	{
		CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED = new std::array<bool, 30>();
		for (int index = 0; index < sizeof(*CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()); index++) {
			auto temp = CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->begin();
			std::advance(temp, index);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED() {
		for (int index = 0; index < sizeof(*CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()); index++) {
			auto temp = CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()->begin();
			std::advance(temp, index);
			*temp = true;
		}
	}
	std::array<bool, 30>* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED() {
		return CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED;
	}