
    bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
    bool* CLIBOpenEpiCentre::Data_Control::_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
// public.
    CLIBOpenEpiCentre::Data_Control::Data_Control()
    {
        std::cout << "entered CONSTRUCTOR of Data_Control()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_Data_Control();
        stat_CLASS_boot1_DEFINE_Data_Control();
        stat_CLASS_boot3_INITIALISE_Data_Control();
        stat_REG_boot0_DECLAIRE_Data_Control();
        std::cout << "exiting CONSTRUCTOR of Data_Control()" << std::endl;
    }
    CLIBOpenEpiCentre::Data_Control::~Data_Control()
    {
        delete _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
        delete _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
        delete _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
        delete _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
    }
    void CLIBOpenEpiCentre::Data_Control::app_FUNCT_flip_Input_DoubleBuffer()
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(!*stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input());
    }
    void CLIBOpenEpiCentre::Data_Control::app_FUNCT_Flip_Output_DoubleBuffer()
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(!stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output());
    }
    void CLIBOpenEpiCentre::Data_Control::app_FUNCT_pop_From_Stack_Of_Input(CLIBOpenEpiCentre::Framework_Server* obj, uint8_t concurrentThreadID)
    {
        class CLIBOpenEpiCentre::Input* referenceForCore = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadID);
        class CLIBOpenEpiCentre::Input* inputSlot = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_InputPraise(1);
        referenceForCore = inputSlot;
        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()->erase(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()->begin() + 1);
        if (sizeof(*obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise()) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(true));
        }
    }
    void CLIBOpenEpiCentre::Data_Control::app_FUNCT_pop_From_Stack_Of_Output(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        class CLIBOpenEpiCentre::Output* distributeBuffer = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(obj);
        class CLIBOpenEpiCentre::Output* outputSlot = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_On_vector_Of_stack_Of_OutputPraise(1);
        distributeBuffer = outputSlot;
        obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->erase(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()->begin() + 1);
        if (sizeof(obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise()) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(true));
        }
    }
    void CLIBOpenEpiCentre::Data_Control::app_FUNCT_push_To_STACK_Of_Input(CLIBOpenEpiCentre::Framework_Server* obj)
    {
        class CLIBOpenEpiCentre::Input* inputBuffer = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_READ(obj);
        std::vector<class CLIBOpenEpiCentre::Input*>* inputStackt = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_InputPraise();
        inputStackt->push_back(inputBuffer);
        if (sizeof(inputStackt) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new bool(true));
        }
    }
    void CLIBOpenEpiCentre::Data_Control::app_FUNCT_push_To_STACK_Of_Output(CLIBOpenEpiCentre::Framework_Server* obj, uint8_t concurrentThreadID)
    {
        class CLIBOpenEpiCentre::Output* referenceForCore = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadID);
        std::vector<class CLIBOpenEpiCentre::Output*>* outputStack = obj->dyn_CLASS_get_ptr_Server()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_vector_Of_stack_Of_OutputPraise();
        outputStack->push_back(referenceForCore);
        if (sizeof(outputStack) < 2)
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(false));
        }
        else
        {
            stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new bool(true));
        }
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot1_DEFINE_Data_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Data_Control()" << std::endl;
        stat_REG_boot1_DEFINE_flag_isLoaded_Stack_InputAction();
        stat_REG_boot1_DEFINE_flag_isLoaded_Stack_OutputSend();
        stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Output();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot2_SUBSTANTIATE_Data_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Data_Control()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_InputAction();
        stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_OutputSend();
        stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Input();
        stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Output();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot3_INITIALISE_Data_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_Data_Control()" << std::endl;
        stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_InputAction();
        stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_OutputSend();
        stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Input();
        stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Output();
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_boot4_INSTANTIATE_Data_Control(Framework_Server* obj)
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Data_Control()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Data_Control()" << std::endl;
    }
    bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_flag_isLoaded_Stack_InputAction()
    {
        return *stat_REG_get_ptr_flag_isLoaded_Stack_InputAction();
    }
    bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend()
    {
        return *stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend();
    }
    bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
        return *stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input();
    }
    bool CLIBOpenEpiCentre::Data_Control::dyn_REG_get_Item_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return *stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output;
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_flag_isLoaded_Stack_InputAction(bool new_Bool)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_InputAction(new_Bool);
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_flag_isLoaded_Stack_OutputSend(bool new_Bool)
    {
        stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(new_Bool);
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Input(bool new_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(new_Bool);
    }
    void CLIBOpenEpiCentre::Data_Control::dyn_REG_set_ptr_side_To_Write_For_array_Of_doubleBuffer_Output(bool new_Bool)
    {
        stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(new_Bool);
    }
    void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot0_DECLAIRE_Data_Control()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Data_Control()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot1_DEFINE_Data_Control()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Data_Control()" << std::endl;
        stat_REG_boot1_DEFINE_flag_isLoaded_Stack_InputAction();
        stat_REG_boot1_DEFINE_flag_isLoaded_Stack_OutputSend();
        stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Input();
        stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Output();
        std::cout << "exiting stat_CLASS_boot1_DEFINE_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot3_INITIALISE_Data_Control()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Data_Control()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_CLASS_boot4_INSTANTIATE_Data_Control()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Data_Control()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Data_Control()" << std::endl;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot0_DECLAIRE_Data_Control()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Data_Control()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Data_Control()" << std::endl;
    }
