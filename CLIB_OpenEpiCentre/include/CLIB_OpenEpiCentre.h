#ifndef CLIBOpenEpiCentre_CLIB_OpenEpiCentre_H
#define CLIBOpenEpiCentre_CLIB_OpenEpiCentre_H
#include <array>
#include <cstdint>
extern "C" {
	namespace CLIBOpenEpiCentre	{
		class CLIB_OpenEpiCentre {
		public:
			static void CLIB_OpenEpiCentre_app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(uint8_t threadId);
			static void* CLIB_OpenEpiCentre_app_FUNCT_generate_Program(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_app_FUNCT_select_set_Intput_Subset(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(uint8_t threadId);
			static void CLIB_OpenEpiCentre_app_FUNCT_pop_From_Stack_Of_Output(uint8_t threadId);
			static void CLIB_OpenEpiCentre_app_FUNCT_push_To_STACK_Of_Input(uint8_t threadId);
			static void CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_End(uint8_t threadId);
			static void CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerInputReceive_Injection_write_Start(uint8_t threadId);
			static void CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_End(uint8_t threadId);
			static void CLIB_OpenEpiCentre_dyn_PGM_WriteEnableStack_ServerOutputSend_Extraction_write_Start(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise0_Value(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise1_Value(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise2_Value(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT_Output_praise3_Value(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(uint8_t threadId);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_A(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise0_Value_B(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_A(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise1_Value_B(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_A(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise2_Value_B(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_A(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_Item_Input_praise3_Value_B(uint8_t threadId, unsigned char* bytes);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(uint8_t threadId, unsigned char* bytes);
		private:
			static void CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(uint8_t threadId);
			static class CLIB_OpenEpiCentre_Framework* CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId);
			static std::array<bool, 28>* CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(uint8_t threadId);
		};
	}
}
#endif