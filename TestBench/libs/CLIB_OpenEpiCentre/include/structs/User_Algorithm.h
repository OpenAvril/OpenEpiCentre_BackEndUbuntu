#pragma once
#include "praise_sets/Algorithm_praise0.h"
#include "praise_sets/Algorithm_praise1.h"
#include "praise_sets/Algorithm_praise2.h"
#include "praise_sets/Algorithm_praise3.h"
namespace CLIBOpenEpiCentre
{
	struct User_Algorithm
	{
	public:
		Algorithm_praise0* dyn_CLASS_get_ptr_Algorithm_praise0();
		Algorithm_praise1* dyn_CLASS_get_ptr_Algorithm_praise1();
		Algorithm_praise2* dyn_CLASS_get_ptr_Algorithm_praise2();
		Algorithm_praise3* dyn_CLASS_get_ptr_Algorithm_praise3();
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
		static Algorithm_praise0* stat_CLASS_get_ptr_Algorithm_praise0();
		static Algorithm_praise1* stat_CLASS_get_ptr_Algorithm_praise1();
		static Algorithm_praise2* stat_CLASS_get_ptr_Algorithm_praise2();
		static Algorithm_praise3* stat_CLASS_get_ptr_Algorithm_praise3();
	};
}