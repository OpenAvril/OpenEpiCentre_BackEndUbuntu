#ifndef CLIBOpenEpiCentre_CLIBConcurrentServerIO_H
#define CLIBOpenEpiCentre_CLIBConcurrentServerIO_H
extern "C"
{
	namespace CLIBOpenEpiCentre
	{
		class CLIBConcurrentServerIO
		{
		public:
			static void app_FUNCT_flip_Input_DoubleBuffer();
			static void* app_FUNCT_generate_Program();
			static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
			static void app_FUNCT_select_set_Intput_Subset(unsigned char* bytes);
			static void app_FUNCT_terminate_Program();
			static void app_FUNCT_pop_From_Stack_Of_Output();
			static void app_FUNCT_push_To_STACK_Of_Input();
			static void* dyn_PGM_get_program_WriteEnableStack_ServerInputReceive();
			static void* dyn_PGM_get_program_WriteEnableStack_ServerOutputSend();
			static unsigned char* dyn_REG_get_flag_isStackLoaded_ServerInputSend();
			static unsigned char* dyn_REG_get_flag_isStackLoaded_ServerOutputSend();
			static unsigned char* dyn_REG_get_flag_IsInitialised_CLIBOpenEpiCentre();
			static unsigned char* io_PRAISE_get_Item_Output_praise0_Value();
			static unsigned char* io_PRAISE_get_Item_Output_praise1_Value();
			static unsigned char* io_PRAISE_get_Item_Output_praise2_Value();
			static unsigned char* io_PRAISE_get_Item_Output_praise3_Value();
			static unsigned char* io_PRAISE_get_MetaData_PraiseEventId();
			static void io_PRAISE_set_Item_Input_praise0_Value_A(unsigned char* bytes);
			static void io_PRAISE_set_Item_Input_praise0_Value_B(unsigned char* bytes);
			static void io_PRAISE_set_Item_Input_praise1_Value_A(unsigned char* bytes);
			static void io_PRAISE_set_Item_Input_praise1_Value_B(unsigned char* bytes);
			static void io_PRAISE_set_Item_Input_praise2_Value_A(unsigned char* bytes);
			static void io_PRAISE_set_Item_Input_praise2_Value_B(unsigned char* bytes);
			static void io_PRAISE_set_Item_Input_praise3_Value_A(unsigned char* bytes);
			static void io_PRAISE_set_Item_Input_praise3_Value_B(unsigned char* bytes);
			static void io_PRAISE_set_MetaData_PraiseEventId(unsigned char* bytes);
		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_CLASS_boot1_DEFINE_Framework();
			static void stat_CLASS_boot3_INITIALISE_Framework();
			static class Framework_Server* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_Server();
			static void stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
			static bool* stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
		};
	}
}
#endif