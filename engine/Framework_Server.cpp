
	CLIBOpenEpiCentre::Server* CLIBOpenEpiCentre::Framework_Server::_stat_CLASS_ptr_Server;
	CLIBOpenEpiCentre::Concurrent* CLIBOpenEpiCentre::Framework_Server::_stat_STRUCT_Concurrent;
	CLIBOpenEpiCentre::Input* CLIBOpenEpiCentre::Framework_Server::_stat_STRUCT_Input;
	CLIBOpenEpiCentre::Output* CLIBOpenEpiCentre::Framework_Server::_stat_STRUCT_Output;
	CLIBOpenEpiCentre::User_Algorithim* CLIBOpenEpiCentre::Framework_Server::_stat_CLASS_ptr_User_Algorithim;
	CLIBOpenEpiCentre::User_Input* CLIBOpenEpiCentre::Framework_Server::_stat_STRUCT_User_Input;
	CLIBOpenEpiCentre::User_Output* CLIBOpenEpiCentre::Framework_Server::_stat_STRUCT_User_Output;
// public.
	CLIBOpenEpiCentre::Framework_Server::Framework_Server()
	{
		std::cout << "entered CONSTRUCTOR of Framework_Server()" << std::endl;
		stat_CLASS_boot0_DECLAIRE_Framework_Server();
		stat_CLASS_boot1_DEFINE_Framework_Server();
		stat_CLASS_boot3_INITIALISE_Framework_Server();
		stat_REG_boot0_DECLAIRE_Framework_Server();
		std::cout << "exiting CONSTRUCTOR of Framework_Server()" << std::endl;
	}
	CLIBOpenEpiCentre::Framework_Server::~Framework_Server()
	{
		delete _stat_CLASS_ptr_Server;
		delete _stat_STRUCT_Concurrent;
		delete _stat_STRUCT_Input;
		delete _stat_STRUCT_Output;
	}
	void CLIBOpenEpiCentre::Framework_Server::dyn_REG_boot1_DEFINE_Framework_Server(CLIBOpenEpiCentre::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot1_DEFINE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot1_DEFINE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot1_DEFINE_Algorithim(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot1_DEFINE_Data(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_boot1_DEFINE_Data_Control(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot1_DEFINE_Execute(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot1_DEFINE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot1_DEFINE_Framework_Server()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::dyn_REG_boot2_SUBSTANTIATE_Framework_Server(CLIBOpenEpiCentre::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot2_SUBSTANTIATE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot2_SUBSTANTIATE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot2_SUBSTANTIATE_Algorithim(obj);
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < uint8_t(3); concurrentThreadId++)//NUMBER OF CONCURRENT THREADS.
		{
			obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_REG_boot2_SUBSTANTIATE_Concurrent();
		}
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_boot2_SUBSTANTIATE_Data_Control(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot2_SUBSTANTIATE_Execute(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot2_SUBSTANTIATE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Framework_Server()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::dyn_REG_boot3_INITIALISE_Framework_Server(CLIBOpenEpiCentre::Framework_Server* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_Framework_Server()" << std::endl;
		obj->dyn_CLASS_get_ptr_Server()->dyn_REG_boot3_INITIALISE_Server(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_boot3_INITIALISE_Global();
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot3_INITIALISE_Algorithim(obj, stat_STRUCT_get_Concurrent());
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < uint8_t(3); concurrentThreadId++)//NUMBER OF CONCURRENT THREADS.
		{
			obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_REG_boot3_INITIALISE_Concurrent(obj);
		}
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot3_INITIALISE_Data(obj, stat_STRUCT_get_Input(), stat_STRUCT_get_Output());
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_boot3_INITIALISE_Data_Control(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot3_INITIALISE_Execute(obj);
		obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot3_INITIALISE_Execute_Control(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_Framework_Server()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::dyn_PGM_boot4_INSTANTIATE_Framework_Server(CLIBOpenEpiCentre::Framework_Server* obj)
	{
		std::cout << "entered dyn_PGM_boot4_INSTANTIATE_Framework_Server()" << std::endl;
		std::cout << "# app booted." << std::endl;
		std::cout << "exiting dyn_PGM_boot4_INSTANTIATE_Framework_Server()" << std::endl;
	}
	CLIBOpenEpiCentre::Concurrent* CLIBOpenEpiCentre::Framework_Server::dyn_STRUCT_get_Concurrent()
	{
		return stat_STRUCT_get_Concurrent();
	}
	CLIBOpenEpiCentre::Input* CLIBOpenEpiCentre::Framework_Server::dyn_STRUCT_get_Input()
	{
		return stat_STRUCT_get_Input();
	}
	CLIBOpenEpiCentre::Output* CLIBOpenEpiCentre::Framework_Server::dyn_STRUCT_get_Output()
	{
		return stat_STRUCT_get_Output();
	}
	CLIBOpenEpiCentre::Server* CLIBOpenEpiCentre::Framework_Server::dyn_CLASS_get_ptr_Server()
	{
		return stat_CLASS_get_ptr_Server();
	}
	CLIBOpenEpiCentre::User_Algorithim* CLIBOpenEpiCentre::Framework_Server::dyn_STRUCT_get_User_Algorithim()
	{
		return stat_STRUCT_get_User_Algorithim();
	}
	CLIBOpenEpiCentre::User_Input* CLIBOpenEpiCentre::Framework_Server::dyn_STRUCT_get_User_Input()
	{
		return stat_STRUCT_get_User_Input();
	}
	CLIBOpenEpiCentre::User_Output* CLIBOpenEpiCentre::Framework_Server::dyn_STRUCT_get_User_Output()
	{
		return stat_STRUCT_get_User_Output();
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_CLASS_boot0_DECLAIRE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot0_DECLAIRE_Framework_Server()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Framework_Server()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_CLASS_boot1_DEFINE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_Framework_Server" << std::endl;
		stat_CLASS_boot1_DEFINE_Server();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_Framework_Server" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_CLASS_boot3_INITIALISE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_Framework_Server()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Server();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_Framework_Server()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_CLASS_boot4_INSTANTIATE_Framework_Server()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Framework_Server()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Framework_Server()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_REG_boot0_DECLAIRE_Framework_Server()
	{
		std::cout << "entered stat_REG_boot0_DECLAIRE_Framework_Server()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLAIRE_Framework_Server()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot0_DECLAIRE()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE()." << std::endl;
		stat_STRUCT_boot0_DECLAIRE_User_Algorithim();
		stat_STRUCT_boot0_DECLAIRE_User_Input();
		stat_STRUCT_boot0_DECLAIRE_User_Output();
		stat_STRUCT_boot0_DECLAIRE_Concurrent();
		stat_STRUCT_boot0_DECLAIRE_Input();
		stat_STRUCT_boot0_DECLAIRE_Output();
		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot1_DEFINE()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE()." << std::endl;
		stat_STRUCT_boot1_DEFINE_User_Algorithim();
		stat_STRUCT_boot1_DEFINE_User_Input();
		stat_STRUCT_boot1_DEFINE_User_Output();
		stat_STRUCT_boot1_DEFINE_Concurrent();
		stat_STRUCT_boot1_DEFINE_Input();
		stat_STRUCT_boot1_DEFINE_Output();
		std::cout << "exiting stat_STRUCT_boot1_DEFINE()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot3_INITIALISE()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE()." << std::endl;
		stat_STRUCT_boot3_INITIALISE_User_Algorithim();
		stat_STRUCT_boot3_INITIALISE_User_Input();
		stat_STRUCT_boot3_INITIALISE_User_Output();
		stat_STRUCT_boot3_INITIALISE_Concurrent();
		stat_STRUCT_boot3_INITIALISE_Input();
		stat_STRUCT_boot3_INITIALISE_Output();
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE()." << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::Framework_Server::stat_CLASS_boot1_DEFINE_Server()
	{
		_stat_CLASS_ptr_Server = NULL;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_CLASS_boot3_INITIALISE_Server()
	{
		_stat_CLASS_ptr_Server = new CLIBOpenEpiCentre::Server();
		while (stat_CLASS_get_ptr_Server() == NULL) {}
	}
	CLIBOpenEpiCentre::Server* CLIBOpenEpiCentre::Framework_Server::stat_CLASS_get_ptr_Server()
	{
		return _stat_CLASS_ptr_Server;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot0_DECLAIRE_User_Algorithim()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_User_Algorithim()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_User_Algorithim()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot0_DECLAIRE_User_Input()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_User_Input()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_User_Input()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot0_DECLAIRE_User_Output()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_User_Output()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_User_Output()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot0_DECLAIRE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_Concurrent()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_Concurrent()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot0_DECLAIRE_Input()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_Input()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_Input()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot0_DECLAIRE_Output()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLAIRE_Output()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLAIRE_Output()." << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot1_DEFINE_User_Algorithim()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_User_Algorithim()" << std::endl;
		_stat_CLASS_ptr_User_Algorithim = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_User_Algorithim()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot1_DEFINE_User_Input()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_User_Input()" << std::endl;
		_stat_STRUCT_User_Input = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot1_DEFINE_User_Output()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_User_Output()" << std::endl;
		_stat_STRUCT_User_Output = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot1_DEFINE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Concurrent()" << std::endl;
		_stat_STRUCT_Concurrent = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot1_DEFINE_Input()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Input()" << std::endl;
		_stat_STRUCT_Input = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot1_DEFINE_Output()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Output()" << std::endl;
		_stat_STRUCT_Output = NULL;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot3_INITIALISE_User_Algorithim()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_User_Algorithim()" << std::endl;
		_stat_CLASS_ptr_User_Algorithim = new struct CLIBOpenEpiCentre::User_Algorithim();
		while (stat_STRUCT_get_User_Algorithim() == NULL) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_User_Algorithim()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot3_INITIALISE_User_Input()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_User_Input()" << std::endl;
		_stat_STRUCT_User_Input = new struct CLIBOpenEpiCentre::User_Input();
		while (stat_STRUCT_get_User_Input() == NULL) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot3_INITIALISE_User_Output()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_User_Output()" << std::endl;
		_stat_STRUCT_User_Output = new struct CLIBOpenEpiCentre::User_Output();
		while (stat_STRUCT_get_User_Output() == NULL) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot3_INITIALISE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Concurrent()" << std::endl;
		_stat_STRUCT_Concurrent = new struct CLIBOpenEpiCentre::Concurrent();
		while (stat_STRUCT_get_Concurrent() == NULL) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot3_INITIALISE_Input()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Input()" << std::endl;
		_stat_STRUCT_Input = new struct CLIBOpenEpiCentre::Input();
		while (stat_STRUCT_get_Input() == NULL) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_boot3_INITIALISE_Output()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Output()" << std::endl;
		_stat_STRUCT_Output = new struct CLIBOpenEpiCentre::Output();
		while (stat_STRUCT_get_Output() == NULL) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Output()" << std::endl;
	}
	CLIBOpenEpiCentre::Concurrent* CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_get_Concurrent()
	{
		return _stat_STRUCT_Concurrent;
	}
	CLIBOpenEpiCentre::Input* CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_get_Input()
	{
		return _stat_STRUCT_Input;
	}
	CLIBOpenEpiCentre::Output* CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_get_Output()
	{
		return _stat_STRUCT_Output;
	}
	CLIBOpenEpiCentre::User_Algorithim* CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_get_User_Algorithim()
	{
		return _stat_CLASS_ptr_User_Algorithim;
	}
	CLIBOpenEpiCentre::User_Input* CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_get_User_Input()
	{
		return _stat_STRUCT_User_Input;
	}
	CLIBOpenEpiCentre::User_Output* CLIBOpenEpiCentre::Framework_Server::stat_STRUCT_get_User_Output()
	{
		return _stat_STRUCT_User_Output;
	}