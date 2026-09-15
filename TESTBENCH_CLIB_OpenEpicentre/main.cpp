#include <iostream>
#include "../CLIB_OpenEpiCentre/include/CLIB_OpenEpiCentre.h"
#include "../CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Framework.h"
#include "../CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre_Global.h"
static void stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre() {
	unsigned char* byte_uint8_t = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(static_cast<uint8_t>(255));
    std::cout << "entered CHECK member function of stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre() " << std::endl;
    CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer();
	std::cout << "test point :: ALPHA." << std::endl;
    //CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_generate_Program();
    unsigned char* tempB0 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_get_FLAG_isPGM_INSTANTIATED();
	std::cout << "test point :: BRAVO." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_select_set_Intput_Subset(byte_uint8_t);
	std::cout << "test point :: CHARLIE." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_terminate_Program();
	std::cout << "test point :: DELTA." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_pop_From_Stack_Of_Output();
	std::cout << "test point :: ECHO." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_push_To_STACK_Of_Input();
	std::cout << "test point :: FOXTROT." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End();
	std::cout << "test point :: GIGA." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start();
	std::cout << "test point :: HELO." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End();
	std::cout << "test point :: INDIGO." << std::endl;
	 CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start();
	std::cout << "test point :: JAVA." << std::endl;
	unsigned char* tempB1 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive();
	std::cout << "test point :: KILO." << std::endl;
	unsigned char* tempB2 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend();
	std::cout << "test point :: LIMA." << std::endl;
	unsigned char* tempB3 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre();
	std::cout << "test point :: MEGA." << std::endl;
	unsigned char* tempB4 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value();
	std::cout << "test point :: NANO." << std::endl;
	unsigned char* tempB5 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value();
	std::cout << "test point :: OVER." << std::endl;
	unsigned char* tempB6 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value();
	std::cout << "test point :: POWERED." << std::endl;
	unsigned char* tempB7 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value();
	std::cout << "test point :: PICO." << std::endl;
	unsigned char* tempB8 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_MetaData_PraiseEventId();
	std::cout << "test point :: RICHTER." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_A(byte_uint8_t);
	std::cout << "test point :: SIGMA." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_B(byte_uint8_t);
	std::cout << "test point :: TANGO." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_A(byte_uint8_t);
	std::cout << "test point :: MICRO." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_B(byte_uint8_t);
	std::cout << "test point :: VICTA." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_A(byte_uint8_t);
	std::cout << "test point :: WHY." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_B(byte_uint8_t);
	std::cout << "test point :: XRAY." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_A(byte_uint8_t);
	std::cout << "test point :: YATCH." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_B(byte_uint8_t);
	std::cout << "test point :: ZULU." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId(byte_uint8_t);
    std::cout << "done CHECK member function of stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre() " << std::endl;
}
int main() {
	int threadId = 0;
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj = nullptr;
    obj = static_cast<CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework*>(CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_generate_Program());
	stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre();
	std::cout << "SIMULATION :: start." << std::endl;
	unsigned char* praiseId = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_unsignedLongLong_to_ByteArray(0);
	unsigned char* valueA = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(1.1);
	unsigned char* valueB = CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbDouble_To_MsbByteArray(2.3);
	if (CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_get_FLAG_isPGM_INSTANTIATED()) {
		std::cout << "thread "  << threadId << " :: SIMULATION : <= CLIBConcurrentServerIO_app_FUNCT_get_FLAG_isPGM_INSTANTIATED() = Check&Running." << std::endl;

		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start();
		auto temp = obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_Input();
		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_set_ptr_CLIB_OpenEpiCentre_Data_Input_at_ItemSideToWRITE_For_doubleBufferInput(obj, temp);
		delete temp;
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId(praiseId);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_select_set_Intput_Subset(praiseId);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_A(valueA);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_B(valueB);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_push_To_STACK_Of_Input();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End();

		while (!CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend()) {}
		std::cout << "thread "  << threadId << " :: SIMULATION : <= CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend() = RESULT IS READY." << std::endl;
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_pop_From_Stack_Of_Output();
		unsigned char* result =	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value();
		std::cout << "thread "  << threadId << " :: SIMULATION : <= CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value() = " << CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_MsbDouble(result) << std::endl;
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End();

	}
	std::cout << "SIMULATION :: end." << std::endl;
	CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO_app_FUNCT_terminate_Program();
	delete obj;
	return 0;
}