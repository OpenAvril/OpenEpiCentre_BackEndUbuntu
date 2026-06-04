#include "../../include/structs/praise_sets/Input_praise0.h"
#include "../../include/structs/praise_sets/Input_praise1.h"
#include "../../include/structs/praise_sets/Input_praise2.h"
#include "../../include/structs/praise_sets/Input_praise3.h"
#include "../../include/structs/User_Input.h"
#include <cstdint>
#include <iostream>
	CLIBOpenEpiCentre::Input_praise0* CLIBOpenEpiCentre::User_Input::_stat_CLASS_ptr_Input_praise0;
	CLIBOpenEpiCentre::Input_praise1* CLIBOpenEpiCentre::User_Input::_stat_CLASS_ptr_Input_praise1;
	CLIBOpenEpiCentre::Input_praise2* CLIBOpenEpiCentre::User_Input::_stat_CLASS_ptr_Input_praise2;
	CLIBOpenEpiCentre::Input_praise3* CLIBOpenEpiCentre::User_Input::_stat_CLASS_ptr_Input_praise3;
// public.
	CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::User_Input::dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(uint8_t praiseId)
	{
		switch (praiseId)
		{
		case 0:
			return reinterpret_cast<Object *>(stat_CLASS_get_ptr_Input_praise0());
			break;

		case 1:
			return reinterpret_cast<Object *>(stat_CLASS_get_ptr_Input_praise1());
			break;

		case 2:
			return reinterpret_cast<Object *>(stat_CLASS_get_ptr_Input_praise2());
			break;

		case 3:
			return reinterpret_cast<Object *>(stat_CLASS_get_ptr_Input_praise3());
			break;

		default:
			return 0;
			break;
		}

	}

	void CLIBOpenEpiCentre::User_Input::dyn_REG_boot1_DEFINE_User_Input()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_User_Input()" << std::endl;

		std::cout << "exiting dyn_REG_boot1_DEFINE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::dyn_REG_boot2_SUBSTANTIATE_User_Input()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_User_Input()" << std::endl;

		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::dyn_REG_boot3_INITIALISE_User_Input()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_User_Input()" << std::endl;

		std::cout << "exiting dyn_REG_boot3_INITIALISE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::dyn_REG_boot4_INSTANTIATE_User_Input()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_User_Input()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot0_DECLARE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot0_DECLARE_User_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLARE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot1_DEFINE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_User_Input()" << std::endl;
		stat_CLASS_boot1_DEFINE_Input_praise0();
		stat_CLASS_boot1_DEFINE_Input_praise1();
		stat_CLASS_boot1_DEFINE_Input_praise2();
		stat_CLASS_boot1_DEFINE_Input_praise3();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot3_INITIALISE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_User_Input()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Input_praise0();
		stat_CLASS_boot3_INITIALISE_Input_praise1();
		stat_CLASS_boot3_INITIALISE_Input_praise2();
		stat_CLASS_boot3_INITIALISE_Input_praise3();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot4_INSTANTIATE_User_Input()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_User_Input()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Input::stat_REG_boot0_DECLARE_User_Input()
	{
		std::cout << "entered stat_REG_boot0_DECLARE_User_Input()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLARE_User_Input()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot1_DEFINE_Input_praise0()
	{
		_stat_CLASS_ptr_Input_praise0 = nullptr;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot1_DEFINE_Input_praise1()
	{
		_stat_CLASS_ptr_Input_praise1 = nullptr;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot1_DEFINE_Input_praise2()
	{
		_stat_CLASS_ptr_Input_praise2 = nullptr;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot1_DEFINE_Input_praise3()
	{
		_stat_CLASS_ptr_Input_praise3 = nullptr;
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot3_INITIALISE_Input_praise0()
	{
		_stat_CLASS_ptr_Input_praise0 = new class CLIBOpenEpiCentre::Input_praise0();
		while(stat_CLASS_get_ptr_Input_praise0() == nullptr) {}
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot3_INITIALISE_Input_praise1()
	{
		_stat_CLASS_ptr_Input_praise1 = new class CLIBOpenEpiCentre::Input_praise1();
		while (stat_CLASS_get_ptr_Input_praise1() == nullptr) {}
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot3_INITIALISE_Input_praise2()
	{
		_stat_CLASS_ptr_Input_praise2 = new class CLIBOpenEpiCentre::Input_praise2();
		while (stat_CLASS_get_ptr_Input_praise2() == nullptr) {}
	}
	void CLIBOpenEpiCentre::User_Input::stat_CLASS_boot3_INITIALISE_Input_praise3()
	{
		_stat_CLASS_ptr_Input_praise3 = new class CLIBOpenEpiCentre::Input_praise3();
		while (stat_CLASS_get_ptr_Input_praise3() == nullptr) {}
	}
	CLIBOpenEpiCentre::Input_praise0* CLIBOpenEpiCentre::User_Input::stat_CLASS_get_ptr_Input_praise0()
	{
		return _stat_CLASS_ptr_Input_praise0;
	}
	CLIBOpenEpiCentre::Input_praise1* CLIBOpenEpiCentre::User_Input::stat_CLASS_get_ptr_Input_praise1()
	{
		return _stat_CLASS_ptr_Input_praise1;
	}
	CLIBOpenEpiCentre::Input_praise2* CLIBOpenEpiCentre::User_Input::stat_CLASS_get_ptr_Input_praise2()
	{
		return _stat_CLASS_ptr_Input_praise2;
	}
	CLIBOpenEpiCentre::Input_praise3* CLIBOpenEpiCentre::User_Input::stat_CLASS_get_ptr_Input_praise3()
	{
		return _stat_CLASS_ptr_Input_praise3;
	}