#include <iostream>
#include "../CLIB_OpenEpiCentre/include/CLIB_OpenEpiCentre.h"
#include "../CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre__Framework.h"
#include "../CLIB_OpenEpiCentre/include/engine/CLIB_OpenEpiCentre__Global.h"
static void stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre() {
		unsigned char* byte_uint8_t = CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByte_To_MsbByteArray(static_cast<std::byte>(255));
        std::cout << "entered CHECK member function of CLIBConcurrentServerIO() " << std::endl;
        CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_flip_Input_DoubleBuffer();
        //CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_generate_Program();
    	unsigned char* tempB0 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_get_FLAG_isPGM_INSTANTIATED();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_select_set_Intput_Subset(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_terminate_Program();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_pop_From_Stack_Of_Output();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_push_To_STACK_Of_Input();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerInputReceive_Injection__write_End();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerInputReceive_Injection__write_Start();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction__write_End();
		 CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction__write_Start();
		unsigned char* tempB1 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive();
		unsigned char* tempB2 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend();
		unsigned char* tempB3 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre();
		unsigned char* tempB4 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise0_Value();
		unsigned char* tempB5 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise1_Value();
		unsigned char* tempB6 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise2_Value();
		unsigned char* tempB7 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise3_Value();
		unsigned char* tempB8 = CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_MetaData_PraiseEventId();
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_A(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_B(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_A(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_B(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_A(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_B(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_A(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_B(byte_uint8_t);
		CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_MetaData_PraiseEventId(byte_uint8_t);
    std::cout << "done CHECK member function of CLIBConcurrentServerIO() " << std::endl;
}
int main() {
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj = nullptr;
    obj = static_cast<CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework*>(CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_generate_Program());
	stat_APP_boot4_INSTANTIATE_CLIB_OpenEpiCentre();
	if (CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_get_FLAG_isPGM_INSTANTIATED())	{

	}
	return 0;
}