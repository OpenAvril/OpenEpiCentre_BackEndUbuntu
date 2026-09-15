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
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer() {
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ) {
			CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(1) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_generate_Program() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_generate_Program()." << std::endl;

		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIBConcurrentServerIO_stat_CLASS_boot1_DEFINE_Framework();
		CLIBConcurrentServerIO_stat_CLASS_boot3_INITIALISE_Framework();
		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Global_and_Settings();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Global()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
		std::cout << "done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "started STRUCTS Generate." << std::endl;
		std::cout << "started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Input();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Input();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserInput();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserInput();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserInput();

		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_User_Output();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Output();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_STRUCT_UserOutput();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_STRUCT_UserOutput();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Output()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_STRUCT_UserOutput();

		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_User_Algorithm();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_REG_boot1_DEFINE_User_Algorithm();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_REG_boot3_INITIALISE_User_Algorithm();

		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Input();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Input();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input()->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Input();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input()->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input()->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());

		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Output();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Output();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output()->dyn_REG_boot1_DEFINE_OpenEpiCentre_STRUCT_Output();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output()->dyn_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Output();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output()->dyn_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Output(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());

		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_Concurrent();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_Concurrent();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent()->dyn_REG_boot1_DEFINE_Concurrent();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent()->dyn_REG_boot2_SUBSTANTIATE_Concurrent();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent()->dyn_REG_boot3_INITIALISE_Concurrent(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_create_CLIB_OpenEpiCentre_Framework_Architecture();
		std::cout << "started Architecture Registers - DEFINE" << std::endl;
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - DEFINE." << std::endl;
		std::cout << "started Architecture Registers - SUBSTANTIATE." << std::endl;
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - SUBSTANTIATE." << std::endl;
		std::cout << "started Architecture Registers - INITIALISE." << std::endl;
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(), CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Concurrent());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(), CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(), CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Output());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - INITIALISE." << std::endl;
		std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATE." << std::endl;
		CLIBConcurrentServerIO_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
		CLIBConcurrentServerIO_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
		CLIBConcurrentServerIO_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
		CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Program - INSTANTIATE." << std::endl;

		std::cout << " " << std::endl;
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ _ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "__ / __\\_ \\@  @/ __/___\\___" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|      MIT CLIBOpenEpiCentre     |" << std::endl;
		std::cout << "|__________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_generate_Program()." << std::endl;
		return (void*)CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework();
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_get_FLAG_isPGM_INSTANTIATED() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_get_FLAG_isPGM_INSTANTIATED()." << std::endl;
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			std::cout << "thread ? :: " << " entered LIB :: <= CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED() = PRIMED." << std::endl;
			*temp = CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
		}
		else {
			std::cout << "thread ? :: " << " entered LIB :: <= CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED() = PRIMING." << std::endl;
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(2) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_get_FLAG_isPGM_INSTANTIATED()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_select_set_Intput_Subset(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_select_set_Intput_Subset()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Input_Subset(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(), CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(3) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_select_set_Intput_Subset()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_terminate_Program() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_terminate_Program()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
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
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(4) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_terminate_Program()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_pop_From_Stack_Of_Output() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_pop_From_Stack_Of_Output()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(5) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_pop_From_Stack_Of_Output()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_push_To_STACK_Of_Input()	{
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_push_To_STACK_Of_Input()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(6) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_app_FUNCT_push_To_STACK_Of_Input()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_End(0);
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(7) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			std::cout << "thread ? :: " << " entered LIB :: <= CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start() = PRIMED." << std::endl;
			CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_Start(0);
		}
		else {
			std::cout << "thread ? :: " << " entered LIB :: <= CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start() = PRIMING." << std::endl;
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(8) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_End(0);
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(9) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start()	{
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_Start(0);
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(10) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start()." << std::endl;
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive()." << std::endl;
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(11) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend()	{
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend()." << std::endl;
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(12) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre()." << std::endl;
		bool* temp = nullptr;
		temp = new bool();
		*temp = true;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(13) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbbool_to_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value()." << std::endl;
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objOutput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise0->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(14) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value()." << std::endl;
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objOutput_praise1= reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise1 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise1->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(15) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value()." << std::endl;
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objOutput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise2 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise2->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(16) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value()." << std::endl;
		double* temp = nullptr;
		temp = new double();
		*temp = DBL_MAX;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objOutput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise3*>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objOutput_praise3->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(17) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_MetaData_PraiseEventId() {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_MetaData_PraiseEventId()." << std::endl;
		unsigned long long* temp = nullptr;
		temp = new unsigned long long ();
		*temp = ULLONG_MAX;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			*temp = CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Output_at_ItemSideToREAD_For_doubleBufferOutput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Output_praiseEventId();
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(18) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_get_MetaData_PraiseEventId()." << std::endl;
		return CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_A(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_A()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(19) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_A()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_B(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_B()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(20) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_B()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_A(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_A()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(21) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_A()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_B(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_B()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			 objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(22) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_B()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_A(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_A()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(23) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_A()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_B(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_B()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(24) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_B()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_A(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_A()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objInput_praise3= reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(25) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_A()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_B(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_B()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			objInput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3 *>(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(bytes));
		}
		else {
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(26) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_B()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId(unsigned char* bytes) {
		std::cout << "thread ? :: " << " entered LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId()." << std::endl;
		if (!CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0)) {
			std::cout << "thread ? :: " << "<= CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId() = PRIMED." << std::endl;
			CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->dyn_REG_set_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbunsignedLongLong(bytes));
		}
		else {
			std::cout << "thread ? :: " << "<= CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId() = PRIMING." << std::endl;
			CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(27) = !CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) ;
			CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		std::cout << "thread ? :: " << " exiting LIB :: CLIBOpenEpiCentre : CLIBConcurrentServerIO : CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId()." << std::endl;
	}
	// private.
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED() {
		CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) = false;
		for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()); memberFunctionId++) {
			if (CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(memberFunctionId)) {
				CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(0) = CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(memberFunctionId);
				break;
			}
		}
		std::cout << "thread ? :: " << " TEST :: <= ";
		for (int index = 0; index < sizeof(*CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()); index++) {
			std::cout << CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->at(index);
		}
		std::cout<< std::endl;

	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_CLASS_boot1_DEFINE_Framework()
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_CLASS_boot3_INITIALISE_Framework()
	{
		stat_CLASS_CLIB_OpenEpiCentre_Framework = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework();
		while (CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework() == nullptr) {}
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework() {
		return stat_CLASS_CLIB_OpenEpiCentre_Framework;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = nullptr;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED()
	{
		stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED = new std::array<bool, 28>();
		for (int index = 0; index < sizeof(*CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()); index++) {
			auto temp = CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->begin();
			std::advance(temp, index);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED() {
		for (int index = 0; index < sizeof(*CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()); index++) {
			auto temp = CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED()->begin();
			std::advance(temp, index);
			*temp = true;
		}
	}
	std::array<bool, 28>* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED() {
		return stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED;
	}