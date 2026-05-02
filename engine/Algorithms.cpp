
    std::list<CLIBOpenEpiCentre::Concurrent*>* CLIBOpenEpiCentre::Algorithms::_stat_REG_ptr_list_Of_ptr_Concurrent;
// public.
    CLIBOpenEpiCentre::Algorithms::Algorithms()
    {
        std::cout << "entered CONSTRUCTOR of Algorithms()" << std::endl;
        stat_CLASS_boot0_DECLAIRE_Algorithim();
        stat_CLASS_boot1_DEFINE_Algorithim();
        stat_CLASS_boot3_INITIALISE_Algorithim();
        stat_REG_boot0_DECLAIRE_Algorithim();
        std::cout << "exiting CONSTRUCTOR of Algorithms()" << std::endl;
    }
    CLIBOpenEpiCentre::Algorithms::~Algorithms()
    {
        delete _stat_REG_ptr_list_Of_ptr_Concurrent;
    }
    CLIBOpenEpiCentre::Concurrent* CLIBOpenEpiCentre::Algorithms::dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentThreadId)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
        std::advance(temp, concurrentThreadId);
        return *temp;
    }
    void CLIBOpenEpiCentre::Algorithms::dyn_REG_boot1_DEFINE_Algorithim(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
        stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::dyn_REG_boot2_SUBSTANTIATE_Algorithim(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(obj);
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::dyn_REG_boot3_INITIALISE_Algorithim(CLIBOpenEpiCentre::Framework_Server* obj, CLIBOpenEpiCentre::Concurrent* objConcurrent)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Algorithim()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(obj, objConcurrent);
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::dyn_REG_boot4_INSTANTIATE_Algorithim(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::stat_CLASS_boot0_DECLAIRE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::stat_CLASS_boot1_DEFINE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::stat_CLASS_boot3_INITIALISE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::stat_CLASS_boot4_INSTANTIATE_Algorithim()
    {
        std::cout << "entered stat_CLASS_boot0_REG_DECLAIRE_Algorithms()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_REG_DECLAIRE_Algorithms()" << std::endl;
    }
    void CLIBOpenEpiCentre::Algorithms::stat_REG_boot0_DECLAIRE_Algorithim()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Algorithim()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Algorithim()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::Algorithms::stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent()
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = NULL;
    }
    void CLIBOpenEpiCentre::Algorithms::stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        _stat_REG_ptr_list_Of_ptr_Concurrent = new std::list<struct Concurrent*>();
        while (stat_REG_get_ptr_list_Of_ptr_Concurrent() == NULL) {}
        stat_REG_get_ptr_list_Of_ptr_Concurrent()->resize(uint8_t(3));//NUMBER OF CONCURRENT THREADS.
        for (uint8_t concurrentThreadId = 0; concurrentThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentThreadId);
            *temp = NULL;
        }
    }
    void CLIBOpenEpiCentre::Algorithms::stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(CLIBOpenEpiCentre::Framework_Server* obj, CLIBOpenEpiCentre::Concurrent* objConcurrent)
    {
        for (uint8_t concurrentThreadId = 0; concurrentThreadId < sizeof(*stat_REG_get_ptr_list_Of_ptr_Concurrent()); concurrentThreadId++)
        {
            auto temp = stat_REG_get_ptr_list_Of_ptr_Concurrent()->begin();
            std::advance(temp, concurrentThreadId);
            *temp = objConcurrent;
        }
    }
    std::list<CLIBOpenEpiCentre::Concurrent*>* CLIBOpenEpiCentre::Algorithms::stat_REG_get_ptr_list_Of_ptr_Concurrent()
        {
            return _stat_REG_ptr_list_Of_ptr_Concurrent;
        }