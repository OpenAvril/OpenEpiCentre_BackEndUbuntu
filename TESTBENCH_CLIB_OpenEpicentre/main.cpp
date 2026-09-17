#include <iostream>
#include "../CLIB_OpenEpiCentre/include/CLIB_OpenEpiCentre.h"
#include "../CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Global.h"
static void stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre(uint8_t threadId) {
	unsigned char* byte_uint8_t = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(255));
    std::cout << "thread "  << threadId << " :: entered CHECK member function of stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre(threadId) " << std::endl;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(threadId);
	std::cout << "thread "  << threadId << " :: test point :: ALPHA." << std::endl;
    //CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_generate_Program(threadId);
    unsigned char* tempB0 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId);
	std::cout << "thread "  << threadId << " :: test point :: BRAVO." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_select_set_Intput_Subset(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: CHARLIE." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(threadId);
	std::cout << "thread "  << threadId << " :: test point :: DELTA." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_pop_From_Stack_Of_Output(threadId);
	std::cout << "thread "  << threadId << " :: test point :: ECHO." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_push_To_STACK_Of_Input(threadId);
	std::cout << "thread "  << threadId << " :: test point :: FOXTROT." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End(threadId);
	std::cout << "thread "  << threadId << " :: test point :: GIGA." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(threadId);
	std::cout << "thread "  << threadId << " :: test point :: HELO." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End(threadId);
	std::cout << "thread "  << threadId << " :: test point :: INDIGO." << std::endl;
	 CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start(threadId);
	std::cout << "thread "  << threadId << " :: test point :: JAVA." << std::endl;
	unsigned char* tempB1 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(threadId);
	std::cout << "thread "  << threadId << " :: test point :: KILO." << std::endl;
	unsigned char* tempB2 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(threadId);
	std::cout << "thread "  << threadId << " :: test point :: LIMA." << std::endl;
	unsigned char* tempB3 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(threadId);
	std::cout << "thread "  << threadId << " :: test point :: MEGA." << std::endl;
	unsigned char* tempB4 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(threadId);
	std::cout << "thread "  << threadId << " :: test point :: NANO." << std::endl;
	unsigned char* tempB5 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value(threadId);
	std::cout << "thread "  << threadId << " :: test point :: OVER." << std::endl;
	unsigned char* tempB6 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value(threadId);
	std::cout << "thread "  << threadId << " :: test point :: POWERED." << std::endl;
	unsigned char* tempB7 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(threadId);
	std::cout << "thread "  << threadId << " :: test point :: PICO." << std::endl;
	unsigned char* tempB8 = CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(threadId);
	std::cout << "thread "  << threadId << " :: test point :: RICHTER." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_A(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: SIGMA." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_B(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: TANGO." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_A(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: MICRO." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_B(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: VICTA." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_A(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: WHY." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_B(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: XRAY." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_A(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: YATCH." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_B(threadId, byte_uint8_t);
	std::cout << "thread "  << threadId << " :: test point :: ZULU." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(threadId, byte_uint8_t);
    std::cout << "thread "  << threadId << " :: done CHECK member function of stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre(threadId) " << std::endl;
}
int main() {
	auto* threadId = new uint8_t(0);
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj = nullptr;
    obj = static_cast<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework*>(CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_generate_Program(*threadId));
	stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre(*threadId);
	std::cout << "thread "  << *threadId << " :: SIMULATION :: start." << std::endl;
	unsigned char* praiseId = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(0);
	unsigned char* valueA = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(1.1);
	unsigned char* valueB = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(2.3);
	if (CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(*threadId)) {
		std::cout << "thread "  << *threadId << " :: SIMULATION : <= CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId) = Check&Running." << std::endl;
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(*threadId);
		auto temp = obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input(*threadId);
		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(*threadId)->dyn_CLASS_get_ptr_Data(*threadId)->dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj, temp);
		delete temp;

		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(*threadId, praiseId);//todo testing upto here here <<<<

		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_select_set_Intput_Subset(*threadId, praiseId);
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_A(*threadId, valueA);
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_B(*threadId, valueB);
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(*threadId);
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_push_To_STACK_Of_Input(*threadId);
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End(*threadId);
		while (!CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(*threadId)) {}
		std::cout << "thread "  << *threadId << " :: SIMULATION : <= CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(threadId) = RESULT IS READY." << std::endl;
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start(*threadId);
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_pop_From_Stack_Of_Output(*threadId);
		unsigned char* result =	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(*threadId);
		std::cout << "thread "  << *threadId << " :: SIMULATION : <= CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(threadId) = " << CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(result) << std::endl;
		CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End(*threadId);

	}
	std::cout << "thread "  << *threadId << " :: SIMULATION :: end." << std::endl;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre::CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(*threadId);
	delete obj;
	return 0;
}