
// public.
    CLIBOpenEpiCentre::Concurrent_Control::Concurrent_Control()
    {
	    std::cout << "entered STRUCT CONSTRUCTOR Concurrent_Control()" << std::endl;
        stat_CLASS_boot0_DECLAIRE_Concurrent_Control();
        stat_CLASS_boot1_DEFINE_Concurrent_Control();
        stat_CLASS_boot3_INITIALISE_Concurrent_Control();
        stat_REG_boot0_DECLAIRE_Concurrent_Control();
	    std::cout << "exiting STRUCT CONSTRUCTOR Concurrent_Control()" << std::endl;
    }
        CLIBOpenEpiCentre::Concurrent_Control::~Concurrent_Control()
    {

    }
    void CLIBOpenEpiCentre::Concurrent_Control::app_selectset_Algorithm_Scubset(CLIBOpenEpiCentre::Framework_Server* obj, uint8_t praiseEventId, uint8_t concurrent_threadID)
    {
        CLIBOpenEpiCentre::Concurrent* objConcurrnet = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID);
        switch (praiseEventId)
        {
        case 0:
            objConcurrnet->dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(reinterpret_cast<Algorithim_praise0*>(obj->dyn_STRUCT_get_User_Algorithim()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithimSubsets(praiseEventId)));
            break;

        case 1:
            objConcurrnet->dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(reinterpret_cast<Algorithim_praise1*>(obj->dyn_STRUCT_get_User_Algorithim()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithimSubsets(praiseEventId)));
            break;

        case 2:
            objConcurrnet->dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(reinterpret_cast<Algorithim_praise2*>(obj->dyn_STRUCT_get_User_Algorithim()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithimSubsets(praiseEventId)));
            break;

        case 3:
            objConcurrnet->dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(reinterpret_cast<Algorithim_praise3*>(obj->dyn_STRUCT_get_User_Algorithim()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithimSubsets(praiseEventId)));
            break;

        }
    }
    void CLIBOpenEpiCentre::Concurrent_Control::dyn_REG_boot1_DEFINE_Concurrent_Control(Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot1_DEFINE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT dyn_REG_boot1_DEFINE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::dyn_REG_boot2_SUBSTANTIATE_Concurrent_Control(Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot2_SUBSTANTIATE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT dyn_REG_boot2_SUBSTANTIATE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::dyn_REG_boot3_INITIALISE_Concurrent_Control(Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot3_INITIALISE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT dyn_REG_boot3_INITIALISE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::dyn_REG_boot4_INSTANTIATE_Concurrent_Control(Framework_Server* obj)
    {
        std::cout << "entered STRUCT dyn_REG_boot4_INSTANTIATE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT dyn_REG_boot4_INSTANTIATE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::stat_CLASS_boot0_DECLAIRE_Concurrent_Control()
    {
        std::cout << "entered STRUCT stat_CLASS_boot0_DECLAIRE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT stat_CLASS_boot0_DECLAIRE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::stat_CLASS_boot1_DEFINE_Concurrent_Control()
    {
        std::cout << "entered STRUCT stat_CLASS_boot1_DEFINE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT stat_CLASS_boot1_DEFINE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::stat_CLASS_boot3_INITIALISE_Concurrent_Control()
    {
        std::cout << "entered STRUCT stat_CLASS_boot3_INITIALISE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT stat_CLASS_boot3_INITIALISE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::stat_CLASS_boot4_INSTANTIATE_Concurrent_Control()
    {
        std::cout << "entered STRUCT stat_CLASS_boot4_INSTANTIATE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT stat_CLASS_boot4_INSTANTIATE_Concurrent_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent_Control::stat_REG_boot0_DECLAIRE_Concurrent_Control()
    {
        std::cout << "entered STRUCT stat_REG_boot0_DECLAIRE_Concurrent_Control()" << std::endl;

        std::cout << "exiting STRUCT stat_REG_boot0_DECLAIRE_Concurrent_Control()" << std::endl;
    }
// private.
