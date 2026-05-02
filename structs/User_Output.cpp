
	CLIBOpenEpiCentre::Output_praise0* CLIBOpenEpiCentre::User_Output::_stat_CLASS_ptr_Output_praise0;
	CLIBOpenEpiCentre::Output_praise1* CLIBOpenEpiCentre::User_Output::_stat_CLASS_ptr_Output_praise1;
	CLIBOpenEpiCentre::Output_praise2* CLIBOpenEpiCentre::User_Output::_stat_CLASS_ptr_Output_praise2;
	CLIBOpenEpiCentre::Output_praise3* CLIBOpenEpiCentre::User_Output::_stat_CLASS_ptr_Output_praise3;
// public.
	CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::User_Output::dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(uint8_t praiseId)
	{
		switch (praiseId)
		{
		case 0:
			return (Object*)stat_CLASS_get_ptr_Output_praise0();
			break;

		case 1:
			return (Object*)stat_CLASS_get_ptr_Output_praise1();
			break;

		case 2:
			return (Object*)stat_CLASS_get_ptr_Output_praise2();
			break;

		case 3:
			return (Object*)stat_CLASS_get_ptr_Output_praise3();
			break;
		}
	}
	void CLIBOpenEpiCentre::User_Output::dyn_REG_boot1_DEFINE_User_Output()
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_User_Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot1_DEFINE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::dyn_REG_boot2_SUBSTANTIATE_User_Output()
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_User_Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::dyn_REG_boot3_INITIALISE_User_Output()
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_User_Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot3_INITIALISE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::dyn_REG_boot4_INSTANTIATE_User_Output()
	{
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_User_Output()" << std::endl;

		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot0_DECLAIRE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_User_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot1_DEFINE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_User_Output()" << std::endl;
		stat_CLASS_boot1_DEFINE_Output_praise0();
		stat_CLASS_boot1_DEFINE_Output_praise1();
		stat_CLASS_boot1_DEFINE_Output_praise2();
		stat_CLASS_boot1_DEFINE_Output_praise3();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot3_INITIALISE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_User_Output()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Output_praise0();
		stat_CLASS_boot3_INITIALISE_Output_praise1();
		stat_CLASS_boot3_INITIALISE_Output_praise2();
		stat_CLASS_boot3_INITIALISE_Output_praise3();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot4_INSTANTIATE_User_Output()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_User_Output()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::User_Output::stat_REG_boot0_DECLAIRE_User_Output()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_User_Output()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_User_Output()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot1_DEFINE_Output_praise0()
	{
		_stat_CLASS_ptr_Output_praise0 = NULL;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot1_DEFINE_Output_praise1()
	{
		_stat_CLASS_ptr_Output_praise1 = NULL;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot1_DEFINE_Output_praise2()
	{
		_stat_CLASS_ptr_Output_praise2 = NULL;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot1_DEFINE_Output_praise3()
	{
		_stat_CLASS_ptr_Output_praise3 = NULL;
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot3_INITIALISE_Output_praise0()
	{
		_stat_CLASS_ptr_Output_praise0 = new class CLIBOpenEpiCentre::Output_praise0();
		while (stat_CLASS_get_ptr_Output_praise0() == NULL) {}
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot3_INITIALISE_Output_praise1()
	{
		_stat_CLASS_ptr_Output_praise1 = new class CLIBOpenEpiCentre::Output_praise1();
		while (stat_CLASS_get_ptr_Output_praise1() == NULL) {}
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot3_INITIALISE_Output_praise2()
	{
		_stat_CLASS_ptr_Output_praise2 = new class CLIBOpenEpiCentre::Output_praise2();
		while (stat_CLASS_get_ptr_Output_praise2() == NULL) {}
	}
	void CLIBOpenEpiCentre::User_Output::stat_CLASS_boot3_INITIALISE_Output_praise3()
	{
		_stat_CLASS_ptr_Output_praise3 = new class CLIBOpenEpiCentre::Output_praise3();
		while (stat_CLASS_get_ptr_Output_praise3() == NULL) {}
	}
	CLIBOpenEpiCentre::Output_praise0* CLIBOpenEpiCentre::User_Output::stat_CLASS_get_ptr_Output_praise0()
	{
		return _stat_CLASS_ptr_Output_praise0;
	}
	CLIBOpenEpiCentre::Output_praise1* CLIBOpenEpiCentre::User_Output::stat_CLASS_get_ptr_Output_praise1()
	{
		return _stat_CLASS_ptr_Output_praise1;
	}
	CLIBOpenEpiCentre::Output_praise2* CLIBOpenEpiCentre::User_Output::stat_CLASS_get_ptr_Output_praise2()
	{
		return _stat_CLASS_ptr_Output_praise2;
	}
	CLIBOpenEpiCentre::Output_praise3* CLIBOpenEpiCentre::User_Output::stat_CLASS_get_ptr_Output_praise3()
	{
		return _stat_CLASS_ptr_Output_praise3;
	}