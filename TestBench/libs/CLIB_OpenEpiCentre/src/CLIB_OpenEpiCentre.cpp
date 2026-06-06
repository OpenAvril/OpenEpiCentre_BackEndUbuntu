#include "../include/CLIB_OpenEpiCentre.h"
#include "../include/engine/CLIB_OpenEpiCentre_Framework_Server.h"
#include "../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../include/structs/Concurrent.h"
#include "../include/structs/Input.h"
#include "../include/structs/Output.h"
#include "../include/structs/User_Algorithm.h"
#include "../include/structs/User_Input.h"
#include "../include/structs/User_Output.h"
#include "../include/structs/praise_sets/Output_praise0.h"
#include "../include/structs/praise_sets/Input_praise0.h"
#include "../include/structs/praise_sets/Input_praise1.h"
#include "../include/structs/praise_sets/Input_praise2.h"
#include "../include/structs/praise_sets/Input_praise3.h"
#include "../include/structs/praise_sets/Output_praise1.h"
#include "../include/structs/praise_sets/Output_praise2.h"
#include "../include/structs/praise_sets/Output_praise3.h"
#include <cfloat>
#include <cstdint>
#include <iostream>
	CLIBOpenEpiCentre::Framework_App* _stat_CLASS_CLIB_OpenEpiCentre_Framework_Server;
	bool* _stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED;
// public.
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_flip_Input_DoubleBuffer()
	{
		if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[1] == false) {
			stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_flip_Input_DoubleBuffer();
		}
		else {
			stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[1] = false;
			stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
		}
	}
