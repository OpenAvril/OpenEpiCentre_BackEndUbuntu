
    CLIBOpenEpiCentre::Concurrent_Control* CLIBOpenEpiCentre::Concurrent::_stat_CLASS_ptr_Concurrent_Control;
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::Concurrent::_REG_ptr_List_Of_PraiseAlgorithimSubset;
// public.
    void CLIBOpenEpiCentre::Concurrent::app_do_ConcurrentAlgorithm_For_PraiseEventId(Framework_Server* obj, uint8_t playerId, uint8_t praiseEventId, Object* ptr_Algorithm_Subset, Object* ptr_Input_Subset, Object* ptr_Output_Subset)
    {
        Algorithim_praise0* ptr_Algorithm_praise0_Subset = reinterpret_cast<Algorithim_praise0*>(ptr_Algorithm_Subset);
        Algorithim_praise1* ptr_Algorithm_praise1_Subset = reinterpret_cast<Algorithim_praise1*>(ptr_Algorithm_Subset);
        Algorithim_praise2* ptr_Algorithm_praise2_Subset = reinterpret_cast<Algorithim_praise2*>(ptr_Algorithm_Subset);
        Algorithim_praise3* ptr_Algorithm_praise3_Subset = reinterpret_cast<Algorithim_praise3*>(ptr_Algorithm_Subset);
        switch (praiseEventId)
        {
        case uint8_t(0):
			ptr_Algorithm_praise0_Subset->app_Do_Praise(reinterpret_cast<Input_praise0*>(ptr_Input_Subset), reinterpret_cast<Output_praise0*>(ptr_Output_Subset));
            break;

        case uint8_t(1):
            ptr_Algorithm_praise1_Subset->app_Do_Praise(reinterpret_cast<Input_praise1*>(ptr_Input_Subset), reinterpret_cast<Output_praise1*>(ptr_Output_Subset));
            break;

        case uint8_t(2):
            ptr_Algorithm_praise2_Subset->app_Do_Praise(reinterpret_cast<Input_praise2*>(ptr_Input_Subset), reinterpret_cast<Output_praise2*>(ptr_Output_Subset));
            break;

        case uint8_t(3):
            ptr_Algorithm_praise3_Subset->app_Do_Praise(reinterpret_cast<Input_praise3*>(ptr_Input_Subset), reinterpret_cast<Output_praise3*>(ptr_Output_Subset));
            break;
        }
    }
    CLIBOpenEpiCentre::Concurrent_Control* CLIBOpenEpiCentre::Concurrent::dyn_CLASS_get_ptr_Concurrent_Control()
    {
        return stat_CLASS_get_ptr_Concurrent_Control();
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
        stat_REG_boot1_DEFINE_list_Of_Algorithms_Subset();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_list_Of_Algorithms_Subset();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;
        stat_REG_boot3_INITIALISE_list_Of_Algorithms_Subset(obj, (uint8_t)(0));
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    CLIBOpenEpiCentre::Object* CLIBOpenEpiCentre::Concurrent::dyn_REG_get_ptr_Item_Of_ptr_Algorithms_Subset()
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, 0);
        return *temp;
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(CLIBOpenEpiCentre::Algorithim_praise0* objAlgorithimSubset)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
		std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objAlgorithimSubset);
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(CLIBOpenEpiCentre::Algorithim_praise1* objAlgorithimSubset)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objAlgorithimSubset);
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(CLIBOpenEpiCentre::Algorithim_praise2* objAlgorithimSubset)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objAlgorithimSubset);
    }
    void CLIBOpenEpiCentre::Concurrent::dyn_REG_set_ptr_Item_Of_ptr_Algorithms_Subset(CLIBOpenEpiCentre::Algorithim_praise3* objAlgorithimSubset)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, 0);
        *temp = reinterpret_cast<CLIBOpenEpiCentre::Object*>(objAlgorithimSubset);
    }
    void CLIBOpenEpiCentre::Concurrent::stat_app_thread_Concurrency(CLIBOpenEpiCentre::Framework_Server* obj, uint8_t concurrent_threadID)
    {
        bool* doneOnce = new bool(true);
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == true)
        {
            if (*doneOnce == true)
            {
                // set condition code (meta data).
                *doneOnce = false;
            }
        }
        //std::cout << "Thread Initialised: ID=" << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised() == true)
        {

        }
        //std::cout << "Thread Starting " << (concurrent_threadID) << " => Thread_Concurrency()" << std::endl;//TestBench
        while (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(concurrent_threadID) == false)
        {
            switch (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), &concurrent_threadID))
            {
            case false:

                break;

            case true:
                if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction() == true)
                {
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTReceive::CLIBWriteEnableForThreadsAtSERVERINPUTReceive::app_FUNCT_write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    //todo
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_CLASS_get_ptr_Output_Control()->app_select_And_Set_Output_Subset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Output_praiseEventId());
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->dyn_CLASS_get_ptr_Concurrent_Control()->app_selectset_Algorithm_Scubset(obj, obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId(), concurrent_threadID);
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_pop_From_Stack_Of_Input(obj, concurrent_threadID);
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTReceive::CLIBWriteEnableForThreadsAtSERVERINPUTReceive::app_FUNCT_write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputAction(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->app_do_ConcurrentAlgorithm_For_PraiseEventId(
                        obj,
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_playerId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Input_praiseEventId(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Algorithms_Subset(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Inputs_Subset(),
                        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrent_threadID)->dyn_REG_get_ptr_Item_Of_ptr_Outputs_Subset()
                    );                    
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_Start(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputReceive(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                    obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->app_FUNCT_push_To_STACK_Of_Output(obj, concurrent_threadID);
                    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_thread_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(concurrent_threadID));
                    if (obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_Data_Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend() == true)
                    {
                        if (OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_ConcurrentCoreState(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server())) == OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_Flag_Idle(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()))
                        {
                            OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_FUNCT_request_Wait_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server(), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::app_REG_get_coreId_To_launch(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_ConcurrentQue_Server()));
                        }
                    }
                    OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_End(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputReceive(), CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray((uint8_t)(concurrent_threadID + (uint8_t)1)));
                }
                break;
            }
        }
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot0_DECLAIRE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot1_DEFINE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
        stat_CLASS_boot1_DEFINE_Concurrent_Control();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Concurrent_Control();
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Concurrent()" << std::endl;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_REG_boot0_DECLAIRE_Concurrent()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Concurrent()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Concurrent()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot1_DEFINE_Concurrent_Control()
    {
        _stat_CLASS_ptr_Concurrent_Control = NULL;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent_Control()
    {
        _stat_CLASS_ptr_Concurrent_Control = new class CLIBOpenEpiCentre::Concurrent_Control();
        while (stat_CLASS_get_ptr_Concurrent_Control() == NULL) {}
    }
    CLIBOpenEpiCentre::Concurrent_Control* CLIBOpenEpiCentre::Concurrent::stat_CLASS_get_ptr_Concurrent_Control()
    {
        return _stat_CLASS_ptr_Concurrent_Control;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_REG_boot1_DEFINE_list_Of_Algorithms_Subset()
    {
        _REG_ptr_List_Of_PraiseAlgorithimSubset = NULL;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_REG_boot2_SUBSTANTIATE_list_Of_Algorithms_Subset()
    {
        _REG_ptr_List_Of_PraiseAlgorithimSubset = new std::list<class CLIBOpenEpiCentre::Object*>();
        while (stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset() == NULL) {}
        stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->resize(uint8_t(1));
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, uint8_t(0));
        *temp = NULL;
    }
    void CLIBOpenEpiCentre::Concurrent::stat_REG_boot3_INITIALISE_list_Of_Algorithms_Subset(CLIBOpenEpiCentre::Framework_Server* obj, uint8_t praiseId)
    {
        auto temp = stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()->begin();
        std::advance(temp, uint8_t(0));
        *temp = obj->dyn_STRUCT_get_User_Algorithim()->dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithimSubsets(praiseId);
    }
    std::list<CLIBOpenEpiCentre::Object*>* CLIBOpenEpiCentre::Concurrent::stat_REG_get_ptr_list_Of_ptr_Algorithms_Subset()
    {
        return _REG_ptr_List_Of_PraiseAlgorithimSubset;
    }