#pragma once
#include <cstdint>
namespace CLIBOpenEpiCentre
{
	struct User_Input
	{
	public:
		class Object* dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(uint8_t praiseId);
		void dyn_REG_boot1_DEFINE_User_Input();
		void dyn_REG_boot2_SUBSTANTIATE_User_Input();
		void dyn_REG_boot3_INITIALISE_User_Input();
		void dyn_REG_boot4_INSTANTIATE_User_Input();
		static void stat_CLASS_boot0_DECLARE_User_Input();
		static void stat_CLASS_boot1_DEFINE_User_Input();
		static void stat_CLASS_boot3_INITIALISE_User_Input();
		static void stat_CLASS_boot4_INSTANTIATE_User_Input();
		static void stat_REG_boot0_DECLARE_User_Input();
	private:
		static struct Input_praise0* _stat_CLASS_ptr_Input_praise0;
		static struct Input_praise1* _stat_CLASS_ptr_Input_praise1;
		static struct Input_praise2* _stat_CLASS_ptr_Input_praise2;
		static struct Input_praise3* _stat_CLASS_ptr_Input_praise3;
		static void stat_CLASS_boot1_DEFINE_Input_praise0();
		static void stat_CLASS_boot1_DEFINE_Input_praise1();
		static void stat_CLASS_boot1_DEFINE_Input_praise2();
		static void stat_CLASS_boot1_DEFINE_Input_praise3();
		static void stat_CLASS_boot3_INITIALISE_Input_praise0();
		static void stat_CLASS_boot3_INITIALISE_Input_praise1();
		static void stat_CLASS_boot3_INITIALISE_Input_praise2();
		static void stat_CLASS_boot3_INITIALISE_Input_praise3();
		static struct Input_praise0* stat_CLASS_get_ptr_Input_praise0();
		static struct Input_praise1* stat_CLASS_get_ptr_Input_praise1();
		static struct Input_praise2* stat_CLASS_get_ptr_Input_praise2();
		static struct Input_praise3* stat_CLASS_get_ptr_Input_praise3();
	};
}
