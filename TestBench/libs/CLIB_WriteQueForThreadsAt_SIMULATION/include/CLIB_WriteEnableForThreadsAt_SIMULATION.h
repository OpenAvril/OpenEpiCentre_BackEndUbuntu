#ifndef CLIB_WriteEnableForThreadsAt_SIMULATION_CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_H
#define CLIB_WriteEnableForThreadsAt_SIMULATION_CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_H
extern "C"
{
    namespace CLIBWriteQueAtSIMULATION
    {
        class CLIB_WriteEnableForThreadsAt_SIMULATION
        {
        public:
            static void* CLIB_WriteEnableForThreadsAt_SIMULATION__app_FUNCT_generate_Program();
            static unsigned char* CLIB_WriteEnableForThreadsAt_SIMULATION__app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__app_FUNCT_terminate_Program();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__app_FUNCT_write_End(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__app_FUNCT_write_Start(unsigned char* bytes);
        private:
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__stat_boot1_CLASS_DEFINE_Framework();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__stat_boot3_CLASS_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_SIMULATION_Framework* CLIB_WriteEnableForThreadsAt_SIMULATION__stat_CLASS_get_ptr_Framework();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__stat_REG_boot1_DEFINE_isFlagINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__stat_REG_boot2_SUBSTANTIATE_isFlagINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION__stat_REG_boot3_INITIALISE_isFlagINSTANTIATED();
            static bool* CLIB_WriteEnableForThreadsAt_SIMULATION__stat_REG_get_isFlagINSTANTIATED();
        };
    }
}
#endif
