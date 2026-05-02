
    CLIBOpenEpiCentre::Execute_Control* CLIBOpenEpiCentre::Execute::_stat_CLASS_ptr_Execute_Control;
    std::list<std::thread*>* CLIBOpenEpiCentre::Execute::_stat_REG_List_Of_Threads;
    CLIBOpenEpiCentre::Execute::_stat_PGM_ConcurrentQue_Server;
    CLIBOpenEpiCentre::Execute::_stat_PGM_WriteEnable_ServerInputAction;
    CLIBOpenEpiCentre::Execute::_stat_PGM_WriteEnable_ServerOutputRecieve;
// public.
    CLIBOpenEpiCentre::Execute::Execute()
    {
        std::cout << "entered CONSTRUCTOR of Execute()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_Execute();
        stat_CLASS_boot1_DEFINE_Execute();
        stat_CLASS_boot3_INITIALISE_Execute();
        stat_REG_boot0_DECLAIRE_Execute();
        std::cout << "exiting CONSTRUCTOR of Execute()." << std::endl;
    }
        CLIBOpenEpiCentre::Execute::~Execute()
    {
        delete _stat_CLASS_ptr_Execute_Control;
        delete _stat_REG_List_Of_Threads;
        delete _stat_PGM_ConcurrentQue_Server;
        delete _stat_PGM_WriteEnable_ServerInputAction;
        delete _stat_PGM_WriteEnable_ServerOutputRecieve;
    }
    CLIBOpenEpiCentre::Execute_Control* CLIBOpenEpiCentre::Execute::dyn_CLASS_get_ptr_Execute_Control()
    {
        return stat_CLASS_get_ptr_Execute_Control();
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot1_DEFINE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Execute()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_Threads();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot2_SUBSTANTIATE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot3_INITIALISE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
        stat_REG_boot3_INITIALISE_List_Of_Threads(obj);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::dyn_REG_boot4_INSTANTIATE_Execute(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    CLIBOpenEpiCentre::Execute::dyn_PGM_get_ConcurrentQue_Server()
    {
        return stat_PGM_get_ptr_ConcurrentQue_Server();
    }
    CLIBOpenEpiCentre::Execute::dyn_PGM_get_WriteEnable_ServerInputAction()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerInputAction();
    }
    CLIBOpenEpiCentre::Execute::dyn_PGM_get_WriteEnable_ServerOutputRecieve()
    {
        return stat_PGM_get_ptr_WriteEnable_ServerOutputRecieve();
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot0_DECLAIRE_Execute()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot1_DEFINE_Execute()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
        stat_CLASS_boot1_DEFINE_Execute_Control();
        stat_PGM_boot1_DEFINE_ConcurrentQue_Server();
        stat_PGM_boot1_DEFINE_ServerInputAction();
        stat_PGM_boot1_DEFINE_ServerOutputRecieve();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot3_INITIALISE_Execute()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Execute_Control();
        stat_PGM_boot3_INITIALISE_ConcurrentQue_Server();
        std::cout << "* booted. ConcurrentQue_Server()" << std::endl;
        stat_PGM_boot3_INITIALISE_ServerInputAction();
        std::cout << "* booted. ServerInputAction()" << std::endl;
        stat_PGM_boot3_INITIALISE_ServerOutputRecieve();
        std::cout << "* booted. ServerOutputRecieve()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot4_INSTANTIATE_Execute()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot0_DECLAIRE_Execute()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
        unsigned char* bytes_uint8_t = CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(UINT8_MAX);

        std::cout << "entered CHECK memeber function of CLIBLaunchEnableForConcurrentThreadsAtSERVER() " << std::endl;
        //OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_generate_Program();
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_get_flag_isPGM_INSTNATIATED();
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_request_Wait_launch(bytes_uint8_t);
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_terminate_Progaram();
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_thread_End(bytes_uint8_t);
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_coreId_To_launch();
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_Active();
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_ConcurrentCoreState(bytes_uint8_t);
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_Idle();
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_State_launchBit();
        OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_ConcurrentCoreState(bytes_uint8_t);
        std::cout << "done CHECK memeber function of CLIBLaunchEnableForConcurrentThreadsAtSERVER() " << std::endl;

        std::cout << "entered CHECK memeber function of CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE() " << std::endl;
        //OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_generate_Program();
        OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_get_flag_isPGM_INSTNATIATED();
        OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_terminate_Program();
        OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_write_End(bytes_uint8_t);
        OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_write_Start(bytes_uint8_t);
        std::cout << "done CHECK memeber function of CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE() " << std::endl;

        std::cout << "entered CHECK memeber function of CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND() " << std::endl;
        //OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_generate_Program();
        OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_get_flag_isPGM_INSTNATIATED();
        OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_terminate_Program();
        OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_End(bytes_uint8_t);
        OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_Start(bytes_uint8_t);
        std::cout << "done CHECK memeber function of CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND() " << std::endl;

        delete bytes_uint8_t;
        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Execute()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot1_DEFINE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = NULL;
    }
    void CLIBOpenEpiCentre::Execute::stat_CLASS_boot3_INITIALISE_Execute_Control()
    {
        _stat_CLASS_ptr_Execute_Control = new CLIBOpenEpiCentre::Execute_Control();
        while (stat_CLASS_get_ptr_Execute_Control() == NULL) {}
    }
    CLIBOpenEpiCentre::Execute_Control* CLIBOpenEpiCentre::Execute::stat_CLASS_get_ptr_Execute_Control()
    {
        return _stat_CLASS_ptr_Execute_Control;
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot1_DEFINE_List_Of_Threads()
    {
        _stat_REG_List_Of_Threads = NULL;
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot2_SUBSTANTIATE_List_Of_Threads(class Framework_Server* obj)
    {
        _stat_REG_List_Of_Threads = new std::list<std::thread*>();
        while (stat_PGM_get_ptr_List_Of_Threads() == NULL) { }
        stat_PGM_get_ptr_List_Of_Threads()->resize(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_Item_number_Of_Implemented_Cores() - 1);
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = NULL;
        }
    }
    void CLIBOpenEpiCentre::Execute::stat_REG_boot3_INITIALISE_List_Of_Threads(class Framework_Server* obj)
    {
        for (uint8_t threadId = 0; threadId < sizeof(*stat_PGM_get_ptr_List_Of_Threads()); threadId++)
        {
            auto temp = stat_PGM_get_ptr_List_Of_Threads()->begin();
            std::advance(temp, threadId);
            *temp = new std::thread(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(threadId)->stat_app_thread_Concurrency, obj, threadId);
        }
    }
    std::list<std::thread*>* CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_List_Of_Threads()
    {
        return _stat_REG_List_Of_Threads;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot1_DEFINE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = NULL;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot1_DEFINE_ServerInputAction()
    {
        _stat_PGM_WriteEnable_ServerInputAction = NULL;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot1_DEFINE_ServerOutputRecieve()
    {
        _stat_PGM_WriteEnable_ServerOutputRecieve = NULL;
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot3_INITIALISE_ConcurrentQue_Server()
    {
        _stat_PGM_ConcurrentQue_Server = OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_ConcurrentQue_Server() == NULL) {}
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot3_INITIALISE_ServerInputAction()
    {
        _stat_PGM_WriteEnable_ServerInputAction = OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerInputAction() == NULL) {}
    }
    void CLIBOpenEpiCentre::Execute::stat_PGM_boot3_INITIALISE_ServerOutputRecieve()
    {
        _stat_PGM_WriteEnable_ServerOutputRecieve = OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_generate_Program();
        while (stat_PGM_get_ptr_WriteEnable_ServerOutputRecieve() == NULL) {}
    }
    CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_ConcurrentQue_Server()
{
    return _stat_PGM_ConcurrentQue_Server;
}
    CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_WriteEnable_ServerInputAction()
{
    return _stat_PGM_WriteEnable_ServerInputAction;
}
    CLIBOpenEpiCentre::Execute::stat_PGM_get_ptr_WriteEnable_ServerOutputRecieve()
{
    return _stat_PGM_WriteEnable_ServerOutputRecieve;
}