// private.
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_flag_isLoaded_Stack_InputAction()
    {
        _stat_REG_ptr_flag_isLoaded_Stack_InputAction = NULL;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_flag_isLoaded_Stack_OutputSend()
    {
        _stat_REG_ptr_flag_isLoaded_Stack_OutputSend = NULL;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Input()
    {
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = NULL;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot1_DEFINE_array_Of_doubleBuffer_Output()
    {
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = NULL;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_InputAction()
    {
        _stat_REG_ptr_flag_isLoaded_Stack_InputAction = new bool();
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = true;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_flag_isLoaded_Stack_OutputSend()
    {
        _stat_REG_ptr_flag_isLoaded_Stack_OutputSend = new bool();
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = true;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Input()
    {
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = new bool();
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = true;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot2_SUBSTANTIATE_array_Of_doubleBuffer_Output()
    {
        _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = new bool();
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = true;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_InputAction()
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = false;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_flag_isLoaded_Stack_OutputSend()
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = false;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Input()
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = true;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_boot3_INITIALISE_array_Of_doubleBuffer_Output()
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = true;
    }
    bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_flag_isLoaded_Stack_InputAction()
    {
        return _stat_REG_ptr_flag_isLoaded_Stack_InputAction;
    }
    bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_flag_isLoaded_Stack_OutputSend()
    {
        return _stat_REG_ptr_flag_isLoaded_Stack_OutputSend;
    }
    bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Input()
    {
        return _stat_REG_ptr_side_To_Write_For_doubleBuffer_Input;
    }
    bool* CLIBOpenEpiCentre::Data_Control::stat_REG_get_ptr_side_To_Write_For_array_Of_doubleBuffer_Output()
    {
        return _stat_REG_ptr_side_To_Write_For_doubleBuffer_Output;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_InputAction(bool newPtr)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_InputAction = newPtr;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_flag_isLoaded_Stack_OutputSend(bool newPtr)
    {
        *_stat_REG_ptr_flag_isLoaded_Stack_OutputSend = newPtr;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Input(bool newvalue)
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Input = newvalue;
    }
    void CLIBOpenEpiCentre::Data_Control::stat_REG_set_Item_side_To_Write_For_array_Of_doubleBuffer_Output(bool newvalue)
    {
        *_stat_REG_ptr_side_To_Write_For_doubleBuffer_Output = newvalue;
    }