void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_generate_Program()
{
	std::cout << "entered app_FUNCT_generate_Program()." << std::endl;

	std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
	stat_CLASS_boot1_DEFINE_Framework();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_create_Architecture();
	std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

	std::cout << "started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
	std::cout << "done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

	std::cout << "started STRUCTS Generate." << std::endl;
	std::cout << "started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Input()->dyn_REG_boot1_DEFINE_User_Input();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Input()->dyn_REG_boot2_SUBSTANTIATE_User_Input();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Input()->dyn_REG_boot3_INITIALISE_User_Input();

	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Output()->dyn_REG_boot1_DEFINE_User_Output();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Output()->dyn_REG_boot2_SUBSTANTIATE_User_Output();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Output()->dyn_REG_boot3_INITIALISE_User_Output();

	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot1_DEFINE_User_Algorithm();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot3_INITIALISE_User_Algorithm();

	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Input()->dyn_REG_boot1_DEFINE_Input();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Input()->dyn_REG_boot2_SUBSTANTIATE_Input();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Input()->dyn_REG_boot3_INITIALISE_Input(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());

	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Output()->dyn_REG_boot1_DEFINE_Output();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Output()->dyn_REG_boot2_SUBSTANTIATE_Output();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Output()->dyn_REG_boot3_INITIALISE_Output(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());

	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot1_DEFINE_Concurrent();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot2_SUBSTANTIATE_Concurrent();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot3_INITIALISE_Concurrent(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());
	std::cout << "done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

	std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_create_Architecture();

	std::cout << "started Architecture Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework_App(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());
	std::cout << "done Architecture Registers - DEFINE." << std::endl;

	std::cout << "started Architecture Registers - SUBSTANTIATE." << std::endl;

	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework_App(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());
	std::cout << "done Architecture Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Architecture Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework_App(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());
	std::cout << "done Architecture Registers - INITIALISE." << std::endl;
	std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATE." << std::endl;
	stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
	stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
	stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework_App(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());
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
	return (void*)stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App();
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	bool* temp;
	temp = nullptr;
	*temp = true;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[2] == false) {
		*temp = stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[0];
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[2] = false;
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(temp);
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_select_set_Intput_Subset(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App())->app_select_And_Set_Input_Subset(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(), CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_Msbuint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[3] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[4] == false) {
		delete _stat_CLASS_CLIB_OpenEpiCentre_Framework_Server;
		delete _stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED;;
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App() != nullptr) {}
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_pop_From_Stack_Of_Output()
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[5] == false) {
		stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Output(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[5] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::app_FUNCT_push_To_STACK_Of_Input()
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[6] == false) {
		stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Input(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App());
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[6] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerInputReceive()
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[7] == false) {
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputReceive();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[7] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return (void*)(nullptr);
}
void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerOutputSend()
{
	void* temp;
	temp = nullptr;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[8] == false) {
		temp = stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputSend();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[8] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return (void*)temp;
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_ServerInputSend()
{
	bool* temp;
	*temp = true;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[9] == false) {
		*temp = stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[9] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(*temp);
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_ServerOutputSend()
{
	bool* temp;
	*temp = true;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[10] == false) {
		*temp = stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[10] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(*temp);
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::dyn_REG_get_flag_IsInitialised_CLIBOpenEpiCentre()
{
	bool* temp;
	temp = nullptr;
	*temp = true;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[11] == false) {
		*temp = stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[11] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(*temp);
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise0_Value()
{
	double* temp;
	temp = nullptr;
	*temp = DBL_MAX;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[14] == false) {
		auto* objOutput_praise0 = reinterpret_cast<Output_praise0 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->
			dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(
				stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		*temp = objOutput_praise0->dyn_REG_get_output_Value();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[14] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise1_Value()
{
	double* temp;
	temp = nullptr;
	*temp = DBL_MAX;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[17] == false) {
		auto* objOutput_praise1 = reinterpret_cast<Output_praise1 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		*temp = objOutput_praise1->dyn_REG_get_output_Value();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[17] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise2_Value()
{
	double* temp;
	temp = nullptr;
	*temp = DBL_MAX;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[20] == false) {
		auto* objOutput_praise2 = reinterpret_cast<Output_praise2 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->
			dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(
				stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		*temp = objOutput_praise2->dyn_REG_get_output_Value();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[20] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_Item_Output_praise3_Value()
{
	double* temp;
	temp = nullptr;
	*temp = DBL_MAX;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[25] == false) {
		auto* objOutput_praise3 = reinterpret_cast<Output_praise3 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->
			dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(
				stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		*temp = objOutput_praise3->dyn_REG_get_output_Value();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[25] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
}
unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_get_MetaData_PraiseEventId()
{
	uint8_t* temp;
	temp = nullptr;
	*temp = UINT8_MAX;
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[12] == false) {
		*temp = stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App())->dyn_REG_get_ptr_Output_praiseEventId();
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[12] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIB_OpenEpiCentre_Global::stat_CONVERT_uint8_t_to_ByteArray(*temp);
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise0_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[15] == false) {
		auto* objInput_praise0 = reinterpret_cast<Input_praise0 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[15] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise0_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[16] == false) {
		auto* objInput_praise0 = reinterpret_cast<Input_praise0 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->
			dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(
				stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[16] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise1_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[18] == false) {
		auto* objInput_praise1 = reinterpret_cast<Input_praise1 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->
			dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(
				stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[18] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise1_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[19] == false) {
		auto* objInput_praise1 = reinterpret_cast<Input_praise1 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[19] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise2_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[23] == false) {
		auto* objInput_praise2 = reinterpret_cast<Input_praise2 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[23] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise2_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[24] == false) {
		auto* objInput_praise2 = reinterpret_cast<Input_praise2 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[24] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise3_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[26] == false) {
		auto* objInput_praise3= reinterpret_cast<Input_praise3 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[26] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_Item_Input_praise3_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[27] == false) {
		auto* objInput_praise3 = reinterpret_cast<Input_praise3 *>(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()));
		objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[27] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::io_PRAISE_set_MetaData_PraiseEventId(unsigned char* bytes)
{
	if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[13] == false) {
		stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App())->dyn_REG_set_ptr_Input_praiseEventId(CLIB_OpenEpiCentre_Global::stat_CONVERT_MsbByteArray_To_Msbuint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[13] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
// private.
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()); memberFunctionId++)
	{
		if (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[0] = true;
		}
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_CLASS_boot1_DEFINE_Framework()
{
	_stat_CLASS_CLIB_OpenEpiCentre_Framework_Server = nullptr;
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_CLASS_boot3_INITIALISE_Framework()
{
	_stat_CLASS_CLIB_OpenEpiCentre_Framework_Server = new class CLIBOpenEpiCentre::Framework_App();
	while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App() == nullptr) {}
}
CLIBOpenEpiCentre::Framework_App* CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()
{
	return _stat_CLASS_CLIB_OpenEpiCentre_Framework_Server;
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFlagINSTANTIATED()
{
	_stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED = nullptr;
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFlagINSTANTIATED()
{
	_stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED = new bool[28]();
	while (stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED() == nullptr) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()); index++)
	{
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[index] = true;
	}
}
void CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFlagINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()); index++)
	{
		stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[index] = true;
	}
}
bool* CLIBOpenEpiCentre::CLIBConcurrentServerIO::stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()
{
	return _stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED;
}