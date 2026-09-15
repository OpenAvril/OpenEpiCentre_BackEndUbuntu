#ifndef CLIBOpenEpiCentre_CLIBConcurrentServerIO_H
#define CLIBOpenEpiCentre_CLIBConcurrentServerIO_H
#include <array>
extern "C" {
	namespace CLIBOpenEpiCentre	{
		class CLIBConcurrentServerIO {
		public:
			static void CLIBConcurrentServerIO_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer();
			static void* CLIBConcurrentServerIO_app_FUNCT_generate_Program();
			static unsigned char* CLIBConcurrentServerIO_app_FUNCT_get_FLAG_isPGM_INSTANTIATED();
			static void CLIBConcurrentServerIO_app_FUNCT_select_set_Intput_Subset(unsigned char* bytes);
			static void CLIBConcurrentServerIO_app_FUNCT_terminate_Program();
			static void CLIBConcurrentServerIO_app_FUNCT_pop_From_Stack_Of_Output();
			static void CLIBConcurrentServerIO_app_FUNCT_push_To_STACK_Of_Input();
			static void CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End();
			static void CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start();
			static void CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End();
			static void CLIBConcurrentServerIO_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start();
			static unsigned char* CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive();
			static unsigned char* CLIBConcurrentServerIO_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend();
			static unsigned char* CLIBConcurrentServerIO_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre();
			static unsigned char* CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value();
			static unsigned char* CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value();
			static unsigned char* CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value();
			static unsigned char* CLIBConcurrentServerIO_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value();
			static unsigned char* CLIBConcurrentServerIO_io_PRAISE_get_MetaData_PraiseEventId();
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_A(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise0_Value_B(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_A(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise1_Value_B(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_A(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise2_Value_B(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_A(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_Item_Input_praise3_Value_B(unsigned char* bytes);
			static void CLIBConcurrentServerIO_io_PRAISE_set_MetaData_PraiseEventId(unsigned char* bytes);
		private:
			static void CLIBConcurrentServerIO_stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void CLIBConcurrentServerIO_stat_CLASS_boot1_DEFINE_Framework();
			static void CLIBConcurrentServerIO_stat_CLASS_boot3_INITIALISE_Framework();
			static class CLIB_OpenEpiCentre_Framework* CLIBConcurrentServerIO_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework();
			static void CLIBConcurrentServerIO_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
			static void CLIBConcurrentServerIO_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
			static void CLIBConcurrentServerIO_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED();
			static std::array<bool, 28>* CLIBConcurrentServerIO_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED();
		};
	}
}
#endif