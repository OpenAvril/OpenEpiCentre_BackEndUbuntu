#ifndef LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API 
extern "C"
{
	namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
	{
		class LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API CLIBLaunchEnableForConcurrentThreadsAtSERVER
		{
		public:
			static void* app_FUNCT_generate_Program();
			static unsigned char* app_FUNCT_get_flag_isPGM_INSTNATIATED();
			static void app_FUNCT_request_Wait_launch(unsigned char* bytes);
			static void app_FUNCT_terminate_Progaram();
			static void app_FUNCT_thread_End(unsigned char* bytes);
			static unsigned char* app_REG_get_coreId_To_launch();
			static unsigned char* app_REG_get_Flag_Active();
			static unsigned char* app_REG_get_Flag_ConcurrentCoreState(unsigned char* bytes);
			static unsigned char* app_REG_get_Flag_Idle();
			static unsigned char* app_REG_get_State_launchBit();
			static void app_REG_set_Flag_ConcurrentCoreState(unsigned char* bytesThreadId, unsigned char* byteBool);
		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
			static void stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
			static class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
			static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
			static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
		};
	}
}
#endif