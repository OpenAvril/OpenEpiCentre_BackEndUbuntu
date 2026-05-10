
#include "CLIB_OpenEpiCentre.h"
#include "engine/Algorithms.h"
#include "engine/Data.h"
#include "engine/Data_Control.h"
#include "engine/Framework_Server.h"
#include "engine/Global.h"
#include "engine/Server.h"
#include "structs/Concurrent.h"
#include "structs/Input.h"
#include "structs/Input_Control.h"
#include "structs/Output.h"
#include "structs/Output_Control.h"
#include "structs/User_Algorithm.h"
#include "structs/User_Input.h"
#include "structs/User_Output.h"
#include <cstdint>
#include <iostream>
class CLIBOpenEpiCentre::Framework_Server* _CLASS_ptr_Framework_Server;
	bool* _stat_REG_get_flag_isMemberFunctionINSTANTIATED;
// public.
	void CLIBOpenEpiCentre::ConcurrentServerIO::app_FUNCT_flip_Input_DoubleBuffer()
	{
		if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
			stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_flip_Input_DoubleBuffer();
		}
		else {
			stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
			stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
		}
	}
void* CLIBOpenEpiCentre::ConcurrentServerIO::app_FUNCT_generate_Program()
{
	std::cout << "entered app_FUNCT_generate_Program()." << std::endl;

	std::cout << "started CLASS(s) - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_CLASS_boot1_DEFINE_Framework();
	stat_CLASS_boot3_INITIALISE_Framework();
	std::cout << "done CLASS(s) - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started STRUCT(s) - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_CLASS_get_ptr_Framework_Server()->stat_STRUCT_boot0_DECLARE();
	stat_CLASS_get_ptr_Framework_Server()->stat_STRUCT_boot1_DEFINE();
	stat_CLASS_get_ptr_Framework_Server()->stat_STRUCT_boot3_INITIALISE();

	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Input()->dyn_REG_boot1_DEFINE_User_Input();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Input()->dyn_REG_boot2_SUBSTANTIATE_User_Input();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Input()->dyn_REG_boot3_INITIALISE_User_Input();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Input()->dyn_REG_boot4_INSTANTIATE_User_Input();

	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Output()->dyn_REG_boot1_DEFINE_User_Output();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Output()->dyn_REG_boot2_SUBSTANTIATE_User_Output();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Output()->dyn_REG_boot3_INITIALISE_User_Output();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Output()->dyn_REG_boot4_INSTANTIATE_User_Output();

	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot1_DEFINE_User_Algorithm();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot3_INITIALISE_User_Algorithm();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot4_INSTANTIATE_User_Algorithm();

	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Input()->dyn_REG_boot1_DEFINE_Input();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Input()->dyn_REG_boot2_SUBSTANTIATE_Input();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Input()->dyn_REG_boot3_INITIALISE_Input(stat_CLASS_get_ptr_Framework_Server());
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Input()->dyn_REG_boot4_INSTANTIATE_Input();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Input()->dyn_CLASS_get_ptr_Input_Control()->app_select_And_Set_Input_Subset(stat_CLASS_get_ptr_Framework_Server(), (uint8_t)(0));

	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Output()->dyn_REG_boot1_DEFINE_Output();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Output()->dyn_REG_boot2_SUBSTANTIATE_Output();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Output()->dyn_REG_boot3_INITIALISE_Output(stat_CLASS_get_ptr_Framework_Server());
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Output()->dyn_REG_boot4_INSTANTIATE_Output();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Output()->dyn_CLASS_get_ptr_Output_Control()->app_select_And_Set_Output_Subset(stat_CLASS_get_ptr_Framework_Server(), (uint8_t)(0));

	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot1_DEFINE_Concurrent();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot2_SUBSTANTIATE_Concurrent();
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot3_INITIALISE_Concurrent(stat_CLASS_get_ptr_Framework_Server());
	stat_CLASS_get_ptr_Framework_Server()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot4_INSTANTIATE_Concurrent();
	for (uint8_t concurrentThreadId = 0; concurrentThreadId < (stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1); concurrentThreadId++)
	{
		stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_CLASS_get_ptr_Concurrent_Control()->app_selectset_Algorithm_Scubset(stat_CLASS_get_ptr_Framework_Server(), (uint8_t)(0), concurrentThreadId);
	}
	std::cout << "done STRUCT(s) - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework_Server()->dyn_REG_boot1_DEFINE_Framework_Server(stat_CLASS_get_ptr_Framework_Server());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;

	stat_CLASS_get_ptr_Framework_Server()->dyn_REG_boot2_SUBSTANTIATE_Framework_Server(stat_CLASS_get_ptr_Framework_Server());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework_Server()->dyn_REG_boot3_INITIALISE_Framework_Server(stat_CLASS_get_ptr_Framework_Server());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATE." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework_Server()->dyn_PGM_boot4_INSTANTIATE_Framework_Server(stat_CLASS_get_ptr_Framework_Server());
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
	return (void*)stat_CLASS_get_ptr_Framework_Server();
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(true);
}
void CLIBOpenEpiCentre::ConcurrentServerIO::app_FUNCT_select_set_Intput_Subset(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Input_Control()->app_select_And_Set_Input_Subset(stat_CLASS_get_ptr_Framework_Server(), CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		delete _CLASS_ptr_Framework_Server;
		while (stat_CLASS_get_ptr_Framework_Server() != nullptr) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::app_FUNCT_pop_From_Stack_Of_Output()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] == false) {
		stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Output(stat_CLASS_get_ptr_Framework_Server();
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[5] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::app_FUNCT_push_To_STACK_Of_Input()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] == false) {
		stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Input(stat_CLASS_get_ptr_Framework_Server();
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[6] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void* CLIBOpenEpiCentre::ConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerInputReveive()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] == false) {
		return stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction();
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[7] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return (void*)(nullptr);
}
void* CLIBOpenEpiCentre::ConcurrentServerIO::dyn_PGM_get_program_WriteEnableStack_ServerOutputReceive()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] == false) {
		return stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputReceive();
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[8] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return (void*)(nullptr);
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_Server_InputSend()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] == false) {
		return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction());
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[9] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(true);

}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::dyn_REG_get_flag_isStackLoaded_Server_OutputSend()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] == false) {
		return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend());
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[10] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(true);
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::dyn_REG_get_flag_IsInitialised_CLIBOpenEpiCentre()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[11] == false) {
		return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised());
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[11] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_bool_to_ByteArray(true);
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_get_Item_Output_praise0_Value()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[14] == false) {
		CLIBOpenEpiCentre::Output_praise0* objOutput_praise0 = (CLIBOpenEpiCentre::Output_praise0*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
		return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(objOutput_praise0->dyn_REG_get_output_Value());
		delete objOutput_praise0;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[14] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(DBL_MAX);
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_get_Item_Output_praise1_Value()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[17] == false) {
		CLIBOpenEpiCentre::Output_praise1* objOutput_praise1 = (CLIBOpenEpiCentre::Output_praise1*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
		return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(objOutput_praise1->dyn_REG_get_output_Value());
		delete objOutput_praise1;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[17] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(DBL_MAX);
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_get_Item_Output_praise2_Value()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[20] == false) {
		CLIBOpenEpiCentre::Output_praise2* objOutput_praise2 = (CLIBOpenEpiCentre::Output_praise2*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
		return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(objOutput_praise2->dyn_REG_get_output_Value());
		delete objOutput_praise2;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[20] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(DBL_MAX);
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_get_Item_Output_praise3_Value()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[25] == false) {
		CLIBOpenEpiCentre::Output_praise3* objOutput_praise3 = (CLIBOpenEpiCentre::Output_praise3*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset();
		return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(objOutput_praise3->dyn_REG_get_output_Value());
		delete objOutput_praise3;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[25] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_Double_to_ByteArray(DBL_MAX);
}
unsigned char* CLIBOpenEpiCentre::ConcurrentServerIO::io_RPRAISE_get_MetaData_PraiseEventId()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[12] == false) {
		return CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Output_praiseEventId());
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[12] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
	return CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(uint8_t(UINT8_MAX));
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise0_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[15] == false) {
		CLIBOpenEpiCentre::Input_praise0* objInput_praise0 = (CLIBOpenEpiCentre::Input_praise0*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server();
		objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise0;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[15] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise0_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[16] == false) {
		CLIBOpenEpiCentre::Input_praise0* objInput_praise0 = (CLIBOpenEpiCentre::Input_praise0*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Input_praiseEventId();
		objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise0;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[16] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise1_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[18] == false) {
		CLIBOpenEpiCentre::Input_praise1* objInput_praise1 = (CLIBOpenEpiCentre::Input_praise1*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server();
		objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise1;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[18] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise1_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[19] == false) {
		CLIBOpenEpiCentre::Input_praise1* objInput_praise1 = (CLIBOpenEpiCentre::Input_praise1*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Input_praiseEventId();
		objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise1;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[19] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise2_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[23] == false) {
		CLIBOpenEpiCentre::Input_praise2* objInput_praise2 = (CLIBOpenEpiCentre::Input_praise2*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server();
		objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise2;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[23] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise2_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[24] == false) {
		CLIBOpenEpiCentre::Input_praise2* objInput_praise2 = (CLIBOpenEpiCentre::Input_praise2*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Input_praiseEventId();
		objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise2;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[24] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise3_Value_A(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[26] == false) {
		CLIBOpenEpiCentre::Input_praise3* objInput_praise3 = (CLIBOpenEpiCentre::Input_praise3*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server();
		objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise3;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[26] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_Item_Input_praise3_Value_B(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[27] == false) {
		CLIBOpenEpiCentre::Input_praise3* objInput_praise3 = (CLIBOpenEpiCentre::Input_praise3*)stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_get_ptr_Input_praiseEventId();
		objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_Float(bytes));
		delete objInput_praise3;
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[27] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::io_PRAISE_set_MetaData_PraiseEventId(unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[13] == false) {
		stat_CLASS_get_ptr_Framework_Server()->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(stat_CLASS_get_ptr_Framework_Server()->dyn_REG_set_ptr_Input_praiseEventId(CLIBOpenEpiCentre::Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[13] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();
	}
}
// private.
void CLIBOpenEpiCentre::ConcurrentServerIO::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); memberFunctionId++)
	{
		if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = true;
		}
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::stat_CLASS_boot1_DEFINE_Framework()
{
	_CLASS_ptr_Framework_Server = nullptr;
}
void CLIBOpenEpiCentre::ConcurrentServerIO::stat_CLASS_boot3_INITIALISE_Framework()
{
	_CLASS_ptr_Framework_Server = new class CLIBOpenEpiCentre::Framework_Server();
	while (stat_CLASS_get_ptr_Framework_Server() == nullptr) {}
}
CLIBOpenEpiCentre::Framework_Server* CLIBOpenEpiCentre::ConcurrentServerIO::stat_CLASS_get_ptr_Framework_Server()
{
	return _CLASS_ptr_Framework_Server;
}
void CLIBOpenEpiCentre::ConcurrentServerIO::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_get_flag_isMemberFunctionINSTANTIATED = nullptr;
}
void CLIBOpenEpiCentre::ConcurrentServerIO::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_get_flag_isMemberFunctionINSTANTIATED = new bool[28]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == nullptr) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[index] = true;
	}
}
void CLIBOpenEpiCentre::ConcurrentServerIO::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[index] = true;
	}
}
bool* CLIBOpenEpiCentre::ConcurrentServerIO::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_get_flag_isMemberFunctionINSTANTIATED;
}