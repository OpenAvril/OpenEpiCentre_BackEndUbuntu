#pragma once
#include <cstdint>
namespace CLIBOpenEpiCentre
{
	struct User_Algorithm
	{
	public:
		class Object* dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseId);
		void dyn_REG_boot1_DEFINE_User_Algorithm();
		void dyn_REG_boot2_SUBSTANTIATE_User_Algorithm();
		void dyn_REG_boot3_INITIALISE_User_Algorithm();
		void dyn_REG_boot4_INSTANTIATE_User_Algorithm();
		static void stat_CLASS_boot0_DECLARE_User_Algorithm();
		static void stat_CLASS_boot1_DEFINE_User_Algorithm();
		static void stat_CLASS_boot3_INITIALISE_User_Algorithm();
		static void stat_CLASS_boot4_INSTANTIATE_User_Algorithm();
		static void stat_REG_boot0_DECLARE_User_Algorithm();
	private:
		static struct Algorithm_praise0* _stat_CLASS_ptr_Algorithm_praise0;
		static struct Algorithm_praise1* _stat_CLASS_ptr_Algorithm_praise1;
		static struct Algorithm_praise2* _stat_CLASS_ptr_Algorithm_praise2;
		static struct Algorithm_praise3* _stat_CLASS_ptr_Algorithm_praise3;
		static void stat_CLASS_boot1_DEFINE_Algorithm_praise0();
		static void stat_CLASS_boot1_DEFINE_Algorithm_praise1();
		static void stat_CLASS_boot1_DEFINE_Algorithm_praise2();
		static void stat_CLASS_boot1_DEFINE_Algorithm_praise3();
		static void stat_CLASS_boot3_INITIALISE_Algorithm_praise0();
		static void stat_CLASS_boot3_INITIALISE_Algorithm_praise1();
		static void stat_CLASS_boot3_INITIALISE_Algorithm_praise2();
		static void stat_CLASS_boot3_INITIALISE_Algorithm_praise3();
		static struct Algorithm_praise0* stat_CLASS_get_ptr_Algorithm_praise0();
		static struct Algorithm_praise1* stat_CLASS_get_ptr_Algorithm_praise1();
		static struct Algorithm_praise2* stat_CLASS_get_ptr_Algorithm_praise2();
		static struct Algorithm_praise3* stat_CLASS_get_ptr_Algorithm_praise3();
	};
}