#ifndef CLIB_WriteEnableForThreadsAt_ServerOutputSend_CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_H
#define CLIB_WriteEnableForThreadsAt_ServerOutputSend_CLIB_WRITEENABLEFORTHREADSAT_ServerOutputSend_H
extern "C"
{
    namespace CLIBWriteQueAtServerOutputSend
    {
        class CLIB_WriteEnableForThreadsAt_ServerOutputSend
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_terminate_Program();
            static void app_FUNCT_write_End(unsigned char* bytes);
            static void app_FUNCT_write_Start(unsigned char* bytes);
        private:
            static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void stat_boot1_CLASS_DEFINE_Framework();
            static void stat_boot3_CLASS_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_ServerOutputSend_Framework* stat_CLASS_get_ptr_Framework();
            static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
            static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
            static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
            static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
        };
    }
}
#endif
