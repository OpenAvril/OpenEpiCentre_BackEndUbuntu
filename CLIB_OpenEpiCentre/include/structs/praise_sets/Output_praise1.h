#pragma once
namespace CLIBOpenEpiCentre
{
	struct Output_praise1
	{
	public:
		void dyn_REG_boot1_DEFINE_Output_praise1();
		void dyn_REG_boot2_SUBSTANTIATE_Output_praise1();
		void dyn_REG_boot3_INITIALISE_Output_praise1();
		void dyn_REG_boot4_INSTANTIATE_Output_praise1();
		double dyn_REG_get_output_praise1_Value();
		void dyn_REG_set_output_praise1_Value(double newValue);
		static void stat_CLASS_boot1_DECLARE_Output_praise1();
		static void stat_CLASS_boot1_DEFINE_Output_praise1();
		static void stat_CLASS_boot3_INITIALISE_Output_praise1();
		static void stat_CLASS_boot4_INSTANTIATE_Output_praise1();
		static void stat_REG_boot1_DECLARE_Output_praise1();
	private:
		static double* _REG_ptr_output_praise1_Value;
		void stat_REG_boot1_DEFINE_output_praise1_Value();
		void stat_REG_boot2_SUBSTANTIATE_output_praise1_Value();
		void stat_REG_boot3_INITIALISE_output_praise1_Value();
		static double* stat_REG_get_ptr_output_praise1_Value();
		static void stat_REG_set_Item_output_praise1_Value(double newValue);
	};
}